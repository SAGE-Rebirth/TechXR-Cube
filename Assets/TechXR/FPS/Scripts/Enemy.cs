using TechXR.Core.Sense;
using UnityEngine;
using UnityEngine.AI;

public class Enemy : MonoBehaviour
{
    public GameObject Explosion;
    public Animator Anim;
    //
    [HideInInspector]
    public EnemyManager EnemyManager;
    //
    private Transform m_PlayerTransform;
    private NavMeshAgent m_Agent;
    private bool m_IsWalking;
    private bool m_IsAttacking;
    //

    private void Start()
    {
        Anim = GetComponentInChildren<Animator>();
        //
        m_Agent = GetComponent<NavMeshAgent>();
        m_PlayerTransform = FindObjectOfType<PlayerMovement>().transform;

        m_Agent.SetDestination(m_PlayerTransform.position);

        m_IsWalking = true;
        m_IsAttacking = false;
    }

    private void Update()
    {
        m_Agent.SetDestination(m_PlayerTransform.position);

        transform.LookAt(new Vector3(m_PlayerTransform.transform.position.x, transform.position.y, m_PlayerTransform.position.z));

        if (CheckDistance(m_PlayerTransform.position, transform.position) <= 5f && !m_IsAttacking)
        {
            Attack();
        }
        else
        {
            if(!m_IsWalking) Walk();
        }
    }

    private float CheckDistance(Vector3 player, Vector3 enemy)
    {
        return Vector3.Distance(player, enemy);
    }

    private void Attack()
    {
        Anim.SetTrigger("attack");
        m_IsAttacking = true;
        m_IsWalking = false;
    }

    private void Walk()
    {
        Anim.SetBool("walk", true);
        m_IsWalking = true;
        m_IsAttacking = false;
    }

    public void Death()
    {
        Explosion.SetActive(true);
        Explosion.transform.SetParent(null);
        Destroy(gameObject);
    }
}
