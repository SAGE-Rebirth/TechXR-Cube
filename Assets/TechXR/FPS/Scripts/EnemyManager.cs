using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyManager : MonoBehaviour
{
    public int MinEnemyCount = 1;
    public int MaxEnemyCount = 10;
    public float Min_Distance_Between_Enemy = 3f;
    public float Radius = 10f;
    //
    public GameObject EnemyPrefab;
    //
    private int max_loop_count = 20;
    private int current_loop_count = 0;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        SpawnEnemies();
    }

    private void SpawnEnemies()
    {
        // Count the Enemies spawnned from this Manager
        Enemy[] enemies = FindObjectsOfType<Enemy>();
        
        int count = 0;
        foreach (Enemy e in enemies)
        {
            if (e.GetComponent<Enemy>().EnemyManager == this)
                count++;
        }

        // If no enemies left then spawn
        if (count <= 0)
        {
            int enemiesLength = Random.Range(MinEnemyCount, MaxEnemyCount);

            for (int i = 0; i < enemiesLength; i++)
            {
                GameObject enemy = Instantiate(EnemyPrefab);
                //
                enemy.GetComponent<Enemy>().EnemyManager = this;
                //
                enemy.transform.position = GetPositionOnTerrain() + Vector3.up * 0.1f;
                enemy.transform.Rotate(new Vector3(0f, Random.Range(0f, 360f), 0f));
            }
        }
    }

    private Vector3 GetPositionOnTerrain()
    {
        Vector2 ran_point = Random.insideUnitCircle * Radius;
        Vector3 p = transform.position + new Vector3(ran_point.x, 0f, ran_point.y);
        Ray ray = new Ray(p, Vector3.down);
        RaycastHit hit;
        LayerMask mask = LayerMask.GetMask("Ground");
        if (Physics.Raycast(ray, out hit, mask))
        {
            if (!IsMinDistanceFromOthers(hit.point))
            {
                current_loop_count++;
                Debug.Log("enemy is too close to others! " + current_loop_count);
                return GetPositionOnTerrain();
            }

            current_loop_count = 0;
            return hit.point;

        }

        current_loop_count++;

        if (current_loop_count < max_loop_count)
            return GetPositionOnTerrain();

        else
        {
            current_loop_count = 0;
            Debug.Log("Minimum distance between other enemies is too large.");
        }

        Debug.Log("GetPositionOnTerrain | max loop count reached limits!");

        return transform.position;

    }

    private bool IsMinDistanceFromOthers(Vector3 _point)
    {
        Enemy[] enemies = FindObjectsOfType<Enemy>();
        int length = enemies.Length;
        for (int i = 0; i < length; i++)
        {
            if (enemies[i] == null)
            {
                continue;
            }
            float distance = Vector3.Distance(enemies[i].transform.position, _point);
            if (distance < Min_Distance_Between_Enemy)
            {
                return false;
            }
        }
        return true;
    }
}
