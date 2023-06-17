#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<co.techxr.unity.model.LoginResponse>
struct Action_1_t364C94423BE312DFF449DB8389178799569DCF01;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<co.techxr.unity.exceptions.XrException>
struct Action_1_t77330DAB4B6364644857E237915461B112A9D589;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.Dictionary`2<TechXR.Core.Sense.IUILaserPointer,TechXR.Core.Sense.ControllerData>
struct Dictionary_2_t5849E900B482EF522536990076C17609372C55CE;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Dictionary_2_t489B023479196B8FC9709A9F834FC38729BD9493;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>
struct Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<TechXR.Core.Sense.SenseEvent,TechXR.Core.Sense.SenseEventDelegate>
struct Dictionary_2_t7501747BA89320958ACDB6ED070D99A6C7A3E6CB;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.Dictionary`2<TechXR.Core.Sense.SenseManager/InputType,System.Action>
struct Dictionary_2_t80FEA5B79D158901F7724BC0BBF5836A8104227F;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler>
struct EventFunction_1_t5B9F26DC56564B82AEF63D8AFEEEADBAB365F403;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler>
struct EventFunction_1_t9FDF6DF173D42030EFE70318BF2408968D3E65CA;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler>
struct EventFunction_1_t761440E218DEDDDF4267213CA0E8B1C52C858690;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler>
struct EventFunction_1_t37D97D8E7BDC68938191F138BFE31C7BEFCF855E;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler>
struct EventFunction_1_tB3864D36512C3A896DAC44E898E5D9E1A92CB733;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler>
struct EventFunction_1_t33BA7CA3F9202146F70BE77589CE24F7451C584C;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler>
struct EventFunction_1_t7DFDB0A0C9926E06BF7870695CD48A0533DFABAD;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler>
struct EventFunction_1_t2A3D445A0300FDC32D29761DDFBBBFC30426F013;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>
struct EventFunction_1_t586168BFEFD0CF29A2B706B5411BF712BD73359E;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>
struct EventFunction_1_t00024D26E9CCD074EEBC25568B0383863A4CF117;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler>
struct EventFunction_1_t5633AE56FD3D84C5E9E07AC717AF53435DA593C9;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>
struct EventFunction_1_tA70AAFA2BD47CD0A094BCB586E2EA3E04C5F8916;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerMoveHandler>
struct EventFunction_1_t86320D8073B1F956C9EE0FB8749277DDE7C1DE06;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>
struct EventFunction_1_t919A3841A202FB8C678BC0172FAB7E2F79B88AD8;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler>
struct EventFunction_1_t048C55D455059C49F0AFD58FA503F7A552C3DB65;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler>
struct EventFunction_1_tD8870260CD9964C568C228D51BBD578A792137EA;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler>
struct EventFunction_1_tEF0BF5C5A27323118905EB07330A8EF108FED92F;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>
struct EventFunction_1_tB9684C6044C44F9A8317A5E5A9A3C1C0376A4678;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_t297B5C47242D1B98BEC955E2804FA142B43E7927;
// System.Collections.Generic.HashSet`1<TechXR.Core.Sense.IUILaserPointer>
struct HashSet_1_t36F9643F257BBFD6423DA3BB8A6ABEB6252ECF0B;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEqualityComparer`1<TechXR.Core.Sense.IUILaserPointer>
struct IEqualityComparer_1_t0DB52DD73D675B49C83FAC653486421C94B3A157;
// System.Collections.Generic.IEqualityComparer`1<TechXR.Core.Sense.SenseEvent>
struct IEqualityComparer_1_tFFBBD09186F11F5BE95F5D8A1A71D52F8458E7D3;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IEqualityComparer`1<TechXR.Core.Sense.SenseManager/InputType>
struct IEqualityComparer_1_tF128EA5ED0C83DDCFF20BB2FE6DF5E89A061A939;
// System.Collections.Generic.Dictionary`2/KeyCollection<TechXR.Core.Sense.IUILaserPointer,TechXR.Core.Sense.ControllerData>
struct KeyCollection_tF53D6CA6EBD3BF63EAA699E0B56EC76235408EE9;
// System.Collections.Generic.Dictionary`2/KeyCollection<TechXR.Core.Sense.SenseEvent,TechXR.Core.Sense.SenseEventDelegate>
struct KeyCollection_t714AC5A4D462687CDC3F6B1C19CA7D5F9EB2CB72;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.Dictionary`2/KeyCollection<TechXR.Core.Sense.SenseManager/InputType,System.Action>
struct KeyCollection_tCB214BE10E10014C243B9B8721F1046287E07F30;
// System.Lazy`1<TechXR.Core.Utils.DataManager>
struct Lazy_1_tBC25FE1DE87E9C7750B85945A15D81A4CD30D422;
// System.Lazy`1<TechXR.Core.Utils.EventManager>
struct Lazy_1_t369323860E6FD4438A0DB815A1D91798501BC7FD;
// System.Lazy`1<TechXR.Core.Sense.OculusBridge>
struct Lazy_1_tAF1F7D8BBA542887B81313AA7D0014CE315B4069;
// System.Lazy`1<TechXR.Core.Sense.SenseXR>
struct Lazy_1_tA1E8CEF04E3FA25A3A6C261457EC7DF87AC4B64B;
// System.Lazy`1<TechXR.Core.Utils.StateManager>
struct Lazy_1_tE171615DDC8E5BD8706EEBD19A93E43C3DF97F0C;
// System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Boolean>>
struct List_1_t1C3DD67409BD614CE1F834B9F4F85DD4E0D207AE;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t8292C421BBB00D7661DC07462822936152BAB446;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// TechXR.Core.Utils.SingletonScriptableObject`1<System.Object>
struct SingletonScriptableObject_1_t28C7D55BA86EE222F4C540FD168037A6D28F817A;
// TechXR.Core.Utils.SingletonScriptableObject`1<TechXR.Core.Sense.TechXRConfiguration>
struct SingletonScriptableObject_1_tA898FCDB45DF9AC26B67549B9FD0B77E0E39292D;
// TechXR.Core.Utils.Singleton`1<TechXR.Core.Utils.DataManager>
struct Singleton_1_tC289D00A047C79313DA529AB7DBBA764BAF771F4;
// TechXR.Core.Utils.Singleton`1<TechXR.Core.Utils.EventManager>
struct Singleton_1_tDE48F5D43D6ACE2A85EB85E8B734CF741D8D4306;
// TechXR.Core.Utils.Singleton`1<System.Object>
struct Singleton_1_tF9BF91836F04B0CE8B9A9E2ED168AACD15FFD864;
// TechXR.Core.Utils.Singleton`1<TechXR.Core.Sense.OculusBridge>
struct Singleton_1_tB3F117CD016202C931C3F5A781A2A0D7E69FCD94;
// TechXR.Core.Utils.Singleton`1<TechXR.Core.Sense.SenseXR>
struct Singleton_1_t5AA3D1D13FDB0CDFED5F4B19749050F99CE96E46;
// TechXR.Core.Utils.Singleton`1<TechXR.Core.Utils.StateManager>
struct Singleton_1_t62FD18177113694BFBF5D00029441528F05D3123;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Collections.Generic.Dictionary`2/ValueCollection<TechXR.Core.Sense.IUILaserPointer,TechXR.Core.Sense.ControllerData>
struct ValueCollection_tFD4AE517183715EF0E912B6393350CE900415A98;
// System.Collections.Generic.Dictionary`2/ValueCollection<TechXR.Core.Sense.SenseEvent,TechXR.Core.Sense.SenseEventDelegate>
struct ValueCollection_t40CCF7F9107B4729C2A4FC525DE8071BB77BD9B1;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/ValueCollection<TechXR.Core.Sense.SenseManager/InputType,System.Action>
struct ValueCollection_t57BB9590900507BB1339239E38450CB942D5427C;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>[]
struct Dictionary_2U5BU5D_t9EBEA8D90CDFA060F1CD185D3985E00B85910026;
// System.Collections.Generic.Dictionary`2/Entry<TechXR.Core.Sense.IUILaserPointer,TechXR.Core.Sense.ControllerData>[]
struct EntryU5BU5D_tAC944214DD9B819A958E910D15C35A022EA291D2;
// System.Collections.Generic.Dictionary`2/Entry<TechXR.Core.Sense.SenseEvent,TechXR.Core.Sense.SenseEventDelegate>[]
struct EntryU5BU5D_tDCEEEB0AF1C425F03F6F74AC16BB68B39867A835;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Collections.Generic.Dictionary`2/Entry<TechXR.Core.Sense.SenseManager/InputType,System.Action>[]
struct EntryU5BU5D_t65DAE57FD4A75D37C3F6C4EDF50320D14F877C5A;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// UnityEngine.Canvas[]
struct CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
// UnityEngine.EventSystems.RaycastResult[]
struct RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t4AA742BC101B1AA300B16EE7F19E31B91F37A938;
// BackgroundPlaneController
struct BackgroundPlaneController_tD3F10264B3C6602A4D2C3C07D5A361D8A1A00D6B;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInput
struct BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// TechXR.Core.Sense.ControllerData
struct ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF;
// TechXR.Core.Sense.ControllerFactory
struct ControllerFactory_tDBFFE3B805A39CCAAFEAD2461F1119ED926200A0;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// TechXR.Core.Utils.DataManager
struct DataManager_t40CBB9B632C0C9F415E38AAFDBFC8C84FA458E1E;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// DefaultObserverEventHandler
struct DefaultObserverEventHandler_t7CF27A0CC5B1FAEDDB5964C3A11F29C2A14E1FC0;
// TechXR.Core.Sense.Defs
struct Defs_tDBAD6C54441BEF6C29B17552EE04857F52EAA049;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// TechXR.Core.Utils.EventManager
struct EventManager_t549C00EDCE4BC703024CB8204FDD317602311CA8;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// TechXR.Core.Sense.FixedExpiryLicense
struct FixedExpiryLicense_t66BF4FCE9006D57DF5CC0E7C646D7F1D781D97C1;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// TechXR.Core.Sense.GazeTimer
struct GazeTimer_t3B3E8125DC73C12ABC4C4735B9A60462AD557E4D;
// TechXR.Core.Sense.GyroScript
struct GyroScript_tD8E851D88E999B441E345C7A458CC62E12F18D3E;
// UnityEngine.Gyroscope
struct Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// UnityEngine.EventSystems.IBeginDragHandler
struct IBeginDragHandler_t0E0386CCAB531BD8291D12476D40D19AA98ED7EB;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.EventSystems.IDragHandler
struct IDragHandler_t9FF2B3D79AB401D7E2485254973D15C0F117D00D;
// UnityEngine.EventSystems.IDropHandler
struct IDropHandler_t9F3B358BA4812886852E9AB85A653ABF73B9AA35;
// UnityEngine.EventSystems.IEndDragHandler
struct IEndDragHandler_t9A93E4A27E7CEED446E5FE3DACF39B1A552C23A9;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TechXR.Core.Sense.ILicense
struct ILicense_tD4E3961B6ADB47AF133878CF688A3B5DC03F7C37;
// co.techxr.unity.network.INetworkService
struct INetworkService_tB3F97675BE3732517A861B2CFCFEFD26D05AD0D1;
// UnityEngine.EventSystems.IPointerClickHandler
struct IPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8;
// UnityEngine.EventSystems.IPointerDownHandler
struct IPointerDownHandler_t42CC83619BB6295404D44090142F7726003CE573;
// UnityEngine.EventSystems.IPointerUpHandler
struct IPointerUpHandler_tB2D4D0ABEAFF77BE8D0159D638D85E1AF7BAF210;
// TechXR.Core.Sense.IUILaserPointer
struct IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F;
// UnityEngine.EventSystems.IUpdateSelectedHandler
struct IUpdateSelectedHandler_tBBACEC3A6478F7DA4B682AFDA8CF59C6C3FCC9CC;
// TechXR.Core.Sense.IXR
struct IXR_t6947A7E30B80415D63651606C19DA13C6BFD0BAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// Joystick
struct Joystick_tCD6542D65EBEE70A3B835333479AB75329325D0C;
// TechXR.Core.Sense.JoystickController
struct JoystickController_t76376805DE06ACDB2581FD9C07C0F565F9B7DFA9;
// TechXR.Core.Sense.LaserPointer
struct LaserPointer_t16D0F974C5CCC33E600C322FFB605D6B7CB2B5A3;
// TechXR.Core.Sense.LaserPointerEventData
struct LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A;
// TechXR.Core.Sense.LaserPointerInputModule
struct LaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6;
// co.techxr.unity.network.LicenseService
struct LicenseService_t6FFDDF25E97C8C6A850DBB9EED03DE9E9DFFE759;
// TechXR.Core.Sense.LicenseValidity
struct LicenseValidity_tF7D6F5664477DE2ED0C427A798251611921AF372;
// LicenseVerificationDetails
struct LicenseVerificationDetails_tD72DCA6D945BB0249B92C1164CFA2ECA457C6CA7;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// co.techxr.unity.model.LoginResponse
struct LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Vuforia.ObserverBehaviour
struct ObserverBehaviour_t5523404662BA53BE6118C49F6FFA9E19719115DB;
// TechXR.Core.Sense.OculusBridge
struct OculusBridge_t7AEB3911A89CBEA0708DE5D82554AF2C00B8B1EC;
// UnityEngine.EventSystems.PhysicsRaycaster
struct PhysicsRaycaster_t0ACA9046D8D0B195B59DB1F7CA4DD6BB634A56DD;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// co.techxr.unity.model.Profile
struct Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// TechXR.Core.Sense.RuntimeLicenseCheck
struct RuntimeLicenseCheck_t4B2E6DD72A29A843AC12C46E319C8D551489719E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// TechXR.Core.Sense.SenseController
struct SenseController_tABCD7B30A1AA3F0BAB5AC6050F2C699A566ADA48;
// TechXR.Core.Sense.SenseEventDelegate
struct SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C;
// TechXR.Core.Sense.SenseInput
struct SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8;
// TechXR.Core.Sense.SenseManager
struct SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860;
// TechXR.Core.Sense.SenseXR
struct SenseXR_t7B7241CE97061BA7BC71E3D9D061CD88F22ED7CA;
// TechXR.Core.Sense.SenseXRConnectivityStatus
struct SenseXRConnectivityStatus_t88F4187646A1231099F0A52CFA4CA2543D422558;
// TechXR.Core.Sense.SenseXRTrackingStatus
struct SenseXRTrackingStatus_tACCC33CEC9913BC93FE7C43E0A456A424AE42164;
// TechXR.Core.Sense.ServerLicenseVerification
struct ServerLicenseVerification_t7F1E7EA6216939EBBF283858E7C5DC9763D76FE3;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// UnityEngine.SphereCollider
struct SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530;
// TechXR.Core.Utils.StateManager
struct StateManager_t0ECEE8223C864D7804BFC59A3EFAE27D46F5C9C1;
// System.String
struct String_t;
// TechXR.Core.Sense.TechXRConfiguration
struct TechXRConfiguration_t995E9151CF60B71D35B08C4A39098AC8D06BDAD0;
// TechXR.Core.Sense.TeleportManager
struct TeleportManager_tAD810B203280055ABDE0A44548E696080148F3BE;
// TechXR.Core.Sense.Teleporter
struct Teleporter_tACA9C5D8F933A0C3E1E86756B70BB18FC33DFC4A;
// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D;
// UnityEngine.UI.UIIgnoreRaycast
struct UIIgnoreRaycast_t9935ECC85F04CCC85F6EB74F6F331618AE60C079;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;
// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// VariableJoystick
struct VariableJoystick_t0D4819C1014E858778B0C435BF7D81EB0487B68E;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// TechXR.Core.Sense.XRModeSwitch
struct XRModeSwitch_t711B273AD5CA47A8B17ED7D4B7CA7A232C3B39C4;
// co.techxr.unity.exceptions.XrException
struct XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F;
// BackgroundPlaneController/<SetBGPlane>d__1
struct U3CSetBGPlaneU3Ed__1_t4A8693A86BED3690DE38286879C5C89986D9A851;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// TechXR.Core.Utils.DataManager/<GetDataLocal>d__6
struct U3CGetDataLocalU3Ed__6_t35AF7AAA66C46989AAC6E3D6C18EF9F195FB60DB;
// TechXR.Core.Utils.DataManager/<GetDataRemote>d__7
struct U3CGetDataRemoteU3Ed__7_t9EF86BF47D64179500271B1D5CD90A11DF21DB82;
// DefaultObserverEventHandler/PoseSmoother
struct PoseSmoother_t0FFFF1978A09252AD89E6E444613B95F9E1D59E8;
// TechXR.Core.Sense.GyroScript/<CalibrateYAngle>d__9
struct U3CCalibrateYAngleU3Ed__9_tBB8137A2FE8B1DE92983BB1B288053B2D5AD5096;
// TechXR.Core.Sense.GyroScript/<Start>d__7
struct U3CStartU3Ed__7_t2482C4AD1915332F390CE3E730A4483A1CE3AC60;
// TechXR.Core.Sense.LicenseValidity/<Post>d__2
struct U3CPostU3Ed__2_t49B6E4E17B3C8C315C8E43B8A39DFCA56B6502AE;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t364C94423BE312DFF449DB8389178799569DCF01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t77330DAB4B6364644857E237915461B112A9D589_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ControllerFactory_tDBFFE3B805A39CCAAFEAD2461F1119ED926200A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t5849E900B482EF522536990076C17609372C55CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t7501747BA89320958ACDB6ED070D99A6C7A3E6CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t80FEA5B79D158901F7724BC0BBF5836A8104227F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FixedExpiryLicense_t66BF4FCE9006D57DF5CC0E7C646D7F1D781D97C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GazeTimer_t3B3E8125DC73C12ABC4C4735B9A60462AD557E4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILicense_tD4E3961B6ADB47AF133878CF688A3B5DC03F7C37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LicenseService_t6FFDDF25E97C8C6A850DBB9EED03DE9E9DFFE759_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1C3DD67409BD614CE1F834B9F4F85DD4E0D207AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeLicenseCheck_t4B2E6DD72A29A843AC12C46E319C8D551489719E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SenseEvent_t19E0A62B413E103C13622AE807AC1221B1FAC9B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Singleton_1_t5AA3D1D13FDB0CDFED5F4B19749050F99CE96E46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Singleton_1_t62FD18177113694BFBF5D00029441528F05D3123_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Singleton_1_tB3F117CD016202C931C3F5A781A2A0D7E69FCD94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Singleton_1_tC289D00A047C79313DA529AB7DBBA764BAF771F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Singleton_1_tDE48F5D43D6ACE2A85EB85E8B734CF741D8D4306_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateManager_t0ECEE8223C864D7804BFC59A3EFAE27D46F5C9C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCalibrateYAngleU3Ed__9_tBB8137A2FE8B1DE92983BB1B288053B2D5AD5096_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetDataLocalU3Ed__6_t35AF7AAA66C46989AAC6E3D6C18EF9F195FB60DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetDataRemoteU3Ed__7_t9EF86BF47D64179500271B1D5CD90A11DF21DB82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPostU3Ed__2_t49B6E4E17B3C8C315C8E43B8A39DFCA56B6502AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSetBGPlaneU3Ed__1_t4A8693A86BED3690DE38286879C5C89986D9A851_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartU3Ed__7_t2482C4AD1915332F390CE3E730A4483A1CE3AC60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRButton_t0AF402B4DBB7E58A234C61C05A44BA10C64AC9E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02C57FCD0B5FED3CA8492A7739DFA930A4EC4214;
IL2CPP_EXTERN_C String_t* _stringLiteral0694AB363ACF8A94764B62CC878387AD79106606;
IL2CPP_EXTERN_C String_t* _stringLiteral07006AB7E49BD4E07D0B321FF179123508FE9792;
IL2CPP_EXTERN_C String_t* _stringLiteral09E7292B6C15802BA0B8DB9E013BB27C8DFF9548;
IL2CPP_EXTERN_C String_t* _stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78;
IL2CPP_EXTERN_C String_t* _stringLiteral0C20A4E31A2FA637F64017ECC70929D4DDACF45D;
IL2CPP_EXTERN_C String_t* _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D;
IL2CPP_EXTERN_C String_t* _stringLiteral157D758D6F0AE3BD2E0DF91C4F4628FFD75E14EC;
IL2CPP_EXTERN_C String_t* _stringLiteral1A5DA721B3CE6EB97AE098FB4DD1F5B73F53A70C;
IL2CPP_EXTERN_C String_t* _stringLiteral22BB2D0C78A4B2A0E16F9FC8DA91310F6E4E425C;
IL2CPP_EXTERN_C String_t* _stringLiteral236F8A41CA4AE049DC8AB58ED5B925DC996681BA;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral31C86B9D9129A9B228A8783A889D45C595E9610A;
IL2CPP_EXTERN_C String_t* _stringLiteral38164B118B6E9320844E4F8ED5F41AE50D40DE70;
IL2CPP_EXTERN_C String_t* _stringLiteral39244DD8C4DD021B7E61832F11CEAE8EC82C9F3A;
IL2CPP_EXTERN_C String_t* _stringLiteral3C95DC36BC35028D124872E120F7701E290A66F6;
IL2CPP_EXTERN_C String_t* _stringLiteral3FCA14EC2114B9068885D017F002F4820ED34D35;
IL2CPP_EXTERN_C String_t* _stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C;
IL2CPP_EXTERN_C String_t* _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE;
IL2CPP_EXTERN_C String_t* _stringLiteral47C72D90D040B0C8E89DE105385D97883E9FFB47;
IL2CPP_EXTERN_C String_t* _stringLiteral4EA8DD084E8F989615726031677818FAE4E4A013;
IL2CPP_EXTERN_C String_t* _stringLiteral5339CBD0E2A240EC5A85072B0AE73D02A05B9815;
IL2CPP_EXTERN_C String_t* _stringLiteral571E8C4957BBBD9ACC446868F2F5F65B03F3C45A;
IL2CPP_EXTERN_C String_t* _stringLiteral579A50C67ADB00AC3925859C23590322B2D0BE9D;
IL2CPP_EXTERN_C String_t* _stringLiteral57D1136465EBC92569AAA1E6FF021B95C25AB45C;
IL2CPP_EXTERN_C String_t* _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18;
IL2CPP_EXTERN_C String_t* _stringLiteral5B9FE05484B470B354696B4F06C3B12F71B5BB4A;
IL2CPP_EXTERN_C String_t* _stringLiteral5D62C282849550F5C50379F05AC5D776D75E3882;
IL2CPP_EXTERN_C String_t* _stringLiteral67184A92CF8F6E59BA82AAF4A94C237CF2E0EB48;
IL2CPP_EXTERN_C String_t* _stringLiteral69C2F0D60A534D98B5529088F1F02D74B4466763;
IL2CPP_EXTERN_C String_t* _stringLiteral6FADF85B6969F5020FFEFFB687F63C26D7D01BA2;
IL2CPP_EXTERN_C String_t* _stringLiteral6FE0281FED4018A4011C17542C16A0870C4393C3;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral7BAE65B77C5B8BEFFAB5C638DA126DBF8D56F692;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral8269B9C13EB5E55ABF26BA774F70F07D17325944;
IL2CPP_EXTERN_C String_t* _stringLiteral98314E4D50FABB610F151501D3B0FC79D528EADB;
IL2CPP_EXTERN_C String_t* _stringLiteral9A2BF1645D7882775B4A512873D1E61EAD87FE3C;
IL2CPP_EXTERN_C String_t* _stringLiteral9AE23549E830B96A60E6B8ADEB29B345D5B13E37;
IL2CPP_EXTERN_C String_t* _stringLiteral9B30823019EAE46DF6DB8CF9DACE5A4754D95483;
IL2CPP_EXTERN_C String_t* _stringLiteral9B9CAA29183E1789E13261856D4186BE443C7122;
IL2CPP_EXTERN_C String_t* _stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158;
IL2CPP_EXTERN_C String_t* _stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03;
IL2CPP_EXTERN_C String_t* _stringLiteralA0A441B19719480B2CAA2A548D2994E692AB5FEA;
IL2CPP_EXTERN_C String_t* _stringLiteralA165C2B0C723026923E4136FAF3AA65BC970093D;
IL2CPP_EXTERN_C String_t* _stringLiteralA7421E9C1A61D9A0FF4C8D637C44BB66E6284507;
IL2CPP_EXTERN_C String_t* _stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralB9CBFD3CE72AA902455FD40B4E5E14A28D06707B;
IL2CPP_EXTERN_C String_t* _stringLiteralB9D3D73187778AF6D06AB846BD78D488ADBFB70E;
IL2CPP_EXTERN_C String_t* _stringLiteralBB18FD5403956E235352A939512137B4D9DB96BF;
IL2CPP_EXTERN_C String_t* _stringLiteralBBD75549FACF088DB9778ED0BCD8EF703392086C;
IL2CPP_EXTERN_C String_t* _stringLiteralBCFBDF6B292C4B3879183E4BD0E8A340E43B85FF;
IL2CPP_EXTERN_C String_t* _stringLiteralBF86C9E9E7FE0EF09A2EAE8066CDC31F859254CC;
IL2CPP_EXTERN_C String_t* _stringLiteralC661DDE6FD7C14D9F810EA317088F4426B258088;
IL2CPP_EXTERN_C String_t* _stringLiteralC7C3874C2D5365430B4CACFF79F088184C953249;
IL2CPP_EXTERN_C String_t* _stringLiteralCB78D06EA1F8D586116C33848188F1294BA87EE7;
IL2CPP_EXTERN_C String_t* _stringLiteralCFA782E70B4CF5A85E588B65A1771AF9BC49CCC0;
IL2CPP_EXTERN_C String_t* _stringLiteralCFB1D0B3628079F27B48270F1F9121BFC82DD278;
IL2CPP_EXTERN_C String_t* _stringLiteralCFB2131C0CD3137E2351DFC47EE9F34B887B3FC8;
IL2CPP_EXTERN_C String_t* _stringLiteralD07B59B474E59375E25F09D75E1BAC7660C9373B;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDAFAC821ADE3B9D80860F804E61841B832CA53EA;
IL2CPP_EXTERN_C String_t* _stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6;
IL2CPP_EXTERN_C String_t* _stringLiteralE9CC093AAA8BF5C2E10E10E844A69670132EEA44;
IL2CPP_EXTERN_C String_t* _stringLiteralEE03CBE699C2F9FFFCA97B8B3BE29026F71A2D4C;
IL2CPP_EXTERN_C String_t* _stringLiteralEEBA8098E430AC39B8A1B0C94FF44C46F715D248;
IL2CPP_EXTERN_C String_t* _stringLiteralEF420ABFDDBDA7B9EE665D85EF62E4A437554003;
IL2CPP_EXTERN_C String_t* _stringLiteralF392EF2EFA59020D3308DDD255994299DC5BEF65;
IL2CPP_EXTERN_C String_t* _stringLiteralFD60316EE3ADB7B16A998DF8AE0D68C293F6622E;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m397CE83D3F0BA105E68C33389BAE8A9B35B592CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m0B865879077678CDB1541E56D43DD37820370472_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m646D9DA918FF7A0C181EE4B07A33DF287785AE9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mCABB09FC74E78681C1B182FCF5522649FBFD27CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m2489E55292F69B15797B49697EC0BC225101CB0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m34D663F47D61D46A3373EBB3EA4BD6BE56E06462_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m743A8B1E084CC698FE9C863462627FC27101EBA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m951B7DF6CC2385D2F8C894738696A0F0A04B7429_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m80FD91538BABB6A58E4F39A342D2688DB7FA623A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m8686211E94EA1F61AC9686A1D20B6E6ACBFA4D72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mAE76465455077EF392B2D6707842134610BC0979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCD15BE67333EF76C6A8FE3EA6940649D11B92D18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB063F72CA129EA5C9E63FAB5A9D0DBA7B0A8BB98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mC12B82AEEE32C156B0CD676704C36068AC826AFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m4BEF004F1A248906F4A61411E7FC2391407A7BF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m1E1212FA0E8F578D814E21456C1D97EE0E0BDE0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m64744B7BEC10CDC9053D8C9BF62A21CA0FCDB036_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m79B82EAE3D5A1D671D2FD4D8C09CFA6A7C002972_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ExecuteHierarchy_TisIDropHandler_t9F3B358BA4812886852E9AB85A653ABF73B9AA35_m4C9DA44082FBE5886FBFBFE66CBC89771C7971C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ExecuteHierarchy_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_mB8FE7DAB045B9BC18C426E563C2584F49E97452A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ExecuteHierarchy_TisIPointerDownHandler_t42CC83619BB6295404D44090142F7726003CE573_mAAB1B55CF77D247B61D04981A59169EFFE9E0AFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_Execute_TisIBeginDragHandler_t0E0386CCAB531BD8291D12476D40D19AA98ED7EB_m186924444C6950BA260CFE27CEFE0F76402342A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_Execute_TisIDragHandler_t9FF2B3D79AB401D7E2485254973D15C0F117D00D_m0E5281FDDCB78D969625ECB14A393CA5D572C3A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_Execute_TisIEndDragHandler_t9A93E4A27E7CEED446E5FE3DACF39B1A552C23A9_mF257FA331CEC3705FC5A620859468C5B9AF0F756_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_Execute_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_mB18F35F748E39943F1C1AE45EE7D15EBDF39833D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_Execute_TisIPointerDownHandler_t42CC83619BB6295404D44090142F7726003CE573_mC279421E43B3264277D0E8C36E8DA097F3BBB0E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_Execute_TisIPointerUpHandler_tB2D4D0ABEAFF77BE8D0159D638D85E1AF7BAF210_m9FC5FE3B9CC6D87743F88BD3B2B437653DF82673_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_Execute_TisIUpdateSelectedHandler_tBBACEC3A6478F7DA4B682AFDA8CF59C6C3FCC9CC_m29048196EE9931B2E91B895CA98BCBBE2418E0B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_GetEventHandler_TisISelectHandler_tA3030316ED9DF4943103C3101AD95FCD7765700D_m24416E302B1BDD2CCDDB58B1E20423E4B02F2D7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisLaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6_mE7DEDEA422C4CBF8D672F87625628EB5A0F24579_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisPhysicsRaycaster_t0ACA9046D8D0B195B59DB1F7CA4DD6BB634A56DD_m7123B9A9CFB933EFCB54FFDAA5D010EA4393D53F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisLaserPointer_t16D0F974C5CCC33E600C322FFB605D6B7CB2B5A3_m728C5B593843EC64654A5EE68C10EF8F97101E21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m704160C10BDAB9B54429D2DEB921575D3DF7622C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGyroScript_tD8E851D88E999B441E345C7A458CC62E12F18D3E_m2706485CC60637B4A0C56D5B5E29AEDD8F18415A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisJoystickController_t76376805DE06ACDB2581FD9C07C0F565F9B7DFA9_mF39397CA0FD0030F45CA283BBB5566C4AB190B03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisLaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6_m82A4D38AF7C1CE0D22401D463CCC415ED0D2EB21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSenseController_tABCD7B30A1AA3F0BAB5AC6050F2C699A566ADA48_m9BF2F0DE6EA16F43888DEC311274352CA63E622C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_mD342F4F06F3848B43732DD183CDDA00AED3EE0A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisStandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530_m079528EF78E6312315FFB3F01362D4F2E6DA5C2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTeleportManager_tAD810B203280055ABDE0A44548E696080148F3BE_m5AE96867ECFDF4F25E8B6C7829CCF1E616C815E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m89DDA518D40FEC5E3857DC3A5DA418BA2A8EE90E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m2B9C5A8655A94A6FA7FB83B8EB6ECF1C7A2522BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m88ECE219176F771E4C5F913CC01FFCF91E93E3D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m845BD557E5EAD0E7B7651195EB4E424504985BAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisLaserPointer_t16D0F974C5CCC33E600C322FFB605D6B7CB2B5A3_mFEABE52DC46183287A33A14AECE9F41BB53C100E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OculusBridge_AddEventListener_mBC416BC4F6A9ED67803C0F2AEE3547FCD5AA0957_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OculusBridge_GetController_m9E13891B7678627ACBD8B6F0BE746B1E17E8AF9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OculusBridge_GetCurrentObject_mED081D2DB8BFA66342663E0A31AE10F9F77A46C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OculusBridge_GetRaycastHit_m1C45625B72FA270E7B105AE53B5DE771830AF959_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OculusBridge_GetXRLocalPosition_m6F71084BD82E0078C5E4A10103EB349A15F32137_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OculusBridge_GetXRLocalRotation_m27139507AE9F8F0F6FF3D9A697447BDE196FD5D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OculusBridge_GetXRPosition_m5D77F63F10F04FB78AB8AD576356DC5D6B069A5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OculusBridge_GetXRRotation_mF6EF6AFDF162168C89058860285E3D2CB6F9D451_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OculusBridge_RemoveEventListener_mCA0D6B3F7935E600ED5F8AF0636685E8ED522849_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OculusBridge_SetObjectInteractionMode_m31154317ABA6A384C022360D843715A3C8CD6E80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OculusBridge_SetPointerColor_m845FF9C8D52E8790BDD5BEAB257F5B095508A76B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OculusBridge_SetPointerDisplayMode_mCBFD0B0815F8F18ED049DF7BB991782BC0CA864C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OculusBridge_ToggleControllerBodyDisplay_m9230344CC5DE569946C0F8A19067B5A211640B80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OculusBridge_TogglePointerDisplay_mF2F6264D5991DE007CAE80FE870871D0F79B06FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OculusBridge_TriggerEvent_m9FE411BBDA967FF683F5E6D93201D0B79B7FA126_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OculusBridge_TriggerEvent_mE9C0577137830A47B0B00CA25B89EDE96956CAAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_FindObjectsOfTypeAll_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m81C22C5AC148490C259C42D08470838D00F5D82D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RuntimeLicenseCheck_OnError_mD49060DA954BEB32AB269397503D2B3825B13ECE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RuntimeLicenseCheck_OnSuccess_mCABD97C2FA68332099AF0EB3F955260FB77E3F4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SenseManager_SetJoystickMode_m551B60951D6844DB9C3493991EBF9797BFA163C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SenseManager_SetMouseKeyboardMode_m13008D9832C3E32BA995814A4C50986F9773CCE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SenseManager_SetRaycastMode_m0AC262C8299E1FCB4118085741EC290C0C9CDF12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingletonScriptableObject_1__ctor_m1B44A6757EFCF818D18A52A3ECA994286FA34B11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingletonScriptableObject_1_get_Instance_m67B784EE6495BA709A0B9826E60378ADAFBDDBF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_m22E1F7284124781796F09E04E55732671B164CAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_m51653CAB709EFBD968DEFEEF7B462DBC252B5D78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_m61B67BE9D0C290D4A3A8AF0E840431F78354453A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_m8CFF12B7C9D1C5D45123BFD91F043C04C2BA0CBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_mCE765B4AF0CC9BC88BB15A8BED75932921D1BA64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_Instance_m4A3E657F19E0456005196EFE080664B5B74F8534_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_Instance_m5D60D103E26BACE6FCA20140935EBF56330E4BC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_Instance_m78D05D468F30A6FA61E75B05CA4DC49D8E5C2F05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCalibrateYAngleU3Ed__9_System_Collections_IEnumerator_Reset_m3CF921D9C038ED35AF610148747F1724A691FC6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetDataLocalU3Ed__6_System_Collections_IEnumerator_Reset_m1FD68A0360C33614081DD0178F7D21A121131DF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetDataRemoteU3Ed__7_System_Collections_IEnumerator_Reset_m0658C95F297D94CD89F25DEF151766E091758B79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPostU3Ed__2_System_Collections_IEnumerator_Reset_mDC435BC2768CE0A26DD53C5760486CCBC2496491_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSetBGPlaneU3Ed__1_System_Collections_IEnumerator_Reset_m6F18F4A427FDE8792D057395E3B9834E34689B71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__7_System_Collections_IEnumerator_Reset_mB5953AD358FCE1625A235DF3CFAB987EC485E4DE_RuntimeMethod_var;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;

struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t00E66AF6972B93654E9C4818D020D511B4B1813B 
{
};

// System.Collections.Generic.Dictionary`2<TechXR.Core.Sense.IUILaserPointer,TechXR.Core.Sense.ControllerData>
struct Dictionary_2_t5849E900B482EF522536990076C17609372C55CE  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tAC944214DD9B819A958E910D15C35A022EA291D2* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tF53D6CA6EBD3BF63EAA699E0B56EC76235408EE9* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tFD4AE517183715EF0E912B6393350CE900415A98* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<TechXR.Core.Sense.SenseEvent,TechXR.Core.Sense.SenseEventDelegate>
struct Dictionary_2_t7501747BA89320958ACDB6ED070D99A6C7A3E6CB  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tDCEEEB0AF1C425F03F6F74AC16BB68B39867A835* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t714AC5A4D462687CDC3F6B1C19CA7D5F9EB2CB72* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t40CCF7F9107B4729C2A4FC525DE8071BB77BD9B1* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<TechXR.Core.Sense.SenseManager/InputType,System.Action>
struct Dictionary_2_t80FEA5B79D158901F7724BC0BBF5836A8104227F  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t65DAE57FD4A75D37C3F6C4EDF50320D14F877C5A* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tCB214BE10E10014C243B9B8721F1046287E07F30* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t57BB9590900507BB1339239E38450CB942D5427C* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Boolean>>
struct List_1_t1C3DD67409BD614CE1F834B9F4F85DD4E0D207AE  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Dictionary_2U5BU5D_t9EBEA8D90CDFA060F1CD185D3985E00B85910026* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t1C3DD67409BD614CE1F834B9F4F85DD4E0D207AE_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Dictionary_2U5BU5D_t9EBEA8D90CDFA060F1CD185D3985E00B85910026* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t8292C421BBB00D7661DC07462822936152BAB446  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8292C421BBB00D7661DC07462822936152BAB446_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray_5;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

// TechXR.Core.Sense.ControllerData
struct ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF  : public RuntimeObject
{
	// TechXR.Core.Sense.LaserPointerEventData TechXR.Core.Sense.ControllerData::PointerEvent
	LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A* ___PointerEvent_0;
	// UnityEngine.GameObject TechXR.Core.Sense.ControllerData::CurrentPoint
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___CurrentPoint_1;
	// UnityEngine.GameObject TechXR.Core.Sense.ControllerData::CurrentPressed
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___CurrentPressed_2;
	// UnityEngine.GameObject TechXR.Core.Sense.ControllerData::CurrentDragging
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___CurrentDragging_3;
};

// TechXR.Core.Sense.ControllerFactory
struct ControllerFactory_tDBFFE3B805A39CCAAFEAD2461F1119ED926200A0  : public RuntimeObject
{
};

struct ControllerFactory_tDBFFE3B805A39CCAAFEAD2461F1119ED926200A0_StaticFields
{
	// System.Boolean TechXR.Core.Sense.ControllerFactory::IsOculus
	bool ___IsOculus_0;
	// TechXR.Core.Sense.ILicense TechXR.Core.Sense.ControllerFactory::m_License
	RuntimeObject* ___m_License_1;
};

// TechXR.Core.Sense.Defs
struct Defs_tDBAD6C54441BEF6C29B17552EE04857F52EAA049  : public RuntimeObject
{
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// UnityEngine.EventSystems.ExecuteEvents
struct ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59  : public RuntimeObject
{
};

struct ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_StaticFields
{
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerMoveHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerMoveHandler
	EventFunction_1_t86320D8073B1F956C9EE0FB8749277DDE7C1DE06* ___s_PointerMoveHandler_0;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerEnterHandler
	EventFunction_1_t5633AE56FD3D84C5E9E07AC717AF53435DA593C9* ___s_PointerEnterHandler_1;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerExitHandler
	EventFunction_1_tA70AAFA2BD47CD0A094BCB586E2EA3E04C5F8916* ___s_PointerExitHandler_2;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerDownHandler
	EventFunction_1_t00024D26E9CCD074EEBC25568B0383863A4CF117* ___s_PointerDownHandler_3;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerUpHandler
	EventFunction_1_t919A3841A202FB8C678BC0172FAB7E2F79B88AD8* ___s_PointerUpHandler_4;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerClickHandler
	EventFunction_1_t586168BFEFD0CF29A2B706B5411BF712BD73359E* ___s_PointerClickHandler_5;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_InitializePotentialDragHandler
	EventFunction_1_t7DFDB0A0C9926E06BF7870695CD48A0533DFABAD* ___s_InitializePotentialDragHandler_6;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_BeginDragHandler
	EventFunction_1_t5B9F26DC56564B82AEF63D8AFEEEADBAB365F403* ___s_BeginDragHandler_7;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_DragHandler
	EventFunction_1_t37D97D8E7BDC68938191F138BFE31C7BEFCF855E* ___s_DragHandler_8;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_EndDragHandler
	EventFunction_1_t33BA7CA3F9202146F70BE77589CE24F7451C584C* ___s_EndDragHandler_9;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler> UnityEngine.EventSystems.ExecuteEvents::s_DropHandler
	EventFunction_1_tB3864D36512C3A896DAC44E898E5D9E1A92CB733* ___s_DropHandler_10;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler> UnityEngine.EventSystems.ExecuteEvents::s_ScrollHandler
	EventFunction_1_t048C55D455059C49F0AFD58FA503F7A552C3DB65* ___s_ScrollHandler_11;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler> UnityEngine.EventSystems.ExecuteEvents::s_UpdateSelectedHandler
	EventFunction_1_tB9684C6044C44F9A8317A5E5A9A3C1C0376A4678* ___s_UpdateSelectedHandler_12;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler> UnityEngine.EventSystems.ExecuteEvents::s_SelectHandler
	EventFunction_1_tD8870260CD9964C568C228D51BBD578A792137EA* ___s_SelectHandler_13;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler> UnityEngine.EventSystems.ExecuteEvents::s_DeselectHandler
	EventFunction_1_t761440E218DEDDDF4267213CA0E8B1C52C858690* ___s_DeselectHandler_14;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler> UnityEngine.EventSystems.ExecuteEvents::s_MoveHandler
	EventFunction_1_t2A3D445A0300FDC32D29761DDFBBBFC30426F013* ___s_MoveHandler_15;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler> UnityEngine.EventSystems.ExecuteEvents::s_SubmitHandler
	EventFunction_1_tEF0BF5C5A27323118905EB07330A8EF108FED92F* ___s_SubmitHandler_16;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler> UnityEngine.EventSystems.ExecuteEvents::s_CancelHandler
	EventFunction_1_t9FDF6DF173D42030EFE70318BF2408968D3E65CA* ___s_CancelHandler_17;
	// System.Collections.Generic.List`1<UnityEngine.Transform> UnityEngine.EventSystems.ExecuteEvents::s_InternalTransformList
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___s_InternalTransformList_18;
};

// UnityEngine.Gyroscope
struct Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E  : public RuntimeObject
{
	// System.Int32 UnityEngine.Gyroscope::m_GyroIndex
	int32_t ___m_GyroIndex_0;
};

// co.techxr.unity.network.LicenseService
struct LicenseService_t6FFDDF25E97C8C6A850DBB9EED03DE9E9DFFE759  : public RuntimeObject
{
};

struct LicenseService_t6FFDDF25E97C8C6A850DBB9EED03DE9E9DFFE759_StaticFields
{
	// co.techxr.unity.network.INetworkService co.techxr.unity.network.LicenseService::networkService
	RuntimeObject* ___networkService_0;
};

// LicenseVerificationDetails
struct LicenseVerificationDetails_tD72DCA6D945BB0249B92C1164CFA2ECA457C6CA7  : public RuntimeObject
{
	// System.String LicenseVerificationDetails::<expiryTime>k__BackingField
	String_t* ___U3CexpiryTimeU3Ek__BackingField_0;
	// System.Boolean LicenseVerificationDetails::<status>k__BackingField
	bool ___U3CstatusU3Ek__BackingField_1;
};

// co.techxr.unity.model.LoginResponse
struct LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28  : public RuntimeObject
{
	// System.String co.techxr.unity.model.LoginResponse::<access_token>k__BackingField
	String_t* ___U3Caccess_tokenU3Ek__BackingField_0;
	// System.String co.techxr.unity.model.LoginResponse::<token_type>k__BackingField
	String_t* ___U3Ctoken_typeU3Ek__BackingField_1;
	// System.String co.techxr.unity.model.LoginResponse::<refresh_token>k__BackingField
	String_t* ___U3Crefresh_tokenU3Ek__BackingField_2;
	// System.String co.techxr.unity.model.LoginResponse::<expires_in>k__BackingField
	String_t* ___U3Cexpires_inU3Ek__BackingField_3;
	// System.String co.techxr.unity.model.LoginResponse::<scope>k__BackingField
	String_t* ___U3CscopeU3Ek__BackingField_4;
	// co.techxr.unity.model.Profile co.techxr.unity.model.LoginResponse::<profile>k__BackingField
	Profile_tBEE2D65B1FA8012EB73B205D0FFA541F5FC2C876* ___U3CprofileU3Ek__BackingField_5;
};

// TechXR.Core.Sense.RuntimeLicenseCheck
struct RuntimeLicenseCheck_t4B2E6DD72A29A843AC12C46E319C8D551489719E  : public RuntimeObject
{
};

struct RuntimeLicenseCheck_t4B2E6DD72A29A843AC12C46E319C8D551489719E_StaticFields
{
	// System.Boolean TechXR.Core.Sense.RuntimeLicenseCheck::IsValid
	bool ___IsValid_0;
	// TechXR.Core.Sense.ILicense TechXR.Core.Sense.RuntimeLicenseCheck::license
	RuntimeObject* ___license_1;
};

// TechXR.Core.Sense.ServerLicenseVerification
struct ServerLicenseVerification_t7F1E7EA6216939EBBF283858E7C5DC9763D76FE3  : public RuntimeObject
{
	// co.techxr.unity.network.LicenseService TechXR.Core.Sense.ServerLicenseVerification::m_LicenseService
	LicenseService_t6FFDDF25E97C8C6A850DBB9EED03DE9E9DFFE759* ___m_LicenseService_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// BackgroundPlaneController/<SetBGPlane>d__1
struct U3CSetBGPlaneU3Ed__1_t4A8693A86BED3690DE38286879C5C89986D9A851  : public RuntimeObject
{
	// System.Int32 BackgroundPlaneController/<SetBGPlane>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object BackgroundPlaneController/<SetBGPlane>d__1::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// BackgroundPlaneController BackgroundPlaneController/<SetBGPlane>d__1::<>4__this
	BackgroundPlaneController_tD3F10264B3C6602A4D2C3C07D5A361D8A1A00D6B* ___U3CU3E4__this_2;
};

// TechXR.Core.Utils.DataManager/<GetDataLocal>d__6
struct U3CGetDataLocalU3Ed__6_t35AF7AAA66C46989AAC6E3D6C18EF9F195FB60DB  : public RuntimeObject
{
	// System.Int32 TechXR.Core.Utils.DataManager/<GetDataLocal>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TechXR.Core.Utils.DataManager/<GetDataLocal>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.String TechXR.Core.Utils.DataManager/<GetDataLocal>d__6::fileName
	String_t* ___fileName_2;
	// TechXR.Core.Utils.DataManager TechXR.Core.Utils.DataManager/<GetDataLocal>d__6::<>4__this
	DataManager_t40CBB9B632C0C9F415E38AAFDBFC8C84FA458E1E* ___U3CU3E4__this_3;
	// UnityEngine.TextAsset TechXR.Core.Utils.DataManager/<GetDataLocal>d__6::<file>5__1
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___U3CfileU3E5__1_4;
	// System.String TechXR.Core.Utils.DataManager/<GetDataLocal>d__6::<jsonString>5__2
	String_t* ___U3CjsonStringU3E5__2_5;
};

// TechXR.Core.Utils.DataManager/<GetDataRemote>d__7
struct U3CGetDataRemoteU3Ed__7_t9EF86BF47D64179500271B1D5CD90A11DF21DB82  : public RuntimeObject
{
	// System.Int32 TechXR.Core.Utils.DataManager/<GetDataRemote>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TechXR.Core.Utils.DataManager/<GetDataRemote>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.String TechXR.Core.Utils.DataManager/<GetDataRemote>d__7::url
	String_t* ___url_2;
	// TechXR.Core.Utils.DataManager TechXR.Core.Utils.DataManager/<GetDataRemote>d__7::<>4__this
	DataManager_t40CBB9B632C0C9F415E38AAFDBFC8C84FA458E1E* ___U3CU3E4__this_3;
	// UnityEngine.Networking.UnityWebRequest TechXR.Core.Utils.DataManager/<GetDataRemote>d__7::<www>5__1
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwwwU3E5__1_4;
	// System.String TechXR.Core.Utils.DataManager/<GetDataRemote>d__7::<jsonString>5__2
	String_t* ___U3CjsonStringU3E5__2_5;
};

// TechXR.Core.Sense.GyroScript/<CalibrateYAngle>d__9
struct U3CCalibrateYAngleU3Ed__9_tBB8137A2FE8B1DE92983BB1B288053B2D5AD5096  : public RuntimeObject
{
	// System.Int32 TechXR.Core.Sense.GyroScript/<CalibrateYAngle>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TechXR.Core.Sense.GyroScript/<CalibrateYAngle>d__9::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TechXR.Core.Sense.GyroScript TechXR.Core.Sense.GyroScript/<CalibrateYAngle>d__9::<>4__this
	GyroScript_tD8E851D88E999B441E345C7A458CC62E12F18D3E* ___U3CU3E4__this_2;
};

// TechXR.Core.Sense.GyroScript/<Start>d__7
struct U3CStartU3Ed__7_t2482C4AD1915332F390CE3E730A4483A1CE3AC60  : public RuntimeObject
{
	// System.Int32 TechXR.Core.Sense.GyroScript/<Start>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TechXR.Core.Sense.GyroScript/<Start>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TechXR.Core.Sense.GyroScript TechXR.Core.Sense.GyroScript/<Start>d__7::<>4__this
	GyroScript_tD8E851D88E999B441E345C7A458CC62E12F18D3E* ___U3CU3E4__this_2;
	// UnityEngine.GameObject[] TechXR.Core.Sense.GyroScript/<Start>d__7::<playerBody>5__1
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___U3CplayerBodyU3E5__1_3;
	// UnityEngine.GameObject TechXR.Core.Sense.GyroScript/<Start>d__7::<CharacterBodyContainer>5__2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CCharacterBodyContainerU3E5__2_4;
	// UnityEngine.GameObject[] TechXR.Core.Sense.GyroScript/<Start>d__7::<>s__3
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___U3CU3Es__3_5;
	// System.Int32 TechXR.Core.Sense.GyroScript/<Start>d__7::<>s__4
	int32_t ___U3CU3Es__4_6;
	// UnityEngine.GameObject TechXR.Core.Sense.GyroScript/<Start>d__7::<pb>5__5
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpbU3E5__5_7;
};

// TechXR.Core.Sense.LicenseValidity/<Post>d__2
struct U3CPostU3Ed__2_t49B6E4E17B3C8C315C8E43B8A39DFCA56B6502AE  : public RuntimeObject
{
	// System.Int32 TechXR.Core.Sense.LicenseValidity/<Post>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TechXR.Core.Sense.LicenseValidity/<Post>d__2::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.String TechXR.Core.Sense.LicenseValidity/<Post>d__2::url
	String_t* ___url_2;
	// System.String TechXR.Core.Sense.LicenseValidity/<Post>d__2::key
	String_t* ___key_3;
	// TechXR.Core.Sense.LicenseValidity TechXR.Core.Sense.LicenseValidity/<Post>d__2::<>4__this
	LicenseValidity_tF7D6F5664477DE2ED0C427A798251611921AF372* ___U3CU3E4__this_4;
	// UnityEngine.Networking.UnityWebRequest TechXR.Core.Sense.LicenseValidity/<Post>d__2::<request>5__1
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CrequestU3E5__1_5;
	// System.Byte[] TechXR.Core.Sense.LicenseValidity/<Post>d__2::<bodyRaw>5__2
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CbodyRawU3E5__2_6;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.String>
struct Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	String_t* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>
struct Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____current_3;
};

// System.Collections.Generic.KeyValuePair`2<TechXR.Core.Sense.IUILaserPointer,TechXR.Core.Sense.ControllerData>
struct KeyValuePair_2_t0E243409C832CE9690A4E5AD88243B05DD3FBF02 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// Vuforia.TargetStatus
struct TargetStatus_t5D866F1CAA9D70E5B66D532E69B190EA3BAAC4B0 
{
	// Vuforia.Status Vuforia.TargetStatus::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_0;
	// Vuforia.StatusInfo Vuforia.TargetStatus::<StatusInfo>k__BackingField
	int32_t ___U3CStatusInfoU3Ek__BackingField_1;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// System.Collections.Generic.Dictionary`2/Enumerator<TechXR.Core.Sense.IUILaserPointer,TechXR.Core.Sense.ControllerData>
struct Enumerator_t1060918B355EAD604824F373C10145546D56F738 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t5849E900B482EF522536990076C17609372C55CE* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t0E243409C832CE9690A4E5AD88243B05DD3FBF02 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TechXR.Core.Sense.FixedExpiryLicense
struct FixedExpiryLicense_t66BF4FCE9006D57DF5CC0E7C646D7F1D781D97C1  : public RuntimeObject
{
	// System.DateTime TechXR.Core.Sense.FixedExpiryLicense::m_StartDate
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___m_StartDate_0;
	// System.DateTime TechXR.Core.Sense.FixedExpiryLicense::m_Today
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___m_Today_1;
	// System.Boolean TechXR.Core.Sense.FixedExpiryLicense::m_IsValid
	bool ___m_IsValid_2;
	// System.Collections.Generic.List`1<System.String> TechXR.Core.Sense.FixedExpiryLicense::m_DevKeys
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___m_DevKeys_3;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974  : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB
{
	// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.Networking.DownloadHandlerBuffer::m_NativeData
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshaled_pinvoke : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshaled_com : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com* ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A  : public UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6
{
	// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.Networking.UploadHandlerRaw::m_Payload
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_Payload_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_marshaled_pinvoke : public UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_Payload_1;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_marshaled_com : public UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_Payload_1;
};

// co.techxr.unity.exceptions.XrException
struct XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F  : public Exception_t
{
	// System.Int32 co.techxr.unity.exceptions.XrException::<errorCode>k__BackingField
	int32_t ___U3CerrorCodeU3Ek__BackingField_18;
	// System.String co.techxr.unity.exceptions.XrException::<message>k__BackingField
	String_t* ___U3CmessageU3Ek__BackingField_19;
};

// System.Action`1<co.techxr.unity.model.LoginResponse>
struct Action_1_t364C94423BE312DFF449DB8389178799569DCF01  : public MulticastDelegate_t
{
};

// System.Action`1<co.techxr.unity.exceptions.XrException>
struct Action_1_t77330DAB4B6364644857E237915461B112A9D589  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler>
struct EventFunction_1_t5B9F26DC56564B82AEF63D8AFEEEADBAB365F403  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler>
struct EventFunction_1_t37D97D8E7BDC68938191F138BFE31C7BEFCF855E  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler>
struct EventFunction_1_tB3864D36512C3A896DAC44E898E5D9E1A92CB733  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler>
struct EventFunction_1_t33BA7CA3F9202146F70BE77589CE24F7451C584C  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>
struct EventFunction_1_t586168BFEFD0CF29A2B706B5411BF712BD73359E  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>
struct EventFunction_1_t00024D26E9CCD074EEBC25568B0383863A4CF117  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>
struct EventFunction_1_t919A3841A202FB8C678BC0172FAB7E2F79B88AD8  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>
struct EventFunction_1_tB9684C6044C44F9A8317A5E5A9A3C1C0376A4678  : public MulticastDelegate_t
{
};

// TechXR.Core.Utils.SingletonScriptableObject`1<TechXR.Core.Sense.TechXRConfiguration>
struct SingletonScriptableObject_1_tA898FCDB45DF9AC26B67549B9FD0B77E0E39292D  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

struct SingletonScriptableObject_1_tA898FCDB45DF9AC26B67549B9FD0B77E0E39292D_StaticFields
{
	// T TechXR.Core.Utils.SingletonScriptableObject`1::instance
	TechXRConfiguration_t995E9151CF60B71D35B08C4A39098AC8D06BDAD0* ___instance_4;
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TechXR.Core.Sense.LaserPointerEventData
struct LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A  : public PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB
{
	// UnityEngine.GameObject TechXR.Core.Sense.LaserPointerEventData::Current
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Current_33;
	// TechXR.Core.Sense.IUILaserPointer TechXR.Core.Sense.LaserPointerEventData::Controller
	IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* ___Controller_34;
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TechXR.Core.Sense.SenseEventDelegate
struct SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C  : public MulticastDelegate_t
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.SphereCollider
struct SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// TechXR.Core.Sense.TechXRConfiguration
struct TechXRConfiguration_t995E9151CF60B71D35B08C4A39098AC8D06BDAD0  : public SingletonScriptableObject_1_tA898FCDB45DF9AC26B67549B9FD0B77E0E39292D
{
	// System.String TechXR.Core.Sense.TechXRConfiguration::m_AppLicenseKey
	String_t* ___m_AppLicenseKey_5;
};

// TechXR.Core.Utils.Singleton`1<TechXR.Core.Utils.DataManager>
struct Singleton_1_tC289D00A047C79313DA529AB7DBBA764BAF771F4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct Singleton_1_tC289D00A047C79313DA529AB7DBBA764BAF771F4_StaticFields
{
	// System.Lazy`1<T> TechXR.Core.Utils.Singleton`1::LazyInstance
	Lazy_1_tBC25FE1DE87E9C7750B85945A15D81A4CD30D422* ___LazyInstance_4;
};

// TechXR.Core.Utils.Singleton`1<TechXR.Core.Utils.EventManager>
struct Singleton_1_tDE48F5D43D6ACE2A85EB85E8B734CF741D8D4306  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct Singleton_1_tDE48F5D43D6ACE2A85EB85E8B734CF741D8D4306_StaticFields
{
	// System.Lazy`1<T> TechXR.Core.Utils.Singleton`1::LazyInstance
	Lazy_1_t369323860E6FD4438A0DB815A1D91798501BC7FD* ___LazyInstance_4;
};

// TechXR.Core.Utils.Singleton`1<TechXR.Core.Sense.OculusBridge>
struct Singleton_1_tB3F117CD016202C931C3F5A781A2A0D7E69FCD94  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct Singleton_1_tB3F117CD016202C931C3F5A781A2A0D7E69FCD94_StaticFields
{
	// System.Lazy`1<T> TechXR.Core.Utils.Singleton`1::LazyInstance
	Lazy_1_tAF1F7D8BBA542887B81313AA7D0014CE315B4069* ___LazyInstance_4;
};

// TechXR.Core.Utils.Singleton`1<TechXR.Core.Sense.SenseXR>
struct Singleton_1_t5AA3D1D13FDB0CDFED5F4B19749050F99CE96E46  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct Singleton_1_t5AA3D1D13FDB0CDFED5F4B19749050F99CE96E46_StaticFields
{
	// System.Lazy`1<T> TechXR.Core.Utils.Singleton`1::LazyInstance
	Lazy_1_tA1E8CEF04E3FA25A3A6C261457EC7DF87AC4B64B* ___LazyInstance_4;
};

// TechXR.Core.Utils.Singleton`1<TechXR.Core.Utils.StateManager>
struct Singleton_1_t62FD18177113694BFBF5D00029441528F05D3123  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct Singleton_1_t62FD18177113694BFBF5D00029441528F05D3123_StaticFields
{
	// System.Lazy`1<T> TechXR.Core.Utils.Singleton`1::LazyInstance
	Lazy_1_tE171615DDC8E5BD8706EEBD19A93E43C3DF97F0C* ___LazyInstance_4;
};

// BackgroundPlaneController
struct BackgroundPlaneController_tD3F10264B3C6602A4D2C3C07D5A361D8A1A00D6B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject BackgroundPlaneController::m_BackgroundPlane
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_BackgroundPlane_4;
};

// DefaultObserverEventHandler
struct DefaultObserverEventHandler_t7CF27A0CC5B1FAEDDB5964C3A11F29C2A14E1FC0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// DefaultObserverEventHandler/TrackingStatusFilter DefaultObserverEventHandler::StatusFilter
	int32_t ___StatusFilter_4;
	// System.Boolean DefaultObserverEventHandler::UsePoseSmoothing
	bool ___UsePoseSmoothing_5;
	// UnityEngine.AnimationCurve DefaultObserverEventHandler::AnimationCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___AnimationCurve_6;
	// UnityEngine.Events.UnityEvent DefaultObserverEventHandler::OnTargetFound
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnTargetFound_7;
	// UnityEngine.Events.UnityEvent DefaultObserverEventHandler::OnTargetLost
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnTargetLost_8;
	// Vuforia.ObserverBehaviour DefaultObserverEventHandler::mObserverBehaviour
	ObserverBehaviour_t5523404662BA53BE6118C49F6FFA9E19719115DB* ___mObserverBehaviour_9;
	// Vuforia.TargetStatus DefaultObserverEventHandler::mPreviousTargetStatus
	TargetStatus_t5D866F1CAA9D70E5B66D532E69B190EA3BAAC4B0 ___mPreviousTargetStatus_10;
	// System.Boolean DefaultObserverEventHandler::mCallbackReceivedOnce
	bool ___mCallbackReceivedOnce_11;
	// DefaultObserverEventHandler/PoseSmoother DefaultObserverEventHandler::mPoseSmoother
	PoseSmoother_t0FFFF1978A09252AD89E6E444613B95F9E1D59E8* ___mPoseSmoother_13;
};

// TechXR.Core.Sense.GazeTimer
struct GazeTimer_t3B3E8125DC73C12ABC4C4735B9A60462AD557E4D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single TechXR.Core.Sense.GazeTimer::TotalTime
	float ___TotalTime_5;
	// UnityEngine.UI.Image TechXR.Core.Sense.GazeTimer::m_GazeImg
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_GazeImg_6;
	// TechXR.Core.Sense.LaserPointer TechXR.Core.Sense.GazeTimer::m_LaserPointer
	LaserPointer_t16D0F974C5CCC33E600C322FFB605D6B7CB2B5A3* ___m_LaserPointer_7;
	// System.Boolean TechXR.Core.Sense.GazeTimer::m_GazeStatus
	bool ___m_GazeStatus_8;
	// System.Single TechXR.Core.Sense.GazeTimer::m_GazeTimer
	float ___m_GazeTimer_9;
};

struct GazeTimer_t3B3E8125DC73C12ABC4C4735B9A60462AD557E4D_StaticFields
{
	// TechXR.Core.Sense.GazeTimer TechXR.Core.Sense.GazeTimer::_instance
	GazeTimer_t3B3E8125DC73C12ABC4C4735B9A60462AD557E4D* ____instance_4;
};

// TechXR.Core.Sense.GyroScript
struct GyroScript_tD8E851D88E999B441E345C7A458CC62E12F18D3E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform TechXR.Core.Sense.GyroScript::PlayerBody
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___PlayerBody_4;
	// System.Single TechXR.Core.Sense.GyroScript::_initialYAngle
	float ____initialYAngle_5;
	// System.Single TechXR.Core.Sense.GyroScript::_appliedGyroYAngle
	float ____appliedGyroYAngle_6;
	// System.Single TechXR.Core.Sense.GyroScript::_calibrationYAngle
	float ____calibrationYAngle_7;
	// UnityEngine.Transform TechXR.Core.Sense.GyroScript::_rawGyroRotation
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____rawGyroRotation_8;
	// System.Single TechXR.Core.Sense.GyroScript::_tempSmoothing
	float ____tempSmoothing_9;
	// System.Single TechXR.Core.Sense.GyroScript::_smoothing
	float ____smoothing_10;
};

// TechXR.Core.Sense.IUILaserPointer
struct IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single TechXR.Core.Sense.IUILaserPointer::LaserThickness
	float ___LaserThickness_4;
	// System.Single TechXR.Core.Sense.IUILaserPointer::LaserHitScale
	float ___LaserHitScale_5;
	// System.Boolean TechXR.Core.Sense.IUILaserPointer::LaserAlwaysOn
	bool ___LaserAlwaysOn_6;
	// UnityEngine.Color TechXR.Core.Sense.IUILaserPointer::Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___Color_7;
	// UnityEngine.RaycastHit TechXR.Core.Sense.IUILaserPointer::m_RaycastHit
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___m_RaycastHit_8;
	// System.Boolean TechXR.Core.Sense.IUILaserPointer::m_IsCube
	bool ___m_IsCube_9;
	// System.Boolean TechXR.Core.Sense.IUILaserPointer::m_Conditions
	bool ___m_Conditions_10;
	// UnityEngine.GameObject TechXR.Core.Sense.IUILaserPointer::m_HitPoint
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_HitPoint_11;
	// UnityEngine.GameObject TechXR.Core.Sense.IUILaserPointer::m_Pointer
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Pointer_12;
	// System.Single TechXR.Core.Sense.IUILaserPointer::m_DistanceLimit
	float ___m_DistanceLimit_13;
	// System.Boolean TechXR.Core.Sense.IUILaserPointer::m_DisplayFlag
	bool ___m_DisplayFlag_14;
	// System.Boolean TechXR.Core.Sense.IUILaserPointer::m_ModeChanged
	bool ___m_ModeChanged_15;
	// UnityEngine.Material TechXR.Core.Sense.IUILaserPointer::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_16;
};

// Joystick
struct Joystick_tCD6542D65EBEE70A3B835333479AB75329325D0C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Joystick::handleRange
	float ___handleRange_4;
	// System.Single Joystick::deadZone
	float ___deadZone_5;
	// AxisOptions Joystick::axisOptions
	int32_t ___axisOptions_6;
	// System.Boolean Joystick::snapX
	bool ___snapX_7;
	// System.Boolean Joystick::snapY
	bool ___snapY_8;
	// UnityEngine.RectTransform Joystick::background
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___background_9;
	// UnityEngine.RectTransform Joystick::handle
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___handle_10;
	// UnityEngine.RectTransform Joystick::baseRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___baseRect_11;
	// UnityEngine.Canvas Joystick::canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canvas_12;
	// UnityEngine.Camera Joystick::cam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam_13;
	// UnityEngine.Vector2 Joystick::input
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___input_14;
};

// TechXR.Core.Sense.JoystickController
struct JoystickController_t76376805DE06ACDB2581FD9C07C0F565F9B7DFA9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single TechXR.Core.Sense.JoystickController::MoveMultiplier
	float ___MoveMultiplier_4;
	// System.Single TechXR.Core.Sense.JoystickController::RotationMultiplier
	float ___RotationMultiplier_5;
	// System.Single TechXR.Core.Sense.JoystickController::RotationXMax
	float ___RotationXMax_6;
	// System.Single TechXR.Core.Sense.JoystickController::m_DeltaTime
	float ___m_DeltaTime_7;
	// UnityEngine.Vector3 TechXR.Core.Sense.JoystickController::m_MoveAmount
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_MoveAmount_8;
	// UnityEngine.Vector3 TechXR.Core.Sense.JoystickController::m_MoveVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_MoveVelocity_9;
	// UnityEngine.Vector3 TechXR.Core.Sense.JoystickController::m_MoveDirAmount
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_MoveDirAmount_10;
	// UnityEngine.Quaternion TechXR.Core.Sense.JoystickController::m_RotationMinX
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_RotationMinX_11;
	// UnityEngine.Quaternion TechXR.Core.Sense.JoystickController::m_RotationMaxX
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_RotationMaxX_12;
	// VariableJoystick TechXR.Core.Sense.JoystickController::m_MoveJoystick
	VariableJoystick_t0D4819C1014E858778B0C435BF7D81EB0487B68E* ___m_MoveJoystick_13;
	// VariableJoystick TechXR.Core.Sense.JoystickController::m_DirJoystick
	VariableJoystick_t0D4819C1014E858778B0C435BF7D81EB0487B68E* ___m_DirJoystick_14;
	// UnityEngine.GameObject TechXR.Core.Sense.JoystickController::m_Player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Player_15;
	// System.Boolean TechXR.Core.Sense.JoystickController::m_VerticalFlag
	bool ___m_VerticalFlag_16;
};

// TechXR.Core.Sense.LicenseValidity
struct LicenseValidity_tF7D6F5664477DE2ED0C427A798251611921AF372  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String TechXR.Core.Sense.LicenseValidity::URL
	String_t* ___URL_4;
	// System.Boolean TechXR.Core.Sense.LicenseValidity::m_Valid
	bool ___m_Valid_5;
};

// TechXR.Core.Sense.SenseController
struct SenseController_tABCD7B30A1AA3F0BAB5AC6050F2C699A566ADA48  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean TechXR.Core.Sense.SenseController::Teleport
	bool ___Teleport_4;
	// TechXR.Core.Sense.SenseController/XRButton TechXR.Core.Sense.SenseController::TeleportButton
	int32_t ___TeleportButton_5;
	// TechXR.Core.Sense.LaserPointer TechXR.Core.Sense.SenseController::m_LaserPointer
	LaserPointer_t16D0F974C5CCC33E600C322FFB605D6B7CB2B5A3* ___m_LaserPointer_6;
	// UnityEngine.GameObject[] TechXR.Core.Sense.SenseController::m_PointerOptions
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___m_PointerOptions_7;
	// System.Boolean TechXR.Core.Sense.SenseController::JoystickMovement
	bool ___JoystickMovement_8;
	// UnityEngine.GameObject TechXR.Core.Sense.SenseController::m_CurrentPointer
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentPointer_9;
};

// TechXR.Core.Sense.SenseInput
struct SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean TechXR.Core.Sense.SenseInput::<JoystickMovement>k__BackingField
	bool ___U3CJoystickMovementU3Ek__BackingField_25;
	// System.Boolean TechXR.Core.Sense.SenseInput::<TeleportMovement>k__BackingField
	bool ___U3CTeleportMovementU3Ek__BackingField_26;
	// System.String[] TechXR.Core.Sense.SenseInput::m_ButtonName
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_ButtonName_27;
	// System.Boolean[] TechXR.Core.Sense.SenseInput::m_ButtonInput
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___m_ButtonInput_28;
	// System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Boolean>> TechXR.Core.Sense.SenseInput::m_InputMap
	List_1_t1C3DD67409BD614CE1F834B9F4F85DD4E0D207AE* ___m_InputMap_29;
};

struct SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields
{
	// TechXR.Core.Sense.SenseInput TechXR.Core.Sense.SenseInput::Instance
	SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8* ___Instance_4;
	// System.Boolean TechXR.Core.Sense.SenseInput::ButtonA_Up
	bool ___ButtonA_Up_5;
	// System.Boolean TechXR.Core.Sense.SenseInput::ButtonB_Up
	bool ___ButtonB_Up_6;
	// System.Boolean TechXR.Core.Sense.SenseInput::ButtonC_Up
	bool ___ButtonC_Up_7;
	// System.Boolean TechXR.Core.Sense.SenseInput::ButtonD_Up
	bool ___ButtonD_Up_8;
	// System.Boolean TechXR.Core.Sense.SenseInput::ButtonE_Up
	bool ___ButtonE_Up_9;
	// System.Boolean TechXR.Core.Sense.SenseInput::ButtonF_Up
	bool ___ButtonF_Up_10;
	// System.Boolean TechXR.Core.Sense.SenseInput::ButtonA_Down
	bool ___ButtonA_Down_11;
	// System.Boolean TechXR.Core.Sense.SenseInput::ButtonB_Down
	bool ___ButtonB_Down_12;
	// System.Boolean TechXR.Core.Sense.SenseInput::ButtonC_Down
	bool ___ButtonC_Down_13;
	// System.Boolean TechXR.Core.Sense.SenseInput::ButtonD_Down
	bool ___ButtonD_Down_14;
	// System.Boolean TechXR.Core.Sense.SenseInput::ButtonE_Down
	bool ___ButtonE_Down_15;
	// System.Boolean TechXR.Core.Sense.SenseInput::ButtonF_Down
	bool ___ButtonF_Down_16;
	// System.Boolean TechXR.Core.Sense.SenseInput::ButtonA_Press
	bool ___ButtonA_Press_17;
	// System.Boolean TechXR.Core.Sense.SenseInput::ButtonB_Press
	bool ___ButtonB_Press_18;
	// System.Boolean TechXR.Core.Sense.SenseInput::ButtonC_Press
	bool ___ButtonC_Press_19;
	// System.Boolean TechXR.Core.Sense.SenseInput::ButtonD_Press
	bool ___ButtonD_Press_20;
	// System.Boolean TechXR.Core.Sense.SenseInput::ButtonE_Press
	bool ___ButtonE_Press_21;
	// System.Boolean TechXR.Core.Sense.SenseInput::ButtonF_Press
	bool ___ButtonF_Press_22;
	// System.Single TechXR.Core.Sense.SenseInput::HorizontalInput
	float ___HorizontalInput_23;
	// System.Single TechXR.Core.Sense.SenseInput::VerticalInput
	float ___VerticalInput_24;
};

// TechXR.Core.Sense.SenseManager
struct SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TechXR.Core.Sense.Defs/PointerDisplayMode TechXR.Core.Sense.SenseManager::<CurrentPointerMode>k__BackingField
	int32_t ___U3CCurrentPointerModeU3Ek__BackingField_5;
	// TechXR.Core.Sense.SenseController TechXR.Core.Sense.SenseManager::m_SenseController
	SenseController_tABCD7B30A1AA3F0BAB5AC6050F2C699A566ADA48* ___m_SenseController_6;
	// TechXR.Core.Sense.LaserPointer TechXR.Core.Sense.SenseManager::m_LaserPointer
	LaserPointer_t16D0F974C5CCC33E600C322FFB605D6B7CB2B5A3* ___m_LaserPointer_7;
	// TechXR.Core.Sense.LaserPointerInputModule TechXR.Core.Sense.SenseManager::m_LaserPointerInput
	LaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6* ___m_LaserPointerInput_8;
	// UnityEngine.EventSystems.StandaloneInputModule TechXR.Core.Sense.SenseManager::m_StandaloneInput
	StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530* ___m_StandaloneInput_9;
	// TechXR.Core.Sense.TeleportManager TechXR.Core.Sense.SenseManager::m_TeleportManager
	TeleportManager_tAD810B203280055ABDE0A44548E696080148F3BE* ___m_TeleportManager_10;
	// UnityEngine.GameObject TechXR.Core.Sense.SenseManager::Joystick
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Joystick_11;
	// TechXR.Core.Sense.SenseManager/InputType TechXR.Core.Sense.SenseManager::m_InputType
	int32_t ___m_InputType_12;
	// System.Collections.Generic.Dictionary`2<TechXR.Core.Sense.SenseManager/InputType,System.Action> TechXR.Core.Sense.SenseManager::m_InputMap
	Dictionary_2_t80FEA5B79D158901F7724BC0BBF5836A8104227F* ___m_InputMap_13;
};

struct SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_StaticFields
{
	// TechXR.Core.Sense.SenseManager TechXR.Core.Sense.SenseManager::_instance
	SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* ____instance_4;
};

// TechXR.Core.Sense.SenseXRConnectivityStatus
struct SenseXRConnectivityStatus_t88F4187646A1231099F0A52CFA4CA2543D422558  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject TechXR.Core.Sense.SenseXRConnectivityStatus::XRController
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___XRController_4;
	// UnityEngine.GameObject TechXR.Core.Sense.SenseXRConnectivityStatus::DisconnectedInfo
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___DisconnectedInfo_5;
	// System.Boolean TechXR.Core.Sense.SenseXRConnectivityStatus::m_IsConnected
	bool ___m_IsConnected_6;
	// System.Boolean TechXR.Core.Sense.SenseXRConnectivityStatus::m_IsWarned
	bool ___m_IsWarned_7;
};

// TechXR.Core.Sense.TeleportManager
struct TeleportManager_tAD810B203280055ABDE0A44548E696080148F3BE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean TechXR.Core.Sense.TeleportManager::<TeleportMode>k__BackingField
	bool ___U3CTeleportModeU3Ek__BackingField_4;
	// TechXR.Core.Sense.Teleporter TechXR.Core.Sense.TeleportManager::VRTeleporter
	Teleporter_tACA9C5D8F933A0C3E1E86756B70BB18FC33DFC4A* ___VRTeleporter_5;
	// System.String TechXR.Core.Sense.TeleportManager::m_TelportButton
	String_t* ___m_TelportButton_6;
	// System.Boolean TechXR.Core.Sense.TeleportManager::m_DisplayFlag
	bool ___m_DisplayFlag_7;
	// UnityEngine.CharacterController TechXR.Core.Sense.TeleportManager::m_CharacterController
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___m_CharacterController_8;
};

// TechXR.Core.Sense.Teleporter
struct Teleporter_tACA9C5D8F933A0C3E1E86756B70BB18FC33DFC4A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject TechXR.Core.Sense.Teleporter::PositionMarker
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___PositionMarker_4;
	// UnityEngine.GameObject TechXR.Core.Sense.Teleporter::Dot
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Dot_5;
	// UnityEngine.Transform TechXR.Core.Sense.Teleporter::BodyTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___BodyTransform_6;
	// UnityEngine.LayerMask TechXR.Core.Sense.Teleporter::IncludeLayers
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___IncludeLayers_7;
	// System.Single TechXR.Core.Sense.Teleporter::Angle
	float ___Angle_8;
	// System.Single TechXR.Core.Sense.Teleporter::Strength
	float ___Strength_9;
	// System.Single TechXR.Core.Sense.Teleporter::VertexDelta
	float ___VertexDelta_10;
	// System.Int32 TechXR.Core.Sense.Teleporter::m_MaxVertexcount
	int32_t ___m_MaxVertexcount_11;
	// UnityEngine.LineRenderer TechXR.Core.Sense.Teleporter::m_ArcRenderer
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___m_ArcRenderer_12;
	// UnityEngine.Vector3 TechXR.Core.Sense.Teleporter::m_Velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Velocity_13;
	// UnityEngine.Vector3 TechXR.Core.Sense.Teleporter::m_GroundPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_GroundPos_14;
	// UnityEngine.Vector3 TechXR.Core.Sense.Teleporter::m_LastNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_LastNormal_15;
	// System.Int32 TechXR.Core.Sense.Teleporter::m_MaxRayPoints
	int32_t ___m_MaxRayPoints_16;
	// System.Boolean TechXR.Core.Sense.Teleporter::m_GroundDetected
	bool ___m_GroundDetected_17;
	// System.Boolean TechXR.Core.Sense.Teleporter::m_DisplayActive
	bool ___m_DisplayActive_18;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> TechXR.Core.Sense.Teleporter::m_VertexList
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___m_VertexList_19;
	// System.Collections.Generic.List`1<UnityEngine.Transform> TechXR.Core.Sense.Teleporter::m_DotList
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___m_DotList_20;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.UIIgnoreRaycast
struct UIIgnoreRaycast_t9935ECC85F04CCC85F6EB74F6F331618AE60C079  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// TechXR.Core.Sense.XRModeSwitch
struct XRModeSwitch_t711B273AD5CA47A8B17ED7D4B7CA7A232C3B39C4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single TechXR.Core.Sense.XRModeSwitch::EyeSeparation
	float ___EyeSeparation_4;
	// System.Single TechXR.Core.Sense.XRModeSwitch::NearClipPlane
	float ___NearClipPlane_5;
	// System.Single TechXR.Core.Sense.XRModeSwitch::FarClipPlane
	float ___FarClipPlane_6;
	// System.Single TechXR.Core.Sense.XRModeSwitch::FieldOfView
	float ___FieldOfView_7;
	// System.Boolean TechXR.Core.Sense.XRModeSwitch::IsAR
	bool ___IsAR_8;
	// System.Boolean TechXR.Core.Sense.XRModeSwitch::IsStereo
	bool ___IsStereo_9;
	// UnityEngine.GameObject TechXR.Core.Sense.XRModeSwitch::leftEyeCamera
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___leftEyeCamera_10;
	// UnityEngine.GameObject TechXR.Core.Sense.XRModeSwitch::rightEyeCamera
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___rightEyeCamera_11;
	// UnityEngine.GameObject TechXR.Core.Sense.XRModeSwitch::monoCamera
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___monoCamera_12;
};

// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.BaseInputModule::m_RaycastResultCache
	List_1_t8292C421BBB00D7661DC07462822936152BAB446* ___m_RaycastResultCache_4;
	// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::m_AxisEventData
	AxisEventData_t4AA742BC101B1AA300B16EE7F19E31B91F37A938* ___m_AxisEventData_5;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_6;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::m_BaseEventData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_BaseEventData_7;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_InputOverride
	BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622* ___m_InputOverride_8;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_DefaultInput
	BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622* ___m_DefaultInput_9;
};

// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.BaseRaycaster::m_RootRaycaster
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___m_RootRaycaster_4;
};

// TechXR.Core.Utils.DataManager
struct DataManager_t40CBB9B632C0C9F415E38AAFDBFC8C84FA458E1E  : public Singleton_1_tC289D00A047C79313DA529AB7DBBA764BAF771F4
{
	// System.Int32 TechXR.Core.Utils.DataManager::m_DataLoadedCounter
	int32_t ___m_DataLoadedCounter_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> TechXR.Core.Utils.DataManager::m_Data
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___m_Data_6;
	// System.Collections.Generic.List`1<System.String> TechXR.Core.Utils.DataManager::m_Paths
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___m_Paths_7;
	// System.Boolean TechXR.Core.Utils.DataManager::m_LocalData
	bool ___m_LocalData_8;
	// System.UInt32 TechXR.Core.Utils.DataManager::m_LoadCount
	uint32_t ___m_LoadCount_9;
};

// TechXR.Core.Utils.EventManager
struct EventManager_t549C00EDCE4BC703024CB8204FDD317602311CA8  : public Singleton_1_tDE48F5D43D6ACE2A85EB85E8B734CF741D8D4306
{
	// System.Collections.Generic.Dictionary`2<TechXR.Core.Sense.SenseEvent,TechXR.Core.Sense.SenseEventDelegate> TechXR.Core.Utils.EventManager::mEventRegistry
	Dictionary_2_t7501747BA89320958ACDB6ED070D99A6C7A3E6CB* ___mEventRegistry_5;
	// System.String TechXR.Core.Utils.EventManager::strEventKey
	String_t* ___strEventKey_6;
	// TechXR.Core.Sense.SenseEventDelegate TechXR.Core.Utils.EventManager::d
	SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C* ___d_7;
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
};

struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// TechXR.Core.Sense.LaserPointer
struct LaserPointer_t16D0F974C5CCC33E600C322FFB605D6B7CB2B5A3  : public IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F
{
	// System.Boolean TechXR.Core.Sense.LaserPointer::ButtonState
	bool ___ButtonState_17;
	// System.Boolean TechXR.Core.Sense.LaserPointer::m_PrevButtonState
	bool ___m_PrevButtonState_18;
	// System.Boolean TechXR.Core.Sense.LaserPointer::m_ButtonChanged
	bool ___m_ButtonChanged_19;
	// UnityEngine.GameObject TechXR.Core.Sense.LaserPointer::m_CurrentGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentGameObject_20;
};

// TechXR.Core.Sense.OculusBridge
struct OculusBridge_t7AEB3911A89CBEA0708DE5D82554AF2C00B8B1EC  : public Singleton_1_tB3F117CD016202C931C3F5A781A2A0D7E69FCD94
{
};

// TechXR.Core.Sense.SenseXR
struct SenseXR_t7B7241CE97061BA7BC71E3D9D061CD88F22ED7CA  : public Singleton_1_t5AA3D1D13FDB0CDFED5F4B19749050F99CE96E46
{
};

// TechXR.Core.Sense.SenseXRTrackingStatus
struct SenseXRTrackingStatus_tACCC33CEC9913BC93FE7C43E0A456A424AE42164  : public DefaultObserverEventHandler_t7CF27A0CC5B1FAEDDB5964C3A11F29C2A14E1FC0
{
	// System.Boolean TechXR.Core.Sense.SenseXRTrackingStatus::m_IsTrackingLost
	bool ___m_IsTrackingLost_14;
};

// TechXR.Core.Utils.StateManager
struct StateManager_t0ECEE8223C864D7804BFC59A3EFAE27D46F5C9C1  : public Singleton_1_t62FD18177113694BFBF5D00029441528F05D3123
{
	// System.String TechXR.Core.Utils.StateManager::<GrabMode>k__BackingField
	String_t* ___U3CGrabModeU3Ek__BackingField_7;
};

struct StateManager_t0ECEE8223C864D7804BFC59A3EFAE27D46F5C9C1_StaticFields
{
	// System.String TechXR.Core.Utils.StateManager::GRAB_MODE_NEAR
	String_t* ___GRAB_MODE_NEAR_5;
	// System.String TechXR.Core.Utils.StateManager::GRAB_MODE_FAR
	String_t* ___GRAB_MODE_FAR_6;
};

// VariableJoystick
struct VariableJoystick_t0D4819C1014E858778B0C435BF7D81EB0487B68E  : public Joystick_tCD6542D65EBEE70A3B835333479AB75329325D0C
{
	// System.Single VariableJoystick::moveThreshold
	float ___moveThreshold_15;
	// JoystickType VariableJoystick::joystickType
	int32_t ___joystickType_16;
	// UnityEngine.Vector2 VariableJoystick::fixedPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___fixedPosition_17;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.EventSystems.PhysicsRaycaster
struct PhysicsRaycaster_t0ACA9046D8D0B195B59DB1F7CA4DD6BB634A56DD  : public BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832
{
	// UnityEngine.Camera UnityEngine.EventSystems.PhysicsRaycaster::m_EventCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_EventCamera_6;
	// UnityEngine.LayerMask UnityEngine.EventSystems.PhysicsRaycaster::m_EventMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_EventMask_7;
	// System.Int32 UnityEngine.EventSystems.PhysicsRaycaster::m_MaxRayIntersections
	int32_t ___m_MaxRayIntersections_8;
	// System.Int32 UnityEngine.EventSystems.PhysicsRaycaster::m_LastMaxRayIntersections
	int32_t ___m_LastMaxRayIntersections_9;
	// UnityEngine.RaycastHit[] UnityEngine.EventSystems.PhysicsRaycaster::m_Hits
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___m_Hits_10;
};

// UnityEngine.EventSystems.PointerInputModule
struct PointerInputModule_tD71E11FA989C22D83883E120EAA4F05929907556  : public BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1
{
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData> UnityEngine.EventSystems.PointerInputModule::m_PointerData
	Dictionary_2_t489B023479196B8FC9709A9F834FC38729BD9493* ___m_PointerData_14;
	// UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.PointerInputModule::m_MouseState
	MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* ___m_MouseState_15;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530  : public PointerInputModule_tD71E11FA989C22D83883E120EAA4F05929907556
{
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_PrevActionTime
	float ___m_PrevActionTime_16;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMoveVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LastMoveVector_17;
	// System.Int32 UnityEngine.EventSystems.StandaloneInputModule::m_ConsecutiveMoveCount
	int32_t ___m_ConsecutiveMoveCount_18;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMousePosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LastMousePosition_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_MousePosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_MousePosition_20;
	// UnityEngine.GameObject UnityEngine.EventSystems.StandaloneInputModule::m_CurrentFocusedGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentFocusedGameObject_21;
	// UnityEngine.EventSystems.PointerEventData UnityEngine.EventSystems.StandaloneInputModule::m_InputPointerEvent
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___m_InputPointerEvent_22;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_HorizontalAxis
	String_t* ___m_HorizontalAxis_23;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_VerticalAxis
	String_t* ___m_VerticalAxis_24;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_SubmitButton
	String_t* ___m_SubmitButton_25;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_CancelButton
	String_t* ___m_CancelButton_26;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_InputActionsPerSecond
	float ___m_InputActionsPerSecond_27;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_RepeatDelay
	float ___m_RepeatDelay_28;
	// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::m_ForceModuleActive
	bool ___m_ForceModuleActive_29;
};

// TechXR.Core.Sense.LaserPointerInputModule
struct LaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6  : public StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530
{
	// UnityEngine.LayerMask TechXR.Core.Sense.LaserPointerInputModule::layerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___layerMask_30;
	// UnityEngine.Camera TechXR.Core.Sense.LaserPointerInputModule::UICamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___UICamera_32;
	// UnityEngine.EventSystems.PhysicsRaycaster TechXR.Core.Sense.LaserPointerInputModule::Raycaster
	PhysicsRaycaster_t0ACA9046D8D0B195B59DB1F7CA4DD6BB634A56DD* ___Raycaster_33;
	// System.Collections.Generic.HashSet`1<TechXR.Core.Sense.IUILaserPointer> TechXR.Core.Sense.LaserPointerInputModule::m_Controllers
	HashSet_1_t36F9643F257BBFD6423DA3BB8A6ABEB6252ECF0B* ___m_Controllers_34;
	// System.Collections.Generic.Dictionary`2<TechXR.Core.Sense.IUILaserPointer,TechXR.Core.Sense.ControllerData> TechXR.Core.Sense.LaserPointerInputModule::m_ControllerData
	Dictionary_2_t5849E900B482EF522536990076C17609372C55CE* ___m_ControllerData_35;
};

struct LaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6_StaticFields
{
	// TechXR.Core.Sense.LaserPointerInputModule TechXR.Core.Sense.LaserPointerInputModule::_instance
	LaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6* ____instance_31;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Canvas[]
struct CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841  : public RuntimeArray
{
	ALIGN_FIELD (8) Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* m_Items[1];

	inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.EventSystems.RaycastResult[]
struct RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7  : public RuntimeArray
{
	ALIGN_FIELD (8) RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 m_Items[1];

	inline RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___module_1), (void*)NULL);
		#endif
	}
	inline RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___module_1), (void*)NULL);
		#endif
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T TechXR.Core.Utils.SingletonScriptableObject`1<System.Object>::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SingletonScriptableObject_1_get_Instance_m30E72CBB6A0BED5B6AEE74700D04A44CB5C53F6C_gshared (const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Utils.SingletonScriptableObject`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingletonScriptableObject_1__ctor_m3EDC931E7C78773A2C895281210AEA97666FBAC7_gshared (SingletonScriptableObject_1_t28C7D55BA86EE222F4C540FD168037A6D28F817A* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Resources::FindObjectsOfTypeAll<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Resources_FindObjectsOfTypeAll_TisRuntimeObject_m5C85593AB0779ED746918A1F2DB94A678C17110A_gshared (const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<System.Object>(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ExecuteEvents_GetEventHandler_TisRuntimeObject_mCC6FD728B0AB18205C62403EB509BBF746BCBE2B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___root0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m88ECE219176F771E4C5F913CC01FFCF91E93E3D0_gshared_inline (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::ExecuteHierarchy<System.Object>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_mE7193CDED91D2857455C645004C9195F9703899B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___root0, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___eventData1, EventFunction_1_t297B5C47242D1B98BEC955E2804FA142B43E7927* ___callbackFunction2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<System.Object>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExecuteEvents_Execute_TisRuntimeObject_mA38648BA98D96A3CE0DA4CE52C77A35E29F8E952_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target0, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___eventData1, EventFunction_1_t297B5C47242D1B98BEC955E2804FA142B43E7927* ___functor2, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// T TechXR.Core.Utils.Singleton`1<System.Object>::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Singleton_1_get_Instance_mD5E0606373477D89A50145641D9A1FF3881F5D9F_gshared (const RuntimeMethod* method) ;
// System.Void TechXR.Core.Utils.Singleton`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Singleton_1__ctor_m6EE9B05A53B14A2A767DBD41E0431718AFF9A2F4_gshared (Singleton_1_tF9BF91836F04B0CE8B9A9E2ED168AACD15FFD864* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mC515884C0546021A29DC0A00DBCABD89B1B65872_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m9C4302CCAE3C1BF70D02091D0E0CED7663F18211_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___key0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCC9983804D8DC41E938E080075F9EA7BDD0C7059_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared (const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m874C59716993973F0A52C848B20C70C26DB9BCF7_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m78DDC81EE49FB9D4194E83685FFED445DFDB75CA_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD8A6CDD5C954C86D2150FCFF1B76EB62F35A881D_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m763AA956A8325F527F831F49E2563FF2871A680E_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void BackgroundPlaneController/<SetBGPlane>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetBGPlaneU3Ed__1__ctor_mACA7C748BBAA230CC23217EDC5F9944F300E3E09 (U3CSetBGPlaneU3Ed__1_t4A8693A86BED3690DE38286879C5C89986D9A851* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator BackgroundPlaneController::SetBGPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BackgroundPlaneController_SetBGPlane_mE86912C9BA03C5533CA1C9EB2C1C8F4DD9EE7266 (BackgroundPlaneController_tD3F10264B3C6602A4D2C3C07D5A361D8A1A00D6B* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9 (String_t* ___tag0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, String_t* ___n0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Joystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_Start_mEECB3448F00CD3BC9338766C48A34CF69B132B35 (Joystick_tCD6542D65EBEE70A3B835333479AB75329325D0C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Void VariableJoystick::SetMode(JoystickType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_SetMode_mD3AD9458D2957D244A71FAD8280CC75BCE1FEA54 (VariableJoystick_t0D4819C1014E858778B0C435BF7D81EB0487B68E* __this, int32_t ___joystickType0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Joystick::ScreenPointToAnchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Joystick_ScreenPointToAnchoredPosition_m7E57657C741D0313DE83AC24D0FEEE6D7C5E4168 (Joystick_tCD6542D65EBEE70A3B835333479AB75329325D0C* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition0, const RuntimeMethod* method) ;
// System.Void Joystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerDown_m0E1A372C5B62B2A133A39BDE7F9C3BBBD1DC8209 (Joystick_tCD6542D65EBEE70A3B835333479AB75329325D0C* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) ;
// System.Void Joystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerUp_mEEFF3FB6CCD9866FF0C2F6F60886FB97733AF816 (Joystick_tCD6542D65EBEE70A3B835333479AB75329325D0C* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m6158066AFB36810D63D98EABF0FABEFFC647B2A0_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Void Joystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_HandleInput_m39336DFB28E7AAB9F6C0EED4B408F983A05BAE63 (Joystick_tCD6542D65EBEE70A3B835333479AB75329325D0C* __this, float ___magnitude0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___normalised1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radius2, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam3, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// System.Void Joystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick__ctor_m6E9BE1DD3228BE0ED449E9DC3EA73EC67E45A238 (Joystick_tCD6542D65EBEE70A3B835333479AB75329325D0C* __this, const RuntimeMethod* method) ;
// System.Single Joystick::SnapFloat(System.Single,AxisOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_SnapFloat_m2B739DF29F69787F35360A94A6521D44DCD1A923 (Joystick_tCD6542D65EBEE70A3B835333479AB75329325D0C* __this, float ___value0, int32_t ___snapAxis1, const RuntimeMethod* method) ;
// System.Single Joystick::get_Horizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Horizontal_m2F7CBF32653F738D9C24E7AD6DD20592F298C3D0 (Joystick_tCD6542D65EBEE70A3B835333479AB75329325D0C* __this, const RuntimeMethod* method) ;
// System.Single Joystick::get_Vertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Vertical_mA966D5867E87519AAEFABF299EDF6C02AFD52250 (Joystick_tCD6542D65EBEE70A3B835333479AB75329325D0C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// AxisOptions Joystick::get_AxisOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Joystick_get_AxisOptions_m9ED3008FFF6AA0B007B51600AA6117865FE302A2 (Joystick_tCD6542D65EBEE70A3B835333479AB75329325D0C* __this, const RuntimeMethod* method) ;
// System.Void Joystick::set_HandleRange(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_HandleRange_mCAB7B7BCC3946883E7520D5B62814AAC5B40F5D8 (Joystick_tCD6542D65EBEE70A3B835333479AB75329325D0C* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Joystick::set_DeadZone(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_DeadZone_mE2DC3E039D139F13210BC2277561C45CBD3DC4FB (Joystick_tCD6542D65EBEE70A3B835333479AB75329325D0C* __this, float ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponentInParent<UnityEngine.Canvas>()
inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_pivot(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnDrag_m8D4ECB1799D617DC59247D71878702523278D3A2 (Joystick_tCD6542D65EBEE70A3B835333479AB75329325D0C* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) ;
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Canvas_get_renderMode_m1BEF259548C6CAD27E4466F31D20752D246688CC (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::WorldToScreenPoint(UnityEngine.Camera,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransformUtility_WorldToScreenPoint_m5629068CE7C8D2E654F8F529E89DC5802F3452BB (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPoint1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Canvas::get_scaleFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Canvas_get_scaleFactor_m6B8D694A68376EE5E13D9B0B0F037E2E90C99921 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_mB1CA903ACF933DB0BE2016D105BB2B4702CF1004_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Void Joystick::FormatInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_FormatInput_mD271F64EB0724B71476075F27BC0B14FD418137E (Joystick_tCD6542D65EBEE70A3B835333479AB75329325D0C* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_mF4D6DB00DEA7D055940165B85FFE1CEF6F7CD3AA_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Angle(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Angle_m9668B13074D1664DD192669C14B3A8FC01676299_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___from0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___to1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m9E502D410F5B141117D263D4706C426EFA109DC0 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rect0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPoint1, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___localPoint3, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_pivot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchorMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_anchorMax_mEF870BE2A134CEB9C2326930A71D3961271297DB (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7 (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void TechXR.Core.Sense.FixedExpiryLicense::SetStartDate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedExpiryLicense_SetStartDate_m16A54DD4447C19C98BCAB9B2782BDDAF3097D52F (FixedExpiryLicense_t66BF4FCE9006D57DF5CC0E7C646D7F1D781D97C1* __this, const RuntimeMethod* method) ;
// System.Double TechXR.Core.Sense.FixedExpiryLicense::GetDaysPassed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double FixedExpiryLicense_GetDaysPassed_mC6E5847AB644BFB0A09DB9848F9FF95E2C8689C6 (FixedExpiryLicense_t66BF4FCE9006D57DF5CC0E7C646D7F1D781D97C1* __this, const RuntimeMethod* method) ;
// System.Double TechXR.Core.Sense.FixedExpiryLicense::GetRemainingDays()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double FixedExpiryLicense_GetRemainingDays_m29C91ACF29FA53495A1746C7A59B881D78B2CD59 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F (String_t* ___key0, const RuntimeMethod* method) ;
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mA00D069B851DAD77C64D641539889BFD58A8AA92 (String_t* ___key0, const RuntimeMethod* method) ;
// System.DateTime System.Convert::ToDateTime(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Convert_ToDateTime_mB46B1ABD4F03D21115949353F0133B722B7E972E (String_t* ___value0, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0 (const RuntimeMethod* method) ;
// System.String System.DateTime::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m447C83E1F8FFFFF4D20C0F7D5C18DEB160F9833A (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) ;
// System.TimeSpan System.DateTime::Subtract(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTime_Subtract_m4064A98F489219E9C414DF5C03EE041351B4502A (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) ;
// System.Double System.TimeSpan::get_TotalDays()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalDays_m7B3557D0DD79E39DFC6C08BAC756B1B5DE2D4108 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_m1F66A4327FE6B127F0F0E83A70CED25DB0DFFB00 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, const RuntimeMethod* method) ;
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTime_op_Subtraction_m41335EF0E6DCD52B23C64916CB973A0B4A9E0387 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d10, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d21, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void TechXR.Core.Sense.FixedExpiryLicense::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedExpiryLicense__ctor_m48393252B1DC0E5FF28AF03556347AB8379675AA (FixedExpiryLicense_t66BF4FCE9006D57DF5CC0E7C646D7F1D781D97C1* __this, const RuntimeMethod* method) ;
// T TechXR.Core.Utils.SingletonScriptableObject`1<TechXR.Core.Sense.TechXRConfiguration>::get_Instance()
inline TechXRConfiguration_t995E9151CF60B71D35B08C4A39098AC8D06BDAD0* SingletonScriptableObject_1_get_Instance_m67B784EE6495BA709A0B9826E60378ADAFBDDBF2 (const RuntimeMethod* method)
{
	return ((  TechXRConfiguration_t995E9151CF60B71D35B08C4A39098AC8D06BDAD0* (*) (const RuntimeMethod*))SingletonScriptableObject_1_get_Instance_m30E72CBB6A0BED5B6AEE74700D04A44CB5C53F6C_gshared)(method);
}
// System.String TechXR.Core.Sense.TechXRConfiguration::get_LicenseKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TechXRConfiguration_get_LicenseKey_m318E8264B0BEE63874DC10EEC9B083FBB2813D51 (TechXRConfiguration_t995E9151CF60B71D35B08C4A39098AC8D06BDAD0* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<co.techxr.unity.model.LoginResponse>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m9480CF4CF03E9C10343BFCD73D233179380C6F20 (Action_1_t364C94423BE312DFF449DB8389178799569DCF01* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t364C94423BE312DFF449DB8389178799569DCF01*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`1<co.techxr.unity.exceptions.XrException>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m677A92FFE341D3FD26C7EDA1D6A7F4E2B8806696 (Action_1_t77330DAB4B6364644857E237915461B112A9D589* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t77330DAB4B6364644857E237915461B112A9D589*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.String co.techxr.unity.model.LoginResponse::get_access_token()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoginResponse_get_access_token_mE72019AFCDC2B5E9AECD0144D4C92260091833C2_inline (LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.network.Url::setEditorMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Url_setEditorMode_mA367BC5C1860CB8E4E7EFFA72F9ABD8D1573EC29 (bool ___mode0, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.network.Url::setBaseUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Url_setBaseUrl_m6B947FD7456134084E935B99503C45645E050695 (String_t* ___url0, const RuntimeMethod* method) ;
// System.Void co.techxr.unity.network.LicenseService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LicenseService__ctor_m53521AA6FC5F8F72E2301B8A06B7ED9235927563 (LicenseService_t6FFDDF25E97C8C6A850DBB9EED03DE9E9DFFE759* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void co.techxr.unity.network.LicenseService::registerLicense(System.String,System.Action`1<co.techxr.unity.model.LoginResponse>,System.Action`1<co.techxr.unity.exceptions.XrException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LicenseService_registerLicense_m1F004768128B97E5F8B5D1431737790C3009F9D3 (LicenseService_t6FFDDF25E97C8C6A850DBB9EED03DE9E9DFFE759* __this, String_t* ___licenseKey0, Action_1_t364C94423BE312DFF449DB8389178799569DCF01* ___successCallback1, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___errorCallback2, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Utils.SingletonScriptableObject`1<TechXR.Core.Sense.TechXRConfiguration>::.ctor()
inline void SingletonScriptableObject_1__ctor_m1B44A6757EFCF818D18A52A3ECA994286FA34B11 (SingletonScriptableObject_1_tA898FCDB45DF9AC26B67549B9FD0B77E0E39292D* __this, const RuntimeMethod* method)
{
	((  void (*) (SingletonScriptableObject_1_tA898FCDB45DF9AC26B67549B9FD0B77E0E39292D*, const RuntimeMethod*))SingletonScriptableObject_1__ctor_m3EDC931E7C78773A2C895281210AEA97666FBAC7_gshared)(__this, method);
}
// System.Void UnityEngine.EventSystems.PointerEventData::.ctor(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventData__ctor_m63837790B68893F0022CCEFEF26ADD55A975F71C (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___eventSystem0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.AbstractEventData::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractEventData_Reset_mC3FF13B6FB1012E8FAB00250AE8CD2E1975EF6AC (AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7* __this, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.GyroScript/<Start>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__7__ctor_mEA32E105911ABA604A07F15588A66D6AEB07E9D6 (U3CStartU3Ed__7_t2482C4AD1915332F390CE3E730A4483A1CE3AC60* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D (const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.GyroScript::ApplyGyroRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GyroScript_ApplyGyroRotation_m959C47DEF957FBF9F0DF483625FA62A5EB0F1463 (GyroScript_tD8E851D88E999B441E345C7A458CC62E12F18D3E* __this, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.GyroScript::ApplyCalibration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GyroScript_ApplyCalibration_mD44DF1BA07776CBA23ABE772DB49160CEAE2D9F9 (GyroScript_tD8E851D88E999B441E345C7A458CC62E12F18D3E* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Slerp_m5FDA8C178E7EB209B43845F73263AFE9C02F3949 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.GyroScript/<CalibrateYAngle>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCalibrateYAngleU3Ed__9__ctor_m511F60C863C6A7B1531B4505851BF4AEA81891C9 (U3CCalibrateYAngleU3Ed__9_tBB8137A2FE8B1DE92983BB1B288053B2D5AD5096* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.Gyroscope UnityEngine.Input::get_gyro()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* Input_get_gyro_m5A5F30FDF6BBA469C0C71EF7FC6E02E7FC08CCFC (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Gyroscope::get_attitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Gyroscope_get_attitude_mF6D8131ED2D0E5BF979C7FC4AAC99E87A01CBE85 (Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mE12DB27208410BB7090FA117D53DBEBBC0A36B30 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, int32_t ___relativeTo3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator TechXR.Core.Sense.GyroScript::CalibrateYAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GyroScript_CalibrateYAngle_m711AD666B7B92BB26F75F79CD6D205418475E293 (GyroScript_tD8E851D88E999B441E345C7A458CC62E12F18D3E* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* GameObject_FindGameObjectsWithTag_m63AB9863553265F03EDE4C11AEA98AF591CAEA1E (String_t* ___tag0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gyroscope::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gyroscope_set_enabled_m2B22BC93369BA61034A80350405FE1B493822DAB (Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_set_targetFrameRate_m794A13DC5116C506B042663606691257CF3A7325 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___p0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_aspect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_aspect(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_aspect_m537F21B48FDD5C060DFF9D87F34F4FB2B0F9BEB6 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_nearClipPlane(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_nearClipPlane_m78482B5E4E0CE4C195D9CE0332AA75B2D9CCDDF6 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_farClipPlane(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_farClipPlane_m84EF39B09573168734613481FD979BFF31C60139 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_rect(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_rect_mA81158BC169AF8674DE240AE9460FC5A0EADBB19 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<TechXR.Core.Sense.GyroScript>()
inline GyroScript_tD8E851D88E999B441E345C7A458CC62E12F18D3E* GameObject_GetComponent_TisGyroScript_tD8E851D88E999B441E345C7A458CC62E12F18D3E_m2706485CC60637B4A0C56D5B5E29AEDD8F18415A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  GyroScript_tD8E851D88E999B441E345C7A458CC62E12F18D3E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void TechXR.Core.Sense.LicenseValidity/<Post>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPostU3Ed__2__ctor_m7DD6DC587FD41C177C95B67C0A685472E92548F7 (U3CPostU3Ed__2_t49B6E4E17B3C8C315C8E43B8A39DFCA56B6502AE* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator TechXR.Core.Sense.LicenseValidity::Post(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LicenseValidity_Post_m7470CFB208D2F7B4A80942801DFE045B89FC7A76 (LicenseValidity_tF7D6F5664477DE2ED0C427A798251611921AF372* __this, String_t* ___url0, String_t* ___key1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_mD4739B0BF1C4937479A83B24B531C6B819712A3E (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___url0, String_t* ___method1, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UploadHandlerRaw::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandlerRaw__ctor_m168C957B67E29CB3072E3542044D37E2F16C42B7 (UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::set_uploadHandler(UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_uploadHandler_m68F346550136DE178C79238944985892196027FE (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerBuffer__ctor_m5EE7C9E8AB468B2B937A7C9C66B4176A884147AF (DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::set_downloadHandler(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_downloadHandler_m6CB94492012097DFC44E5773D1A627753788292F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::SetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Int64 UnityEngine.Networking.UnityWebRequest::get_responseCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String System.Int64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B (int64_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.IUILaserPointer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUILaserPointer_Start_mA77AE7444236C1BCA790F47081C0398F4D4D0B32 (IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* __this, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.IUILaserPointer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUILaserPointer_Update_mA728EA87FD4D9FD8654361240E7508908C4C2B47 (IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.IUILaserPointer::ToggleDisplay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUILaserPointer_ToggleDisplay_m276423D1786EB6F7CCBCB0D5B9BC26B39B05D285 (IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* __this, bool ___flag0, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.IUILaserPointer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUILaserPointer__ctor_m99E31691ADDA49B3C0364AC5D86A15FC4878D987 (IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_CreatePrimitive_mE2F848626FE928B6E3810ABFB81867E619BB2507 (int32_t ___type0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.SphereCollider>()
inline SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* GameObject_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_mD342F4F06F3848B43732DD183CDDA00AED3EE0A0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.BoxCollider>()
inline BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* GameObject_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m704160C10BDAB9B54429D2DEB921575D3DF7622C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// TechXR.Core.Sense.LaserPointerInputModule TechXR.Core.Sense.LaserPointerInputModule::get_instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6* LaserPointerInputModule_get_instance_m20E7C1A8BC9113448FBF6CA3FE5CB98545A5CA6D (const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<TechXR.Core.Sense.LaserPointerInputModule>()
inline LaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6* GameObject_AddComponent_TisLaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6_mE7DEDEA422C4CBF8D672F87625628EB5A0F24579 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  LaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void TechXR.Core.Sense.LaserPointerInputModule::AddController(TechXR.Core.Sense.IUILaserPointer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaserPointerInputModule_AddController_m41D36B456AF7EB4F17F57CF013AD717DF5BC200E (LaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6* __this, IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* ___controller0, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.LaserPointerInputModule::RemoveController(TechXR.Core.Sense.IUILaserPointer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaserPointerInputModule_RemoveController_m133A6CD6459E94AD3550EF949E99A27410AA9C98 (LaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6* __this, IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* ___controller0, const RuntimeMethod* method) ;
// TechXR.Core.Sense.Defs/PointerDisplayMode TechXR.Core.Sense.SenseManager::get_CurrentPointerMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SenseManager_get_CurrentPointerMode_m31A0BF74F3B55255B3E99FF5449313DD77F8B574_inline (SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m07803863BB5A3896FA01061562532B21E1ED6D4A (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, const RuntimeMethod* method) ;
// System.Single UnityEngine.RaycastHit::get_distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.SenseManager::set_CurrentPointerMode(TechXR.Core.Sense.Defs/PointerDisplayMode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SenseManager_set_CurrentPointerMode_m9D137DF3C1C357F152F48AD7835248AF7E959010_inline (SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.IUILaserPointer::DisplayToggleOnModeChange(TechXR.Core.Sense.Defs/PointerDisplayMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUILaserPointer_DisplayToggleOnModeChange_m6B5978EB2FA88C88778ED76E72640FF9E6419317 (IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* __this, int32_t ___mode0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.UIBehaviour::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBehaviour_Awake_mDF9D1A4867C8E730C59A7CAE97709CA9B8F3A0F2 (UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.String UnityEngine.LayerMask::LayerToName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LayerMask_LayerToName_mC8423ADBD2CFF8218C0E572BF57A110C6E9ED62A (int32_t ___layer0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::GetMask(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_GetMask_mB1925EDF21896C48C8E2AE1C11BB1944F279181E (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___layerNames0, const RuntimeMethod* method) ;
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB LayerMask_op_Implicit_mDC9C22C4477684D460FCF25B1BFE6B54419FB922 (int32_t ___intVal0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.UIBehaviour::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBehaviour_Start_mB12643ED6D859CD3682B4BF5B9CA7F72E8A72B45 (UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.EventSystems.PhysicsRaycaster>()
inline PhysicsRaycaster_t0ACA9046D8D0B195B59DB1F7CA4DD6BB634A56DD* GameObject_AddComponent_TisPhysicsRaycaster_t0ACA9046D8D0B195B59DB1F7CA4DD6BB634A56DD_m7123B9A9CFB933EFCB54FFDAA5D010EA4393D53F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  PhysicsRaycaster_t0ACA9046D8D0B195B59DB1F7CA4DD6BB634A56DD* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_clearFlags_m66541D9CC43CBAA5FE7364A50D43CA5569FD4D93 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, int32_t ___value0, const RuntimeMethod* method) ;
// T[] UnityEngine.Resources::FindObjectsOfTypeAll<UnityEngine.Canvas>()
inline CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841* Resources_FindObjectsOfTypeAll_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m81C22C5AC148490C259C42D08470838D00F5D82D (const RuntimeMethod* method)
{
	return ((  CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841* (*) (const RuntimeMethod*))Resources_FindObjectsOfTypeAll_TisRuntimeObject_m5C85593AB0779ED746918A1F2DB94A678C17110A_gshared)(method);
}
// System.Void UnityEngine.Canvas::set_worldCamera(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canvas_set_worldCamera_m007F7DABDB5A3A6BFB043E3500DA82A4D936EDD4 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___value0, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.LaserPointerInputModule::ClearSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaserPointerInputModule_ClearSelection_m89CB5DF445873D5DA6D0988A8DCB5E766391D458 (LaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<UnityEngine.EventSystems.ISelectHandler>(UnityEngine.GameObject)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ExecuteEvents_GetEventHandler_TisISelectHandler_tA3030316ED9DF4943103C3101AD95FCD7765700D_m24416E302B1BDD2CCDDB58B1E20423E4B02F2D7A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___root0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))ExecuteEvents_GetEventHandler_TisRuntimeObject_mCC6FD728B0AB18205C62403EB509BBF746BCBE2B_gshared)(___root0, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::get_eventSystem()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* BaseInputModule_get_eventSystem_m341B2378F61A58D5432906B9EE1E12265E2FAB33_inline (BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.EventSystem::SetSelectedGameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystem_SetSelectedGameObject_m91382EAC4D552C672CC07BE7EB1481F156045280 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___selected0, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.ControllerData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerData__ctor_m9E127DB0068DB2AB1F6373407E243388FEDC0366 (ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<TechXR.Core.Sense.IUILaserPointer,TechXR.Core.Sense.ControllerData>::Add(TKey,TValue)
inline void Dictionary_2_Add_m646D9DA918FF7A0C181EE4B07A33DF287785AE9D (Dictionary_2_t5849E900B482EF522536990076C17609372C55CE* __this, IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* ___key0, ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5849E900B482EF522536990076C17609372C55CE*, IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F*, ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<TechXR.Core.Sense.IUILaserPointer,TechXR.Core.Sense.ControllerData>::Remove(TKey)
inline bool Dictionary_2_Remove_m951B7DF6CC2385D2F8C894738696A0F0A04B7429 (Dictionary_2_t5849E900B482EF522536990076C17609372C55CE* __this, IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5849E900B482EF522536990076C17609372C55CE*, IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___key0, method);
}
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_currentSelectedGameObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PhysicsRaycaster::set_eventMask(UnityEngine.LayerMask)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhysicsRaycaster_set_eventMask_mD5110BE565C7E3F1738369519D44587452CA056D_inline (PhysicsRaycaster_t0ACA9046D8D0B195B59DB1F7CA4DD6BB634A56DD* __this, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<TechXR.Core.Sense.IUILaserPointer,TechXR.Core.Sense.ControllerData>::GetEnumerator()
inline Enumerator_t1060918B355EAD604824F373C10145546D56F738 Dictionary_2_GetEnumerator_m743A8B1E084CC698FE9C863462627FC27101EBA0 (Dictionary_2_t5849E900B482EF522536990076C17609372C55CE* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1060918B355EAD604824F373C10145546D56F738 (*) (Dictionary_2_t5849E900B482EF522536990076C17609372C55CE*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<TechXR.Core.Sense.IUILaserPointer,TechXR.Core.Sense.ControllerData>::Dispose()
inline void Enumerator_Dispose_m1E1212FA0E8F578D814E21456C1D97EE0E0BDE0C (Enumerator_t1060918B355EAD604824F373C10145546D56F738* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1060918B355EAD604824F373C10145546D56F738*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<TechXR.Core.Sense.IUILaserPointer,TechXR.Core.Sense.ControllerData>::get_Current()
inline KeyValuePair_2_t0E243409C832CE9690A4E5AD88243B05DD3FBF02 Enumerator_get_Current_m79B82EAE3D5A1D671D2FD4D8C09CFA6A7C002972_inline (Enumerator_t1060918B355EAD604824F373C10145546D56F738* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t0E243409C832CE9690A4E5AD88243B05DD3FBF02 (*) (Enumerator_t1060918B355EAD604824F373C10145546D56F738*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<TechXR.Core.Sense.IUILaserPointer,TechXR.Core.Sense.ControllerData>::get_Key()
inline IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* KeyValuePair_2_get_Key_m89DDA518D40FEC5E3857DC3A5DA418BA2A8EE90E_inline (KeyValuePair_2_t0E243409C832CE9690A4E5AD88243B05DD3FBF02* __this, const RuntimeMethod* method)
{
	return ((  IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* (*) (KeyValuePair_2_t0E243409C832CE9690A4E5AD88243B05DD3FBF02*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<TechXR.Core.Sense.IUILaserPointer,TechXR.Core.Sense.ControllerData>::get_Value()
inline ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* KeyValuePair_2_get_Value_m2B9C5A8655A94A6FA7FB83B8EB6ECF1C7A2522BD_inline (KeyValuePair_2_t0E243409C832CE9690A4E5AD88243B05DD3FBF02* __this, const RuntimeMethod* method)
{
	return ((  ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* (*) (KeyValuePair_2_t0E243409C832CE9690A4E5AD88243B05DD3FBF02*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Void TechXR.Core.Sense.LaserPointerInputModule::UpdateCameraPosition(TechXR.Core.Sense.IUILaserPointer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaserPointerInputModule_UpdateCameraPosition_m7AE53F8B796FF61DF1A75FDFCDD73A6DB0733C5E (LaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6* __this, IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* ___controller0, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.LaserPointerEventData::.ctor(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaserPointerEventData__ctor_m0558BF06EE3155A19B620ABCCC88D437D5D840FC (LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A* __this, EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___e0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_delta(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_delta_mD200AF7CCAEAD92D947091902AF864CB4ACE0F1D_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Camera::get_pixelWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_pixelWidth_m55AC8AD744FC0179865C2E630C68F9AD0799065D (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Camera::get_pixelHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_pixelHeight_m00881B5A440B0018D5A8F837694027050B500F59 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_position(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.EventSystem::RaycastAll(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystem_RaycastAll_mE93CC75909438D20D17A0EF98348A064FBFEA528 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, List_1_t8292C421BBB00D7661DC07462822936152BAB446* ___raycastResults1, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.BaseInputModule::FindFirstRaycast(System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 BaseInputModule_FindFirstRaycast_m911AAA96B2E1178B5446F594B2BD30849FE4AA2B (List_1_t8292C421BBB00D7661DC07462822936152BAB446* ___candidates0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerCurrentRaycast(UnityEngine.EventSystems.RaycastResult)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pointerCurrentRaycast_m52E1E9E89BACACFA6E8F105191654C7E24A98667_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Clear()
inline void List_1_Clear_m88ECE219176F771E4C5F913CC01FFCF91E93E3D0_inline (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8292C421BBB00D7661DC07462822936152BAB446*, const RuntimeMethod*))List_1_Clear_m88ECE219176F771E4C5F913CC01FFCF91E93E3D0_gshared_inline)(__this, method);
}
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::get_pointerCurrentRaycast()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 PointerEventData_get_pointerCurrentRaycast_m1C6B7D707CEE9C6574DD443289D90102EDC7A2C4_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::get_gameObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* RaycastResult_get_gameObject_m77014B442B9E2D10F2CC3AEEDC07AA95CDE1E2F1_inline (RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.BaseInputModule::HandlePointerExitAndEnter(UnityEngine.EventSystems.PointerEventData,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseInputModule_HandlePointerExitAndEnter_m0815F06EAF8F937916E0656D66A69844CB211298 (BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___currentPointerData0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___newEnterTarget1, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pressPosition(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pressPosition_m85544FBAB798DABE70067508294A6C4841A95379_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerPressRaycast(UnityEngine.EventSystems.RaycastResult)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pointerPressRaycast_m55CA127474B4CBCA795A9C872B7630AAF766F852_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerPress(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventData_set_pointerPress_m51241AAA6E5F87ADEBBB8DB7D4452CE45200BEE8 (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler> UnityEngine.EventSystems.ExecuteEvents::get_pointerDownHandler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t00024D26E9CCD074EEBC25568B0383863A4CF117* ExecuteEvents_get_pointerDownHandler_mF03E3A959BA9C0FA008013C1A02AE0AF6042DF44_inline (const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::ExecuteHierarchy<UnityEngine.EventSystems.IPointerDownHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ExecuteEvents_ExecuteHierarchy_TisIPointerDownHandler_t42CC83619BB6295404D44090142F7726003CE573_mAAB1B55CF77D247B61D04981A59169EFFE9E0AFD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___root0, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___eventData1, EventFunction_1_t00024D26E9CCD074EEBC25568B0383863A4CF117* ___callbackFunction2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_t00024D26E9CCD074EEBC25568B0383863A4CF117*, const RuntimeMethod*))ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_mE7193CDED91D2857455C645004C9195F9703899B_gshared)(___root0, ___eventData1, ___callbackFunction2, method);
}
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IPointerDownHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
inline bool ExecuteEvents_Execute_TisIPointerDownHandler_t42CC83619BB6295404D44090142F7726003CE573_mC279421E43B3264277D0E8C36E8DA097F3BBB0E0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target0, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___eventData1, EventFunction_1_t00024D26E9CCD074EEBC25568B0383863A4CF117* ___functor2, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_t00024D26E9CCD074EEBC25568B0383863A4CF117*, const RuntimeMethod*))ExecuteEvents_Execute_TisRuntimeObject_mA38648BA98D96A3CE0DA4CE52C77A35E29F8E952_gshared)(___target0, ___eventData1, ___functor2, method);
}
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler> UnityEngine.EventSystems.ExecuteEvents::get_pointerClickHandler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t586168BFEFD0CF29A2B706B5411BF712BD73359E* ExecuteEvents_get_pointerClickHandler_m4BF7FB241BD3AE488E0E1BE900666ECC2F2DFA78_inline (const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::ExecuteHierarchy<UnityEngine.EventSystems.IPointerClickHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ExecuteEvents_ExecuteHierarchy_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_mB8FE7DAB045B9BC18C426E563C2584F49E97452A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___root0, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___eventData1, EventFunction_1_t586168BFEFD0CF29A2B706B5411BF712BD73359E* ___callbackFunction2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_t586168BFEFD0CF29A2B706B5411BF712BD73359E*, const RuntimeMethod*))ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_mE7193CDED91D2857455C645004C9195F9703899B_gshared)(___root0, ___eventData1, ___callbackFunction2, method);
}
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IPointerClickHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
inline bool ExecuteEvents_Execute_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_mB18F35F748E39943F1C1AE45EE7D15EBDF39833D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target0, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___eventData1, EventFunction_1_t586168BFEFD0CF29A2B706B5411BF712BD73359E* ___functor2, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_t586168BFEFD0CF29A2B706B5411BF712BD73359E*, const RuntimeMethod*))ExecuteEvents_Execute_TisRuntimeObject_mA38648BA98D96A3CE0DA4CE52C77A35E29F8E952_gshared)(___target0, ___eventData1, ___functor2, method);
}
// System.Void TechXR.Core.Sense.LaserPointerInputModule::Select(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaserPointerInputModule_Select_mA102346198BEA2EBAA16D1FFA86D5A0CE10685FC (LaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler> UnityEngine.EventSystems.ExecuteEvents::get_beginDragHandler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t5B9F26DC56564B82AEF63D8AFEEEADBAB365F403* ExecuteEvents_get_beginDragHandler_m330A9FEFFAF518FC1DAABE7A425BEB345B019421_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IBeginDragHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
inline bool ExecuteEvents_Execute_TisIBeginDragHandler_t0E0386CCAB531BD8291D12476D40D19AA98ED7EB_m186924444C6950BA260CFE27CEFE0F76402342A2 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target0, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___eventData1, EventFunction_1_t5B9F26DC56564B82AEF63D8AFEEEADBAB365F403* ___functor2, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_t5B9F26DC56564B82AEF63D8AFEEEADBAB365F403*, const RuntimeMethod*))ExecuteEvents_Execute_TisRuntimeObject_mA38648BA98D96A3CE0DA4CE52C77A35E29F8E952_gshared)(___target0, ___eventData1, ___functor2, method);
}
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerDrag(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pointerDrag_m0E8D72362B07962843671C39ADC8F4D5E4915010_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler> UnityEngine.EventSystems.ExecuteEvents::get_endDragHandler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t33BA7CA3F9202146F70BE77589CE24F7451C584C* ExecuteEvents_get_endDragHandler_m6F1588E368AD932233A5E6BCD8D7259E9C5B921E_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IEndDragHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
inline bool ExecuteEvents_Execute_TisIEndDragHandler_t9A93E4A27E7CEED446E5FE3DACF39B1A552C23A9_mF257FA331CEC3705FC5A620859468C5B9AF0F756 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target0, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___eventData1, EventFunction_1_t33BA7CA3F9202146F70BE77589CE24F7451C584C* ___functor2, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_t33BA7CA3F9202146F70BE77589CE24F7451C584C*, const RuntimeMethod*))ExecuteEvents_Execute_TisRuntimeObject_mA38648BA98D96A3CE0DA4CE52C77A35E29F8E952_gshared)(___target0, ___eventData1, ___functor2, method);
}
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler> UnityEngine.EventSystems.ExecuteEvents::get_dropHandler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_tB3864D36512C3A896DAC44E898E5D9E1A92CB733* ExecuteEvents_get_dropHandler_m61ECC86CEAC77AA7C7E7793F6241D2413858354C_inline (const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::ExecuteHierarchy<UnityEngine.EventSystems.IDropHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ExecuteEvents_ExecuteHierarchy_TisIDropHandler_t9F3B358BA4812886852E9AB85A653ABF73B9AA35_m4C9DA44082FBE5886FBFBFE66CBC89771C7971C5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___root0, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___eventData1, EventFunction_1_tB3864D36512C3A896DAC44E898E5D9E1A92CB733* ___callbackFunction2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_tB3864D36512C3A896DAC44E898E5D9E1A92CB733*, const RuntimeMethod*))ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_mE7193CDED91D2857455C645004C9195F9703899B_gshared)(___root0, ___eventData1, ___callbackFunction2, method);
}
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler> UnityEngine.EventSystems.ExecuteEvents::get_pointerUpHandler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t919A3841A202FB8C678BC0172FAB7E2F79B88AD8* ExecuteEvents_get_pointerUpHandler_mD03905CA3A384EC6AA81326758AB878087DC8C86_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IPointerUpHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
inline bool ExecuteEvents_Execute_TisIPointerUpHandler_tB2D4D0ABEAFF77BE8D0159D638D85E1AF7BAF210_m9FC5FE3B9CC6D87743F88BD3B2B437653DF82673 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target0, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___eventData1, EventFunction_1_t919A3841A202FB8C678BC0172FAB7E2F79B88AD8* ___functor2, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_t919A3841A202FB8C678BC0172FAB7E2F79B88AD8*, const RuntimeMethod*))ExecuteEvents_Execute_TisRuntimeObject_mA38648BA98D96A3CE0DA4CE52C77A35E29F8E952_gshared)(___target0, ___eventData1, ___functor2, method);
}
// System.Void UnityEngine.EventSystems.PointerEventData::set_rawPointerPress(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_rawPointerPress_mEEC4E3C7CD00F1DDCD3DA98DA5837E71BB8455E3_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler> UnityEngine.EventSystems.ExecuteEvents::get_dragHandler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t37D97D8E7BDC68938191F138BFE31C7BEFCF855E* ExecuteEvents_get_dragHandler_m301F931ED0A78DBF5838822F836FBD221A57C76A_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IDragHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
inline bool ExecuteEvents_Execute_TisIDragHandler_t9FF2B3D79AB401D7E2485254973D15C0F117D00D_m0E5281FDDCB78D969625ECB14A393CA5D572C3A8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target0, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___eventData1, EventFunction_1_t37D97D8E7BDC68938191F138BFE31C7BEFCF855E* ___functor2, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_t37D97D8E7BDC68938191F138BFE31C7BEFCF855E*, const RuntimeMethod*))ExecuteEvents_Execute_TisRuntimeObject_mA38648BA98D96A3CE0DA4CE52C77A35E29F8E952_gshared)(___target0, ___eventData1, ___functor2, method);
}
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler> UnityEngine.EventSystems.ExecuteEvents::get_updateSelectedHandler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_tB9684C6044C44F9A8317A5E5A9A3C1C0376A4678* ExecuteEvents_get_updateSelectedHandler_mB63CDEA5DE1C37F2E0974E9E9679686627E924E6_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IUpdateSelectedHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
inline bool ExecuteEvents_Execute_TisIUpdateSelectedHandler_tBBACEC3A6478F7DA4B682AFDA8CF59C6C3FCC9CC_m29048196EE9931B2E91B895CA98BCBBE2418E0B0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target0, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___eventData1, EventFunction_1_tB9684C6044C44F9A8317A5E5A9A3C1C0376A4678* ___functor2, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_tB9684C6044C44F9A8317A5E5A9A3C1C0376A4678*, const RuntimeMethod*))ExecuteEvents_Execute_TisRuntimeObject_mA38648BA98D96A3CE0DA4CE52C77A35E29F8E952_gshared)(___target0, ___eventData1, ___functor2, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<TechXR.Core.Sense.IUILaserPointer,TechXR.Core.Sense.ControllerData>::MoveNext()
inline bool Enumerator_MoveNext_m64744B7BEC10CDC9053D8C9BF62A21CA0FCDB036 (Enumerator_t1060918B355EAD604824F373C10145546D56F738* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1060918B355EAD604824F373C10145546D56F738*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<TechXR.Core.Sense.IUILaserPointer,TechXR.Core.Sense.ControllerData>::.ctor()
inline void Dictionary_2__ctor_mAE76465455077EF392B2D6707842134610BC0979 (Dictionary_2_t5849E900B482EF522536990076C17609372C55CE* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5849E900B482EF522536990076C17609372C55CE*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void UnityEngine.EventSystems.StandaloneInputModule::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInputModule__ctor_m77BAC1DB71B81FFCD2791DE706BD4FE239F47C27 (StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.SenseInput::set_JoystickMovement(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SenseInput_set_JoystickMovement_m6CDB0C09257C996955958351AA56484C647B6D12_inline (SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.SenseInput::ResetButtonState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseInput_ResetButtonState_m774AE51802020E0EBC39C9E4AAA2091A23FE4ABA (SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A (int32_t ___key0, const RuntimeMethod* method) ;
// System.Boolean TechXR.Core.Sense.SenseInput::get_JoystickMovement()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SenseInput_get_JoystickMovement_m60AB63CAF82340714C75691722FB331B1787B98B_inline (SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.Boolean>>::.ctor()
inline void List_1__ctor_m845BD557E5EAD0E7B7651195EB4E424504985BAB (List_1_t1C3DD67409BD614CE1F834B9F4F85DD4E0D207AE* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1C3DD67409BD614CE1F834B9F4F85DD4E0D207AE*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T TechXR.Core.Utils.Singleton`1<TechXR.Core.Sense.SenseXR>::get_Instance()
inline SenseXR_t7B7241CE97061BA7BC71E3D9D061CD88F22ED7CA* Singleton_1_get_Instance_m4A3E657F19E0456005196EFE080664B5B74F8534 (const RuntimeMethod* method)
{
	return ((  SenseXR_t7B7241CE97061BA7BC71E3D9D061CD88F22ED7CA* (*) (const RuntimeMethod*))Singleton_1_get_Instance_mD5E0606373477D89A50145641D9A1FF3881F5D9F_gshared)(method);
}
// T TechXR.Core.Utils.Singleton`1<TechXR.Core.Sense.OculusBridge>::get_Instance()
inline OculusBridge_t7AEB3911A89CBEA0708DE5D82554AF2C00B8B1EC* Singleton_1_get_Instance_m5D60D103E26BACE6FCA20140935EBF56330E4BC6 (const RuntimeMethod* method)
{
	return ((  OculusBridge_t7AEB3911A89CBEA0708DE5D82554AF2C00B8B1EC* (*) (const RuntimeMethod*))Singleton_1_get_Instance_mD5E0606373477D89A50145641D9A1FF3881F5D9F_gshared)(method);
}
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Utils.Singleton`1<TechXR.Core.Sense.OculusBridge>::.ctor()
inline void Singleton_1__ctor_m22E1F7284124781796F09E04E55732671B164CAA (Singleton_1_tB3F117CD016202C931C3F5A781A2A0D7E69FCD94* __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_tB3F117CD016202C931C3F5A781A2A0D7E69FCD94*, const RuntimeMethod*))Singleton_1__ctor_m6EE9B05A53B14A2A767DBD41E0431718AFF9A2F4_gshared)(__this, method);
}
// UnityEngine.GameObject TechXR.Core.Sense.SenseManager::GetCurrentGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* SenseManager_GetCurrentGameObject_mFAFCA142595E2BBC9DDDE210CE8D9977B4A10930 (SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject TechXR.Core.Sense.SenseManager::GetController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* SenseManager_GetController_m72CEFCF65CC609D3CB4900F4F34C4BA7FEDFF0F4 (SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// T TechXR.Core.Utils.Singleton`1<TechXR.Core.Utils.EventManager>::get_Instance()
inline EventManager_t549C00EDCE4BC703024CB8204FDD317602311CA8* Singleton_1_get_Instance_m78D05D468F30A6FA61E75B05CA4DC49D8E5C2F05 (const RuntimeMethod* method)
{
	return ((  EventManager_t549C00EDCE4BC703024CB8204FDD317602311CA8* (*) (const RuntimeMethod*))Singleton_1_get_Instance_mD5E0606373477D89A50145641D9A1FF3881F5D9F_gshared)(method);
}
// System.Void TechXR.Core.Utils.EventManager::RegisterEvent(TechXR.Core.Sense.SenseEvent,TechXR.Core.Sense.SenseEventDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_RegisterEvent_m531D6DAA0B13702A548D812F42B2C1C574BF8DDA (EventManager_t549C00EDCE4BC703024CB8204FDD317602311CA8* __this, int32_t ___a_eEvent0, SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C* ___a_delListener1, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Utils.EventManager::DeRegisterEvent(TechXR.Core.Sense.SenseEvent,TechXR.Core.Sense.SenseEventDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_DeRegisterEvent_mCEE43837A21C7B9881BF9DDD22616D2649278553 (EventManager_t549C00EDCE4BC703024CB8204FDD317602311CA8* __this, int32_t ___a_eEvent0, SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C* ___a_delListener1, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// System.Void TechXR.Core.Utils.EventManager::TriggerEvent(TechXR.Core.Sense.SenseEvent,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_TriggerEvent_m62A9DD742C11C3D8C1C6DA04361C0F479AD90112 (EventManager_t549C00EDCE4BC703024CB8204FDD317602311CA8* __this, int32_t ___a_eEvent0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.SenseManager::TogglePointerDisplay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseManager_TogglePointerDisplay_m47909C5C0EC6AAB4666124F5BA4C2F16EF7C832C (SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* __this, bool ___flag0, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.SenseManager::ToggleControllerBodyDisplay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseManager_ToggleControllerBodyDisplay_mF7A636CEC72A53440125EF76D4A619AA941F8F0E (SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* __this, bool ___flag0, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.SenseManager::SetPointerDisplayMode(TechXR.Core.Sense.Defs/PointerDisplayMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseManager_SetPointerDisplayMode_mC8C30FA39AC2E93AE806CDAD34C8206EF05D9B65 (SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* __this, int32_t ___mode0, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.SenseManager::SetPointerColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseManager_SetPointerColor_mBC05846C2BB0F5AC887D290DE49BB646F2F31063 (SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, const RuntimeMethod* method) ;
// UnityEngine.RaycastHit TechXR.Core.Sense.SenseManager::GetRaycastHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 SenseManager_GetRaycastHit_mD613EC0F10ACE166FE4399292733050E04DA2C8F (SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* __this, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Utils.Singleton`1<TechXR.Core.Sense.SenseXR>::.ctor()
inline void Singleton_1__ctor_mCE765B4AF0CC9BC88BB15A8BED75932921D1BA64 (Singleton_1_t5AA3D1D13FDB0CDFED5F4B19749050F99CE96E46* __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_t5AA3D1D13FDB0CDFED5F4B19749050F99CE96E46*, const RuntimeMethod*))Singleton_1__ctor_m6EE9B05A53B14A2A767DBD41E0431718AFF9A2F4_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_m017722BD53BAE32893C2A1B674746E340D4A5B89_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.JoystickController::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickController_Move_mF80A09FD7DBA2B3433F409180FCB7FF08FB14FB4 (JoystickController_t76376805DE06ACDB2581FD9C07C0F565F9B7DFA9* __this, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.JoystickController::Rotate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickController_Rotate_m5CC108390B536645ECA9119971DE07ABF9E78C55 (JoystickController_t76376805DE06ACDB2581FD9C07C0F565F9B7DFA9* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion_set_eulerAngles_m441C342F21FEFCED9BABED01FA516C97EA424D6E_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis0, float ___angle1, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<TechXR.Core.Sense.SenseManager/InputType,System.Action>::Add(TKey,TValue)
inline void Dictionary_2_Add_mCABB09FC74E78681C1B182FCF5522649FBFD27CE (Dictionary_2_t80FEA5B79D158901F7724BC0BBF5836A8104227F* __this, int32_t ___key0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t80FEA5B79D158901F7724BC0BBF5836A8104227F*, int32_t, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))Dictionary_2_Add_mC515884C0546021A29DC0A00DBCABD89B1B65872_gshared)(__this, ___key0, ___value1, method);
}
// System.Void TechXR.Core.Sense.SenseManager::PopulateClassObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseManager_PopulateClassObjects_mD0F9CAC6D3F7B475307351DECA4F482E75A426E4 (SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<TechXR.Core.Sense.SenseManager/InputType,System.Action>::get_Item(TKey)
inline Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* Dictionary_2_get_Item_mC12B82AEEE32C156B0CD676704C36068AC826AFC (Dictionary_2_t80FEA5B79D158901F7724BC0BBF5836A8104227F* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* (*) (Dictionary_2_t80FEA5B79D158901F7724BC0BBF5836A8104227F*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m9C4302CCAE3C1BF70D02091D0E0CED7663F18211_gshared)(__this, ___key0, method);
}
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.SenseController::ToggleDisplay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseController_ToggleDisplay_m70CE6EB54546215B23652E2D8B2EE5217DB1EF6A (SenseController_tABCD7B30A1AA3F0BAB5AC6050F2C699A566ADA48* __this, bool ___flag0, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.TeleportManager::ToggleDisplay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportManager_ToggleDisplay_mE4980AD52B920D1576D8CDB3C3F93CF68BDBFF3E (TeleportManager_tAD810B203280055ABDE0A44548E696080148F3BE* __this, bool ___flag0, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.SenseController::ToggleControllerBodyDisplay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseController_ToggleControllerBodyDisplay_mD9A609C3A122A6C5C4990F75DABB10D0C307C39B (SenseController_tABCD7B30A1AA3F0BAB5AC6050F2C699A566ADA48* __this, bool ___flag0, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.IUILaserPointer::SetColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUILaserPointer_SetColor_m19B632859C1662962BCEA9D385F616B3826E92B9 (IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, const RuntimeMethod* method) ;
// UnityEngine.GameObject TechXR.Core.Sense.LaserPointer::GetCurrentGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* LaserPointer_GetCurrentGameObject_mA3CC872E0F82C7AA2F342FC5CB1FC7E284A00064 (LaserPointer_t16D0F974C5CCC33E600C322FFB605D6B7CB2B5A3* __this, const RuntimeMethod* method) ;
// UnityEngine.RaycastHit TechXR.Core.Sense.LaserPointer::GetRaycastHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 LaserPointer_GetRaycastHit_mEDC023536BAF3D5A4E783ED374DB1E85C6ECBABE (LaserPointer_t16D0F974C5CCC33E600C322FFB605D6B7CB2B5A3* __this, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.TeleportManager::SetTeleportInput(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportManager_SetTeleportInput_m5A496389427F417B38E297D5A7153C94C047F8C9 (TeleportManager_tAD810B203280055ABDE0A44548E696080148F3BE* __this, String_t* ____buttonName0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<TechXR.Core.Sense.JoystickController>()
inline JoystickController_t76376805DE06ACDB2581FD9C07C0F565F9B7DFA9* GameObject_GetComponent_TisJoystickController_t76376805DE06ACDB2581FD9C07C0F565F9B7DFA9_mF39397CA0FD0030F45CA283BBB5566C4AB190B03 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  JoystickController_t76376805DE06ACDB2581FD9C07C0F565F9B7DFA9* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponentInChildren<TechXR.Core.Sense.LaserPointer>()
inline LaserPointer_t16D0F974C5CCC33E600C322FFB605D6B7CB2B5A3* GameObject_GetComponentInChildren_TisLaserPointer_t16D0F974C5CCC33E600C322FFB605D6B7CB2B5A3_m728C5B593843EC64654A5EE68C10EF8F97101E21 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  LaserPointer_t16D0F974C5CCC33E600C322FFB605D6B7CB2B5A3* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<TechXR.Core.Sense.SenseController>()
inline SenseController_tABCD7B30A1AA3F0BAB5AC6050F2C699A566ADA48* GameObject_GetComponent_TisSenseController_tABCD7B30A1AA3F0BAB5AC6050F2C699A566ADA48_m9BF2F0DE6EA16F43888DEC311274352CA63E622C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SenseController_tABCD7B30A1AA3F0BAB5AC6050F2C699A566ADA48* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<TechXR.Core.Sense.LaserPointerInputModule>()
inline LaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6* GameObject_GetComponent_TisLaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6_m82A4D38AF7C1CE0D22401D463CCC415ED0D2EB21 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  LaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.EventSystems.StandaloneInputModule>()
inline StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530* GameObject_GetComponent_TisStandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530_m079528EF78E6312315FFB3F01362D4F2E6DA5C2D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<TechXR.Core.Sense.TeleportManager>()
inline TeleportManager_tAD810B203280055ABDE0A44548E696080148F3BE* GameObject_GetComponent_TisTeleportManager_tAD810B203280055ABDE0A44548E696080148F3BE_m5AE96867ECFDF4F25E8B6C7829CCF1E616C815E3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TeleportManager_tAD810B203280055ABDE0A44548E696080148F3BE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void TechXR.Core.Sense.JoystickController::SetPlayerReference(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickController_SetPlayerReference_mD55A8AC677244323C634F29223D7CA586DC63C44 (JoystickController_t76376805DE06ACDB2581FD9C07C0F565F9B7DFA9* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<TechXR.Core.Sense.SenseManager/InputType,System.Action>::.ctor()
inline void Dictionary_2__ctor_m8686211E94EA1F61AC9686A1D20B6E6ACBFA4D72 (Dictionary_2_t80FEA5B79D158901F7724BC0BBF5836A8104227F* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t80FEA5B79D158901F7724BC0BBF5836A8104227F*, const RuntimeMethod*))Dictionary_2__ctor_mCC9983804D8DC41E938E080075F9EA7BDD0C7059_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::FindWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindWithTag_m8E5D34F652B0A6ECA1A90688726C22E272236C0F (String_t* ___tag0, const RuntimeMethod* method) ;
// System.Boolean TechXR.Core.Sense.SenseXRConnectivityStatus::CheckSenseXRConnection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SenseXRConnectivityStatus_CheckSenseXRConnection_m35AAED459164DF74F8F0E9BF747C378CCCC3BAC1 (SenseXRConnectivityStatus_t88F4187646A1231099F0A52CFA4CA2543D422558* __this, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.SenseXRConnectivityStatus::Warn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseXRConnectivityStatus_Warn_mA9AE7A9E5DD2B33C702A4F33A900645904D2BB2C (SenseXRConnectivityStatus_t88F4187646A1231099F0A52CFA4CA2543D422558* __this, const RuntimeMethod* method) ;
// System.String[] UnityEngine.Input::GetJoystickNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Input_GetJoystickNames_m398DA6DE3281D480F35E06AA92F746D4C82C9DC5 (const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.TeleportManager::set_TeleportMode(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TeleportManager_set_TeleportMode_mB75E4BFE990FAFCE7D1834AEF41846FCB9321408_inline (TeleportManager_tAD810B203280055ABDE0A44548E696080148F3BE* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_root()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_root_m3AE09E7A2C0B2C4A649570498F25E4B4F69A1284 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.CharacterController>()
inline CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean TechXR.Core.Sense.SenseInput::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SenseInput_GetButtonDown_m9EA2DFC09426E9B72CD08D325237D4592FEAA179 (String_t* ___button0, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.Teleporter::ToggleDisplay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Teleporter_ToggleDisplay_m29F7A91A68AB1BDE9D39C2FC0D1D13D1851E0507 (Teleporter_tACA9C5D8F933A0C3E1E86756B70BB18FC33DFC4A* __this, bool ___active0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean TechXR.Core.Sense.SenseInput::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SenseInput_GetButtonUp_m95DF02DD234441AC047DB7A91176052C23BB38C9 (String_t* ___button0, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.Teleporter::Teleport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Teleporter_Teleport_m9E19D7889B3F3CFBB5A0E99CF034E2D928DB97D4 (Teleporter_tACA9C5D8F933A0C3E1E86756B70BB18FC33DFC4A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.LineRenderer>()
inline LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<UnityEngine.CharacterController>()
inline CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* Component_GetComponentInParent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m397CE83D3F0BA105E68C33389BAE8A9B35B592CA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared)(___original0, ___parent1, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Add(T)
inline void List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void TechXR.Core.Sense.Teleporter::UpdatePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Teleporter_UpdatePath_m75885C57C85A2446502FEE20D0A1196E15F6A1CE (Teleporter_tACA9C5D8F933A0C3E1E86756B70BB18FC33DFC4A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
inline void List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_gshared_inline)(__this, method);
}
// System.Void TechXR.Core.Sense.Teleporter::ToggleRayPointDisplay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Teleporter_ToggleRayPointDisplay_m74CAB5F7803860051F5EFB77D3699706D125BED4 (Teleporter_tACA9C5D8F933A0C3E1E86756B70BB18FC33DFC4A* __this, bool ___flag0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8 (float ___angle0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
inline void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline)(__this, ___item0, method);
}
// UnityEngine.Vector3 UnityEngine.Physics::get_gravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Physics_get_gravity_m3A4C8594035C638686900919118B176B9F0A6F81 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763 (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Linecast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Linecast_m6C18BCDDD4404C19008589CBD4C7BBBFFB0F1B9C (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___end1, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo2, int32_t ___layerMask3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, const RuntimeMethod*))List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___value0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
inline Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3_gshared)(__this, method);
}
// System.Void UnityEngine.LineRenderer::SetPositions(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___positions0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Transform>::GetEnumerator()
inline Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>::Dispose()
inline void Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5 (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>::get_Current()
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_inline (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D* __this, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>::MoveNext()
inline bool Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87 (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor()
inline void List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void TechXR.Core.Sense.SenseController::ToggleJoystickMovement(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseController_ToggleJoystickMovement_m5B35CCB028EDD7B56C0E34BB3050BBADDE264F8B (SenseController_tABCD7B30A1AA3F0BAB5AC6050F2C699A566ADA48* __this, bool ___flag0, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.SenseController::ToggleTeleportMovement(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseController_ToggleTeleportMovement_m2C4DAB312963BE53BFEA232801FDB8259BED17AB (SenseController_tABCD7B30A1AA3F0BAB5AC6050F2C699A566ADA48* __this, bool ___flag0, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.SenseController::SetTeleportInput(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseController_SetTeleportInput_mF6176CF36EC2829DF52A99C265D22493615F5192 (SenseController_tABCD7B30A1AA3F0BAB5AC6050F2C699A566ADA48* __this, String_t* ____buttonName0, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.SenseManager::ToggleTeleportMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseManager_ToggleTeleportMode_mD32D0FE0FA445A88B8D3404235753A2D3F6C5E24 (SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* __this, bool ___flag0, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Sense.SenseManager::SetTeleportInput(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseManager_SetTeleportInput_mB9DD3040B705A79A9ED8528C27E41C4CE0226A52 (SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* __this, String_t* ____buttonName0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<TechXR.Core.Sense.LaserPointer>()
inline LaserPointer_t16D0F974C5CCC33E600C322FFB605D6B7CB2B5A3* Object_FindObjectOfType_TisLaserPointer_t16D0F974C5CCC33E600C322FFB605D6B7CB2B5A3_mFEABE52DC46183287A33A14AECE9F41BB53C100E (const RuntimeMethod* method)
{
	return ((  LaserPointer_t16D0F974C5CCC33E600C322FFB605D6B7CB2B5A3* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7 (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.UI.Image::get_fillAmount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Image_get_fillAmount_mDEE52490D07124E21E7CB36718A5E3714D8B9788_inline (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) ;
// System.Void DefaultObserverEventHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultObserverEventHandler_Start_m4C0CD606664A8117685DE4476243FBC271F39A20 (DefaultObserverEventHandler_t7CF27A0CC5B1FAEDDB5964C3A11F29C2A14E1FC0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void DefaultObserverEventHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultObserverEventHandler__ctor_mE40FCAD19043225054C315C22018F5780217E9DC (DefaultObserverEventHandler_t7CF27A0CC5B1FAEDDB5964C3A11F29C2A14E1FC0* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator TechXR.Core.Utils.DataManager::GetDataLocal(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataManager_GetDataLocal_m7A3735F37C01AF341F4183EB0D586E3BEDFB629B (DataManager_t40CBB9B632C0C9F415E38AAFDBFC8C84FA458E1E* __this, String_t* ___fileName0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator TechXR.Core.Utils.DataManager::GetDataRemote(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataManager_GetDataRemote_m0AB20F374B9308D0D488FAEBD8180ED1A7555660 (DataManager_t40CBB9B632C0C9F415E38AAFDBFC8C84FA458E1E* __this, String_t* ___url0, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Utils.DataManager/<GetDataLocal>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDataLocalU3Ed__6__ctor_m8F2F34A6239653CF19A38E090E3ADADDD6AE9DEE (U3CGetDataLocalU3Ed__6_t35AF7AAA66C46989AAC6E3D6C18EF9F195FB60DB* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Utils.DataManager/<GetDataRemote>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDataRemoteU3Ed__7__ctor_m4AF2F66BE485A061F49B25FC42FCDD223CF01AC8 (U3CGetDataRemoteU3Ed__7_t9EF86BF47D64179500271B1D5CD90A11DF21DB82* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___collection0, method);
}
// System.Void TechXR.Core.Utils.DataManager::LoadData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataManager_LoadData_m496F4C0F7C47585D8C002BC5FDD6F367FAB39A69 (DataManager_t40CBB9B632C0C9F415E38AAFDBFC8C84FA458E1E* __this, const RuntimeMethod* method) ;
// System.Void TechXR.Core.Utils.Singleton`1<TechXR.Core.Utils.DataManager>::.ctor()
inline void Singleton_1__ctor_m8CFF12B7C9D1C5D45123BFD91F043C04C2BA0CBC (Singleton_1_tC289D00A047C79313DA529AB7DBBA764BAF771F4* __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_tC289D00A047C79313DA529AB7DBBA764BAF771F4*, const RuntimeMethod*))Singleton_1__ctor_m6EE9B05A53B14A2A767DBD41E0431718AFF9A2F4_gshared)(__this, method);
}
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void TechXR.Core.Utils.DataManager::DataLoadedHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataManager_DataLoadedHandler_mCB1C4784A65FF6AE53091AB5E20363EB897A3484 (DataManager_t40CBB9B632C0C9F415E38AAFDBFC8C84FA458E1E* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequest_Get_mBCC8E02B34F75797C7171EBFC1E28CF32FBF9C4E (String_t* ___uri0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isHttpError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isHttpError_m945BA480A179E05CC9659846414D9521ED648ED5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isNetworkError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isNetworkError_m036684411466688E71E67CDD3703BAC9035A56F0 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<TechXR.Core.Sense.SenseEvent,TechXR.Core.Sense.SenseEventDelegate>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m34D663F47D61D46A3373EBB3EA4BD6BE56E06462 (Dictionary_2_t7501747BA89320958ACDB6ED070D99A6C7A3E6CB* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t7501747BA89320958ACDB6ED070D99A6C7A3E6CB*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m874C59716993973F0A52C848B20C70C26DB9BCF7_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<TechXR.Core.Sense.SenseEvent,TechXR.Core.Sense.SenseEventDelegate>::Add(TKey,TValue)
inline void Dictionary_2_Add_m0B865879077678CDB1541E56D43DD37820370472 (Dictionary_2_t7501747BA89320958ACDB6ED070D99A6C7A3E6CB* __this, int32_t ___key0, SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7501747BA89320958ACDB6ED070D99A6C7A3E6CB*, int32_t, SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C*, const RuntimeMethod*))Dictionary_2_Add_mC515884C0546021A29DC0A00DBCABD89B1B65872_gshared)(__this, ___key0, ___value1, method);
}
// TValue System.Collections.Generic.Dictionary`2<TechXR.Core.Sense.SenseEvent,TechXR.Core.Sense.SenseEventDelegate>::get_Item(TKey)
inline SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C* Dictionary_2_get_Item_mB063F72CA129EA5C9E63FAB5A9D0DBA7B0A8BB98 (Dictionary_2_t7501747BA89320958ACDB6ED070D99A6C7A3E6CB* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C* (*) (Dictionary_2_t7501747BA89320958ACDB6ED070D99A6C7A3E6CB*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m9C4302CCAE3C1BF70D02091D0E0CED7663F18211_gshared)(__this, ___key0, method);
}
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<TechXR.Core.Sense.SenseEvent,TechXR.Core.Sense.SenseEventDelegate>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m4BEF004F1A248906F4A61411E7FC2391407A7BF4 (Dictionary_2_t7501747BA89320958ACDB6ED070D99A6C7A3E6CB* __this, int32_t ___key0, SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7501747BA89320958ACDB6ED070D99A6C7A3E6CB*, int32_t, SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C*, const RuntimeMethod*))Dictionary_2_set_Item_m78DDC81EE49FB9D4194E83685FFED445DFDB75CA_gshared)(__this, ___key0, ___value1, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<TechXR.Core.Sense.SenseEvent,TechXR.Core.Sense.SenseEventDelegate>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m80FD91538BABB6A58E4F39A342D2688DB7FA623A (Dictionary_2_t7501747BA89320958ACDB6ED070D99A6C7A3E6CB* __this, int32_t ___key0, SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t7501747BA89320958ACDB6ED070D99A6C7A3E6CB*, int32_t, SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD8A6CDD5C954C86D2150FCFF1B76EB62F35A881D_gshared)(__this, ___key0, ___value1, method);
}
// System.Void TechXR.Core.Sense.SenseEventDelegate::Invoke(System.Object[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SenseEventDelegate_Invoke_m716A86E11F18D88768A1F535DF2BD764E581643A_inline (SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<TechXR.Core.Sense.SenseEvent,TechXR.Core.Sense.SenseEventDelegate>::Clear()
inline void Dictionary_2_Clear_m2489E55292F69B15797B49697EC0BC225101CB0F (Dictionary_2_t7501747BA89320958ACDB6ED070D99A6C7A3E6CB* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7501747BA89320958ACDB6ED070D99A6C7A3E6CB*, const RuntimeMethod*))Dictionary_2_Clear_m763AA956A8325F527F831F49E2563FF2871A680E_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<TechXR.Core.Sense.SenseEvent,TechXR.Core.Sense.SenseEventDelegate>::.ctor()
inline void Dictionary_2__ctor_mCD15BE67333EF76C6A8FE3EA6940649D11B92D18 (Dictionary_2_t7501747BA89320958ACDB6ED070D99A6C7A3E6CB* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7501747BA89320958ACDB6ED070D99A6C7A3E6CB*, const RuntimeMethod*))Dictionary_2__ctor_mCC9983804D8DC41E938E080075F9EA7BDD0C7059_gshared)(__this, method);
}
// System.Void TechXR.Core.Utils.Singleton`1<TechXR.Core.Utils.EventManager>::.ctor()
inline void Singleton_1__ctor_m51653CAB709EFBD968DEFEEF7B462DBC252B5D78 (Singleton_1_tDE48F5D43D6ACE2A85EB85E8B734CF741D8D4306* __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_tDE48F5D43D6ACE2A85EB85E8B734CF741D8D4306*, const RuntimeMethod*))Singleton_1__ctor_m6EE9B05A53B14A2A767DBD41E0431718AFF9A2F4_gshared)(__this, method);
}
// System.Void TechXR.Core.Utils.Singleton`1<TechXR.Core.Utils.StateManager>::.ctor()
inline void Singleton_1__ctor_m61B67BE9D0C290D4A3A8AF0E840431F78354453A (Singleton_1_t62FD18177113694BFBF5D00029441528F05D3123* __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_t62FD18177113694BFBF5D00029441528F05D3123*, const RuntimeMethod*))Singleton_1__ctor_m6EE9B05A53B14A2A767DBD41E0431718AFF9A2F4_gshared)(__this, method);
}
// System.Void UnityEngine.Vector2::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mBF0FA0B529C821F4733DDC3AD366B07CD27625F4_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_mA20AB2E3DFAE680D742E9A17D969AF8A3E849711 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___currentVelocity2, float ___smoothTime3, float ___maxSpeed4, float ___deltaTime5, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m9B2C77284AEE6F2C43B6C42F1F888FB4FC904462 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m864320DA2D027C186C95B2A5BC2C66B0EB4A6C11 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String LicenseVerificationDetails::get_expiryTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LicenseVerificationDetails_get_expiryTime_m676D8DD020F321DDB639679552C9A73EC3D61B6B (LicenseVerificationDetails_tD72DCA6D945BB0249B92C1164CFA2ECA457C6CA7* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CexpiryTimeU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void LicenseVerificationDetails::set_expiryTime(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LicenseVerificationDetails_set_expiryTime_m5A7501E5CDC8FDBB231D4ACC67287C170DF5E19A (LicenseVerificationDetails_tD72DCA6D945BB0249B92C1164CFA2ECA457C6CA7* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CexpiryTimeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CexpiryTimeU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Boolean LicenseVerificationDetails::get_status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LicenseVerificationDetails_get_status_m4DA0ACCAFF0D68543CE582101FB96DE9D7EB6761 (LicenseVerificationDetails_tD72DCA6D945BB0249B92C1164CFA2ECA457C6CA7* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CstatusU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void LicenseVerificationDetails::set_status(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LicenseVerificationDetails_set_status_m6992615421632E9CBAF4041EE3A262D468EA9547 (LicenseVerificationDetails_tD72DCA6D945BB0249B92C1164CFA2ECA457C6CA7* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CstatusU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Void LicenseVerificationDetails::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LicenseVerificationDetails__ctor_m61029A98D11083089795FD2C70AD92CF3CB27852 (LicenseVerificationDetails_tD72DCA6D945BB0249B92C1164CFA2ECA457C6CA7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.IEnumerator BackgroundPlaneController::SetBGPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BackgroundPlaneController_SetBGPlane_mE86912C9BA03C5533CA1C9EB2C1C8F4DD9EE7266 (BackgroundPlaneController_tD3F10264B3C6602A4D2C3C07D5A361D8A1A00D6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSetBGPlaneU3Ed__1_t4A8693A86BED3690DE38286879C5C89986D9A851_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSetBGPlaneU3Ed__1_t4A8693A86BED3690DE38286879C5C89986D9A851* L_0 = (U3CSetBGPlaneU3Ed__1_t4A8693A86BED3690DE38286879C5C89986D9A851*)il2cpp_codegen_object_new(U3CSetBGPlaneU3Ed__1_t4A8693A86BED3690DE38286879C5C89986D9A851_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSetBGPlaneU3Ed__1__ctor_mACA7C748BBAA230CC23217EDC5F9944F300E3E09(L_0, 0, NULL);
		U3CSetBGPlaneU3Ed__1_t4A8693A86BED3690DE38286879C5C89986D9A851* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void BackgroundPlaneController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundPlaneController_Start_mD00C30D29EFBC0E7AC8AFDF7E1C9F6A0364752F2 (BackgroundPlaneController_tD3F10264B3C6602A4D2C3C07D5A361D8A1A00D6B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = BackgroundPlaneController_SetBGPlane_mE86912C9BA03C5533CA1C9EB2C1C8F4DD9EE7266(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		return;
	}
}
// System.Void BackgroundPlaneController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundPlaneController__ctor_m05062A895ABC92CF374B9DA288A8D7A1EEFC5CBE (BackgroundPlaneController_tD3F10264B3C6602A4D2C3C07D5A361D8A1A00D6B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BackgroundPlaneController/<SetBGPlane>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetBGPlaneU3Ed__1__ctor_mACA7C748BBAA230CC23217EDC5F9944F300E3E09 (U3CSetBGPlaneU3Ed__1_t4A8693A86BED3690DE38286879C5C89986D9A851* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void BackgroundPlaneController/<SetBGPlane>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetBGPlaneU3Ed__1_System_IDisposable_Dispose_mCAF3C9B99E305B88FAA6652D890368FBF2876E44 (U3CSetBGPlaneU3Ed__1_t4A8693A86BED3690DE38286879C5C89986D9A851* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean BackgroundPlaneController/<SetBGPlane>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSetBGPlaneU3Ed__1_MoveNext_mE5D9039D964A585DF9CF6A1A9DA0E6CDB92E70B8 (U3CSetBGPlaneU3Ed__1_t4A8693A86BED3690DE38286879C5C89986D9A851* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3FCA14EC2114B9068885D017F002F4820ED34D35);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0039;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0039:
	{
		__this->___U3CU3E1__state_0 = (-1);
		BackgroundPlaneController_tD3F10264B3C6602A4D2C3C07D5A361D8A1A00D6B* L_4 = __this->___U3CU3E4__this_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9(_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6, NULL);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_6, _stringLiteral3FCA14EC2114B9068885D017F002F4820ED34D35, NULL);
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		NullCheck(L_4);
		L_4->___m_BackgroundPlane_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___m_BackgroundPlane_4), (void*)L_8);
		BackgroundPlaneController_tD3F10264B3C6602A4D2C3C07D5A361D8A1A00D6B* L_9 = __this->___U3CU3E4__this_2;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = L_9->___m_BackgroundPlane_4;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		BackgroundPlaneController_tD3F10264B3C6602A4D2C3C07D5A361D8A1A00D6B* L_12 = __this->___U3CU3E4__this_2;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = L_12->___m_BackgroundPlane_4;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		float L_16 = L_15.___x_2;
		BackgroundPlaneController_tD3F10264B3C6602A4D2C3C07D5A361D8A1A00D6B* L_17 = __this->___U3CU3E4__this_2;
		NullCheck(L_17);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = L_17->___m_BackgroundPlane_4;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_18, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		float L_21 = L_20.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_22), L_16, L_21, (1178.0f), /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_11, L_22, NULL);
		return (bool)0;
	}
}
// System.Object BackgroundPlaneController/<SetBGPlane>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSetBGPlaneU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m52CD25732484D81969742F9B5DED439CAF5BF749 (U3CSetBGPlaneU3Ed__1_t4A8693A86BED3690DE38286879C5C89986D9A851* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void BackgroundPlaneController/<SetBGPlane>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetBGPlaneU3Ed__1_System_Collections_IEnumerator_Reset_m6F18F4A427FDE8792D057395E3B9834E34689B71 (U3CSetBGPlaneU3Ed__1_t4A8693A86BED3690DE38286879C5C89986D9A851* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSetBGPlaneU3Ed__1_System_Collections_IEnumerator_Reset_m6F18F4A427FDE8792D057395E3B9834E34689B71_RuntimeMethod_var)));
	}
}
// System.Object BackgroundPlaneController/<SetBGPlane>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSetBGPlaneU3Ed__1_System_Collections_IEnumerator_get_Current_mFEF91588FF8569566E4BF15884CB2E8CFD766D82 (U3CSetBGPlaneU3Ed__1_t4A8693A86BED3690DE38286879C5C89986D9A851* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single VariableJoystick::get_MoveThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VariableJoystick_get_MoveThreshold_m244C583E14243F272AC510C4681E51954FD7698D (VariableJoystick_t0D4819C1014E858778B0C435BF7D81EB0487B68E* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___moveThreshold_15;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void VariableJoystick::set_MoveThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_set_MoveThreshold_mA1353707193C92227F36F83E127A64CD15A3404C (VariableJoystick_t0D4819C1014E858778B0C435BF7D81EB0487B68E* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		float L_1;
		L_1 = fabsf(L_0);
		__this->___moveThreshold_15 = L_1;
		return;
	}
}
// System.Void VariableJoystick::SetMode(JoystickType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_SetMode_mD3AD9458D2957D244A71FAD8280CC75BCE1FEA54 (VariableJoystick_t0D4819C1014E858778B0C435BF7D81EB0487B68E* __this, int32_t ___joystickType0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = ___joystickType0;
		__this->___joystickType_16 = L_0;
		int32_t L_1 = ___joystickType0;
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = ((Joystick_tCD6542D65EBEE70A3B835333479AB75329325D0C*)__this)->___background_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = __this->___fixedPosition_17;
		NullCheck(L_3);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_3, L_4, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = ((Joystick_tCD6542D65EBEE70A3B835333479AB75329325D0C*)__this)->___background_9;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		goto IL_004a;
	}

IL_0038:
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = ((Joystick_tCD6542D65EBEE70A3B835333479AB75329325D0C*)__this)->___background_9;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
	}

IL_004a:
	{
		return;
	}
}
// System.Void VariableJoystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_Start_m9A6798D77D00E9D5F0C681214C4785F6DF7C6363 (VariableJoystick_t0D4819C1014E858778B0C435BF7D81EB0487B68E* __this, const RuntimeMethod* method) 
{
	{
		Joystick_Start_mEECB3448F00CD3BC9338766C48A34CF69B132B35(__this, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((Joystick_tCD6542D65EBEE70A3B835333479AB75329325D0C*)__this)->___background_9;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_0, NULL);
		__this->___fixedPosition_17 = L_1;
		int32_t L_2 = __this->___joystickType_16;
		VariableJoystick_SetMode_mD3AD9458D2957D244A71FAD8280CC75BCE1FEA54(__this, L_2, NULL);
		return;
	}
}
// System.Void VariableJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_OnPointerDown_m4C67EB650086D8F36BE906A9B7BEA20D9A6A5CB9 (VariableJoystick_t0D4819C1014E858778B0C435BF7D81EB0487B68E* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->___joystickType_16;
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = ((Joystick_tCD6542D65EBEE70A3B835333479AB75329325D0C*)__this)->___background_9;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___eventData0;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Joystick_ScreenPointToAnchoredPosition_m7E57657C741D0313DE83AC24D0FEEE6D7C5E4168(__this, L_4, NULL);
		NullCheck(L_2);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_2, L_5, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = ((Joystick_tCD6542D65EBEE70A3B835333479AB75329325D0C*)__this)->___background_9;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
	}

IL_003a:
	{
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_8 = ___eventData0;
		Joystick_OnPointerDown_m0E1A372C5B62B2A133A39BDE7F9C3BBBD1DC8209(__this, L_8, NULL);
		return;
	}
}
// System.Void VariableJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_OnPointerUp_m6DFE35B74ED150855C9E8990125B5896870EFFD6 (VariableJoystick_t0D4819C1014E858778B0C435BF7D81EB0487B68E* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->___joystickType_16;
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = ((Joystick_tCD6542D65EBEE70A3B835333479AB75329325D0C*)__this)->___background_9;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
	}

IL_0020:
	{
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_4 = ___eventData0;
		Joystick_OnPointerUp_mEEFF3FB6CCD9866FF0C2F6F60886FB97733AF816(__this, L_4, NULL);
		return;
	}
}
// System.Void VariableJoystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_HandleInput_m6B41E3EEFF2EEBA9186C9E91CD8FCFCECA309529 (VariableJoystick_t0D4819C1014E858778B0C435BF7D81EB0487B68E* __this, float ___magnitude0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___normalised1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radius2, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam3, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->___joystickType_16;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0015;
		}
	}
	{
		float L_1 = ___magnitude0;
		float L_2 = __this->___moveThreshold_15;
		G_B3_0 = ((((float)L_1) > ((float)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 0;
	}

IL_0016:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0049;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___normalised1;
		float L_5 = ___magnitude0;
		float L_6 = __this->___moveThreshold_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_4, ((float)il2cpp_codegen_subtract(L_5, L_6)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___radius2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_op_Multiply_m6158066AFB36810D63D98EABF0FABEFFC647B2A0_inline(L_7, L_8, NULL);
		V_1 = L_9;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = ((Joystick_tCD6542D65EBEE70A3B835333479AB75329325D0C*)__this)->___background_9;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = L_10;
		NullCheck(L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_11, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_12, L_13, NULL);
		NullCheck(L_11);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_11, L_14, NULL);
	}

IL_0049:
	{
		float L_15 = ___magnitude0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = ___normalised1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = ___radius2;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_18 = ___cam3;
		Joystick_HandleInput_m39336DFB28E7AAB9F6C0EED4B408F983A05BAE63(__this, L_15, L_16, L_17, L_18, NULL);
		return;
	}
}
// System.Void VariableJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick__ctor_m16FC132432986BB19530E49F2D1A6F9391DEDD64 (VariableJoystick_t0D4819C1014E858778B0C435BF7D81EB0487B68E* __this, const RuntimeMethod* method) 
{
	{
		__this->___moveThreshold_15 = (1.0f);
		__this->___joystickType_16 = 0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		__this->___fixedPosition_17 = L_0;
		Joystick__ctor_m6E9BE1DD3228BE0ED449E9DC3EA73EC67E45A238(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single Joystick::get_Horizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Horizontal_m2F7CBF32653F738D9C24E7AD6DD20592F298C3D0 (Joystick_tCD6542D65EBEE70A3B835333479AB75329325D0C* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		bool L_0 = __this->___snapX_7;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = (&__this->___input_14);
		float L_2 = L_1->___x_0;
		G_B3_0 = L_2;
		goto IL_0028;
	}

IL_0016:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (&__this->___input_14);
		float L_4 = L_3->___x_0;
		float L_5;
		L_5 = Joystick_SnapFloat_m2B739DF29F69787F35360A94A6521D44DCD1A923(__this, L_4, 1, NULL);
		G_B3_0 = L_5;
	}

IL_0028:
	{
		V_0 = G_B3_0;
		goto IL_002b;
	}

IL_002b:
	{
		float L_6 = V_0;
		return L_6;
	}
}
// System.Single Joystick::get_Vertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Vertical_mA966D5867E87519AAEFABF299EDF6C02AFD52250 (Joystick_tCD6542D65EBEE70A3B835333479AB75329325D0C* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		bool L_0 = __this->___snapY_8;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = (&__this->___input_14);
		float L_2 = L_1->___y_1;
		G_B3_0 = L_2;
		goto IL_0028;
	}

IL_0016:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (&__this->___input_14);
		float L_4 = L_3->___y_1;
		float L_5;
		L_5 = Joystick_SnapFloat_m2B739DF29F69787F35360A94A6521D44DCD1A923(__this, L_4, 2, NULL);
		G_B3_0 = L_5;
	}

IL_0028:
	{
		V_0 = G_B3_0;
		goto IL_002b;
	}

IL_002b:
	{
		float L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.Vector2 Joystick::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Joystick_get_Direction_m1F4504967E60441D6F80B74134C9C6F9FA9D8107 (Joystick_tCD6542D65EBEE70A3B835333479AB75329325D0C* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0;
		L_0 = Joystick_get_Horizontal_m2F7CBF32653F738D9C24E7AD6DD20592F298C3D0(__this, NULL);
		float L_1;
		L_1 = Joystick_get_Vertical_mA966D5867E87519AAEFABF299EDF6C02AFD52250(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_0;
		return L_3;
	}
}
// System.Single Joystick::get_HandleRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_HandleRange_mEF53D77AE6469134003D3DB5BE90AF0CC716F781 (Joystick_tCD6542D65EBEE70A3B835333479AB75329325D0C* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___handleRange_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Joystick::set_HandleRange(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_HandleRange_mCAB7B7BCC3946883E7520D5B62814AAC5B40F5D8 (Joystick_tCD6542D65EBEE70A3B835333479AB75329325D0C* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		float L_1;
		L_1 = fabsf(L_0);
		__this->___handleRange_4 = L_1;
		return;
	}
}
// System.Single Joystick::get_DeadZone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_DeadZone_m33324EDD360BA5226D52B0CD83C2E6E9BCDB0853 (Joystick_tCD6542D65EBEE70A3B835333479AB75329325D0C* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___deadZone_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Joystick::set_DeadZone(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_DeadZone_mE2DC3E039D139F13210BC2277561C45CBD3DC4FB (Joystick_tCD6542D65EBEE70A3B835333479AB75329325D0C* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		float L_1;
		L_1 = fabsf(L_0);
		__this->___deadZone_5 = L_1;
		return;
	}
}
// AxisOptions Joystick::get_AxisOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Joystick_get_AxisOptions_m9ED3008FFF6AA0B007B51600AA6117865FE302A2 (Joystick_tCD6542D65EBEE70A3B835333479AB75329325D0C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = Joystick_get_AxisOptions_m9ED3008FFF6AA0B007B51600AA6117865FE302A2(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Joystick::set_AxisOptions(AxisOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_AxisOptions_mFFE4542C0A86F8349BA1FB901D28B75EA7C31CE7 (Joystick_tCD6542D65EBEE70A3B835333479AB75329325D0C* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___axisOptions_6 = L_0;
		return;
	}
}
// System.Boolean Joystick::get_SnapX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Joystick_get_SnapX_m0537F934D155DFB56C4493875ADBE3676BED7592 (Joystick_tCD6542D65EBEE70A3B835333479AB75329325D0C* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = __this->___snapX_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Joystick::set_SnapX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_SnapX_m6550819710BAFDEB8318CC8C69039AD261A5D9F0 (Joystick_tCD6542D65EBEE70A3B835333479AB75329325D0C* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___snapX_7 = L_0;
		return;
	}
}
// System.Boolean Joystick::get_SnapY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Joystick_get_SnapY_mFBE22485A67F29109B4403976ACEB15E1C1E35FA (Joystick_tCD6542D65EBEE70A3B835333479AB75329325D0C* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = __this->___snapY_8;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Joystick::set_SnapY(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_SnapY_mFC4CA2AAEACD843636D433BF8D07F58B8B802BAE (Joystick_tCD6542D65EBEE70A3B835333479AB75329325D0C* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___snapY_8 = L_0;
		return;
	}
}
// System.Void Joystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_Start_mEECB3448F00CD3BC9338766C48A34CF69B132B35 (Joystick_tCD6542D65EBEE70A3B835333479AB75329325D0C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C95DC36BC35028D124872E120F7701E290A66F6);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		float L_0 = __this->___handleRange_4;
		Joystick_set_HandleRange_mCAB7B7BCC3946883E7520D5B62814AAC5B40F5D8(__this, L_0, NULL);
		float L_1 = __this->___deadZone_5;
		Joystick_set_DeadZone_mE2DC3E039D139F13210BC2277561C45CBD3DC4FB(__this, L_1, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2;
		L_2 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		__this->___baseRect_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___baseRect_11), (void*)L_2);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_3;
		L_3 = Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3(__this, Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		__this->___canvas_12 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canvas_12), (void*)L_3);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_4 = __this->___canvas_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_004e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral3C95DC36BC35028D124872E120F7701E290A66F6, NULL);
	}

IL_004e:
	{
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), (0.5f), (0.5f), NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = __this->___background_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_0;
		NullCheck(L_7);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_7, L_8, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = __this->___handle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		NullCheck(L_9);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_9, L_10, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = __this->___handle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_0;
		NullCheck(L_11);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_11, L_12, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_13 = __this->___handle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_0;
		NullCheck(L_13);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_13, L_14, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_15 = __this->___handle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		NullCheck(L_15);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_15, L_16, NULL);
		return;
	}
}
// System.Void Joystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerDown_m0E1A372C5B62B2A133A39BDE7F9C3BBBD1DC8209 (Joystick_tCD6542D65EBEE70A3B835333479AB75329325D0C* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___eventData0;
		Joystick_OnDrag_m8D4ECB1799D617DC59247D71878702523278D3A2(__this, L_0, NULL);
		return;
	}
}
// System.Void Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnDrag_m8D4ECB1799D617DC59247D71878702523278D3A2 (Joystick_tCD6542D65EBEE70A3B835333479AB75329325D0C* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		__this->___cam_13 = (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cam_13), (void*)(Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)NULL);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = __this->___canvas_12;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Canvas_get_renderMode_m1BEF259548C6CAD27E4466F31D20752D246688CC(L_0, NULL);
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_3 = __this->___canvas_12;
		NullCheck(L_3);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853(L_3, NULL);
		__this->___cam_13 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cam_13), (void*)L_4);
	}

IL_002b:
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = __this->___cam_13;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = __this->___background_9;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = RectTransformUtility_WorldToScreenPoint_m5629068CE7C8D2E654F8F529E89DC5802F3452BB(L_5, L_7, NULL);
		V_0 = L_8;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = __this->___background_9;
		NullCheck(L_9);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_9, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline(L_10, (2.0f), NULL);
		V_1 = L_11;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_12 = ___eventData0;
		NullCheck(L_12);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_12, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_13, L_14, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = V_1;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_17 = __this->___canvas_12;
		NullCheck(L_17);
		float L_18;
		L_18 = Canvas_get_scaleFactor_m6B8D694A68376EE5E13D9B0B0F037E2E90C99921(L_17, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_16, L_18, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = Vector2_op_Division_mB1CA903ACF933DB0BE2016D105BB2B4702CF1004_inline(L_15, L_19, NULL);
		__this->___input_14 = L_20;
		Joystick_FormatInput_mD271F64EB0724B71476075F27BC0B14FD418137E(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_21 = (&__this->___input_14);
		float L_22;
		L_22 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(L_21, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_23 = (&__this->___input_14);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		L_24 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline(L_23, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = V_1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_26 = __this->___cam_13;
		VirtualActionInvoker4< float, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(9 /* System.Void Joystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera) */, __this, L_22, L_24, L_25, L_26);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_27 = __this->___handle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = __this->___input_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30;
		L_30 = Vector2_op_Multiply_m6158066AFB36810D63D98EABF0FABEFFC647B2A0_inline(L_28, L_29, NULL);
		float L_31 = __this->___handleRange_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		L_32 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_30, L_31, NULL);
		NullCheck(L_27);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_27, L_32, NULL);
		return;
	}
}
// System.Void Joystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_HandleInput_m39336DFB28E7AAB9F6C0EED4B408F983A05BAE63 (Joystick_tCD6542D65EBEE70A3B835333479AB75329325D0C* __this, float ___magnitude0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___normalised1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radius2, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam3, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		float L_0 = ___magnitude0;
		float L_1 = __this->___deadZone_5;
		V_0 = (bool)((((float)L_0) > ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		float L_3 = ___magnitude0;
		V_1 = (bool)((((float)L_3) > ((float)(1.0f)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___normalised1;
		__this->___input_14 = L_5;
	}

IL_0022:
	{
		goto IL_0030;
	}

IL_0025:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		__this->___input_14 = L_6;
	}

IL_0030:
	{
		return;
	}
}
// System.Void Joystick::FormatInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_FormatInput_mD271F64EB0724B71476075F27BC0B14FD418137E (Joystick_tCD6542D65EBEE70A3B835333479AB75329325D0C* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0 = __this->___axisOptions_6;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = (&__this->___input_14);
		float L_3 = L_2->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_3, (0.0f), /*hidden argument*/NULL);
		__this->___input_14 = L_4;
		goto IL_0053;
	}

IL_002b:
	{
		int32_t L_5 = __this->___axisOptions_6;
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)2))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0053;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = (&__this->___input_14);
		float L_8 = L_7->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_9), (0.0f), L_8, /*hidden argument*/NULL);
		__this->___input_14 = L_9;
	}

IL_0053:
	{
		return;
	}
}
// System.Single Joystick::SnapFloat(System.Single,AxisOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_SnapFloat_m2B739DF29F69787F35360A94A6521D44DCD1A923 (Joystick_tCD6542D65EBEE70A3B835333479AB75329325D0C* __this, float ___value0, int32_t ___snapAxis1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B22_0 = 0;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) == ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		float L_2 = ___value0;
		V_1 = L_2;
		goto IL_00eb;
	}

IL_0014:
	{
		int32_t L_3 = __this->___axisOptions_6;
		V_2 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_00b5;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = __this->___input_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_up_mF4D6DB00DEA7D055940165B85FFE1CEF6F7CD3AA_inline(NULL);
		float L_7;
		L_7 = Vector2_Angle_m9668B13074D1664DD192669C14B3A8FC01676299_inline(L_5, L_6, NULL);
		V_3 = L_7;
		int32_t L_8 = ___snapAxis1;
		V_4 = (bool)((((int32_t)L_8) == ((int32_t)1))? 1 : 0);
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_0075;
		}
	}
	{
		float L_10 = V_3;
		if ((((float)L_10) < ((float)(22.5f))))
		{
			goto IL_0053;
		}
	}
	{
		float L_11 = V_3;
		G_B7_0 = ((((float)L_11) > ((float)(157.5f)))? 1 : 0);
		goto IL_0054;
	}

IL_0053:
	{
		G_B7_0 = 1;
	}

IL_0054:
	{
		V_5 = (bool)G_B7_0;
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_0065;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_00eb;
	}

IL_0065:
	{
		float L_13 = ___value0;
		if ((((float)L_13) > ((float)(0.0f))))
		{
			goto IL_0070;
		}
	}
	{
		G_B12_0 = (-1);
		goto IL_0071;
	}

IL_0070:
	{
		G_B12_0 = 1;
	}

IL_0071:
	{
		V_1 = ((float)G_B12_0);
		goto IL_00eb;
	}

IL_0075:
	{
		int32_t L_14 = ___snapAxis1;
		V_6 = (bool)((((int32_t)L_14) == ((int32_t)2))? 1 : 0);
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_00b1;
		}
	}
	{
		float L_16 = V_3;
		if ((!(((float)L_16) > ((float)(67.5f)))))
		{
			goto IL_0092;
		}
	}
	{
		float L_17 = V_3;
		G_B17_0 = ((((float)L_17) < ((float)(112.5f)))? 1 : 0);
		goto IL_0093;
	}

IL_0092:
	{
		G_B17_0 = 0;
	}

IL_0093:
	{
		V_7 = (bool)G_B17_0;
		bool L_18 = V_7;
		if (!L_18)
		{
			goto IL_00a1;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_00eb;
	}

IL_00a1:
	{
		float L_19 = ___value0;
		if ((((float)L_19) > ((float)(0.0f))))
		{
			goto IL_00ac;
		}
	}
	{
		G_B22_0 = (-1);
		goto IL_00ad;
	}

IL_00ac:
	{
		G_B22_0 = 1;
	}

IL_00ad:
	{
		V_1 = ((float)G_B22_0);
		goto IL_00eb;
	}

IL_00b1:
	{
		float L_20 = ___value0;
		V_1 = L_20;
		goto IL_00eb;
	}

IL_00b5:
	{
		float L_21 = ___value0;
		V_8 = (bool)((((float)L_21) > ((float)(0.0f)))? 1 : 0);
		bool L_22 = V_8;
		if (!L_22)
		{
			goto IL_00cc;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_00eb;
	}

IL_00cc:
	{
		float L_23 = ___value0;
		V_9 = (bool)((((float)L_23) < ((float)(0.0f)))? 1 : 0);
		bool L_24 = V_9;
		if (!L_24)
		{
			goto IL_00e2;
		}
	}
	{
		V_1 = (-1.0f);
		goto IL_00eb;
	}

IL_00e2:
	{
		V_1 = (0.0f);
		goto IL_00eb;
	}

IL_00eb:
	{
		float L_25 = V_1;
		return L_25;
	}
}
// System.Void Joystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerUp_mEEFF3FB6CCD9866FF0C2F6F60886FB97733AF816 (Joystick_tCD6542D65EBEE70A3B835333479AB75329325D0C* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		__this->___input_14 = L_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___handle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		NullCheck(L_1);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_1, L_2, NULL);
		return;
	}
}
// UnityEngine.Vector2 Joystick::ScreenPointToAnchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Joystick_ScreenPointToAnchoredPosition_m7E57657C741D0313DE83AC24D0FEEE6D7C5E4168 (Joystick_tCD6542D65EBEE70A3B835333479AB75329325D0C* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		V_0 = L_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___baseRect_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___screenPosition0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = __this->___cam_13;
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m9E502D410F5B141117D263D4706C426EFA109DC0(L_1, L_2, L_3, (&V_0), NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0066;
		}
	}
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = __this->___baseRect_11;
		NullCheck(L_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_6, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8 = __this->___baseRect_11;
		NullCheck(L_8);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_8, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_op_Multiply_m6158066AFB36810D63D98EABF0FABEFFC647B2A0_inline(L_7, L_9, NULL);
		V_2 = L_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = V_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12 = __this->___background_9;
		NullCheck(L_12);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = RectTransform_get_anchorMax_mEF870BE2A134CEB9C2326930A71D3961271297DB(L_12, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14 = __this->___baseRect_11;
		NullCheck(L_14);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_14, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Vector2_op_Multiply_m6158066AFB36810D63D98EABF0FABEFFC647B2A0_inline(L_13, L_15, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_11, L_16, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_17, L_18, NULL);
		V_3 = L_19;
		goto IL_006e;
	}

IL_0066:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		V_3 = L_20;
		goto IL_006e;
	}

IL_006e:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = V_3;
		return L_21;
	}
}
// System.Void Joystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick__ctor_m6E9BE1DD3228BE0ED449E9DC3EA73EC67E45A238 (Joystick_tCD6542D65EBEE70A3B835333479AB75329325D0C* __this, const RuntimeMethod* method) 
{
	{
		__this->___handleRange_4 = (1.0f);
		__this->___deadZone_5 = (0.0f);
		__this->___axisOptions_6 = 0;
		__this->___snapX_7 = (bool)0;
		__this->___snapY_8 = (bool)0;
		__this->___background_9 = (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___background_9), (void*)(RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)NULL);
		__this->___handle_10 = (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___handle_10), (void*)(RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)NULL);
		__this->___baseRect_11 = (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___baseRect_11), (void*)(RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		__this->___input_14 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UI.UIIgnoreRaycast::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIIgnoreRaycast_Start_mF2ECF975AA6CFA7F0057ECF224FE674626866CA1 (UIIgnoreRaycast_t9935ECC85F04CCC85F6EB74F6F331618AE60C079* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.UI.UIIgnoreRaycast::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIIgnoreRaycast_Update_m53643BF0FBA17267EBAAA5650FF2C83238140B83 (UIIgnoreRaycast_t9935ECC85F04CCC85F6EB74F6F331618AE60C079* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean UnityEngine.UI.UIIgnoreRaycast::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIIgnoreRaycast_IsRaycastLocationValid_m609E980849B5B94EC3CF217E27D211BC6A52BC61 (UIIgnoreRaycast_t9935ECC85F04CCC85F6EB74F6F331618AE60C079* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___sp0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___eventCamera1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.UI.UIIgnoreRaycast::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIIgnoreRaycast__ctor_m5AF18F2EB210386F549503F3FB51DF037EBA8DCB (UIIgnoreRaycast_t9935ECC85F04CCC85F6EB74F6F331618AE60C079* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TechXR.Core.Sense.FixedExpiryLicense::VerifyLicenseKey(System.String,System.Action`1<co.techxr.unity.model.LoginResponse>,System.Action`1<co.techxr.unity.exceptions.XrException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedExpiryLicense_VerifyLicenseKey_m4C2EECB3BB4C47C0D8716809DB33483986C1BD1B (FixedExpiryLicense_t66BF4FCE9006D57DF5CC0E7C646D7F1D781D97C1* __this, String_t* ___licenseKey0, Action_1_t364C94423BE312DFF449DB8389178799569DCF01* ___OnSuccess1, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___OnError2, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TechXR.Core.Sense.FixedExpiryLicense::CheckKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FixedExpiryLicense_CheckKey_m3B3739C4E253C20C3C9D10A0B9C40225704E8B9A (FixedExpiryLicense_t66BF4FCE9006D57DF5CC0E7C646D7F1D781D97C1* __this, String_t* ___licenseKey0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___m_DevKeys_3;
		NullCheck(L_0);
		Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 L_1;
		L_1 = List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D(L_0, List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0032:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7((&V_0), Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0027_1;
			}

IL_0010_1:
			{
				String_t* L_2;
				L_2 = Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline((&V_0), Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
				V_1 = L_2;
				String_t* L_3 = V_1;
				String_t* L_4 = ___licenseKey0;
				NullCheck(L_3);
				bool L_5;
				L_5 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_3, L_4, NULL);
				V_2 = L_5;
				bool L_6 = V_2;
				if (!L_6)
				{
					goto IL_0027_1;
				}
			}
			{
				V_3 = (bool)1;
				goto IL_0045;
			}

IL_0027_1:
			{
				bool L_7;
				L_7 = Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED((&V_0), Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_0041;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0041:
	{
		V_3 = (bool)0;
		goto IL_0045;
	}

IL_0045:
	{
		bool L_8 = V_3;
		return L_8;
	}
}
// System.Boolean TechXR.Core.Sense.FixedExpiryLicense::CheckTimePeriod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FixedExpiryLicense_CheckTimePeriod_m509D6DD488F460F6BAD66AB5A04583EE3B8EA9F4 (FixedExpiryLicense_t66BF4FCE9006D57DF5CC0E7C646D7F1D781D97C1* __this, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B3_0 = 0;
	{
		FixedExpiryLicense_SetStartDate_m16A54DD4447C19C98BCAB9B2782BDDAF3097D52F(__this, NULL);
		double L_0;
		L_0 = FixedExpiryLicense_GetDaysPassed_mC6E5847AB644BFB0A09DB9848F9FF95E2C8689C6(__this, NULL);
		V_0 = L_0;
		double L_1;
		L_1 = FixedExpiryLicense_GetRemainingDays_m29C91ACF29FA53495A1746C7A59B881D78B2CD59(NULL);
		V_1 = L_1;
		double L_2 = V_0;
		if ((((double)L_2) >= ((double)(180.0))))
		{
			goto IL_0032;
		}
	}
	{
		double L_3 = V_1;
		G_B3_0 = ((((int32_t)((!(((double)L_3) <= ((double)(0.0))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0033;
	}

IL_0032:
	{
		G_B3_0 = 1;
	}

IL_0033:
	{
		V_2 = (bool)G_B3_0;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_003c;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_0040;
	}

IL_003c:
	{
		V_3 = (bool)1;
		goto IL_0040;
	}

IL_0040:
	{
		bool L_5 = V_3;
		return L_5;
	}
}
// System.Void TechXR.Core.Sense.FixedExpiryLicense::SetStartDate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedExpiryLicense_SetStartDate_m16A54DD4447C19C98BCAB9B2782BDDAF3097D52F (FixedExpiryLicense_t66BF4FCE9006D57DF5CC0E7C646D7F1D781D97C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral571E8C4957BBBD9ACC446868F2F5F65B03F3C45A);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0;
		L_0 = PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F(_stringLiteral571E8C4957BBBD9ACC446868F2F5F65B03F3C45A, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		String_t* L_2;
		L_2 = PlayerPrefs_GetString_mA00D069B851DAD77C64D641539889BFD58A8AA92(_stringLiteral571E8C4957BBBD9ACC446868F2F5F65B03F3C45A, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3;
		L_3 = Convert_ToDateTime_mB46B1ABD4F03D21115949353F0133B722B7E972E(L_2, NULL);
		__this->___m_StartDate_0 = L_3;
		goto IL_0049;
	}

IL_0026:
	{
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_4;
		L_4 = DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0(NULL);
		__this->___m_StartDate_0 = L_4;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_5 = (&__this->___m_StartDate_0);
		String_t* L_6;
		L_6 = DateTime_ToString_m447C83E1F8FFFFF4D20C0F7D5C18DEB160F9833A(L_5, NULL);
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(_stringLiteral571E8C4957BBBD9ACC446868F2F5F65B03F3C45A, L_6, NULL);
	}

IL_0049:
	{
		return;
	}
}
// System.Double TechXR.Core.Sense.FixedExpiryLicense::GetDaysPassed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double FixedExpiryLicense_GetDaysPassed_mC6E5847AB644BFB0A09DB9848F9FF95E2C8689C6 (FixedExpiryLicense_t66BF4FCE9006D57DF5CC0E7C646D7F1D781D97C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	double V_1 = 0.0;
	double V_2 = 0.0;
	{
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0(NULL);
		__this->___m_Today_1 = L_0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_1 = (&__this->___m_Today_1);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2 = __this->___m_StartDate_0;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_3;
		L_3 = DateTime_Subtract_m4064A98F489219E9C414DF5C03EE041351B4502A(L_1, L_2, NULL);
		V_0 = L_3;
		double L_4;
		L_4 = TimeSpan_get_TotalDays_m7B3557D0DD79E39DFC6C08BAC756B1B5DE2D4108((&V_0), NULL);
		V_1 = L_4;
		double L_5 = V_1;
		V_2 = L_5;
		goto IL_002a;
	}

IL_002a:
	{
		double L_6 = V_2;
		return L_6;
	}
}
// System.Double TechXR.Core.Sense.FixedExpiryLicense::GetRemainingDays()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double FixedExpiryLicense_GetRemainingDays_m29C91ACF29FA53495A1746C7A59B881D78B2CD59 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_1;
	memset((&V_1), 0, sizeof(V_1));
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_2;
	memset((&V_2), 0, sizeof(V_2));
	double V_3 = 0.0;
	{
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0(NULL);
		V_0 = L_0;
		DateTime__ctor_m1F66A4327FE6B127F0F0E83A70CED25DB0DFFB00((&V_1), ((int32_t)2022), 7, ((int32_t)31), 0, 0, 0, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = V_1;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2 = V_0;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_3;
		L_3 = DateTime_op_Subtraction_m41335EF0E6DCD52B23C64916CB973A0B4A9E0387(L_1, L_2, NULL);
		V_2 = L_3;
		double L_4;
		L_4 = TimeSpan_get_TotalDays_m7B3557D0DD79E39DFC6C08BAC756B1B5DE2D4108((&V_2), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_5;
		L_5 = fabs(L_4);
		V_3 = L_5;
		goto IL_0030;
	}

IL_0030:
	{
		double L_6 = V_3;
		return L_6;
	}
}
// System.Void TechXR.Core.Sense.FixedExpiryLicense::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedExpiryLicense__ctor_m48393252B1DC0E5FF28AF03556347AB8379675AA (FixedExpiryLicense_t66BF4FCE9006D57DF5CC0E7C646D7F1D781D97C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07006AB7E49BD4E07D0B321FF179123508FE9792);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38164B118B6E9320844E4F8ED5F41AE50D40DE70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57D1136465EBC92569AAA1E6FF021B95C25AB45C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69C2F0D60A534D98B5529088F1F02D74B4466763);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B30823019EAE46DF6DB8CF9DACE5A4754D95483);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7421E9C1A61D9A0FF4C8D637C44BB66E6284507);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB18FD5403956E235352A939512137B4D9DB96BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC661DDE6FD7C14D9F810EA317088F4426B258088);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFA782E70B4CF5A85E588B65A1771AF9BC49CCC0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFB2131C0CD3137E2351DFC47EE9F34B887B3FC8);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = L_0;
		NullCheck(L_1);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_1, _stringLiteral57D1136465EBC92569AAA1E6FF021B95C25AB45C, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = L_1;
		NullCheck(L_2);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_2, _stringLiteralA7421E9C1A61D9A0FF4C8D637C44BB66E6284507, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = L_2;
		NullCheck(L_3);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_3, _stringLiteralCFB2131C0CD3137E2351DFC47EE9F34B887B3FC8, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = L_3;
		NullCheck(L_4);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_4, _stringLiteral38164B118B6E9320844E4F8ED5F41AE50D40DE70, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = L_4;
		NullCheck(L_5);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_5, _stringLiteral9B30823019EAE46DF6DB8CF9DACE5A4754D95483, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = L_5;
		NullCheck(L_6);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_6, _stringLiteralC661DDE6FD7C14D9F810EA317088F4426B258088, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = L_6;
		NullCheck(L_7);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_7, _stringLiteral07006AB7E49BD4E07D0B321FF179123508FE9792, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8 = L_7;
		NullCheck(L_8);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_8, _stringLiteral69C2F0D60A534D98B5529088F1F02D74B4466763, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_9 = L_8;
		NullCheck(L_9);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_9, _stringLiteralBB18FD5403956E235352A939512137B4D9DB96BF, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_10 = L_9;
		NullCheck(L_10);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_10, _stringLiteralCFA782E70B4CF5A85E588B65A1771AF9BC49CCC0, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		__this->___m_DevKeys_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DevKeys_3), (void*)L_10);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TechXR.Core.Sense.RuntimeLicenseCheck::CheckLicenseOnRuntime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeLicenseCheck_CheckLicenseOnRuntime_m07101DF450CF687D6F84EE366641C57CC816F40D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t364C94423BE312DFF449DB8389178799569DCF01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t77330DAB4B6364644857E237915461B112A9D589_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedExpiryLicense_t66BF4FCE9006D57DF5CC0E7C646D7F1D781D97C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILicense_tD4E3961B6ADB47AF133878CF688A3B5DC03F7C37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeLicenseCheck_OnError_mD49060DA954BEB32AB269397503D2B3825B13ECE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeLicenseCheck_OnSuccess_mCABD97C2FA68332099AF0EB3F955260FB77E3F4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeLicenseCheck_t4B2E6DD72A29A843AC12C46E319C8D551489719E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonScriptableObject_1_get_Instance_m67B784EE6495BA709A0B9826E60378ADAFBDDBF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FixedExpiryLicense_t66BF4FCE9006D57DF5CC0E7C646D7F1D781D97C1* L_0 = (FixedExpiryLicense_t66BF4FCE9006D57DF5CC0E7C646D7F1D781D97C1*)il2cpp_codegen_object_new(FixedExpiryLicense_t66BF4FCE9006D57DF5CC0E7C646D7F1D781D97C1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		FixedExpiryLicense__ctor_m48393252B1DC0E5FF28AF03556347AB8379675AA(L_0, NULL);
		((RuntimeLicenseCheck_t4B2E6DD72A29A843AC12C46E319C8D551489719E_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeLicenseCheck_t4B2E6DD72A29A843AC12C46E319C8D551489719E_il2cpp_TypeInfo_var))->___license_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((RuntimeLicenseCheck_t4B2E6DD72A29A843AC12C46E319C8D551489719E_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeLicenseCheck_t4B2E6DD72A29A843AC12C46E319C8D551489719E_il2cpp_TypeInfo_var))->___license_1), (void*)L_0);
		RuntimeObject* L_1 = ((RuntimeLicenseCheck_t4B2E6DD72A29A843AC12C46E319C8D551489719E_StaticFields*)il2cpp_codegen_static_fields_for(RuntimeLicenseCheck_t4B2E6DD72A29A843AC12C46E319C8D551489719E_il2cpp_TypeInfo_var))->___license_1;
		TechXRConfiguration_t995E9151CF60B71D35B08C4A39098AC8D06BDAD0* L_2;
		L_2 = SingletonScriptableObject_1_get_Instance_m67B784EE6495BA709A0B9826E60378ADAFBDDBF2(SingletonScriptableObject_1_get_Instance_m67B784EE6495BA709A0B9826E60378ADAFBDDBF2_RuntimeMethod_var);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = TechXRConfiguration_get_LicenseKey_m318E8264B0BEE63874DC10EEC9B083FBB2813D51(L_2, NULL);
		Action_1_t364C94423BE312DFF449DB8389178799569DCF01* L_4 = (Action_1_t364C94423BE312DFF449DB8389178799569DCF01*)il2cpp_codegen_object_new(Action_1_t364C94423BE312DFF449DB8389178799569DCF01_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_1__ctor_m9480CF4CF03E9C10343BFCD73D233179380C6F20(L_4, NULL, (intptr_t)((void*)RuntimeLicenseCheck_OnSuccess_mCABD97C2FA68332099AF0EB3F955260FB77E3F4B_RuntimeMethod_var), NULL);
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_5 = (Action_1_t77330DAB4B6364644857E237915461B112A9D589*)il2cpp_codegen_object_new(Action_1_t77330DAB4B6364644857E237915461B112A9D589_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_m677A92FFE341D3FD26C7EDA1D6A7F4E2B8806696(L_5, NULL, (intptr_t)((void*)RuntimeLicenseCheck_OnError_mD49060DA954BEB32AB269397503D2B3825B13ECE_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		InterfaceActionInvoker3< String_t*, Action_1_t364C94423BE312DFF449DB8389178799569DCF01*, Action_1_t77330DAB4B6364644857E237915461B112A9D589* >::Invoke(0 /* System.Void TechXR.Core.Sense.ILicense::VerifyLicenseKey(System.String,System.Action`1<co.techxr.unity.model.LoginResponse>,System.Action`1<co.techxr.unity.exceptions.XrException>) */, ILicense_tD4E3961B6ADB47AF133878CF688A3B5DC03F7C37_il2cpp_TypeInfo_var, L_1, L_3, L_4, L_5);
		return;
	}
}
// System.Void TechXR.Core.Sense.RuntimeLicenseCheck::OnSuccess(co.techxr.unity.model.LoginResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeLicenseCheck_OnSuccess_mCABD97C2FA68332099AF0EB3F955260FB77E3F4B (LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* ___loginResponse0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AE23549E830B96A60E6B8ADEB29B345D5B13E37);
		s_Il2CppMethodInitialized = true;
	}
	{
		LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* L_0 = ___loginResponse0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = LoginResponse_get_access_token_mE72019AFCDC2B5E9AECD0144D4C92260091833C2_inline(L_0, NULL);
		String_t* L_2;
		L_2 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral9AE23549E830B96A60E6B8ADEB29B345D5B13E37, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.RuntimeLicenseCheck::OnError(co.techxr.unity.exceptions.XrException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeLicenseCheck_OnError_mD49060DA954BEB32AB269397503D2B3825B13ECE (XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* ___xrException0, const RuntimeMethod* method) 
{
	{
		XrException_t4498D588E7BFA3F3B0BADAF20EF88AC37CB5530F* L_0 = ___xrException0;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeLicenseCheck_OnError_mD49060DA954BEB32AB269397503D2B3825B13ECE_RuntimeMethod_var)));
	}
}
// System.Void TechXR.Core.Sense.RuntimeLicenseCheck::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeLicenseCheck__ctor_m8618BC38C74FD1950639217C848D5ED11A4057EF (RuntimeLicenseCheck_t4B2E6DD72A29A843AC12C46E319C8D551489719E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TechXR.Core.Sense.ServerLicenseVerification::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerLicenseVerification__ctor_m4FD46CAC5597F6308857D5275AC26FFBCF7E6C5E (ServerLicenseVerification_t7F1E7EA6216939EBBF283858E7C5DC9763D76FE3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LicenseService_t6FFDDF25E97C8C6A850DBB9EED03DE9E9DFFE759_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EA8DD084E8F989615726031677818FAE4E4A013);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Url_t57E9F2E35D463EDA7BC786D03D4D98CB32CDC015_il2cpp_TypeInfo_var);
		Url_setEditorMode_mA367BC5C1860CB8E4E7EFFA72F9ABD8D1573EC29((bool)1, NULL);
		Url_setBaseUrl_m6B947FD7456134084E935B99503C45645E050695(_stringLiteral4EA8DD084E8F989615726031677818FAE4E4A013, NULL);
		LicenseService_t6FFDDF25E97C8C6A850DBB9EED03DE9E9DFFE759* L_0 = (LicenseService_t6FFDDF25E97C8C6A850DBB9EED03DE9E9DFFE759*)il2cpp_codegen_object_new(LicenseService_t6FFDDF25E97C8C6A850DBB9EED03DE9E9DFFE759_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LicenseService__ctor_m53521AA6FC5F8F72E2301B8A06B7ED9235927563(L_0, NULL);
		__this->___m_LicenseService_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LicenseService_1), (void*)L_0);
		return;
	}
}
// System.Void TechXR.Core.Sense.ServerLicenseVerification::VerifyLicenseKey(System.String,System.Action`1<co.techxr.unity.model.LoginResponse>,System.Action`1<co.techxr.unity.exceptions.XrException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerLicenseVerification_VerifyLicenseKey_m61C0A0533B58E1FC8B1DF25B576F43EC6334F0B9 (ServerLicenseVerification_t7F1E7EA6216939EBBF283858E7C5DC9763D76FE3* __this, String_t* ___licenseKey0, Action_1_t364C94423BE312DFF449DB8389178799569DCF01* ___OnSuccess1, Action_1_t77330DAB4B6364644857E237915461B112A9D589* ___OnError2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98314E4D50FABB610F151501D3B0FC79D528EADB);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		V_0 = L_0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = V_0;
		String_t* L_2 = ___licenseKey0;
		NullCheck(L_1);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_1, _stringLiteral98314E4D50FABB610F151501D3B0FC79D528EADB, L_2, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		LicenseService_t6FFDDF25E97C8C6A850DBB9EED03DE9E9DFFE759* L_3 = __this->___m_LicenseService_1;
		String_t* L_4 = ___licenseKey0;
		Action_1_t364C94423BE312DFF449DB8389178799569DCF01* L_5 = ___OnSuccess1;
		Action_1_t77330DAB4B6364644857E237915461B112A9D589* L_6 = ___OnError2;
		NullCheck(L_3);
		LicenseService_registerLicense_m1F004768128B97E5F8B5D1431737790C3009F9D3(L_3, L_4, L_5, L_6, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TechXR.Core.Sense.Defs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Defs__ctor_m95CF2646D272BD698A0CF4CB59B82341E056B42C (Defs_tDBAD6C54441BEF6C29B17552EE04857F52EAA049* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String TechXR.Core.Sense.TechXRConfiguration::get_LicenseKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TechXRConfiguration_get_LicenseKey_m318E8264B0BEE63874DC10EEC9B083FBB2813D51 (TechXRConfiguration_t995E9151CF60B71D35B08C4A39098AC8D06BDAD0* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___m_AppLicenseKey_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void TechXR.Core.Sense.TechXRConfiguration::set_LicenseKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TechXRConfiguration_set_LicenseKey_m2E5F7E0F4F2002E73DF985D60BF0D3C909B2C493 (TechXRConfiguration_t995E9151CF60B71D35B08C4A39098AC8D06BDAD0* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___m_AppLicenseKey_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AppLicenseKey_5), (void*)L_0);
		return;
	}
}
// System.Void TechXR.Core.Sense.TechXRConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TechXRConfiguration__ctor_m7728C0FBCA60239EF42AF2F863F799852FCC79ED (TechXRConfiguration_t995E9151CF60B71D35B08C4A39098AC8D06BDAD0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonScriptableObject_1__ctor_m1B44A6757EFCF818D18A52A3ECA994286FA34B11_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SingletonScriptableObject_1__ctor_m1B44A6757EFCF818D18A52A3ECA994286FA34B11(__this, SingletonScriptableObject_1__ctor_m1B44A6757EFCF818D18A52A3ECA994286FA34B11_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TechXR.Core.Sense.LaserPointerEventData::.ctor(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaserPointerEventData__ctor_m0558BF06EE3155A19B620ABCCC88D437D5D840FC (LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A* __this, EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___e0, const RuntimeMethod* method) 
{
	{
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0 = ___e0;
		PointerEventData__ctor_m63837790B68893F0022CCEFEF26ADD55A975F71C(__this, L_0, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.LaserPointerEventData::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaserPointerEventData_Start_m6D67F3417091F4FA58BDDB4E2132C8B7EFC114C8 (LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void TechXR.Core.Sense.LaserPointerEventData::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaserPointerEventData_Update_mC47DFEB3D0F7CD659FFDBC16055E4CC93292D2BD (LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void TechXR.Core.Sense.LaserPointerEventData::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaserPointerEventData_Reset_mF37EDD4EFA3973993293D938AA15D0173CDBB396 (LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A* __this, const RuntimeMethod* method) 
{
	{
		__this->___Current_33 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Current_33), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		__this->___Controller_34 = (IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Controller_34), (void*)(IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F*)NULL);
		AbstractEventData_Reset_mC3FF13B6FB1012E8FAB00250AE8CD2E1975EF6AC(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TechXR.Core.Sense.ControllerData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerData__ctor_m9E127DB0068DB2AB1F6373407E243388FEDC0366 (ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SenseEventDelegate_Invoke_m716A86E11F18D88768A1F535DF2BD764E581643A_Multicast(SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C* currentDelegate = reinterpret_cast<SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___args0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void SenseEventDelegate_Invoke_m716A86E11F18D88768A1F535DF2BD764E581643A_Open(SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___args0, method);
}
void SenseEventDelegate_Invoke_m716A86E11F18D88768A1F535DF2BD764E581643A_OpenStaticInvoker(SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(__this->___method_ptr_0, method, NULL, ___args0);
}
void SenseEventDelegate_Invoke_m716A86E11F18D88768A1F535DF2BD764E581643A_ClosedStaticInvoker(SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___args0);
}
void SenseEventDelegate_Invoke_m716A86E11F18D88768A1F535DF2BD764E581643A_OpenVirtual(SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___args0);
}
void SenseEventDelegate_Invoke_m716A86E11F18D88768A1F535DF2BD764E581643A_OpenInterface(SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___args0);
}
void SenseEventDelegate_Invoke_m716A86E11F18D88768A1F535DF2BD764E581643A_OpenGenericVirtual(SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___args0);
}
void SenseEventDelegate_Invoke_m716A86E11F18D88768A1F535DF2BD764E581643A_OpenGenericInterface(SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___args0);
}
// System.Void TechXR.Core.Sense.SenseEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseEventDelegate__ctor_m233D18E8B531E0AAF30466C9EAD385CC60635134 (SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SenseEventDelegate_Invoke_m716A86E11F18D88768A1F535DF2BD764E581643A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SenseEventDelegate_Invoke_m716A86E11F18D88768A1F535DF2BD764E581643A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SenseEventDelegate_Invoke_m716A86E11F18D88768A1F535DF2BD764E581643A_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&SenseEventDelegate_Invoke_m716A86E11F18D88768A1F535DF2BD764E581643A_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SenseEventDelegate_Invoke_m716A86E11F18D88768A1F535DF2BD764E581643A_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&SenseEventDelegate_Invoke_m716A86E11F18D88768A1F535DF2BD764E581643A_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SenseEventDelegate_Invoke_m716A86E11F18D88768A1F535DF2BD764E581643A_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&SenseEventDelegate_Invoke_m716A86E11F18D88768A1F535DF2BD764E581643A_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&SenseEventDelegate_Invoke_m716A86E11F18D88768A1F535DF2BD764E581643A_Multicast;
}
// System.Void TechXR.Core.Sense.SenseEventDelegate::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseEventDelegate_Invoke_m716A86E11F18D88768A1F535DF2BD764E581643A (SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___args0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult TechXR.Core.Sense.SenseEventDelegate::BeginInvoke(System.Object[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SenseEventDelegate_BeginInvoke_mE0126C81F07BB61A22233BD4D4E95D8B6761A700 (SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___args0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void TechXR.Core.Sense.SenseEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseEventDelegate_EndInvoke_m8284A4AE6240A7143DFE83C4716D993F4111ABD4 (SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.IEnumerator TechXR.Core.Sense.GyroScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GyroScript_Start_m07C5E08254662EEAC3913113F8F6E9B7E2ACF2A0 (GyroScript_tD8E851D88E999B441E345C7A458CC62E12F18D3E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartU3Ed__7_t2482C4AD1915332F390CE3E730A4483A1CE3AC60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartU3Ed__7_t2482C4AD1915332F390CE3E730A4483A1CE3AC60* L_0 = (U3CStartU3Ed__7_t2482C4AD1915332F390CE3E730A4483A1CE3AC60*)il2cpp_codegen_object_new(U3CStartU3Ed__7_t2482C4AD1915332F390CE3E730A4483A1CE3AC60_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartU3Ed__7__ctor_mEA32E105911ABA604A07F15588A66D6AEB07E9D6(L_0, 0, NULL);
		U3CStartU3Ed__7_t2482C4AD1915332F390CE3E730A4483A1CE3AC60* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void TechXR.Core.Sense.GyroScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GyroScript_Update_mCB93F02AD962C710D17BE1B535816CAD836C337C (GyroScript_tD8E851D88E999B441E345C7A458CC62E12F18D3E* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t G_B3_0 = 0;
	{
		int32_t L_0;
		L_0 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)11))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1;
		L_1 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)8))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_00a0;
		}
	}
	{
		GyroScript_ApplyGyroRotation_m959C47DEF957FBF9F0DF483625FA62A5EB0F1463(__this, NULL);
		GyroScript_ApplyCalibration_mD44DF1BA07776CBA23ABE772DB49160CEAE2D9F9(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->____rawGyroRotation_8;
		NullCheck(L_6);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_6, NULL);
		float L_8 = __this->____smoothing_10;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_Slerp_m5FDA8C178E7EB209B43845F73263AFE9C02F3949(L_5, L_7, L_8, NULL);
		NullCheck(L_3);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_3, L_9, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_10, NULL);
		V_1 = L_11;
		(&V_1)->___x_0 = (0.0f);
		(&V_1)->___z_2 = (0.0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___PlayerBody_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->___PlayerBody_4;
		NullCheck(L_13);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_13, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15 = V_1;
		float L_16 = __this->____smoothing_10;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_Slerp_m5FDA8C178E7EB209B43845F73263AFE9C02F3949(L_14, L_15, L_16, NULL);
		NullCheck(L_12);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_12, L_17, NULL);
	}

IL_00a0:
	{
		return;
	}
}
// System.Collections.IEnumerator TechXR.Core.Sense.GyroScript::CalibrateYAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GyroScript_CalibrateYAngle_m711AD666B7B92BB26F75F79CD6D205418475E293 (GyroScript_tD8E851D88E999B441E345C7A458CC62E12F18D3E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCalibrateYAngleU3Ed__9_tBB8137A2FE8B1DE92983BB1B288053B2D5AD5096_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCalibrateYAngleU3Ed__9_tBB8137A2FE8B1DE92983BB1B288053B2D5AD5096* L_0 = (U3CCalibrateYAngleU3Ed__9_tBB8137A2FE8B1DE92983BB1B288053B2D5AD5096*)il2cpp_codegen_object_new(U3CCalibrateYAngleU3Ed__9_tBB8137A2FE8B1DE92983BB1B288053B2D5AD5096_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCalibrateYAngleU3Ed__9__ctor_m511F60C863C6A7B1531B4505851BF4AEA81891C9(L_0, 0, NULL);
		U3CCalibrateYAngleU3Ed__9_tBB8137A2FE8B1DE92983BB1B288053B2D5AD5096* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void TechXR.Core.Sense.GyroScript::ApplyGyroRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GyroScript_ApplyGyroRotation_m959C47DEF957FBF9F0DF483625FA62A5EB0F1463 (GyroScript_tD8E851D88E999B441E345C7A458CC62E12F18D3E* __this, const RuntimeMethod* method) 
{
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____rawGyroRotation_8;
		Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* L_1;
		L_1 = Input_get_gyro_m5A5F30FDF6BBA469C0C71EF7FC6E02E7FC08CCFC(NULL);
		NullCheck(L_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Gyroscope_get_attitude_mF6D8131ED2D0E5BF979C7FC4AAC99E87A01CBE85(L_1, NULL);
		NullCheck(L_0);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_0, L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->____rawGyroRotation_8;
		NullCheck(L_3);
		Transform_Rotate_mE12DB27208410BB7090FA117D53DBEBBC0A36B30(L_3, (0.0f), (0.0f), (180.0f), 1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->____rawGyroRotation_8;
		NullCheck(L_4);
		Transform_Rotate_mE12DB27208410BB7090FA117D53DBEBBC0A36B30(L_4, (90.0f), (180.0f), (0.0f), 0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->____rawGyroRotation_8;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_5, NULL);
		float L_7 = L_6.___y_3;
		__this->____appliedGyroYAngle_6 = L_7;
		return;
	}
}
// System.Void TechXR.Core.Sense.GyroScript::ApplyCalibration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GyroScript_ApplyCalibration_mD44DF1BA07776CBA23ABE772DB49160CEAE2D9F9 (GyroScript_tD8E851D88E999B441E345C7A458CC62E12F18D3E* __this, const RuntimeMethod* method) 
{
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____rawGyroRotation_8;
		float L_1 = __this->____calibrationYAngle_7;
		NullCheck(L_0);
		Transform_Rotate_mE12DB27208410BB7090FA117D53DBEBBC0A36B30(L_0, (0.0f), ((-L_1)), (0.0f), 0, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.GyroScript::SetEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GyroScript_SetEnabled_mD488A243C0FC4FFCB21E8B1E89BC14B73A2AB618 (GyroScript_tD8E851D88E999B441E345C7A458CC62E12F18D3E* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)1, NULL);
		RuntimeObject* L_0;
		L_0 = GyroScript_CalibrateYAngle_m711AD666B7B92BB26F75F79CD6D205418475E293(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.GyroScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GyroScript__ctor_m0AD2C226C2935D03B5D281920A512EE209A588D2 (GyroScript_tD8E851D88E999B441E345C7A458CC62E12F18D3E* __this, const RuntimeMethod* method) 
{
	{
		__this->____initialYAngle_5 = (0.0f);
		__this->____appliedGyroYAngle_6 = (0.0f);
		__this->____calibrationYAngle_7 = (0.0f);
		__this->____smoothing_10 = (0.100000001f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TechXR.Core.Sense.GyroScript/<Start>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__7__ctor_mEA32E105911ABA604A07F15588A66D6AEB07E9D6 (U3CStartU3Ed__7_t2482C4AD1915332F390CE3E730A4483A1CE3AC60* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TechXR.Core.Sense.GyroScript/<Start>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__7_System_IDisposable_Dispose_mB81DCD4D11F8ACA828E2C28B531F3648DE6C3164 (U3CStartU3Ed__7_t2482C4AD1915332F390CE3E730A4483A1CE3AC60* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TechXR.Core.Sense.GyroScript/<Start>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__7_MoveNext_m3BC2285FB714CDDA0DD0668717BDC49ADDE787CD (U3CStartU3Ed__7_t2482C4AD1915332F390CE3E730A4483A1CE3AC60* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A5DA721B3CE6EB97AE098FB4DD1F5B73F53A70C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31C86B9D9129A9B228A8783A889D45C595E9610A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6FE0281FED4018A4011C17542C16A0870C4393C3);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B10_0 = 0;
	int32_t G_B24_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_01ce;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		int32_t L_3;
		L_3 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		if ((((int32_t)L_3) == ((int32_t)((int32_t)11))))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_4;
		L_4 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		G_B10_0 = ((((int32_t)L_4) == ((int32_t)8))? 1 : 0);
		goto IL_0037;
	}

IL_0036:
	{
		G_B10_0 = 1;
	}

IL_0037:
	{
		V_1 = (bool)G_B10_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_01b5;
		}
	}
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6;
		L_6 = GameObject_FindGameObjectsWithTag_m63AB9863553265F03EDE4C11AEA98AF591CAEA1E(_stringLiteral6FE0281FED4018A4011C17542C16A0870C4393C3, NULL);
		__this->___U3CplayerBodyU3E5__1_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CplayerBodyU3E5__1_3), (void*)L_6);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = __this->___U3CplayerBodyU3E5__1_3;
		__this->___U3CU3Es__3_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_5), (void*)L_7);
		__this->___U3CU3Es__4_6 = 0;
		goto IL_00b2;
	}

IL_0065:
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = __this->___U3CU3Es__3_5;
		int32_t L_9 = __this->___U3CU3Es__4_6;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		__this->___U3CpbU3E5__5_7 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpbU3E5__5_7), (void*)L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___U3CpbU3E5__5_7;
		NullCheck(L_12);
		bool L_13;
		L_13 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_12, NULL);
		V_2 = L_13;
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_009d;
		}
	}
	{
		GyroScript_tD8E851D88E999B441E345C7A458CC62E12F18D3E* L_15 = __this->___U3CU3E4__this_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___U3CpbU3E5__5_7;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		NullCheck(L_15);
		L_15->___PlayerBody_4 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->___PlayerBody_4), (void*)L_17);
	}

IL_009d:
	{
		__this->___U3CpbU3E5__5_7 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpbU3E5__5_7), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		int32_t L_18 = __this->___U3CU3Es__4_6;
		__this->___U3CU3Es__4_6 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_00b2:
	{
		int32_t L_19 = __this->___U3CU3Es__4_6;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_20 = __this->___U3CU3Es__3_5;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_0065;
		}
	}
	{
		__this->___U3CU3Es__3_5 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_5), (void*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral1A5DA721B3CE6EB97AE098FB4DD1F5B73F53A70C, NULL);
		__this->___U3CCharacterBodyContainerU3E5__2_4 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCharacterBodyContainerU3E5__2_4), (void*)L_21);
		GyroScript_tD8E851D88E999B441E345C7A458CC62E12F18D3E* L_22 = __this->___U3CU3E4__this_2;
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = L_22->___PlayerBody_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_23, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_3 = L_24;
		bool L_25 = V_3;
		if (!L_25)
		{
			goto IL_0116;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___U3CCharacterBodyContainerU3E5__2_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_26, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_4 = L_27;
		bool L_28 = V_4;
		if (!L_28)
		{
			goto IL_0116;
		}
	}
	{
		GyroScript_tD8E851D88E999B441E345C7A458CC62E12F18D3E* L_29 = __this->___U3CU3E4__this_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = __this->___U3CCharacterBodyContainerU3E5__2_4;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_30, NULL);
		NullCheck(L_29);
		L_29->___PlayerBody_4 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&L_29->___PlayerBody_4), (void*)L_31);
	}

IL_0116:
	{
		Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* L_32;
		L_32 = Input_get_gyro_m5A5F30FDF6BBA469C0C71EF7FC6E02E7FC08CCFC(NULL);
		NullCheck(L_32);
		Gyroscope_set_enabled_m2B22BC93369BA61034A80350405FE1B493822DAB(L_32, (bool)1, NULL);
		Application_set_targetFrameRate_m794A13DC5116C506B042663606691257CF3A7325(((int32_t)60), NULL);
		GyroScript_tD8E851D88E999B441E345C7A458CC62E12F18D3E* L_33 = __this->___U3CU3E4__this_2;
		GyroScript_tD8E851D88E999B441E345C7A458CC62E12F18D3E* L_34 = __this->___U3CU3E4__this_2;
		NullCheck(L_34);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_34, NULL);
		NullCheck(L_35);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_35, NULL);
		float L_37 = L_36.___y_3;
		NullCheck(L_33);
		L_33->____initialYAngle_5 = L_37;
		GyroScript_tD8E851D88E999B441E345C7A458CC62E12F18D3E* L_38 = __this->___U3CU3E4__this_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_39);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_39, _stringLiteral31C86B9D9129A9B228A8783A889D45C595E9610A, NULL);
		NullCheck(L_39);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_39, NULL);
		NullCheck(L_38);
		L_38->____rawGyroRotation_8 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&L_38->____rawGyroRotation_8), (void*)L_40);
		GyroScript_tD8E851D88E999B441E345C7A458CC62E12F18D3E* L_41 = __this->___U3CU3E4__this_2;
		NullCheck(L_41);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42 = L_41->____rawGyroRotation_8;
		GyroScript_tD8E851D88E999B441E345C7A458CC62E12F18D3E* L_43 = __this->___U3CU3E4__this_2;
		NullCheck(L_43);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44;
		L_44 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_43, NULL);
		NullCheck(L_44);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_44, NULL);
		NullCheck(L_42);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_42, L_45, NULL);
		GyroScript_tD8E851D88E999B441E345C7A458CC62E12F18D3E* L_46 = __this->___U3CU3E4__this_2;
		NullCheck(L_46);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47 = L_46->____rawGyroRotation_8;
		GyroScript_tD8E851D88E999B441E345C7A458CC62E12F18D3E* L_48 = __this->___U3CU3E4__this_2;
		NullCheck(L_48);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49;
		L_49 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_48, NULL);
		NullCheck(L_49);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50;
		L_50 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_49, NULL);
		NullCheck(L_47);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_47, L_50, NULL);
		__this->___U3CplayerBodyU3E5__1_3 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CplayerBodyU3E5__1_3), (void*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)NULL);
		__this->___U3CCharacterBodyContainerU3E5__2_4 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCharacterBodyContainerU3E5__2_4), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
	}

IL_01b5:
	{
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_51 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_51);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_51, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_51);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_01ce:
	{
		__this->___U3CU3E1__state_0 = (-1);
		int32_t L_52;
		L_52 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		if ((((int32_t)L_52) == ((int32_t)((int32_t)11))))
		{
			goto IL_01e8;
		}
	}
	{
		int32_t L_53;
		L_53 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		G_B24_0 = ((((int32_t)L_53) == ((int32_t)8))? 1 : 0);
		goto IL_01e9;
	}

IL_01e8:
	{
		G_B24_0 = 1;
	}

IL_01e9:
	{
		V_5 = (bool)G_B24_0;
		bool L_54 = V_5;
		if (!L_54)
		{
			goto IL_0206;
		}
	}
	{
		GyroScript_tD8E851D88E999B441E345C7A458CC62E12F18D3E* L_55 = __this->___U3CU3E4__this_2;
		GyroScript_tD8E851D88E999B441E345C7A458CC62E12F18D3E* L_56 = __this->___U3CU3E4__this_2;
		NullCheck(L_56);
		RuntimeObject* L_57;
		L_57 = GyroScript_CalibrateYAngle_m711AD666B7B92BB26F75F79CD6D205418475E293(L_56, NULL);
		NullCheck(L_55);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_58;
		L_58 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_55, L_57, NULL);
	}

IL_0206:
	{
		return (bool)0;
	}
}
// System.Object TechXR.Core.Sense.GyroScript/<Start>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2838E5F45F84AB032B89A7EC27CA6BEFE782A81B (U3CStartU3Ed__7_t2482C4AD1915332F390CE3E730A4483A1CE3AC60* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TechXR.Core.Sense.GyroScript/<Start>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__7_System_Collections_IEnumerator_Reset_mB5953AD358FCE1625A235DF3CFAB987EC485E4DE (U3CStartU3Ed__7_t2482C4AD1915332F390CE3E730A4483A1CE3AC60* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartU3Ed__7_System_Collections_IEnumerator_Reset_mB5953AD358FCE1625A235DF3CFAB987EC485E4DE_RuntimeMethod_var)));
	}
}
// System.Object TechXR.Core.Sense.GyroScript/<Start>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__7_System_Collections_IEnumerator_get_Current_mC9B8ED5663A3FA638A17A4C5F4EBEACDA4F4463A (U3CStartU3Ed__7_t2482C4AD1915332F390CE3E730A4483A1CE3AC60* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TechXR.Core.Sense.GyroScript/<CalibrateYAngle>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCalibrateYAngleU3Ed__9__ctor_m511F60C863C6A7B1531B4505851BF4AEA81891C9 (U3CCalibrateYAngleU3Ed__9_tBB8137A2FE8B1DE92983BB1B288053B2D5AD5096* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TechXR.Core.Sense.GyroScript/<CalibrateYAngle>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCalibrateYAngleU3Ed__9_System_IDisposable_Dispose_m467ABB1D12933A2AAE72B1CFFF0E2BF665AAEB41 (U3CCalibrateYAngleU3Ed__9_tBB8137A2FE8B1DE92983BB1B288053B2D5AD5096* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TechXR.Core.Sense.GyroScript/<CalibrateYAngle>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCalibrateYAngleU3Ed__9_MoveNext_mBC1AB2237D95DC4D5A9B8462C791F6ED03737BDF (U3CCalibrateYAngleU3Ed__9_tBB8137A2FE8B1DE92983BB1B288053B2D5AD5096* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0078;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		GyroScript_tD8E851D88E999B441E345C7A458CC62E12F18D3E* L_3 = __this->___U3CU3E4__this_2;
		GyroScript_tD8E851D88E999B441E345C7A458CC62E12F18D3E* L_4 = __this->___U3CU3E4__this_2;
		NullCheck(L_4);
		float L_5 = L_4->____smoothing_10;
		NullCheck(L_3);
		L_3->____tempSmoothing_9 = L_5;
		GyroScript_tD8E851D88E999B441E345C7A458CC62E12F18D3E* L_6 = __this->___U3CU3E4__this_2;
		NullCheck(L_6);
		L_6->____smoothing_10 = (1.0f);
		GyroScript_tD8E851D88E999B441E345C7A458CC62E12F18D3E* L_7 = __this->___U3CU3E4__this_2;
		GyroScript_tD8E851D88E999B441E345C7A458CC62E12F18D3E* L_8 = __this->___U3CU3E4__this_2;
		NullCheck(L_8);
		float L_9 = L_8->____appliedGyroYAngle_6;
		GyroScript_tD8E851D88E999B441E345C7A458CC62E12F18D3E* L_10 = __this->___U3CU3E4__this_2;
		NullCheck(L_10);
		float L_11 = L_10->____initialYAngle_5;
		NullCheck(L_7);
		L_7->____calibrationYAngle_7 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0078:
	{
		__this->___U3CU3E1__state_0 = (-1);
		GyroScript_tD8E851D88E999B441E345C7A458CC62E12F18D3E* L_12 = __this->___U3CU3E4__this_2;
		GyroScript_tD8E851D88E999B441E345C7A458CC62E12F18D3E* L_13 = __this->___U3CU3E4__this_2;
		NullCheck(L_13);
		float L_14 = L_13->____tempSmoothing_9;
		NullCheck(L_12);
		L_12->____smoothing_10 = L_14;
		return (bool)0;
	}
}
// System.Object TechXR.Core.Sense.GyroScript/<CalibrateYAngle>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCalibrateYAngleU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4D075B72D94B1DAD74DBF10CFFF28750D26872A0 (U3CCalibrateYAngleU3Ed__9_tBB8137A2FE8B1DE92983BB1B288053B2D5AD5096* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TechXR.Core.Sense.GyroScript/<CalibrateYAngle>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCalibrateYAngleU3Ed__9_System_Collections_IEnumerator_Reset_m3CF921D9C038ED35AF610148747F1724A691FC6B (U3CCalibrateYAngleU3Ed__9_tBB8137A2FE8B1DE92983BB1B288053B2D5AD5096* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCalibrateYAngleU3Ed__9_System_Collections_IEnumerator_Reset_m3CF921D9C038ED35AF610148747F1724A691FC6B_RuntimeMethod_var)));
	}
}
// System.Object TechXR.Core.Sense.GyroScript/<CalibrateYAngle>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCalibrateYAngleU3Ed__9_System_Collections_IEnumerator_get_Current_m3EB9C3E114405B6F21970F9E75541EB102A420A3 (U3CCalibrateYAngleU3Ed__9_tBB8137A2FE8B1DE92983BB1B288053B2D5AD5096* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TechXR.Core.Sense.XRModeSwitch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRModeSwitch_Start_m73FC76A7D3119DD06AA68D004197861632DB76DA (XRModeSwitch_t711B273AD5CA47A8B17ED7D4B7CA7A232C3B39C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAFAC821ADE3B9D80860F804E61841B832CA53EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9CC093AAA8BF5C2E10E10E844A69670132EEA44);
		s_Il2CppMethodInitialized = true;
	}
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_0 = NULL;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_1 = NULL;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_2 = NULL;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_0, _stringLiteralE9CC093AAA8BF5C2E10E10E844A69670132EEA44, NULL);
		__this->___monoCamera_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___monoCamera_12), (void*)L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___monoCamera_12;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_2, L_3, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___monoCamera_12;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_5);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_5, L_6, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___monoCamera_12;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (0.0f), (0.0f), NULL);
		NullCheck(L_8);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_8, L_9, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___monoCamera_12;
		NullCheck(L_10);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_11;
		L_11 = GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142(L_10, GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142_RuntimeMethod_var);
		V_0 = L_11;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_12 = V_0;
		float L_13 = __this->___FieldOfView_7;
		NullCheck(L_12);
		Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777(L_12, L_13, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_14 = V_0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_15 = L_14;
		NullCheck(L_15);
		float L_16;
		L_16 = Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D(L_15, NULL);
		NullCheck(L_15);
		Camera_set_aspect_m537F21B48FDD5C060DFF9D87F34F4FB2B0F9BEB6(L_15, ((float)il2cpp_codegen_multiply(L_16, (1.0f))), NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_17 = V_0;
		float L_18 = __this->___NearClipPlane_5;
		NullCheck(L_17);
		Camera_set_nearClipPlane_m78482B5E4E0CE4C195D9CE0332AA75B2D9CCDDF6(L_17, L_18, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_19 = V_0;
		float L_20 = __this->___FarClipPlane_6;
		NullCheck(L_19);
		Camera_set_farClipPlane_m84EF39B09573168734613481FD979BFF31C60139(L_19, L_20, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_21, _stringLiteralE9CC093AAA8BF5C2E10E10E844A69670132EEA44, NULL);
		__this->___leftEyeCamera_10 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___leftEyeCamera_10), (void*)L_21);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___leftEyeCamera_10;
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_22, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_23);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_23, L_24, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___leftEyeCamera_10;
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_25, NULL);
		float L_27 = __this->___EyeSeparation_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_28), ((float)(((-L_27))/(2.0f))), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_26);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_26, L_28, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = __this->___leftEyeCamera_10;
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_29, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31;
		L_31 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (0.0f), (0.0f), NULL);
		NullCheck(L_30);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_30, L_31, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = __this->___leftEyeCamera_10;
		NullCheck(L_32);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_33;
		L_33 = GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142(L_32, GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142_RuntimeMethod_var);
		V_1 = L_33;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_34 = V_1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_35;
		memset((&L_35), 0, sizeof(L_35));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_35), (0.0f), (0.0f), (0.5f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_34);
		Camera_set_rect_mA81158BC169AF8674DE240AE9460FC5A0EADBB19(L_34, L_35, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_36 = V_1;
		float L_37 = __this->___FieldOfView_7;
		NullCheck(L_36);
		Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777(L_36, L_37, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_38 = V_1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_39 = L_38;
		NullCheck(L_39);
		float L_40;
		L_40 = Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D(L_39, NULL);
		NullCheck(L_39);
		Camera_set_aspect_m537F21B48FDD5C060DFF9D87F34F4FB2B0F9BEB6(L_39, ((float)il2cpp_codegen_multiply(L_40, (1.0f))), NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_41 = V_1;
		float L_42 = __this->___NearClipPlane_5;
		NullCheck(L_41);
		Camera_set_nearClipPlane_m78482B5E4E0CE4C195D9CE0332AA75B2D9CCDDF6(L_41, L_42, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_43 = V_1;
		float L_44 = __this->___FarClipPlane_6;
		NullCheck(L_43);
		Camera_set_farClipPlane_m84EF39B09573168734613481FD979BFF31C60139(L_43, L_44, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_45);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_45, _stringLiteralDAFAC821ADE3B9D80860F804E61841B832CA53EA, NULL);
		__this->___rightEyeCamera_11 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rightEyeCamera_11), (void*)L_45);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46 = __this->___rightEyeCamera_11;
		NullCheck(L_46);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47;
		L_47 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_46, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48;
		L_48 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_47);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_47, L_48, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49 = __this->___rightEyeCamera_11;
		NullCheck(L_49);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_50;
		L_50 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_49, NULL);
		float L_51 = __this->___EyeSeparation_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		memset((&L_52), 0, sizeof(L_52));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_52), ((float)(L_51/(2.0f))), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_50);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_50, L_52, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_53 = __this->___rightEyeCamera_11;
		NullCheck(L_53);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_54;
		L_54 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_53, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_55;
		L_55 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (0.0f), (0.0f), NULL);
		NullCheck(L_54);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_54, L_55, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56 = __this->___rightEyeCamera_11;
		NullCheck(L_56);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_57;
		L_57 = GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142(L_56, GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142_RuntimeMethod_var);
		V_2 = L_57;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_58 = V_2;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_59;
		memset((&L_59), 0, sizeof(L_59));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_59), (0.5f), (0.0f), (0.5f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_58);
		Camera_set_rect_mA81158BC169AF8674DE240AE9460FC5A0EADBB19(L_58, L_59, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_60 = V_2;
		float L_61 = __this->___FieldOfView_7;
		NullCheck(L_60);
		Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777(L_60, L_61, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_62 = V_2;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_63 = L_62;
		NullCheck(L_63);
		float L_64;
		L_64 = Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D(L_63, NULL);
		NullCheck(L_63);
		Camera_set_aspect_m537F21B48FDD5C060DFF9D87F34F4FB2B0F9BEB6(L_63, ((float)il2cpp_codegen_multiply(L_64, (1.0f))), NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_65 = V_2;
		float L_66 = __this->___NearClipPlane_5;
		NullCheck(L_65);
		Camera_set_nearClipPlane_m78482B5E4E0CE4C195D9CE0332AA75B2D9CCDDF6(L_65, L_66, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_67 = V_2;
		float L_68 = __this->___FarClipPlane_6;
		NullCheck(L_67);
		Camera_set_farClipPlane_m84EF39B09573168734613481FD979BFF31C60139(L_67, L_68, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.XRModeSwitch::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRModeSwitch_Update_m8F73426EB2B082D6D031216BCF6CEF851188147E (XRModeSwitch_t711B273AD5CA47A8B17ED7D4B7CA7A232C3B39C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6(L_0, GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var);
		bool L_2 = __this->___IsAR_8;
		NullCheck(L_1);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, L_2, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___monoCamera_12;
		bool L_4 = __this->___IsAR_8;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0), NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___leftEyeCamera_10;
		bool L_6 = __this->___IsStereo_9;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, L_6, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___rightEyeCamera_11;
		bool L_8 = __this->___IsStereo_9;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, L_8, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.XRModeSwitch::ChangeToVR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRModeSwitch_ChangeToVR_m44A0A5F903E69E24827AB72D4A411B0BCF14695A (XRModeSwitch_t711B273AD5CA47A8B17ED7D4B7CA7A232C3B39C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGyroScript_tD8E851D88E999B441E345C7A458CC62E12F18D3E_m2706485CC60637B4A0C56D5B5E29AEDD8F18415A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___IsStereo_9 = (bool)1;
		__this->___IsAR_8 = (bool)0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GyroScript_tD8E851D88E999B441E345C7A458CC62E12F18D3E* L_1;
		L_1 = GameObject_GetComponent_TisGyroScript_tD8E851D88E999B441E345C7A458CC62E12F18D3E_m2706485CC60637B4A0C56D5B5E29AEDD8F18415A(L_0, GameObject_GetComponent_TisGyroScript_tD8E851D88E999B441E345C7A458CC62E12F18D3E_m2706485CC60637B4A0C56D5B5E29AEDD8F18415A_RuntimeMethod_var);
		NullCheck(L_1);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)1, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.XRModeSwitch::ChangeToAR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRModeSwitch_ChangeToAR_mDCD8BA1F31D0C2AD15C4EABDEBDDE7691B168450 (XRModeSwitch_t711B273AD5CA47A8B17ED7D4B7CA7A232C3B39C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGyroScript_tD8E851D88E999B441E345C7A458CC62E12F18D3E_m2706485CC60637B4A0C56D5B5E29AEDD8F18415A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___IsStereo_9 = (bool)0;
		__this->___IsAR_8 = (bool)1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GyroScript_tD8E851D88E999B441E345C7A458CC62E12F18D3E* L_1;
		L_1 = GameObject_GetComponent_TisGyroScript_tD8E851D88E999B441E345C7A458CC62E12F18D3E_m2706485CC60637B4A0C56D5B5E29AEDD8F18415A(L_0, GameObject_GetComponent_TisGyroScript_tD8E851D88E999B441E345C7A458CC62E12F18D3E_m2706485CC60637B4A0C56D5B5E29AEDD8F18415A_RuntimeMethod_var);
		NullCheck(L_1);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)0, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.XRModeSwitch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRModeSwitch__ctor_m04E570739A58D0D20091617E8C75BAD10FC6B8E3 (XRModeSwitch_t711B273AD5CA47A8B17ED7D4B7CA7A232C3B39C4* __this, const RuntimeMethod* method) 
{
	{
		__this->___EyeSeparation_4 = (0.0599999987f);
		__this->___NearClipPlane_5 = (0.00999999978f);
		__this->___FarClipPlane_6 = (500.0f);
		__this->___FieldOfView_7 = (60.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.IEnumerator TechXR.Core.Sense.LicenseValidity::Post(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LicenseValidity_Post_m7470CFB208D2F7B4A80942801DFE045B89FC7A76 (LicenseValidity_tF7D6F5664477DE2ED0C427A798251611921AF372* __this, String_t* ___url0, String_t* ___key1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPostU3Ed__2_t49B6E4E17B3C8C315C8E43B8A39DFCA56B6502AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CPostU3Ed__2_t49B6E4E17B3C8C315C8E43B8A39DFCA56B6502AE* L_0 = (U3CPostU3Ed__2_t49B6E4E17B3C8C315C8E43B8A39DFCA56B6502AE*)il2cpp_codegen_object_new(U3CPostU3Ed__2_t49B6E4E17B3C8C315C8E43B8A39DFCA56B6502AE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CPostU3Ed__2__ctor_m7DD6DC587FD41C177C95B67C0A685472E92548F7(L_0, 0, NULL);
		U3CPostU3Ed__2_t49B6E4E17B3C8C315C8E43B8A39DFCA56B6502AE* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_4), (void*)__this);
		U3CPostU3Ed__2_t49B6E4E17B3C8C315C8E43B8A39DFCA56B6502AE* L_2 = L_1;
		String_t* L_3 = ___url0;
		NullCheck(L_2);
		L_2->___url_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___url_2), (void*)L_3);
		U3CPostU3Ed__2_t49B6E4E17B3C8C315C8E43B8A39DFCA56B6502AE* L_4 = L_2;
		String_t* L_5 = ___key1;
		NullCheck(L_4);
		L_4->___key_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___key_3), (void*)L_5);
		return L_4;
	}
}
// System.Void TechXR.Core.Sense.LicenseValidity::CheckLicenseValidity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LicenseValidity_CheckLicenseValidity_m5197297A7090726BE024330E5E75DE4836CF910E (LicenseValidity_tF7D6F5664477DE2ED0C427A798251611921AF372* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonScriptableObject_1_get_Instance_m67B784EE6495BA709A0B9826E60378ADAFBDDBF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB78D06EA1F8D586116C33848188F1294BA87EE7);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		TechXRConfiguration_t995E9151CF60B71D35B08C4A39098AC8D06BDAD0* L_0;
		L_0 = SingletonScriptableObject_1_get_Instance_m67B784EE6495BA709A0B9826E60378ADAFBDDBF2(SingletonScriptableObject_1_get_Instance_m67B784EE6495BA709A0B9826E60378ADAFBDDBF2_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = TechXRConfiguration_get_LicenseKey_m318E8264B0BEE63874DC10EEC9B083FBB2813D51(L_0, NULL);
		bool L_2;
		L_2 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		String_t* L_4 = __this->___URL_4;
		TechXRConfiguration_t995E9151CF60B71D35B08C4A39098AC8D06BDAD0* L_5;
		L_5 = SingletonScriptableObject_1_get_Instance_m67B784EE6495BA709A0B9826E60378ADAFBDDBF2(SingletonScriptableObject_1_get_Instance_m67B784EE6495BA709A0B9826E60378ADAFBDDBF2_RuntimeMethod_var);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = TechXRConfiguration_get_LicenseKey_m318E8264B0BEE63874DC10EEC9B083FBB2813D51(L_5, NULL);
		RuntimeObject* L_7;
		L_7 = LicenseValidity_Post_m7470CFB208D2F7B4A80942801DFE045B89FC7A76(__this, L_4, L_6, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_8;
		L_8 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_7, NULL);
		goto IL_0043;
	}

IL_0038:
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralCB78D06EA1F8D586116C33848188F1294BA87EE7, NULL);
	}

IL_0043:
	{
		return;
	}
}
// System.Void TechXR.Core.Sense.LicenseValidity::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LicenseValidity__ctor_m6A4EE631DA7635E89DA205962750533302539241 (LicenseValidity_tF7D6F5664477DE2ED0C427A798251611921AF372* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TechXR.Core.Sense.LicenseValidity/<Post>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPostU3Ed__2__ctor_m7DD6DC587FD41C177C95B67C0A685472E92548F7 (U3CPostU3Ed__2_t49B6E4E17B3C8C315C8E43B8A39DFCA56B6502AE* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TechXR.Core.Sense.LicenseValidity/<Post>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPostU3Ed__2_System_IDisposable_Dispose_m4165387E2ECE0FE966959B82E9A8BAFF1334E04F (U3CPostU3Ed__2_t49B6E4E17B3C8C315C8E43B8A39DFCA56B6502AE* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TechXR.Core.Sense.LicenseValidity/<Post>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPostU3Ed__2_MoveNext_m25A955525F216F04C53DD0E218BEFF0251A3317B (U3CPostU3Ed__2_t49B6E4E17B3C8C315C8E43B8A39DFCA56B6502AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67184A92CF8F6E59BA82AAF4A94C237CF2E0EB48);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA165C2B0C723026923E4136FAF3AA65BC970093D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_00a7;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		String_t* L_3 = __this->___url_2;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_4 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)il2cpp_codegen_object_new(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityWebRequest__ctor_mD4739B0BF1C4937479A83B24B531C6B819712A3E(L_4, L_3, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, NULL);
		__this->___U3CrequestU3E5__1_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequestU3E5__1_5), (void*)L_4);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
		L_5 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		String_t* L_6 = __this->___key_3;
		NullCheck(L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
		__this->___U3CbodyRawU3E5__2_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbodyRawU3E5__2_6), (void*)L_7);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_8 = __this->___U3CrequestU3E5__1_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___U3CbodyRawU3E5__2_6;
		UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* L_10 = (UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A*)il2cpp_codegen_object_new(UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		UploadHandlerRaw__ctor_m168C957B67E29CB3072E3542044D37E2F16C42B7(L_10, L_9, NULL);
		NullCheck(L_8);
		UnityWebRequest_set_uploadHandler_m68F346550136DE178C79238944985892196027FE(L_8, L_10, NULL);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_11 = __this->___U3CrequestU3E5__1_5;
		DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974* L_12 = (DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974*)il2cpp_codegen_object_new(DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		DownloadHandlerBuffer__ctor_m5EE7C9E8AB468B2B937A7C9C66B4176A884147AF(L_12, NULL);
		NullCheck(L_11);
		UnityWebRequest_set_downloadHandler_m6CB94492012097DFC44E5773D1A627753788292F(L_11, L_12, NULL);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_13 = __this->___U3CrequestU3E5__1_5;
		NullCheck(L_13);
		UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_13, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, _stringLiteral67184A92CF8F6E59BA82AAF4A94C237CF2E0EB48, NULL);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_14 = __this->___U3CrequestU3E5__1_5;
		NullCheck(L_14);
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_15;
		L_15 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_14, NULL);
		__this->___U3CU3E2__current_1 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_15);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00a7:
	{
		__this->___U3CU3E1__state_0 = (-1);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_16 = __this->___U3CrequestU3E5__1_5;
		NullCheck(L_16);
		int64_t L_17;
		L_17 = UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B(L_16, NULL);
		V_1 = L_17;
		String_t* L_18;
		L_18 = Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B((&V_1), NULL);
		String_t* L_19;
		L_19 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralA165C2B0C723026923E4136FAF3AA65BC970093D, L_18, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_19, NULL);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_20 = __this->___U3CrequestU3E5__1_5;
		NullCheck(L_20);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_21;
		L_21 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_20, NULL);
		NullCheck(L_21);
		String_t* L_22;
		L_22 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_21, NULL);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_22, NULL);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_23 = __this->___U3CrequestU3E5__1_5;
		NullCheck(L_23);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_24;
		L_24 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_23, NULL);
		NullCheck(L_24);
		String_t* L_25;
		L_25 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_24, NULL);
		bool L_26;
		L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, NULL);
		V_2 = L_26;
		bool L_27 = V_2;
		if (!L_27)
		{
			goto IL_0113;
		}
	}
	{
		LicenseValidity_tF7D6F5664477DE2ED0C427A798251611921AF372* L_28 = __this->___U3CU3E4__this_4;
		NullCheck(L_28);
		L_28->___m_Valid_5 = (bool)1;
		goto IL_013f;
	}

IL_0113:
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_29 = __this->___U3CrequestU3E5__1_5;
		NullCheck(L_29);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_30;
		L_30 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_29, NULL);
		NullCheck(L_30);
		String_t* L_31;
		L_31 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_30, NULL);
		bool L_32;
		L_32 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_31, _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB, NULL);
		V_3 = L_32;
		bool L_33 = V_3;
		if (!L_33)
		{
			goto IL_013f;
		}
	}
	{
		LicenseValidity_tF7D6F5664477DE2ED0C427A798251611921AF372* L_34 = __this->___U3CU3E4__this_4;
		NullCheck(L_34);
		L_34->___m_Valid_5 = (bool)0;
	}

IL_013f:
	{
		return (bool)0;
	}
}
// System.Object TechXR.Core.Sense.LicenseValidity/<Post>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPostU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m83B064C7653C95379804868DB8BC62538D477FDF (U3CPostU3Ed__2_t49B6E4E17B3C8C315C8E43B8A39DFCA56B6502AE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TechXR.Core.Sense.LicenseValidity/<Post>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPostU3Ed__2_System_Collections_IEnumerator_Reset_mDC435BC2768CE0A26DD53C5760486CCBC2496491 (U3CPostU3Ed__2_t49B6E4E17B3C8C315C8E43B8A39DFCA56B6502AE* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPostU3Ed__2_System_Collections_IEnumerator_Reset_mDC435BC2768CE0A26DD53C5760486CCBC2496491_RuntimeMethod_var)));
	}
}
// System.Object TechXR.Core.Sense.LicenseValidity/<Post>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPostU3Ed__2_System_Collections_IEnumerator_get_Current_m112EA081B8A9E1EFCF3D49DDCDECC7789086AF32 (U3CPostU3Ed__2_t49B6E4E17B3C8C315C8E43B8A39DFCA56B6502AE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TechXR.Core.Sense.LaserPointer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaserPointer_Start_m0C62E626A355895F86D39701CEA5F228C368A2D1 (LaserPointer_t16D0F974C5CCC33E600C322FFB605D6B7CB2B5A3* __this, const RuntimeMethod* method) 
{
	{
		IUILaserPointer_Start_mA77AE7444236C1BCA790F47081C0398F4D4D0B32(__this, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.LaserPointer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaserPointer_Update_m76947451F18B69A4F1F592FD0F6C68A98650230C (LaserPointer_t16D0F974C5CCC33E600C322FFB605D6B7CB2B5A3* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	{
		IUILaserPointer_Update_mA728EA87FD4D9FD8654361240E7508908C4C2B47(__this, NULL);
		bool L_0;
		L_0 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)335), NULL);
		if (L_0)
		{
			goto IL_0035;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)117), NULL);
		if (L_1)
		{
			goto IL_0035;
		}
	}
	{
		bool L_2;
		L_2 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)335), NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		bool L_3;
		L_3 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)117), NULL);
		G_B5_0 = ((int32_t)(L_3));
		goto IL_0033;
	}

IL_0032:
	{
		G_B5_0 = 1;
	}

IL_0033:
	{
		G_B7_0 = G_B5_0;
		goto IL_0036;
	}

IL_0035:
	{
		G_B7_0 = 1;
	}

IL_0036:
	{
		V_0 = (bool)G_B7_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		bool L_5 = __this->___ButtonState_17;
		__this->___ButtonState_17 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
	}

IL_004b:
	{
		bool L_6 = __this->___ButtonState_17;
		bool L_7 = __this->___m_PrevButtonState_18;
		V_1 = (bool)((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0068;
		}
	}
	{
		__this->___m_ButtonChanged_19 = (bool)0;
		goto IL_007d;
	}

IL_0068:
	{
		__this->___m_ButtonChanged_19 = (bool)1;
		bool L_9 = __this->___ButtonState_17;
		__this->___m_PrevButtonState_18 = L_9;
	}

IL_007d:
	{
		return;
	}
}
// System.Boolean TechXR.Core.Sense.LaserPointer::ButtonDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LaserPointer_ButtonDown_mD3716F04C882E2572107AD349DD5308D8AA36DFD (LaserPointer_t16D0F974C5CCC33E600C322FFB605D6B7CB2B5A3* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		bool L_0 = __this->___m_ButtonChanged_19;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		bool L_1 = __this->___ButtonState_17;
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 0;
	}

IL_0012:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean TechXR.Core.Sense.LaserPointer::ButtonUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LaserPointer_ButtonUp_m6728D2AB8B53672B5F766679FBC91721F66521A1 (LaserPointer_t16D0F974C5CCC33E600C322FFB605D6B7CB2B5A3* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		bool L_0 = __this->___m_ButtonChanged_19;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		bool L_1 = __this->___ButtonState_17;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void TechXR.Core.Sense.LaserPointer::OnEnterControl(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaserPointer_OnEnterControl_mA2918F3FD844A412F508F2946C68F6D6C6D7FD9F (LaserPointer_t16D0F974C5CCC33E600C322FFB605D6B7CB2B5A3* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___control0, const RuntimeMethod* method) 
{
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___control0;
		__this->___m_CurrentGameObject_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CurrentGameObject_20), (void*)L_0);
		return;
	}
}
// System.Void TechXR.Core.Sense.LaserPointer::OnExitControl(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaserPointer_OnExitControl_m33B398C31A58F28E83C79119C58BDB354A459322 (LaserPointer_t16D0F974C5CCC33E600C322FFB605D6B7CB2B5A3* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___control0, const RuntimeMethod* method) 
{
	{
		__this->___m_CurrentGameObject_20 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CurrentGameObject_20), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.LaserPointer::ToggleDisplay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaserPointer_ToggleDisplay_m7BD15C994D03343BEACF608BBC2F486B1790459E (LaserPointer_t16D0F974C5CCC33E600C322FFB605D6B7CB2B5A3* __this, bool ___flag0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___flag0;
		IUILaserPointer_ToggleDisplay_m276423D1786EB6F7CCBCB0D5B9BC26B39B05D285(__this, L_0, NULL);
		return;
	}
}
// UnityEngine.GameObject TechXR.Core.Sense.LaserPointer::GetCurrentGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* LaserPointer_GetCurrentGameObject_mA3CC872E0F82C7AA2F342FC5CB1FC7E284A00064 (LaserPointer_t16D0F974C5CCC33E600C322FFB605D6B7CB2B5A3* __this, const RuntimeMethod* method) 
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_CurrentGameObject_20;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.RaycastHit TechXR.Core.Sense.LaserPointer::GetRaycastHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 LaserPointer_GetRaycastHit_mEDC023536BAF3D5A4E783ED374DB1E85C6ECBABE (LaserPointer_t16D0F974C5CCC33E600C322FFB605D6B7CB2B5A3* __this, const RuntimeMethod* method) 
{
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_0 = ((IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F*)__this)->___m_RaycastHit_8;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_1 = V_0;
		return L_1;
	}
}
// System.Void TechXR.Core.Sense.LaserPointer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaserPointer__ctor_mBE4358E639A0120FD7DA01F2512E457C45F4114F (LaserPointer_t16D0F974C5CCC33E600C322FFB605D6B7CB2B5A3* __this, const RuntimeMethod* method) 
{
	{
		__this->___ButtonState_17 = (bool)0;
		__this->___m_PrevButtonState_18 = (bool)0;
		__this->___m_ButtonChanged_19 = (bool)0;
		IUILaserPointer__ctor_m99E31691ADDA49B3C0364AC5D86A15FC4878D987(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TechXR.Core.Sense.IUILaserPointer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUILaserPointer_Awake_m032CF2B5F0C892F50E664E85AE47266FA81F3802 (IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* __this, const RuntimeMethod* method) 
{
	{
		__this->___m_DisplayFlag_14 = (bool)1;
		__this->___m_IsCube_9 = (bool)1;
		return;
	}
}
// System.Void TechXR.Core.Sense.IUILaserPointer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUILaserPointer_Start_mA77AE7444236C1BCA790F47081C0398F4D4D0B32 (IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisLaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6_mE7DEDEA422C4CBF8D672F87625628EB5A0F24579_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m704160C10BDAB9B54429D2DEB921575D3DF7622C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_mD342F4F06F3848B43732DD183CDDA00AED3EE0A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0694AB363ACF8A94764B62CC878387AD79106606);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0A441B19719480B2CAA2A548D2994E692AB5FEA);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	bool V_1 = false;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_0, _stringLiteral0694AB363ACF8A94764B62CC878387AD79106606, NULL);
		V_0 = L_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_2, L_3, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_0;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_5);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_5, L_6, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_0;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		NullCheck(L_8);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_8, L_9, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = GameObject_CreatePrimitive_mE2F848626FE928B6E3810ABFB81867E619BB2507(3, NULL);
		__this->___m_Pointer_12 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Pointer_12), (void*)L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___m_Pointer_12;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_0;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		NullCheck(L_12);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_12, L_14, (bool)0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___m_Pointer_12;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		float L_17 = __this->___LaserThickness_4;
		float L_18 = __this->___LaserThickness_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_19), L_17, L_18, (100.0f), /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_16, L_19, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___m_Pointer_12;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_22), (0.0f), (0.0f), (50.0f), /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_21, L_22, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___m_Pointer_12;
		bool L_24 = __this->___m_DisplayFlag_14;
		NullCheck(L_23);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_23, L_24, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = GameObject_CreatePrimitive_mE2F848626FE928B6E3810ABFB81867E619BB2507(0, NULL);
		__this->___m_HitPoint_11 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_HitPoint_11), (void*)L_25);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___m_HitPoint_11;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = V_0;
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_28, NULL);
		NullCheck(L_27);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_27, L_29, (bool)0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = __this->___m_HitPoint_11;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_30, NULL);
		float L_32 = __this->___LaserHitScale_5;
		float L_33 = __this->___LaserHitScale_5;
		float L_34 = __this->___LaserHitScale_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		memset((&L_35), 0, sizeof(L_35));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_35), L_32, L_33, L_34, /*hidden argument*/NULL);
		NullCheck(L_31);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_31, L_35, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = __this->___m_HitPoint_11;
		NullCheck(L_36);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_36, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		memset((&L_38), 0, sizeof(L_38));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_38), (0.0f), (0.0f), (100.0f), /*hidden argument*/NULL);
		NullCheck(L_37);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_37, L_38, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = __this->___m_HitPoint_11;
		NullCheck(L_39);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_39, (bool)0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = __this->___m_HitPoint_11;
		NullCheck(L_40);
		SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* L_41;
		L_41 = GameObject_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_mD342F4F06F3848B43732DD183CDDA00AED3EE0A0(L_40, GameObject_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_mD342F4F06F3848B43732DD183CDDA00AED3EE0A0_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_41, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42 = __this->___m_Pointer_12;
		NullCheck(L_42);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_43;
		L_43 = GameObject_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m704160C10BDAB9B54429D2DEB921575D3DF7622C(L_42, GameObject_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m704160C10BDAB9B54429D2DEB921575D3DF7622C_RuntimeMethod_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_43, NULL);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_44;
		L_44 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteralA0A441B19719480B2CAA2A548D2994E692AB5FEA, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_45 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_45);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_45, L_44, NULL);
		__this->___m_Material_16 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Material_16), (void*)L_45);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_46 = __this->___m_Material_16;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_47 = __this->___Color_7;
		NullCheck(L_46);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_46, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, L_47, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = __this->___m_Pointer_12;
		NullCheck(L_48);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_49;
		L_49 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_48, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_50 = __this->___m_Material_16;
		NullCheck(L_49);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_49, L_50, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_51 = __this->___m_HitPoint_11;
		NullCheck(L_51);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_52;
		L_52 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_51, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_53 = __this->___m_Material_16;
		NullCheck(L_52);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_52, L_53, NULL);
		VirtualActionInvoker0::Invoke(6 /* System.Void TechXR.Core.Sense.IUILaserPointer::Initialize() */, __this);
		LaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6* L_54;
		L_54 = LaserPointerInputModule_get_instance_m20E7C1A8BC9113448FBF6CA3FE5CB98545A5CA6D(NULL);
		bool L_55;
		L_55 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_54, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_55;
		bool L_56 = V_1;
		if (!L_56)
		{
			goto IL_01df;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_57 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_57);
		GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD(L_57, NULL);
		NullCheck(L_57);
		LaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6* L_58;
		L_58 = GameObject_AddComponent_TisLaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6_mE7DEDEA422C4CBF8D672F87625628EB5A0F24579(L_57, GameObject_AddComponent_TisLaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6_mE7DEDEA422C4CBF8D672F87625628EB5A0F24579_RuntimeMethod_var);
	}

IL_01df:
	{
		LaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6* L_59;
		L_59 = LaserPointerInputModule_get_instance_m20E7C1A8BC9113448FBF6CA3FE5CB98545A5CA6D(NULL);
		NullCheck(L_59);
		LaserPointerInputModule_AddController_m41D36B456AF7EB4F17F57CF013AD717DF5BC200E(L_59, __this, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.IUILaserPointer::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUILaserPointer_OnDestroy_m702BFF3BF98153050D96E280B1E897F07C9F49C6 (IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		LaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6* L_0;
		L_0 = LaserPointerInputModule_get_instance_m20E7C1A8BC9113448FBF6CA3FE5CB98545A5CA6D(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		LaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6* L_3;
		L_3 = LaserPointerInputModule_get_instance_m20E7C1A8BC9113448FBF6CA3FE5CB98545A5CA6D(NULL);
		NullCheck(L_3);
		LaserPointerInputModule_RemoveController_m133A6CD6459E94AD3550EF949E99A27410AA9C98(L_3, __this, NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Void TechXR.Core.Sense.IUILaserPointer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUILaserPointer_Update_mA728EA87FD4D9FD8654361240E7508908C4C2B47 (IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	float V_5 = 0.0f;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* G_B4_0 = NULL;
	IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* G_B5_1 = NULL;
	{
		bool L_0 = __this->___m_IsCube_9;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		bool L_2 = __this->___m_DisplayFlag_14;
		__this->___m_Conditions_10 = L_2;
		goto IL_0037;
	}

IL_0019:
	{
		bool L_3 = __this->___m_DisplayFlag_14;
		G_B3_0 = __this;
		if (!L_3)
		{
			G_B4_0 = __this;
			goto IL_0031;
		}
	}
	{
		SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* L_4 = ((SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_StaticFields*)il2cpp_codegen_static_fields_for(SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_il2cpp_TypeInfo_var))->____instance_4;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = SenseManager_get_CurrentPointerMode_m31A0BF74F3B55255B3E99FF5449313DD77F8B574_inline(L_4, NULL);
		G_B5_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		G_B5_1 = G_B3_0;
		goto IL_0032;
	}

IL_0031:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
	}

IL_0032:
	{
		NullCheck(G_B5_1);
		G_B5_1->___m_Conditions_10 = (bool)G_B5_0;
	}

IL_0037:
	{
		bool L_6 = __this->___m_Conditions_10;
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_014b;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_10, NULL);
		Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&V_2), L_9, L_11, NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_12 = V_2;
		bool L_13;
		L_13 = Physics_Raycast_m07803863BB5A3896FA01061562532B21E1ED6D4A(L_12, (&V_3), NULL);
		V_4 = L_13;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_14 = V_3;
		__this->___m_RaycastHit_8 = L_14;
		V_5 = (100.0f);
		bool L_15 = V_4;
		V_6 = L_15;
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_008d;
		}
	}
	{
		float L_17;
		L_17 = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78((&V_3), NULL);
		V_5 = L_17;
	}

IL_008d:
	{
		float L_18 = __this->___m_DistanceLimit_13;
		V_7 = (bool)((((float)L_18) > ((float)(0.0f)))? 1 : 0);
		bool L_19 = V_7;
		if (!L_19)
		{
			goto IL_00b4;
		}
	}
	{
		float L_20 = V_5;
		float L_21 = __this->___m_DistanceLimit_13;
		float L_22;
		L_22 = Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline(L_20, L_21, NULL);
		V_5 = L_22;
		V_4 = (bool)1;
	}

IL_00b4:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___m_Pointer_12;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_23, NULL);
		float L_25 = __this->___LaserThickness_4;
		float L_26 = __this->___LaserThickness_4;
		float L_27 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_28), L_25, L_26, L_27, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_24, L_28, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = __this->___m_Pointer_12;
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_29, NULL);
		float L_31 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_32), (0.0f), (0.0f), ((float)il2cpp_codegen_multiply(L_31, (0.5f))), /*hidden argument*/NULL);
		NullCheck(L_30);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_30, L_32, NULL);
		bool L_33 = V_4;
		V_8 = L_33;
		bool L_34 = V_8;
		if (!L_34)
		{
			goto IL_013b;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = __this->___m_HitPoint_11;
		NullCheck(L_35);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_35, (bool)1, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = __this->___m_HitPoint_11;
		NullCheck(L_36);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_36, NULL);
		float L_38 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		memset((&L_39), 0, sizeof(L_39));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_39), (0.0f), (0.0f), L_38, /*hidden argument*/NULL);
		NullCheck(L_37);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_37, L_39, NULL);
		goto IL_014a;
	}

IL_013b:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = __this->___m_HitPoint_11;
		NullCheck(L_40);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_40, (bool)0, NULL);
	}

IL_014a:
	{
	}

IL_014b:
	{
		__this->___m_DistanceLimit_13 = (-1.0f);
		return;
	}
}
// System.Void TechXR.Core.Sense.IUILaserPointer::DisplayToggleOnModeChange(TechXR.Core.Sense.Defs/PointerDisplayMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUILaserPointer_DisplayToggleOnModeChange_m6B5978EB2FA88C88778ED76E72640FF9E6419317 (IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* __this, int32_t ___mode0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		int32_t L_0 = ___mode0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		bool L_2 = __this->___m_DisplayFlag_14;
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		__this->___m_ModeChanged_15 = (bool)1;
		VirtualActionInvoker1< bool >::Invoke(9 /* System.Void TechXR.Core.Sense.IUILaserPointer::ToggleDisplay(System.Boolean) */, __this, (bool)0);
	}

IL_0025:
	{
		goto IL_0043;
	}

IL_0028:
	{
		bool L_4 = __this->___m_ModeChanged_15;
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		__this->___m_ModeChanged_15 = (bool)0;
		VirtualActionInvoker1< bool >::Invoke(9 /* System.Void TechXR.Core.Sense.IUILaserPointer::ToggleDisplay(System.Boolean) */, __this, (bool)1);
	}

IL_0043:
	{
		return;
	}
}
// System.Void TechXR.Core.Sense.IUILaserPointer::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUILaserPointer_Initialize_m8A0AB943F21179568B0F4506288D2885990F87DF (IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void TechXR.Core.Sense.IUILaserPointer::OnEnterControl(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUILaserPointer_OnEnterControl_m00161D84B25ED3D3661721330F0C1C9407AB88AF (IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___control0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void TechXR.Core.Sense.IUILaserPointer::OnExitControl(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUILaserPointer_OnExitControl_mC4E5AA63CF8477878B44317870B15F0F233E4F79 (IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___control0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void TechXR.Core.Sense.IUILaserPointer::ToggleDisplay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUILaserPointer_ToggleDisplay_m276423D1786EB6F7CCBCB0D5B9BC26B39B05D285 (IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* __this, bool ___flag0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_Pointer_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___m_Pointer_12;
		bool L_4 = ___flag0;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, L_4, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___m_HitPoint_11;
		bool L_6 = ___flag0;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, L_6, NULL);
	}

IL_002d:
	{
		bool L_7 = ___flag0;
		__this->___m_DisplayFlag_14 = L_7;
		return;
	}
}
// System.Void TechXR.Core.Sense.IUILaserPointer::SetPointerDisplayMode(TechXR.Core.Sense.Defs/PointerDisplayMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUILaserPointer_SetPointerDisplayMode_m4D66A32FF9676869E081452884655D25C92E5179 (IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* __this, int32_t ___mode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* L_0 = ((SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_StaticFields*)il2cpp_codegen_static_fields_for(SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_il2cpp_TypeInfo_var))->____instance_4;
		int32_t L_1 = ___mode0;
		NullCheck(L_0);
		SenseManager_set_CurrentPointerMode_m9D137DF3C1C357F152F48AD7835248AF7E959010_inline(L_0, L_1, NULL);
		int32_t L_2 = ___mode0;
		IUILaserPointer_DisplayToggleOnModeChange_m6B5978EB2FA88C88778ED76E72640FF9E6419317(__this, L_2, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.IUILaserPointer::LimitLaserDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUILaserPointer_LimitLaserDistance_m0077C3B4B85A964F62E30560CE46C5B9309EF14C (IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* __this, float ___distance0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		float L_0 = ___distance0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		goto IL_003b;
	}

IL_000f:
	{
		float L_2 = __this->___m_DistanceLimit_13;
		V_1 = (bool)((((float)L_2) < ((float)(0.0f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		float L_4 = ___distance0;
		__this->___m_DistanceLimit_13 = L_4;
		goto IL_003b;
	}

IL_0029:
	{
		float L_5 = __this->___m_DistanceLimit_13;
		float L_6 = ___distance0;
		float L_7;
		L_7 = Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline(L_5, L_6, NULL);
		__this->___m_DistanceLimit_13 = L_7;
	}

IL_003b:
	{
		return;
	}
}
// System.Void TechXR.Core.Sense.IUILaserPointer::SetColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUILaserPointer_SetColor_m19B632859C1662962BCEA9D385F616B3826E92B9 (IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		s_Il2CppMethodInitialized = true;
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___m_Material_16;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___color0;
		NullCheck(L_0);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_0, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, L_1, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.IUILaserPointer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IUILaserPointer__ctor_m99E31691ADDA49B3C0364AC5D86A15FC4878D987 (IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* __this, const RuntimeMethod* method) 
{
	{
		__this->___LaserThickness_4 = (0.00200000009f);
		__this->___LaserHitScale_5 = (0.0199999996f);
		__this->___LaserAlwaysOn_6 = (bool)1;
		__this->___m_IsCube_9 = (bool)0;
		__this->___m_Conditions_10 = (bool)0;
		__this->___m_DisplayFlag_14 = (bool)0;
		__this->___m_ModeChanged_15 = (bool)0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// TechXR.Core.Sense.LaserPointerInputModule TechXR.Core.Sense.LaserPointerInputModule::get_instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6* LaserPointerInputModule_get_instance_m20E7C1A8BC9113448FBF6CA3FE5CB98545A5CA6D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6* V_0 = NULL;
	{
		LaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6* L_0 = ((LaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6_StaticFields*)il2cpp_codegen_static_fields_for(LaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6_il2cpp_TypeInfo_var))->____instance_31;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		LaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6* L_1 = V_0;
		return L_1;
	}
}
// System.Void TechXR.Core.Sense.LaserPointerInputModule::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaserPointerInputModule_Awake_m5CCF3CBB1F24F170711CFFF228D427066C580126 (LaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7C3874C2D5365430B4CACFF79F088184C953249);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		UIBehaviour_Awake_mDF9D1A4867C8E730C59A7CAE97709CA9B8F3A0F2(__this, NULL);
		LaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6* L_0 = ((LaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6_StaticFields*)il2cpp_codegen_static_fields_for(LaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6_il2cpp_TypeInfo_var))->____instance_31;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteralC7C3874C2D5365430B4CACFF79F088184C953249, NULL);
	}

IL_0024:
	{
		((LaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6_StaticFields*)il2cpp_codegen_static_fields_for(LaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6_il2cpp_TypeInfo_var))->____instance_31 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((LaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6_StaticFields*)il2cpp_codegen_static_fields_for(LaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6_il2cpp_TypeInfo_var))->____instance_31), (void*)__this);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		String_t* L_5;
		L_5 = LayerMask_LayerToName_mC8423ADBD2CFF8218C0E572BF57A110C6E9ED62A(0, NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_4;
		String_t* L_7;
		L_7 = LayerMask_LayerToName_mC8423ADBD2CFF8218C0E572BF57A110C6E9ED62A(1, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_6;
		String_t* L_9;
		L_9 = LayerMask_LayerToName_mC8423ADBD2CFF8218C0E572BF57A110C6E9ED62A(3, NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_8;
		String_t* L_11;
		L_11 = LayerMask_LayerToName_mC8423ADBD2CFF8218C0E572BF57A110C6E9ED62A(4, NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_10;
		String_t* L_13;
		L_13 = LayerMask_LayerToName_mC8423ADBD2CFF8218C0E572BF57A110C6E9ED62A(5, NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_13);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_12;
		String_t* L_15;
		L_15 = LayerMask_LayerToName_mC8423ADBD2CFF8218C0E572BF57A110C6E9ED62A(6, NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_15);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_14;
		String_t* L_17;
		L_17 = LayerMask_LayerToName_mC8423ADBD2CFF8218C0E572BF57A110C6E9ED62A(7, NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_17);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_16;
		String_t* L_19;
		L_19 = LayerMask_LayerToName_mC8423ADBD2CFF8218C0E572BF57A110C6E9ED62A(8, NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_19);
		int32_t L_20;
		L_20 = LayerMask_GetMask_mB1925EDF21896C48C8E2AE1C11BB1944F279181E(L_18, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_21;
		L_21 = LayerMask_op_Implicit_mDC9C22C4477684D460FCF25B1BFE6B54419FB922(L_20, NULL);
		__this->___layerMask_30 = L_21;
		return;
	}
}
// System.Void TechXR.Core.Sense.LaserPointerInputModule::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaserPointerInputModule_Start_mB6015FDDA16EB96828EFE578EE089EE20951F7B1 (LaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisPhysicsRaycaster_t0ACA9046D8D0B195B59DB1F7CA4DD6BB634A56DD_m7123B9A9CFB933EFCB54FFDAA5D010EA4393D53F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_FindObjectsOfTypeAll_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m81C22C5AC148490C259C42D08470838D00F5D82D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5339CBD0E2A240EC5A85072B0AE73D02A05B9815);
		s_Il2CppMethodInitialized = true;
	}
	CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841* V_0 = NULL;
	CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841* V_1 = NULL;
	int32_t V_2 = 0;
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* V_3 = NULL;
	{
		UIBehaviour_Start_mB12643ED6D859CD3682B4BF5B9CA7F72E8A72B45(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_0, _stringLiteral5339CBD0E2A240EC5A85072B0AE73D02A05B9815, NULL);
		NullCheck(L_0);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142(L_0, GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142_RuntimeMethod_var);
		__this->___UICamera_32 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___UICamera_32), (void*)L_1);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = __this->___UICamera_32;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		PhysicsRaycaster_t0ACA9046D8D0B195B59DB1F7CA4DD6BB634A56DD* L_4;
		L_4 = GameObject_AddComponent_TisPhysicsRaycaster_t0ACA9046D8D0B195B59DB1F7CA4DD6BB634A56DD_m7123B9A9CFB933EFCB54FFDAA5D010EA4393D53F(L_3, GameObject_AddComponent_TisPhysicsRaycaster_t0ACA9046D8D0B195B59DB1F7CA4DD6BB634A56DD_m7123B9A9CFB933EFCB54FFDAA5D010EA4393D53F_RuntimeMethod_var);
		__this->___Raycaster_33 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Raycaster_33), (void*)L_4);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = __this->___UICamera_32;
		NullCheck(L_5);
		Camera_set_clearFlags_m66541D9CC43CBAA5FE7364A50D43CA5569FD4D93(L_5, 4, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = __this->___UICamera_32;
		NullCheck(L_6);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_6, (bool)0, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7 = __this->___UICamera_32;
		NullCheck(L_7);
		Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777(L_7, (5.0f), NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8 = __this->___UICamera_32;
		NullCheck(L_8);
		Camera_set_nearClipPlane_m78482B5E4E0CE4C195D9CE0332AA75B2D9CCDDF6(L_8, (0.00999999978f), NULL);
		CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841* L_9;
		L_9 = Resources_FindObjectsOfTypeAll_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m81C22C5AC148490C259C42D08470838D00F5D82D(Resources_FindObjectsOfTypeAll_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m81C22C5AC148490C259C42D08470838D00F5D82D_RuntimeMethod_var);
		V_0 = L_9;
		CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841* L_10 = V_0;
		V_1 = L_10;
		V_2 = 0;
		goto IL_0093;
	}

IL_007c:
	{
		CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841* L_11 = V_1;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_3 = L_14;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_15 = V_3;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_16 = __this->___UICamera_32;
		NullCheck(L_15);
		Canvas_set_worldCamera_m007F7DABDB5A3A6BFB043E3500DA82A4D936EDD4(L_15, L_16, NULL);
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0093:
	{
		int32_t L_18 = V_2;
		CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841* L_19 = V_1;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_007c;
		}
	}
	{
		return;
	}
}
// System.Void TechXR.Core.Sense.LaserPointerInputModule::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaserPointerInputModule_Update_m4BC02064CEA1C47BB74654C0EDB37BEE27C17032 (LaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void TechXR.Core.Sense.LaserPointerInputModule::Select(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaserPointerInputModule_Select_mA102346198BEA2EBAA16D1FFA86D5A0CE10685FC (LaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_GetEventHandler_TisISelectHandler_tA3030316ED9DF4943103C3101AD95FCD7765700D_m24416E302B1BDD2CCDDB58B1E20423E4B02F2D7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		LaserPointerInputModule_ClearSelection_m89CB5DF445873D5DA6D0988A8DCB5E766391D458(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___go0;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = ExecuteEvents_GetEventHandler_TisISelectHandler_tA3030316ED9DF4943103C3101AD95FCD7765700D_m24416E302B1BDD2CCDDB58B1E20423E4B02F2D7A(L_0, ExecuteEvents_GetEventHandler_TisISelectHandler_tA3030316ED9DF4943103C3101AD95FCD7765700D_m24416E302B1BDD2CCDDB58B1E20423E4B02F2D7A_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_4;
		L_4 = BaseInputModule_get_eventSystem_m341B2378F61A58D5432906B9EE1E12265E2FAB33_inline(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = ___go0;
		NullCheck(L_4);
		EventSystem_SetSelectedGameObject_m91382EAC4D552C672CC07BE7EB1481F156045280(L_4, L_5, NULL);
	}

IL_0026:
	{
		return;
	}
}
// System.Void TechXR.Core.Sense.LaserPointerInputModule::UpdateCameraPosition(TechXR.Core.Sense.IUILaserPointer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaserPointerInputModule_UpdateCameraPosition_m7AE53F8B796FF61DF1A75FDFCDD73A6DB0733C5E (LaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6* __this, IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* ___controller0, const RuntimeMethod* method) 
{
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___UICamera_32;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* L_2 = ___controller0;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_4, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = __this->___UICamera_32;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* L_7 = ___controller0;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_8);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_8, NULL);
		NullCheck(L_6);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_6, L_9, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.LaserPointerInputModule::AddController(TechXR.Core.Sense.IUILaserPointer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaserPointerInputModule_AddController_m41D36B456AF7EB4F17F57CF013AD717DF5BC200E (LaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6* __this, IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* ___controller0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m646D9DA918FF7A0C181EE4B07A33DF287785AE9D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t5849E900B482EF522536990076C17609372C55CE* L_0 = __this->___m_ControllerData_35;
		IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* L_1 = ___controller0;
		ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_2 = (ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF*)il2cpp_codegen_object_new(ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ControllerData__ctor_m9E127DB0068DB2AB1F6373407E243388FEDC0366(L_2, NULL);
		NullCheck(L_0);
		Dictionary_2_Add_m646D9DA918FF7A0C181EE4B07A33DF287785AE9D(L_0, L_1, L_2, Dictionary_2_Add_m646D9DA918FF7A0C181EE4B07A33DF287785AE9D_RuntimeMethod_var);
		return;
	}
}
// System.Void TechXR.Core.Sense.LaserPointerInputModule::RemoveController(TechXR.Core.Sense.IUILaserPointer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaserPointerInputModule_RemoveController_m133A6CD6459E94AD3550EF949E99A27410AA9C98 (LaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6* __this, IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* ___controller0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m951B7DF6CC2385D2F8C894738696A0F0A04B7429_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t5849E900B482EF522536990076C17609372C55CE* L_0 = __this->___m_ControllerData_35;
		IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* L_1 = ___controller0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_Remove_m951B7DF6CC2385D2F8C894738696A0F0A04B7429(L_0, L_1, Dictionary_2_Remove_m951B7DF6CC2385D2F8C894738696A0F0A04B7429_RuntimeMethod_var);
		return;
	}
}
// System.Void TechXR.Core.Sense.LaserPointerInputModule::ClearSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaserPointerInputModule_ClearSelection_m89CB5DF445873D5DA6D0988A8DCB5E766391D458 (LaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = BaseInputModule_get_eventSystem_m341B2378F61A58D5432906B9EE1E12265E2FAB33_inline(__this, NULL);
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_4;
		L_4 = BaseInputModule_get_eventSystem_m341B2378F61A58D5432906B9EE1E12265E2FAB33_inline(__this, NULL);
		NullCheck(L_4);
		EventSystem_SetSelectedGameObject_m91382EAC4D552C672CC07BE7EB1481F156045280(L_4, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Void TechXR.Core.Sense.LaserPointerInputModule::Process()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaserPointerInputModule_Process_m5E8136357CDC46B6606C92765592E1F2950BA7FD (LaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m743A8B1E084CC698FE9C863462627FC27101EBA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m1E1212FA0E8F578D814E21456C1D97EE0E0BDE0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m64744B7BEC10CDC9053D8C9BF62A21CA0FCDB036_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m79B82EAE3D5A1D671D2FD4D8C09CFA6A7C002972_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ExecuteHierarchy_TisIDropHandler_t9F3B358BA4812886852E9AB85A653ABF73B9AA35_m4C9DA44082FBE5886FBFBFE66CBC89771C7971C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ExecuteHierarchy_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_mB8FE7DAB045B9BC18C426E563C2584F49E97452A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ExecuteHierarchy_TisIPointerDownHandler_t42CC83619BB6295404D44090142F7726003CE573_mAAB1B55CF77D247B61D04981A59169EFFE9E0AFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_Execute_TisIBeginDragHandler_t0E0386CCAB531BD8291D12476D40D19AA98ED7EB_m186924444C6950BA260CFE27CEFE0F76402342A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_Execute_TisIDragHandler_t9FF2B3D79AB401D7E2485254973D15C0F117D00D_m0E5281FDDCB78D969625ECB14A393CA5D572C3A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_Execute_TisIEndDragHandler_t9A93E4A27E7CEED446E5FE3DACF39B1A552C23A9_mF257FA331CEC3705FC5A620859468C5B9AF0F756_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_Execute_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_mB18F35F748E39943F1C1AE45EE7D15EBDF39833D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_Execute_TisIPointerDownHandler_t42CC83619BB6295404D44090142F7726003CE573_mC279421E43B3264277D0E8C36E8DA097F3BBB0E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_Execute_TisIPointerUpHandler_tB2D4D0ABEAFF77BE8D0159D638D85E1AF7BAF210_m9FC5FE3B9CC6D87743F88BD3B2B437653DF82673_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_Execute_TisIUpdateSelectedHandler_tBBACEC3A6478F7DA4B682AFDA8CF59C6C3FCC9CC_m29048196EE9931B2E91B895CA98BCBBE2418E0B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m89DDA518D40FEC5E3857DC3A5DA418BA2A8EE90E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m2B9C5A8655A94A6FA7FB83B8EB6ECF1C7A2522BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m88ECE219176F771E4C5F913CC01FFCF91E93E3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t1060918B355EAD604824F373C10145546D56F738 V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t0E243409C832CE9690A4E5AD88243B05DD3FBF02 V_1;
	memset((&V_1), 0, sizeof(V_1));
	IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* V_2 = NULL;
	ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* V_3 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_13 = NULL;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	{
		PhysicsRaycaster_t0ACA9046D8D0B195B59DB1F7CA4DD6BB634A56DD* L_0 = __this->___Raycaster_33;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_1 = __this->___layerMask_30;
		NullCheck(L_0);
		PhysicsRaycaster_set_eventMask_mD5110BE565C7E3F1738369519D44587452CA056D_inline(L_0, L_1, NULL);
		Dictionary_2_t5849E900B482EF522536990076C17609372C55CE* L_2 = __this->___m_ControllerData_35;
		NullCheck(L_2);
		Enumerator_t1060918B355EAD604824F373C10145546D56F738 L_3;
		L_3 = Dictionary_2_GetEnumerator_m743A8B1E084CC698FE9C863462627FC27101EBA0(L_2, Dictionary_2_GetEnumerator_m743A8B1E084CC698FE9C863462627FC27101EBA0_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0553:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m1E1212FA0E8F578D814E21456C1D97EE0E0BDE0C((&V_0), Enumerator_Dispose_m1E1212FA0E8F578D814E21456C1D97EE0E0BDE0C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0545_1;
			}

IL_0025_1:
			{
				KeyValuePair_2_t0E243409C832CE9690A4E5AD88243B05DD3FBF02 L_4;
				L_4 = Enumerator_get_Current_m79B82EAE3D5A1D671D2FD4D8C09CFA6A7C002972_inline((&V_0), Enumerator_get_Current_m79B82EAE3D5A1D671D2FD4D8C09CFA6A7C002972_RuntimeMethod_var);
				V_1 = L_4;
				IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* L_5;
				L_5 = KeyValuePair_2_get_Key_m89DDA518D40FEC5E3857DC3A5DA418BA2A8EE90E_inline((&V_1), KeyValuePair_2_get_Key_m89DDA518D40FEC5E3857DC3A5DA418BA2A8EE90E_RuntimeMethod_var);
				V_2 = L_5;
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_6;
				L_6 = KeyValuePair_2_get_Value_m2B9C5A8655A94A6FA7FB83B8EB6ECF1C7A2522BD_inline((&V_1), KeyValuePair_2_get_Value_m2B9C5A8655A94A6FA7FB83B8EB6ECF1C7A2522BD_RuntimeMethod_var);
				V_3 = L_6;
				IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* L_7 = V_2;
				LaserPointerInputModule_UpdateCameraPosition_m7AE53F8B796FF61DF1A75FDFCDD73A6DB0733C5E(__this, L_7, NULL);
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_8 = V_3;
				NullCheck(L_8);
				LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A* L_9 = L_8->___PointerEvent_0;
				V_5 = (bool)((((RuntimeObject*)(LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A*)L_9) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
				bool L_10 = V_5;
				if (!L_10)
				{
					goto IL_0068_1;
				}
			}
			{
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_11 = V_3;
				EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_12;
				L_12 = BaseInputModule_get_eventSystem_m341B2378F61A58D5432906B9EE1E12265E2FAB33_inline(__this, NULL);
				LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A* L_13 = (LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A*)il2cpp_codegen_object_new(LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A_il2cpp_TypeInfo_var);
				NullCheck(L_13);
				LaserPointerEventData__ctor_m0558BF06EE3155A19B620ABCCC88D437D5D840FC(L_13, L_12, NULL);
				NullCheck(L_11);
				L_11->___PointerEvent_0 = L_13;
				Il2CppCodeGenWriteBarrier((void**)(&L_11->___PointerEvent_0), (void*)L_13);
				goto IL_0074_1;
			}

IL_0068_1:
			{
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_14 = V_3;
				NullCheck(L_14);
				LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A* L_15 = L_14->___PointerEvent_0;
				NullCheck(L_15);
				VirtualActionInvoker0::Invoke(4 /* System.Void UnityEngine.EventSystems.AbstractEventData::Reset() */, L_15);
			}

IL_0074_1:
			{
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_16 = V_3;
				NullCheck(L_16);
				LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A* L_17 = L_16->___PointerEvent_0;
				IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* L_18 = V_2;
				NullCheck(L_17);
				L_17->___Controller_34 = L_18;
				Il2CppCodeGenWriteBarrier((void**)(&L_17->___Controller_34), (void*)L_18);
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_19 = V_3;
				NullCheck(L_19);
				LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A* L_20 = L_19->___PointerEvent_0;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
				L_21 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
				NullCheck(L_20);
				PointerEventData_set_delta_mD200AF7CCAEAD92D947091902AF864CB4ACE0F1D_inline(L_20, L_21, NULL);
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_22 = V_3;
				NullCheck(L_22);
				LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A* L_23 = L_22->___PointerEvent_0;
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_24 = __this->___UICamera_32;
				NullCheck(L_24);
				int32_t L_25;
				L_25 = Camera_get_pixelWidth_m55AC8AD744FC0179865C2E630C68F9AD0799065D(L_24, NULL);
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_26 = __this->___UICamera_32;
				NullCheck(L_26);
				int32_t L_27;
				L_27 = Camera_get_pixelHeight_m00881B5A440B0018D5A8F837694027050B500F59(L_26, NULL);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
				memset((&L_28), 0, sizeof(L_28));
				Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_28), ((float)il2cpp_codegen_multiply(((float)L_25), (0.5f))), ((float)il2cpp_codegen_multiply(((float)L_27), (0.5f))), /*hidden argument*/NULL);
				NullCheck(L_23);
				PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline(L_23, L_28, NULL);
				EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_29;
				L_29 = BaseInputModule_get_eventSystem_m341B2378F61A58D5432906B9EE1E12265E2FAB33_inline(__this, NULL);
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_30 = V_3;
				NullCheck(L_30);
				LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A* L_31 = L_30->___PointerEvent_0;
				List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_32 = ((BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1*)__this)->___m_RaycastResultCache_4;
				NullCheck(L_29);
				EventSystem_RaycastAll_mE93CC75909438D20D17A0EF98348A064FBFEA528(L_29, L_31, L_32, NULL);
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_33 = V_3;
				NullCheck(L_33);
				LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A* L_34 = L_33->___PointerEvent_0;
				List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_35 = ((BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1*)__this)->___m_RaycastResultCache_4;
				RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_36;
				L_36 = BaseInputModule_FindFirstRaycast_m911AAA96B2E1178B5446F594B2BD30849FE4AA2B(L_35, NULL);
				NullCheck(L_34);
				PointerEventData_set_pointerCurrentRaycast_m52E1E9E89BACACFA6E8F105191654C7E24A98667_inline(L_34, L_36, NULL);
				List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_37 = ((BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1*)__this)->___m_RaycastResultCache_4;
				NullCheck(L_37);
				List_1_Clear_m88ECE219176F771E4C5F913CC01FFCF91E93E3D0_inline(L_37, List_1_Clear_m88ECE219176F771E4C5F913CC01FFCF91E93E3D0_RuntimeMethod_var);
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_38 = V_3;
				NullCheck(L_38);
				LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A* L_39 = L_38->___PointerEvent_0;
				NullCheck(L_39);
				RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_40;
				L_40 = PointerEventData_get_pointerCurrentRaycast_m1C6B7D707CEE9C6574DD443289D90102EDC7A2C4_inline(L_39, NULL);
				float L_41 = L_40.___distance_2;
				V_6 = (bool)((((float)L_41) > ((float)(0.0f)))? 1 : 0);
				bool L_42 = V_6;
				if (!L_42)
				{
					goto IL_013d_1;
				}
			}
			{
				IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* L_43 = V_2;
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_44 = V_3;
				NullCheck(L_44);
				LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A* L_45 = L_44->___PointerEvent_0;
				NullCheck(L_45);
				RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_46;
				L_46 = PointerEventData_get_pointerCurrentRaycast_m1C6B7D707CEE9C6574DD443289D90102EDC7A2C4_inline(L_45, NULL);
				float L_47 = L_46.___distance_2;
				NullCheck(L_43);
				VirtualActionInvoker1< float >::Invoke(13 /* System.Void TechXR.Core.Sense.IUILaserPointer::LimitLaserDistance(System.Single) */, L_43, ((float)il2cpp_codegen_add(L_47, (0.00999999978f))));
			}

IL_013d_1:
			{
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_48 = V_3;
				NullCheck(L_48);
				LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A* L_49 = L_48->___PointerEvent_0;
				NullCheck(L_49);
				RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_50;
				L_50 = PointerEventData_get_pointerCurrentRaycast_m1C6B7D707CEE9C6574DD443289D90102EDC7A2C4_inline(L_49, NULL);
				V_7 = L_50;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_51;
				L_51 = RaycastResult_get_gameObject_m77014B442B9E2D10F2CC3AEEDC07AA95CDE1E2F1_inline((&V_7), NULL);
				V_4 = L_51;
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_52 = V_3;
				NullCheck(L_52);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_53 = L_52->___CurrentPoint_1;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54 = V_4;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_55;
				L_55 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_53, L_54, NULL);
				V_8 = L_55;
				bool L_56 = V_8;
				if (!L_56)
				{
					goto IL_01a2_1;
				}
			}
			{
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_57 = V_3;
				NullCheck(L_57);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58 = L_57->___CurrentPoint_1;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_59;
				L_59 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_58, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				V_9 = L_59;
				bool L_60 = V_9;
				if (!L_60)
				{
					goto IL_0188_1;
				}
			}
			{
				IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* L_61 = V_2;
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_62 = V_3;
				NullCheck(L_62);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_63 = L_62->___CurrentPoint_1;
				NullCheck(L_61);
				VirtualActionInvoker1< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(8 /* System.Void TechXR.Core.Sense.IUILaserPointer::OnExitControl(UnityEngine.GameObject) */, L_61, L_63);
			}

IL_0188_1:
			{
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_64 = V_4;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_65;
				L_65 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_64, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				V_10 = L_65;
				bool L_66 = V_10;
				if (!L_66)
				{
					goto IL_01a1_1;
				}
			}
			{
				IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* L_67 = V_2;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_68 = V_4;
				NullCheck(L_67);
				VirtualActionInvoker1< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(7 /* System.Void TechXR.Core.Sense.IUILaserPointer::OnEnterControl(UnityEngine.GameObject) */, L_67, L_68);
			}

IL_01a1_1:
			{
			}

IL_01a2_1:
			{
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_69 = V_3;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_70 = V_4;
				NullCheck(L_69);
				L_69->___CurrentPoint_1 = L_70;
				Il2CppCodeGenWriteBarrier((void**)(&L_69->___CurrentPoint_1), (void*)L_70);
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_71 = V_3;
				NullCheck(L_71);
				LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A* L_72 = L_71->___PointerEvent_0;
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_73 = V_3;
				NullCheck(L_73);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_74 = L_73->___CurrentPoint_1;
				BaseInputModule_HandlePointerExitAndEnter_m0815F06EAF8F937916E0656D66A69844CB211298(__this, L_72, L_74, NULL);
				IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* L_75 = V_2;
				NullCheck(L_75);
				bool L_76;
				L_76 = VirtualFuncInvoker0< bool >::Invoke(11 /* System.Boolean TechXR.Core.Sense.IUILaserPointer::ButtonDown() */, L_75);
				V_11 = L_76;
				bool L_77 = V_11;
				if (!L_77)
				{
					goto IL_038d_1;
				}
			}
			{
				LaserPointerInputModule_ClearSelection_m89CB5DF445873D5DA6D0988A8DCB5E766391D458(__this, NULL);
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_78 = V_3;
				NullCheck(L_78);
				LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A* L_79 = L_78->___PointerEvent_0;
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_80 = V_3;
				NullCheck(L_80);
				LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A* L_81 = L_80->___PointerEvent_0;
				NullCheck(L_81);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82;
				L_82 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_81, NULL);
				NullCheck(L_79);
				PointerEventData_set_pressPosition_m85544FBAB798DABE70067508294A6C4841A95379_inline(L_79, L_82, NULL);
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_83 = V_3;
				NullCheck(L_83);
				LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A* L_84 = L_83->___PointerEvent_0;
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_85 = V_3;
				NullCheck(L_85);
				LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A* L_86 = L_85->___PointerEvent_0;
				NullCheck(L_86);
				RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_87;
				L_87 = PointerEventData_get_pointerCurrentRaycast_m1C6B7D707CEE9C6574DD443289D90102EDC7A2C4_inline(L_86, NULL);
				NullCheck(L_84);
				PointerEventData_set_pointerPressRaycast_m55CA127474B4CBCA795A9C872B7630AAF766F852_inline(L_84, L_87, NULL);
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_88 = V_3;
				NullCheck(L_88);
				LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A* L_89 = L_88->___PointerEvent_0;
				NullCheck(L_89);
				PointerEventData_set_pointerPress_m51241AAA6E5F87ADEBBB8DB7D4452CE45200BEE8(L_89, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_90 = V_3;
				NullCheck(L_90);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_91 = L_90->___CurrentPoint_1;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_92;
				L_92 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_91, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				V_12 = L_92;
				bool L_93 = V_12;
				if (!L_93)
				{
					goto IL_038c_1;
				}
			}
			{
				EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_94;
				L_94 = BaseInputModule_get_eventSystem_m341B2378F61A58D5432906B9EE1E12265E2FAB33_inline(__this, NULL);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_95 = V_4;
				NullCheck(L_94);
				EventSystem_SetSelectedGameObject_m91382EAC4D552C672CC07BE7EB1481F156045280(L_94, L_95, NULL);
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_96 = V_3;
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_97 = V_3;
				NullCheck(L_97);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_98 = L_97->___CurrentPoint_1;
				NullCheck(L_96);
				L_96->___CurrentPressed_2 = L_98;
				Il2CppCodeGenWriteBarrier((void**)(&L_96->___CurrentPressed_2), (void*)L_98);
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_99 = V_3;
				NullCheck(L_99);
				LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A* L_100 = L_99->___PointerEvent_0;
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_101 = V_3;
				NullCheck(L_101);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_102 = L_101->___CurrentPressed_2;
				NullCheck(L_100);
				L_100->___Current_33 = L_102;
				Il2CppCodeGenWriteBarrier((void**)(&L_100->___Current_33), (void*)L_102);
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_103 = V_3;
				NullCheck(L_103);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_104 = L_103->___CurrentPressed_2;
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_105 = V_3;
				NullCheck(L_105);
				LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A* L_106 = L_105->___PointerEvent_0;
				il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
				EventFunction_1_t00024D26E9CCD074EEBC25568B0383863A4CF117* L_107;
				L_107 = ExecuteEvents_get_pointerDownHandler_mF03E3A959BA9C0FA008013C1A02AE0AF6042DF44_inline(NULL);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_108;
				L_108 = ExecuteEvents_ExecuteHierarchy_TisIPointerDownHandler_t42CC83619BB6295404D44090142F7726003CE573_mAAB1B55CF77D247B61D04981A59169EFFE9E0AFD(L_104, L_106, L_107, ExecuteEvents_ExecuteHierarchy_TisIPointerDownHandler_t42CC83619BB6295404D44090142F7726003CE573_mAAB1B55CF77D247B61D04981A59169EFFE9E0AFD_RuntimeMethod_var);
				V_13 = L_108;
				IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* L_109 = V_2;
				NullCheck(L_109);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_110;
				L_110 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_109, NULL);
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_111 = V_3;
				NullCheck(L_111);
				LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A* L_112 = L_111->___PointerEvent_0;
				EventFunction_1_t00024D26E9CCD074EEBC25568B0383863A4CF117* L_113;
				L_113 = ExecuteEvents_get_pointerDownHandler_mF03E3A959BA9C0FA008013C1A02AE0AF6042DF44_inline(NULL);
				bool L_114;
				L_114 = ExecuteEvents_Execute_TisIPointerDownHandler_t42CC83619BB6295404D44090142F7726003CE573_mC279421E43B3264277D0E8C36E8DA097F3BBB0E0(L_110, L_112, L_113, ExecuteEvents_Execute_TisIPointerDownHandler_t42CC83619BB6295404D44090142F7726003CE573_mC279421E43B3264277D0E8C36E8DA097F3BBB0E0_RuntimeMethod_var);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_115 = V_13;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_116;
				L_116 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_115, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				V_14 = L_116;
				bool L_117 = V_14;
				if (!L_117)
				{
					goto IL_02d8_1;
				}
			}
			{
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_118 = V_3;
				NullCheck(L_118);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_119 = L_118->___CurrentPressed_2;
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_120 = V_3;
				NullCheck(L_120);
				LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A* L_121 = L_120->___PointerEvent_0;
				il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
				EventFunction_1_t586168BFEFD0CF29A2B706B5411BF712BD73359E* L_122;
				L_122 = ExecuteEvents_get_pointerClickHandler_m4BF7FB241BD3AE488E0E1BE900666ECC2F2DFA78_inline(NULL);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_123;
				L_123 = ExecuteEvents_ExecuteHierarchy_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_mB8FE7DAB045B9BC18C426E563C2584F49E97452A(L_119, L_121, L_122, ExecuteEvents_ExecuteHierarchy_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_mB8FE7DAB045B9BC18C426E563C2584F49E97452A_RuntimeMethod_var);
				V_13 = L_123;
				IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* L_124 = V_2;
				NullCheck(L_124);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_125;
				L_125 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_124, NULL);
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_126 = V_3;
				NullCheck(L_126);
				LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A* L_127 = L_126->___PointerEvent_0;
				EventFunction_1_t586168BFEFD0CF29A2B706B5411BF712BD73359E* L_128;
				L_128 = ExecuteEvents_get_pointerClickHandler_m4BF7FB241BD3AE488E0E1BE900666ECC2F2DFA78_inline(NULL);
				bool L_129;
				L_129 = ExecuteEvents_Execute_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_mB18F35F748E39943F1C1AE45EE7D15EBDF39833D(L_125, L_127, L_128, ExecuteEvents_Execute_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_mB18F35F748E39943F1C1AE45EE7D15EBDF39833D_RuntimeMethod_var);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_130 = V_13;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_131;
				L_131 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_130, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				V_15 = L_131;
				bool L_132 = V_15;
				if (!L_132)
				{
					goto IL_02d5_1;
				}
			}
			{
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_133 = V_3;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_134 = V_13;
				NullCheck(L_133);
				L_133->___CurrentPressed_2 = L_134;
				Il2CppCodeGenWriteBarrier((void**)(&L_133->___CurrentPressed_2), (void*)L_134);
			}

IL_02d5_1:
			{
				goto IL_030c_1;
			}

IL_02d8_1:
			{
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_135 = V_3;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_136 = V_13;
				NullCheck(L_135);
				L_135->___CurrentPressed_2 = L_136;
				Il2CppCodeGenWriteBarrier((void**)(&L_135->___CurrentPressed_2), (void*)L_136);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_137 = V_13;
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_138 = V_3;
				NullCheck(L_138);
				LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A* L_139 = L_138->___PointerEvent_0;
				il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
				EventFunction_1_t586168BFEFD0CF29A2B706B5411BF712BD73359E* L_140;
				L_140 = ExecuteEvents_get_pointerClickHandler_m4BF7FB241BD3AE488E0E1BE900666ECC2F2DFA78_inline(NULL);
				bool L_141;
				L_141 = ExecuteEvents_Execute_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_mB18F35F748E39943F1C1AE45EE7D15EBDF39833D(L_137, L_139, L_140, ExecuteEvents_Execute_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_mB18F35F748E39943F1C1AE45EE7D15EBDF39833D_RuntimeMethod_var);
				IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* L_142 = V_2;
				NullCheck(L_142);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_143;
				L_143 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_142, NULL);
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_144 = V_3;
				NullCheck(L_144);
				LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A* L_145 = L_144->___PointerEvent_0;
				EventFunction_1_t586168BFEFD0CF29A2B706B5411BF712BD73359E* L_146;
				L_146 = ExecuteEvents_get_pointerClickHandler_m4BF7FB241BD3AE488E0E1BE900666ECC2F2DFA78_inline(NULL);
				bool L_147;
				L_147 = ExecuteEvents_Execute_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_mB18F35F748E39943F1C1AE45EE7D15EBDF39833D(L_143, L_145, L_146, ExecuteEvents_Execute_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_mB18F35F748E39943F1C1AE45EE7D15EBDF39833D_RuntimeMethod_var);
			}

IL_030c_1:
			{
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_148 = V_13;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_149;
				L_149 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_148, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				V_16 = L_149;
				bool L_150 = V_16;
				if (!L_150)
				{
					goto IL_033f_1;
				}
			}
			{
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_151 = V_3;
				NullCheck(L_151);
				LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A* L_152 = L_151->___PointerEvent_0;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_153 = V_13;
				NullCheck(L_152);
				PointerEventData_set_pointerPress_m51241AAA6E5F87ADEBBB8DB7D4452CE45200BEE8(L_152, L_153, NULL);
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_154 = V_3;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_155 = V_13;
				NullCheck(L_154);
				L_154->___CurrentPressed_2 = L_155;
				Il2CppCodeGenWriteBarrier((void**)(&L_154->___CurrentPressed_2), (void*)L_155);
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_156 = V_3;
				NullCheck(L_156);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_157 = L_156->___CurrentPressed_2;
				LaserPointerInputModule_Select_mA102346198BEA2EBAA16D1FFA86D5A0CE10685FC(__this, L_157, NULL);
			}

IL_033f_1:
			{
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_158 = V_3;
				NullCheck(L_158);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_159 = L_158->___CurrentPressed_2;
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_160 = V_3;
				NullCheck(L_160);
				LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A* L_161 = L_160->___PointerEvent_0;
				il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
				EventFunction_1_t5B9F26DC56564B82AEF63D8AFEEEADBAB365F403* L_162;
				L_162 = ExecuteEvents_get_beginDragHandler_m330A9FEFFAF518FC1DAABE7A425BEB345B019421_inline(NULL);
				bool L_163;
				L_163 = ExecuteEvents_Execute_TisIBeginDragHandler_t0E0386CCAB531BD8291D12476D40D19AA98ED7EB_m186924444C6950BA260CFE27CEFE0F76402342A2(L_159, L_161, L_162, ExecuteEvents_Execute_TisIBeginDragHandler_t0E0386CCAB531BD8291D12476D40D19AA98ED7EB_m186924444C6950BA260CFE27CEFE0F76402342A2_RuntimeMethod_var);
				IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* L_164 = V_2;
				NullCheck(L_164);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_165;
				L_165 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_164, NULL);
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_166 = V_3;
				NullCheck(L_166);
				LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A* L_167 = L_166->___PointerEvent_0;
				EventFunction_1_t5B9F26DC56564B82AEF63D8AFEEEADBAB365F403* L_168;
				L_168 = ExecuteEvents_get_beginDragHandler_m330A9FEFFAF518FC1DAABE7A425BEB345B019421_inline(NULL);
				bool L_169;
				L_169 = ExecuteEvents_Execute_TisIBeginDragHandler_t0E0386CCAB531BD8291D12476D40D19AA98ED7EB_m186924444C6950BA260CFE27CEFE0F76402342A2(L_165, L_167, L_168, ExecuteEvents_Execute_TisIBeginDragHandler_t0E0386CCAB531BD8291D12476D40D19AA98ED7EB_m186924444C6950BA260CFE27CEFE0F76402342A2_RuntimeMethod_var);
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_170 = V_3;
				NullCheck(L_170);
				LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A* L_171 = L_170->___PointerEvent_0;
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_172 = V_3;
				NullCheck(L_172);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_173 = L_172->___CurrentPressed_2;
				NullCheck(L_171);
				PointerEventData_set_pointerDrag_m0E8D72362B07962843671C39ADC8F4D5E4915010_inline(L_171, L_173, NULL);
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_174 = V_3;
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_175 = V_3;
				NullCheck(L_175);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_176 = L_175->___CurrentPressed_2;
				NullCheck(L_174);
				L_174->___CurrentDragging_3 = L_176;
				Il2CppCodeGenWriteBarrier((void**)(&L_174->___CurrentDragging_3), (void*)L_176);
			}

IL_038c_1:
			{
			}

IL_038d_1:
			{
				IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* L_177 = V_2;
				NullCheck(L_177);
				bool L_178;
				L_178 = VirtualFuncInvoker0< bool >::Invoke(12 /* System.Boolean TechXR.Core.Sense.IUILaserPointer::ButtonUp() */, L_177);
				V_17 = L_178;
				bool L_179 = V_17;
				if (!L_179)
				{
					goto IL_04a6_1;
				}
			}
			{
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_180 = V_3;
				NullCheck(L_180);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_181 = L_180->___CurrentDragging_3;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_182;
				L_182 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_181, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				V_18 = L_182;
				bool L_183 = V_18;
				if (!L_183)
				{
					goto IL_0432_1;
				}
			}
			{
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_184 = V_3;
				NullCheck(L_184);
				LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A* L_185 = L_184->___PointerEvent_0;
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_186 = V_3;
				NullCheck(L_186);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_187 = L_186->___CurrentDragging_3;
				NullCheck(L_185);
				L_185->___Current_33 = L_187;
				Il2CppCodeGenWriteBarrier((void**)(&L_185->___Current_33), (void*)L_187);
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_188 = V_3;
				NullCheck(L_188);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_189 = L_188->___CurrentDragging_3;
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_190 = V_3;
				NullCheck(L_190);
				LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A* L_191 = L_190->___PointerEvent_0;
				il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
				EventFunction_1_t33BA7CA3F9202146F70BE77589CE24F7451C584C* L_192;
				L_192 = ExecuteEvents_get_endDragHandler_m6F1588E368AD932233A5E6BCD8D7259E9C5B921E_inline(NULL);
				bool L_193;
				L_193 = ExecuteEvents_Execute_TisIEndDragHandler_t9A93E4A27E7CEED446E5FE3DACF39B1A552C23A9_mF257FA331CEC3705FC5A620859468C5B9AF0F756(L_189, L_191, L_192, ExecuteEvents_Execute_TisIEndDragHandler_t9A93E4A27E7CEED446E5FE3DACF39B1A552C23A9_mF257FA331CEC3705FC5A620859468C5B9AF0F756_RuntimeMethod_var);
				IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* L_194 = V_2;
				NullCheck(L_194);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_195;
				L_195 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_194, NULL);
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_196 = V_3;
				NullCheck(L_196);
				LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A* L_197 = L_196->___PointerEvent_0;
				EventFunction_1_t33BA7CA3F9202146F70BE77589CE24F7451C584C* L_198;
				L_198 = ExecuteEvents_get_endDragHandler_m6F1588E368AD932233A5E6BCD8D7259E9C5B921E_inline(NULL);
				bool L_199;
				L_199 = ExecuteEvents_Execute_TisIEndDragHandler_t9A93E4A27E7CEED446E5FE3DACF39B1A552C23A9_mF257FA331CEC3705FC5A620859468C5B9AF0F756(L_195, L_197, L_198, ExecuteEvents_Execute_TisIEndDragHandler_t9A93E4A27E7CEED446E5FE3DACF39B1A552C23A9_mF257FA331CEC3705FC5A620859468C5B9AF0F756_RuntimeMethod_var);
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_200 = V_3;
				NullCheck(L_200);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_201 = L_200->___CurrentPoint_1;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_202;
				L_202 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_201, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				V_19 = L_202;
				bool L_203 = V_19;
				if (!L_203)
				{
					goto IL_041d_1;
				}
			}
			{
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_204 = V_3;
				NullCheck(L_204);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_205 = L_204->___CurrentPoint_1;
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_206 = V_3;
				NullCheck(L_206);
				LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A* L_207 = L_206->___PointerEvent_0;
				il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
				EventFunction_1_tB3864D36512C3A896DAC44E898E5D9E1A92CB733* L_208;
				L_208 = ExecuteEvents_get_dropHandler_m61ECC86CEAC77AA7C7E7793F6241D2413858354C_inline(NULL);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_209;
				L_209 = ExecuteEvents_ExecuteHierarchy_TisIDropHandler_t9F3B358BA4812886852E9AB85A653ABF73B9AA35_m4C9DA44082FBE5886FBFBFE66CBC89771C7971C5(L_205, L_207, L_208, ExecuteEvents_ExecuteHierarchy_TisIDropHandler_t9F3B358BA4812886852E9AB85A653ABF73B9AA35_m4C9DA44082FBE5886FBFBFE66CBC89771C7971C5_RuntimeMethod_var);
			}

IL_041d_1:
			{
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_210 = V_3;
				NullCheck(L_210);
				LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A* L_211 = L_210->___PointerEvent_0;
				NullCheck(L_211);
				PointerEventData_set_pointerDrag_m0E8D72362B07962843671C39ADC8F4D5E4915010_inline(L_211, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_212 = V_3;
				NullCheck(L_212);
				L_212->___CurrentDragging_3 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&L_212->___CurrentDragging_3), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
			}

IL_0432_1:
			{
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_213 = V_3;
				NullCheck(L_213);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_214 = L_213->___CurrentPressed_2;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_215;
				L_215 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_214, NULL);
				V_20 = L_215;
				bool L_216 = V_20;
				if (!L_216)
				{
					goto IL_04a5_1;
				}
			}
			{
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_217 = V_3;
				NullCheck(L_217);
				LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A* L_218 = L_217->___PointerEvent_0;
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_219 = V_3;
				NullCheck(L_219);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_220 = L_219->___CurrentPressed_2;
				NullCheck(L_218);
				L_218->___Current_33 = L_220;
				Il2CppCodeGenWriteBarrier((void**)(&L_218->___Current_33), (void*)L_220);
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_221 = V_3;
				NullCheck(L_221);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_222 = L_221->___CurrentPressed_2;
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_223 = V_3;
				NullCheck(L_223);
				LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A* L_224 = L_223->___PointerEvent_0;
				il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
				EventFunction_1_t919A3841A202FB8C678BC0172FAB7E2F79B88AD8* L_225;
				L_225 = ExecuteEvents_get_pointerUpHandler_mD03905CA3A384EC6AA81326758AB878087DC8C86_inline(NULL);
				bool L_226;
				L_226 = ExecuteEvents_Execute_TisIPointerUpHandler_tB2D4D0ABEAFF77BE8D0159D638D85E1AF7BAF210_m9FC5FE3B9CC6D87743F88BD3B2B437653DF82673(L_222, L_224, L_225, ExecuteEvents_Execute_TisIPointerUpHandler_tB2D4D0ABEAFF77BE8D0159D638D85E1AF7BAF210_m9FC5FE3B9CC6D87743F88BD3B2B437653DF82673_RuntimeMethod_var);
				IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* L_227 = V_2;
				NullCheck(L_227);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_228;
				L_228 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_227, NULL);
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_229 = V_3;
				NullCheck(L_229);
				LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A* L_230 = L_229->___PointerEvent_0;
				EventFunction_1_t919A3841A202FB8C678BC0172FAB7E2F79B88AD8* L_231;
				L_231 = ExecuteEvents_get_pointerUpHandler_mD03905CA3A384EC6AA81326758AB878087DC8C86_inline(NULL);
				bool L_232;
				L_232 = ExecuteEvents_Execute_TisIPointerUpHandler_tB2D4D0ABEAFF77BE8D0159D638D85E1AF7BAF210_m9FC5FE3B9CC6D87743F88BD3B2B437653DF82673(L_228, L_230, L_231, ExecuteEvents_Execute_TisIPointerUpHandler_tB2D4D0ABEAFF77BE8D0159D638D85E1AF7BAF210_m9FC5FE3B9CC6D87743F88BD3B2B437653DF82673_RuntimeMethod_var);
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_233 = V_3;
				NullCheck(L_233);
				LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A* L_234 = L_233->___PointerEvent_0;
				NullCheck(L_234);
				PointerEventData_set_rawPointerPress_mEEC4E3C7CD00F1DDCD3DA98DA5837E71BB8455E3_inline(L_234, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_235 = V_3;
				NullCheck(L_235);
				LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A* L_236 = L_235->___PointerEvent_0;
				NullCheck(L_236);
				PointerEventData_set_pointerPress_m51241AAA6E5F87ADEBBB8DB7D4452CE45200BEE8(L_236, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_237 = V_3;
				NullCheck(L_237);
				L_237->___CurrentPressed_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&L_237->___CurrentPressed_2), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
			}

IL_04a5_1:
			{
			}

IL_04a6_1:
			{
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_238 = V_3;
				NullCheck(L_238);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_239 = L_238->___CurrentDragging_3;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_240;
				L_240 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_239, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				V_21 = L_240;
				bool L_241 = V_21;
				if (!L_241)
				{
					goto IL_04f9_1;
				}
			}
			{
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_242 = V_3;
				NullCheck(L_242);
				LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A* L_243 = L_242->___PointerEvent_0;
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_244 = V_3;
				NullCheck(L_244);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_245 = L_244->___CurrentPressed_2;
				NullCheck(L_243);
				L_243->___Current_33 = L_245;
				Il2CppCodeGenWriteBarrier((void**)(&L_243->___Current_33), (void*)L_245);
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_246 = V_3;
				NullCheck(L_246);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_247 = L_246->___CurrentDragging_3;
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_248 = V_3;
				NullCheck(L_248);
				LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A* L_249 = L_248->___PointerEvent_0;
				il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
				EventFunction_1_t37D97D8E7BDC68938191F138BFE31C7BEFCF855E* L_250;
				L_250 = ExecuteEvents_get_dragHandler_m301F931ED0A78DBF5838822F836FBD221A57C76A_inline(NULL);
				bool L_251;
				L_251 = ExecuteEvents_Execute_TisIDragHandler_t9FF2B3D79AB401D7E2485254973D15C0F117D00D_m0E5281FDDCB78D969625ECB14A393CA5D572C3A8(L_247, L_249, L_250, ExecuteEvents_Execute_TisIDragHandler_t9FF2B3D79AB401D7E2485254973D15C0F117D00D_m0E5281FDDCB78D969625ECB14A393CA5D572C3A8_RuntimeMethod_var);
				IUILaserPointer_tDD084FB550499FF6A4717F2D6B1CA66F6EB9520F* L_252 = V_2;
				NullCheck(L_252);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_253;
				L_253 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_252, NULL);
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_254 = V_3;
				NullCheck(L_254);
				LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A* L_255 = L_254->___PointerEvent_0;
				EventFunction_1_t37D97D8E7BDC68938191F138BFE31C7BEFCF855E* L_256;
				L_256 = ExecuteEvents_get_dragHandler_m301F931ED0A78DBF5838822F836FBD221A57C76A_inline(NULL);
				bool L_257;
				L_257 = ExecuteEvents_Execute_TisIDragHandler_t9FF2B3D79AB401D7E2485254973D15C0F117D00D_m0E5281FDDCB78D969625ECB14A393CA5D572C3A8(L_253, L_255, L_256, ExecuteEvents_Execute_TisIDragHandler_t9FF2B3D79AB401D7E2485254973D15C0F117D00D_m0E5281FDDCB78D969625ECB14A393CA5D572C3A8_RuntimeMethod_var);
			}

IL_04f9_1:
			{
				EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_258;
				L_258 = BaseInputModule_get_eventSystem_m341B2378F61A58D5432906B9EE1E12265E2FAB33_inline(__this, NULL);
				NullCheck(L_258);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_259;
				L_259 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline(L_258, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_260;
				L_260 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_259, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				V_22 = L_260;
				bool L_261 = V_22;
				if (!L_261)
				{
					goto IL_0544_1;
				}
			}
			{
				ControllerData_tE0DADEDBC96DFAC3317151550A16CF25346D36EF* L_262 = V_3;
				NullCheck(L_262);
				LaserPointerEventData_tDA1A085C35360A492372A522FD63920B00DD1D2A* L_263 = L_262->___PointerEvent_0;
				EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_264;
				L_264 = BaseInputModule_get_eventSystem_m341B2378F61A58D5432906B9EE1E12265E2FAB33_inline(__this, NULL);
				NullCheck(L_264);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_265;
				L_265 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline(L_264, NULL);
				NullCheck(L_263);
				L_263->___Current_33 = L_265;
				Il2CppCodeGenWriteBarrier((void**)(&L_263->___Current_33), (void*)L_265);
				EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_266;
				L_266 = BaseInputModule_get_eventSystem_m341B2378F61A58D5432906B9EE1E12265E2FAB33_inline(__this, NULL);
				NullCheck(L_266);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_267;
				L_267 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline(L_266, NULL);
				BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_268;
				L_268 = VirtualFuncInvoker0< BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* >::Invoke(19 /* UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::GetBaseEventData() */, __this);
				il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
				EventFunction_1_tB9684C6044C44F9A8317A5E5A9A3C1C0376A4678* L_269;
				L_269 = ExecuteEvents_get_updateSelectedHandler_mB63CDEA5DE1C37F2E0974E9E9679686627E924E6_inline(NULL);
				bool L_270;
				L_270 = ExecuteEvents_Execute_TisIUpdateSelectedHandler_tBBACEC3A6478F7DA4B682AFDA8CF59C6C3FCC9CC_m29048196EE9931B2E91B895CA98BCBBE2418E0B0(L_267, L_268, L_269, ExecuteEvents_Execute_TisIUpdateSelectedHandler_tBBACEC3A6478F7DA4B682AFDA8CF59C6C3FCC9CC_m29048196EE9931B2E91B895CA98BCBBE2418E0B0_RuntimeMethod_var);
			}

IL_0544_1:
			{
			}

IL_0545_1:
			{
				bool L_271;
				L_271 = Enumerator_MoveNext_m64744B7BEC10CDC9053D8C9BF62A21CA0FCDB036((&V_0), Enumerator_MoveNext_m64744B7BEC10CDC9053D8C9BF62A21CA0FCDB036_RuntimeMethod_var);
				if (L_271)
				{
					goto IL_0025_1;
				}
			}
			{
				goto IL_0562;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0562:
	{
		return;
	}
}
// System.Void TechXR.Core.Sense.LaserPointerInputModule::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaserPointerInputModule__ctor_m1100FBB0A73F5DF8B4C8E89BA1E38E01CCA921E0 (LaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mAE76465455077EF392B2D6707842134610BC0979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t5849E900B482EF522536990076C17609372C55CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t5849E900B482EF522536990076C17609372C55CE* L_0 = (Dictionary_2_t5849E900B482EF522536990076C17609372C55CE*)il2cpp_codegen_object_new(Dictionary_2_t5849E900B482EF522536990076C17609372C55CE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mAE76465455077EF392B2D6707842134610BC0979(L_0, Dictionary_2__ctor_mAE76465455077EF392B2D6707842134610BC0979_RuntimeMethod_var);
		__this->___m_ControllerData_35 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ControllerData_35), (void*)L_0);
		StandaloneInputModule__ctor_m77BAC1DB71B81FFCD2791DE706BD4FE239F47C27(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean TechXR.Core.Sense.SenseInput::get_JoystickMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SenseInput_get_JoystickMovement_m60AB63CAF82340714C75691722FB331B1787B98B (SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CJoystickMovementU3Ek__BackingField_25;
		return L_0;
	}
}
// System.Void TechXR.Core.Sense.SenseInput::set_JoystickMovement(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseInput_set_JoystickMovement_m6CDB0C09257C996955958351AA56484C647B6D12 (SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CJoystickMovementU3Ek__BackingField_25 = L_0;
		return;
	}
}
// System.Boolean TechXR.Core.Sense.SenseInput::get_TeleportMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SenseInput_get_TeleportMovement_mF90B4FB8F9142123A41CAF719E76AAF532F83D3D (SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CTeleportMovementU3Ek__BackingField_26;
		return L_0;
	}
}
// System.Void TechXR.Core.Sense.SenseInput::set_TeleportMovement(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseInput_set_TeleportMovement_m2C2EC2DE0913AC43BC33481DB817D45868A64AC2 (SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CTeleportMovementU3Ek__BackingField_26 = L_0;
		return;
	}
}
// System.Void TechXR.Core.Sense.SenseInput::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseInput_Awake_m791E849CD89EE6713478D9E1130367DD30855FA4 (SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8* L_0 = ((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___Instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8* L_3 = ((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___Instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_3, NULL);
	}

IL_001d:
	{
		((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___Instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___Instance_4), (void*)__this);
		SenseInput_set_JoystickMovement_m6CDB0C09257C996955958351AA56484C647B6D12_inline(__this, (bool)1, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.SenseInput::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseInput_Start_mC25D4D9D293C789B26E293562B29505FE2C945E0 (SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void TechXR.Core.Sense.SenseInput::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseInput_Update_m59940EE8F6CAFC7D92191C718CA9F1A90B620FA6 (SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	float G_B39_0 = 0.0f;
	float G_B42_0 = 0.0f;
	{
		bool L_0;
		L_0 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)99), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		SenseInput_ResetButtonState_m774AE51802020E0EBC39C9E4AAA2091A23FE4ABA(__this, NULL);
		((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonC_Down_13 = (bool)1;
		goto IL_00bd;
	}

IL_0020:
	{
		bool L_2;
		L_2 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)351), NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		SenseInput_ResetButtonState_m774AE51802020E0EBC39C9E4AAA2091A23FE4ABA(__this, NULL);
		((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonA_Down_11 = (bool)1;
		goto IL_00bd;
	}

IL_003f:
	{
		bool L_4;
		L_4 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)352), NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_005e;
		}
	}
	{
		SenseInput_ResetButtonState_m774AE51802020E0EBC39C9E4AAA2091A23FE4ABA(__this, NULL);
		((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonB_Down_12 = (bool)1;
		goto IL_00bd;
	}

IL_005e:
	{
		bool L_6;
		L_6 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)353), NULL);
		V_3 = L_6;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_007d;
		}
	}
	{
		SenseInput_ResetButtonState_m774AE51802020E0EBC39C9E4AAA2091A23FE4ABA(__this, NULL);
		((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonD_Down_14 = (bool)1;
		goto IL_00bd;
	}

IL_007d:
	{
		bool L_8;
		L_8 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)354), NULL);
		V_4 = L_8;
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_009e;
		}
	}
	{
		SenseInput_ResetButtonState_m774AE51802020E0EBC39C9E4AAA2091A23FE4ABA(__this, NULL);
		((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonE_Down_15 = (bool)1;
		goto IL_00bd;
	}

IL_009e:
	{
		bool L_10;
		L_10 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)355), NULL);
		V_5 = L_10;
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_00bd;
		}
	}
	{
		SenseInput_ResetButtonState_m774AE51802020E0EBC39C9E4AAA2091A23FE4ABA(__this, NULL);
		((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonF_Down_16 = (bool)1;
	}

IL_00bd:
	{
		bool L_12;
		L_12 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)99), NULL);
		V_6 = L_12;
		bool L_13 = V_6;
		if (!L_13)
		{
			goto IL_00de;
		}
	}
	{
		SenseInput_ResetButtonState_m774AE51802020E0EBC39C9E4AAA2091A23FE4ABA(__this, NULL);
		((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonC_Up_7 = (bool)1;
		goto IL_0184;
	}

IL_00de:
	{
		bool L_14;
		L_14 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)351), NULL);
		V_7 = L_14;
		bool L_15 = V_7;
		if (!L_15)
		{
			goto IL_0102;
		}
	}
	{
		SenseInput_ResetButtonState_m774AE51802020E0EBC39C9E4AAA2091A23FE4ABA(__this, NULL);
		((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonA_Up_5 = (bool)1;
		goto IL_0184;
	}

IL_0102:
	{
		bool L_16;
		L_16 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)352), NULL);
		V_8 = L_16;
		bool L_17 = V_8;
		if (!L_17)
		{
			goto IL_0123;
		}
	}
	{
		SenseInput_ResetButtonState_m774AE51802020E0EBC39C9E4AAA2091A23FE4ABA(__this, NULL);
		((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonB_Up_6 = (bool)1;
		goto IL_0184;
	}

IL_0123:
	{
		bool L_18;
		L_18 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)353), NULL);
		V_9 = L_18;
		bool L_19 = V_9;
		if (!L_19)
		{
			goto IL_0144;
		}
	}
	{
		SenseInput_ResetButtonState_m774AE51802020E0EBC39C9E4AAA2091A23FE4ABA(__this, NULL);
		((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonD_Up_8 = (bool)1;
		goto IL_0184;
	}

IL_0144:
	{
		bool L_20;
		L_20 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)354), NULL);
		V_10 = L_20;
		bool L_21 = V_10;
		if (!L_21)
		{
			goto IL_0165;
		}
	}
	{
		SenseInput_ResetButtonState_m774AE51802020E0EBC39C9E4AAA2091A23FE4ABA(__this, NULL);
		((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonE_Up_9 = (bool)1;
		goto IL_0184;
	}

IL_0165:
	{
		bool L_22;
		L_22 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)355), NULL);
		V_11 = L_22;
		bool L_23 = V_11;
		if (!L_23)
		{
			goto IL_0184;
		}
	}
	{
		SenseInput_ResetButtonState_m774AE51802020E0EBC39C9E4AAA2091A23FE4ABA(__this, NULL);
		((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonF_Up_10 = (bool)1;
	}

IL_0184:
	{
		bool L_24;
		L_24 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)350), NULL);
		V_12 = L_24;
		bool L_25 = V_12;
		if (!L_25)
		{
			goto IL_01a8;
		}
	}
	{
		SenseInput_ResetButtonState_m774AE51802020E0EBC39C9E4AAA2091A23FE4ABA(__this, NULL);
		((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonC_Press_19 = (bool)1;
		goto IL_024e;
	}

IL_01a8:
	{
		bool L_26;
		L_26 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)351), NULL);
		V_13 = L_26;
		bool L_27 = V_13;
		if (!L_27)
		{
			goto IL_01cc;
		}
	}
	{
		SenseInput_ResetButtonState_m774AE51802020E0EBC39C9E4AAA2091A23FE4ABA(__this, NULL);
		((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonA_Press_17 = (bool)1;
		goto IL_024e;
	}

IL_01cc:
	{
		bool L_28;
		L_28 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)352), NULL);
		V_14 = L_28;
		bool L_29 = V_14;
		if (!L_29)
		{
			goto IL_01ed;
		}
	}
	{
		SenseInput_ResetButtonState_m774AE51802020E0EBC39C9E4AAA2091A23FE4ABA(__this, NULL);
		((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonB_Press_18 = (bool)1;
		goto IL_024e;
	}

IL_01ed:
	{
		bool L_30;
		L_30 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)353), NULL);
		V_15 = L_30;
		bool L_31 = V_15;
		if (!L_31)
		{
			goto IL_020e;
		}
	}
	{
		SenseInput_ResetButtonState_m774AE51802020E0EBC39C9E4AAA2091A23FE4ABA(__this, NULL);
		((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonD_Press_20 = (bool)1;
		goto IL_024e;
	}

IL_020e:
	{
		bool L_32;
		L_32 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)354), NULL);
		V_16 = L_32;
		bool L_33 = V_16;
		if (!L_33)
		{
			goto IL_022f;
		}
	}
	{
		SenseInput_ResetButtonState_m774AE51802020E0EBC39C9E4AAA2091A23FE4ABA(__this, NULL);
		((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonE_Press_21 = (bool)1;
		goto IL_024e;
	}

IL_022f:
	{
		bool L_34;
		L_34 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)355), NULL);
		V_17 = L_34;
		bool L_35 = V_17;
		if (!L_35)
		{
			goto IL_024e;
		}
	}
	{
		SenseInput_ResetButtonState_m774AE51802020E0EBC39C9E4AAA2091A23FE4ABA(__this, NULL);
		((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonF_Press_22 = (bool)1;
	}

IL_024e:
	{
		bool L_36;
		L_36 = SenseInput_get_JoystickMovement_m60AB63CAF82340714C75691722FB331B1787B98B_inline(__this, NULL);
		if (L_36)
		{
			goto IL_025d;
		}
	}
	{
		G_B39_0 = (0.0f);
		goto IL_0267;
	}

IL_025d:
	{
		float L_37;
		L_37 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		G_B39_0 = L_37;
	}

IL_0267:
	{
		((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___HorizontalInput_23 = G_B39_0;
		bool L_38;
		L_38 = SenseInput_get_JoystickMovement_m60AB63CAF82340714C75691722FB331B1787B98B_inline(__this, NULL);
		if (L_38)
		{
			goto IL_027b;
		}
	}
	{
		G_B42_0 = (0.0f);
		goto IL_0285;
	}

IL_027b:
	{
		float L_39;
		L_39 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		G_B42_0 = L_39;
	}

IL_0285:
	{
		((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___VerticalInput_24 = G_B42_0;
		return;
	}
}
// System.Void TechXR.Core.Sense.SenseInput::ResetButtonState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseInput_ResetButtonState_m774AE51802020E0EBC39C9E4AAA2091A23FE4ABA (SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = 0;
		((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonF_Up_10 = (bool)L_0;
		int32_t L_1 = L_0;
		((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonF_Press_22 = (bool)L_1;
		int32_t L_2 = L_1;
		((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonF_Down_16 = (bool)L_2;
		int32_t L_3 = L_2;
		((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonE_Up_9 = (bool)L_3;
		int32_t L_4 = L_3;
		((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonE_Press_21 = (bool)L_4;
		int32_t L_5 = L_4;
		((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonE_Down_15 = (bool)L_5;
		int32_t L_6 = L_5;
		((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonD_Up_8 = (bool)L_6;
		int32_t L_7 = L_6;
		((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonD_Press_20 = (bool)L_7;
		int32_t L_8 = L_7;
		((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonD_Down_14 = (bool)L_8;
		int32_t L_9 = L_8;
		((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonC_Up_7 = (bool)L_9;
		int32_t L_10 = L_9;
		((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonC_Press_19 = (bool)L_10;
		int32_t L_11 = L_10;
		((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonC_Down_13 = (bool)L_11;
		int32_t L_12 = L_11;
		((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonB_Up_6 = (bool)L_12;
		int32_t L_13 = L_12;
		((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonB_Press_18 = (bool)L_13;
		int32_t L_14 = L_13;
		((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonB_Down_12 = (bool)L_14;
		int32_t L_15 = L_14;
		((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonA_Press_17 = (bool)L_15;
		int32_t L_16 = L_15;
		((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonA_Press_17 = (bool)L_16;
		((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonA_Down_11 = (bool)L_16;
		return;
	}
}
// System.Boolean TechXR.Core.Sense.SenseInput::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SenseInput_GetButtonDown_m9EA2DFC09426E9B72CD08D325237D4592FEAA179 (String_t* ___button0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B9FE05484B470B354696B4F06C3B12F71B5BB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9D3D73187778AF6D06AB846BD78D488ADBFB70E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD07B59B474E59375E25F09D75E1BAC7660C9373B);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	bool V_2 = false;
	int32_t G_B10_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B30_0 = 0;
	{
		String_t* L_0 = ___button0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_0, NULL);
		V_1 = L_1;
		String_t* L_2 = V_1;
		V_0 = L_2;
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78, NULL);
		if (L_4)
		{
			goto IL_0060;
		}
	}
	{
		String_t* L_5 = V_0;
		bool L_6;
		L_6 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_5, _stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C, NULL);
		if (L_6)
		{
			goto IL_007c;
		}
	}
	{
		String_t* L_7 = V_0;
		bool L_8;
		L_8 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_7, _stringLiteral5B9FE05484B470B354696B4F06C3B12F71B5BB4A, NULL);
		if (L_8)
		{
			goto IL_0095;
		}
	}
	{
		String_t* L_9 = V_0;
		bool L_10;
		L_10 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_9, _stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03, NULL);
		if (L_10)
		{
			goto IL_00ae;
		}
	}
	{
		String_t* L_11 = V_0;
		bool L_12;
		L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteralB9D3D73187778AF6D06AB846BD78D488ADBFB70E, NULL);
		if (L_12)
		{
			goto IL_00c7;
		}
	}
	{
		String_t* L_13 = V_0;
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_13, _stringLiteralD07B59B474E59375E25F09D75E1BAC7660C9373B, NULL);
		if (L_14)
		{
			goto IL_00e0;
		}
	}
	{
		goto IL_00f9;
	}

IL_0060:
	{
		bool L_15;
		L_15 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)331), NULL);
		if (L_15)
		{
			goto IL_0075;
		}
	}
	{
		bool L_16;
		L_16 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)49), NULL);
		G_B10_0 = ((int32_t)(L_16));
		goto IL_0076;
	}

IL_0075:
	{
		G_B10_0 = 1;
	}

IL_0076:
	{
		V_2 = (bool)G_B10_0;
		goto IL_00fd;
	}

IL_007c:
	{
		bool L_17;
		L_17 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)332), NULL);
		if (L_17)
		{
			goto IL_0091;
		}
	}
	{
		bool L_18;
		L_18 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)50), NULL);
		G_B14_0 = ((int32_t)(L_18));
		goto IL_0092;
	}

IL_0091:
	{
		G_B14_0 = 1;
	}

IL_0092:
	{
		V_2 = (bool)G_B14_0;
		goto IL_00fd;
	}

IL_0095:
	{
		bool L_19;
		L_19 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)330), NULL);
		if (L_19)
		{
			goto IL_00aa;
		}
	}
	{
		bool L_20;
		L_20 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)51), NULL);
		G_B18_0 = ((int32_t)(L_20));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B18_0 = 1;
	}

IL_00ab:
	{
		V_2 = (bool)G_B18_0;
		goto IL_00fd;
	}

IL_00ae:
	{
		bool L_21;
		L_21 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)333), NULL);
		if (L_21)
		{
			goto IL_00c3;
		}
	}
	{
		bool L_22;
		L_22 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)52), NULL);
		G_B22_0 = ((int32_t)(L_22));
		goto IL_00c4;
	}

IL_00c3:
	{
		G_B22_0 = 1;
	}

IL_00c4:
	{
		V_2 = (bool)G_B22_0;
		goto IL_00fd;
	}

IL_00c7:
	{
		bool L_23;
		L_23 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)334), NULL);
		if (L_23)
		{
			goto IL_00dc;
		}
	}
	{
		bool L_24;
		L_24 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)108), NULL);
		G_B26_0 = ((int32_t)(L_24));
		goto IL_00dd;
	}

IL_00dc:
	{
		G_B26_0 = 1;
	}

IL_00dd:
	{
		V_2 = (bool)G_B26_0;
		goto IL_00fd;
	}

IL_00e0:
	{
		bool L_25;
		L_25 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)335), NULL);
		if (L_25)
		{
			goto IL_00f5;
		}
	}
	{
		bool L_26;
		L_26 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)117), NULL);
		G_B30_0 = ((int32_t)(L_26));
		goto IL_00f6;
	}

IL_00f5:
	{
		G_B30_0 = 1;
	}

IL_00f6:
	{
		V_2 = (bool)G_B30_0;
		goto IL_00fd;
	}

IL_00f9:
	{
		V_2 = (bool)0;
		goto IL_00fd;
	}

IL_00fd:
	{
		bool L_27 = V_2;
		return L_27;
	}
}
// System.Boolean TechXR.Core.Sense.SenseInput::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SenseInput_GetButton_mE78598B42F837BB2516C368404E54778F56ED941 (String_t* ___button0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B9FE05484B470B354696B4F06C3B12F71B5BB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9D3D73187778AF6D06AB846BD78D488ADBFB70E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD07B59B474E59375E25F09D75E1BAC7660C9373B);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	bool V_2 = false;
	int32_t G_B10_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B30_0 = 0;
	{
		String_t* L_0 = ___button0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_0, NULL);
		V_1 = L_1;
		String_t* L_2 = V_1;
		V_0 = L_2;
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78, NULL);
		if (L_4)
		{
			goto IL_0060;
		}
	}
	{
		String_t* L_5 = V_0;
		bool L_6;
		L_6 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_5, _stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C, NULL);
		if (L_6)
		{
			goto IL_007c;
		}
	}
	{
		String_t* L_7 = V_0;
		bool L_8;
		L_8 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_7, _stringLiteral5B9FE05484B470B354696B4F06C3B12F71B5BB4A, NULL);
		if (L_8)
		{
			goto IL_0095;
		}
	}
	{
		String_t* L_9 = V_0;
		bool L_10;
		L_10 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_9, _stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03, NULL);
		if (L_10)
		{
			goto IL_00ae;
		}
	}
	{
		String_t* L_11 = V_0;
		bool L_12;
		L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteralB9D3D73187778AF6D06AB846BD78D488ADBFB70E, NULL);
		if (L_12)
		{
			goto IL_00c7;
		}
	}
	{
		String_t* L_13 = V_0;
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_13, _stringLiteralD07B59B474E59375E25F09D75E1BAC7660C9373B, NULL);
		if (L_14)
		{
			goto IL_00e0;
		}
	}
	{
		goto IL_00f9;
	}

IL_0060:
	{
		bool L_15;
		L_15 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)331), NULL);
		if (L_15)
		{
			goto IL_0075;
		}
	}
	{
		bool L_16;
		L_16 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)49), NULL);
		G_B10_0 = ((int32_t)(L_16));
		goto IL_0076;
	}

IL_0075:
	{
		G_B10_0 = 1;
	}

IL_0076:
	{
		V_2 = (bool)G_B10_0;
		goto IL_00fd;
	}

IL_007c:
	{
		bool L_17;
		L_17 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)332), NULL);
		if (L_17)
		{
			goto IL_0091;
		}
	}
	{
		bool L_18;
		L_18 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)50), NULL);
		G_B14_0 = ((int32_t)(L_18));
		goto IL_0092;
	}

IL_0091:
	{
		G_B14_0 = 1;
	}

IL_0092:
	{
		V_2 = (bool)G_B14_0;
		goto IL_00fd;
	}

IL_0095:
	{
		bool L_19;
		L_19 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)330), NULL);
		if (L_19)
		{
			goto IL_00aa;
		}
	}
	{
		bool L_20;
		L_20 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)51), NULL);
		G_B18_0 = ((int32_t)(L_20));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B18_0 = 1;
	}

IL_00ab:
	{
		V_2 = (bool)G_B18_0;
		goto IL_00fd;
	}

IL_00ae:
	{
		bool L_21;
		L_21 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)333), NULL);
		if (L_21)
		{
			goto IL_00c3;
		}
	}
	{
		bool L_22;
		L_22 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)52), NULL);
		G_B22_0 = ((int32_t)(L_22));
		goto IL_00c4;
	}

IL_00c3:
	{
		G_B22_0 = 1;
	}

IL_00c4:
	{
		V_2 = (bool)G_B22_0;
		goto IL_00fd;
	}

IL_00c7:
	{
		bool L_23;
		L_23 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)334), NULL);
		if (L_23)
		{
			goto IL_00dc;
		}
	}
	{
		bool L_24;
		L_24 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)108), NULL);
		G_B26_0 = ((int32_t)(L_24));
		goto IL_00dd;
	}

IL_00dc:
	{
		G_B26_0 = 1;
	}

IL_00dd:
	{
		V_2 = (bool)G_B26_0;
		goto IL_00fd;
	}

IL_00e0:
	{
		bool L_25;
		L_25 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)335), NULL);
		if (L_25)
		{
			goto IL_00f5;
		}
	}
	{
		bool L_26;
		L_26 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)117), NULL);
		G_B30_0 = ((int32_t)(L_26));
		goto IL_00f6;
	}

IL_00f5:
	{
		G_B30_0 = 1;
	}

IL_00f6:
	{
		V_2 = (bool)G_B30_0;
		goto IL_00fd;
	}

IL_00f9:
	{
		V_2 = (bool)0;
		goto IL_00fd;
	}

IL_00fd:
	{
		bool L_27 = V_2;
		return L_27;
	}
}
// System.Boolean TechXR.Core.Sense.SenseInput::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SenseInput_GetButtonUp_m95DF02DD234441AC047DB7A91176052C23BB38C9 (String_t* ___button0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B9FE05484B470B354696B4F06C3B12F71B5BB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9D3D73187778AF6D06AB846BD78D488ADBFB70E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD07B59B474E59375E25F09D75E1BAC7660C9373B);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	bool V_2 = false;
	int32_t G_B10_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B30_0 = 0;
	{
		String_t* L_0 = ___button0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_0, NULL);
		V_1 = L_1;
		String_t* L_2 = V_1;
		V_0 = L_2;
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78, NULL);
		if (L_4)
		{
			goto IL_0060;
		}
	}
	{
		String_t* L_5 = V_0;
		bool L_6;
		L_6 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_5, _stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C, NULL);
		if (L_6)
		{
			goto IL_007c;
		}
	}
	{
		String_t* L_7 = V_0;
		bool L_8;
		L_8 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_7, _stringLiteral5B9FE05484B470B354696B4F06C3B12F71B5BB4A, NULL);
		if (L_8)
		{
			goto IL_0095;
		}
	}
	{
		String_t* L_9 = V_0;
		bool L_10;
		L_10 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_9, _stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03, NULL);
		if (L_10)
		{
			goto IL_00ae;
		}
	}
	{
		String_t* L_11 = V_0;
		bool L_12;
		L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteralB9D3D73187778AF6D06AB846BD78D488ADBFB70E, NULL);
		if (L_12)
		{
			goto IL_00c7;
		}
	}
	{
		String_t* L_13 = V_0;
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_13, _stringLiteralD07B59B474E59375E25F09D75E1BAC7660C9373B, NULL);
		if (L_14)
		{
			goto IL_00e0;
		}
	}
	{
		goto IL_00f9;
	}

IL_0060:
	{
		bool L_15;
		L_15 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)331), NULL);
		if (L_15)
		{
			goto IL_0075;
		}
	}
	{
		bool L_16;
		L_16 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)49), NULL);
		G_B10_0 = ((int32_t)(L_16));
		goto IL_0076;
	}

IL_0075:
	{
		G_B10_0 = 1;
	}

IL_0076:
	{
		V_2 = (bool)G_B10_0;
		goto IL_00fd;
	}

IL_007c:
	{
		bool L_17;
		L_17 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)332), NULL);
		if (L_17)
		{
			goto IL_0091;
		}
	}
	{
		bool L_18;
		L_18 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)50), NULL);
		G_B14_0 = ((int32_t)(L_18));
		goto IL_0092;
	}

IL_0091:
	{
		G_B14_0 = 1;
	}

IL_0092:
	{
		V_2 = (bool)G_B14_0;
		goto IL_00fd;
	}

IL_0095:
	{
		bool L_19;
		L_19 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)330), NULL);
		if (L_19)
		{
			goto IL_00aa;
		}
	}
	{
		bool L_20;
		L_20 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)51), NULL);
		G_B18_0 = ((int32_t)(L_20));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B18_0 = 1;
	}

IL_00ab:
	{
		V_2 = (bool)G_B18_0;
		goto IL_00fd;
	}

IL_00ae:
	{
		bool L_21;
		L_21 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)333), NULL);
		if (L_21)
		{
			goto IL_00c3;
		}
	}
	{
		bool L_22;
		L_22 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)52), NULL);
		G_B22_0 = ((int32_t)(L_22));
		goto IL_00c4;
	}

IL_00c3:
	{
		G_B22_0 = 1;
	}

IL_00c4:
	{
		V_2 = (bool)G_B22_0;
		goto IL_00fd;
	}

IL_00c7:
	{
		bool L_23;
		L_23 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)334), NULL);
		if (L_23)
		{
			goto IL_00dc;
		}
	}
	{
		bool L_24;
		L_24 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)108), NULL);
		G_B26_0 = ((int32_t)(L_24));
		goto IL_00dd;
	}

IL_00dc:
	{
		G_B26_0 = 1;
	}

IL_00dd:
	{
		V_2 = (bool)G_B26_0;
		goto IL_00fd;
	}

IL_00e0:
	{
		bool L_25;
		L_25 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)335), NULL);
		if (L_25)
		{
			goto IL_00f5;
		}
	}
	{
		bool L_26;
		L_26 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)117), NULL);
		G_B30_0 = ((int32_t)(L_26));
		goto IL_00f6;
	}

IL_00f5:
	{
		G_B30_0 = 1;
	}

IL_00f6:
	{
		V_2 = (bool)G_B30_0;
		goto IL_00fd;
	}

IL_00f9:
	{
		V_2 = (bool)0;
		goto IL_00fd;
	}

IL_00fd:
	{
		bool L_27 = V_2;
		return L_27;
	}
}
// System.Void TechXR.Core.Sense.SenseInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseInput__ctor_mF66C2B135B43A0A8165D635220F210817A9DB396 (SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m845BD557E5EAD0E7B7651195EB4E424504985BAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1C3DD67409BD614CE1F834B9F4F85DD4E0D207AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral579A50C67ADB00AC3925859C23590322B2D0BE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF86C9E9E7FE0EF09A2EAE8066CDC31F859254CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF420ABFDDBDA7B9EE665D85EF62E4A437554003);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD60316EE3ADB7B16A998DF8AE0D68C293F6622E);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralEF420ABFDDBDA7B9EE665D85EF62E4A437554003);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralEF420ABFDDBDA7B9EE665D85EF62E4A437554003);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralBF86C9E9E7FE0EF09A2EAE8066CDC31F859254CC);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralBF86C9E9E7FE0EF09A2EAE8066CDC31F859254CC);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral579A50C67ADB00AC3925859C23590322B2D0BE9D);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral579A50C67ADB00AC3925859C23590322B2D0BE9D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralFD60316EE3ADB7B16A998DF8AE0D68C293F6622E);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralFD60316EE3ADB7B16A998DF8AE0D68C293F6622E);
		__this->___m_ButtonName_27 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ButtonName_27), (void*)L_6);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_7 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)((int32_t)18));
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_8 = L_7;
		bool L_9 = ((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonA_Down_11;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (bool)L_9);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_10 = L_8;
		bool L_11 = ((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonB_Down_12;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (bool)L_11);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_12 = L_10;
		bool L_13 = ((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonC_Down_13;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (bool)L_13);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_14 = L_12;
		bool L_15 = ((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonD_Down_14;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (bool)L_15);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_16 = L_14;
		bool L_17 = ((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonE_Down_15;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (bool)L_17);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_18 = L_16;
		bool L_19 = ((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonF_Down_16;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(5), (bool)L_19);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_20 = L_18;
		bool L_21 = ((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonA_Press_17;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(6), (bool)L_21);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_22 = L_20;
		bool L_23 = ((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonB_Press_18;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(7), (bool)L_23);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_24 = L_22;
		bool L_25 = ((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonC_Press_19;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(8), (bool)L_25);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_26 = L_24;
		bool L_27 = ((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonD_Press_20;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (bool)L_27);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_28 = L_26;
		bool L_29 = ((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonE_Press_21;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (bool)L_29);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_30 = L_28;
		bool L_31 = ((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonF_Press_22;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (bool)L_31);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_32 = L_30;
		bool L_33 = ((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonA_Up_5;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (bool)L_33);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_34 = L_32;
		bool L_35 = ((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonB_Up_6;
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (bool)L_35);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_36 = L_34;
		bool L_37 = ((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonC_Up_7;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (bool)L_37);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_38 = L_36;
		bool L_39 = ((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonD_Up_8;
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (bool)L_39);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_40 = L_38;
		bool L_41 = ((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonE_Up_9;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (bool)L_41);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_42 = L_40;
		bool L_43 = ((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___ButtonF_Up_10;
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (bool)L_43);
		__this->___m_ButtonInput_28 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ButtonInput_28), (void*)L_42);
		List_1_t1C3DD67409BD614CE1F834B9F4F85DD4E0D207AE* L_44 = (List_1_t1C3DD67409BD614CE1F834B9F4F85DD4E0D207AE*)il2cpp_codegen_object_new(List_1_t1C3DD67409BD614CE1F834B9F4F85DD4E0D207AE_il2cpp_TypeInfo_var);
		NullCheck(L_44);
		List_1__ctor_m845BD557E5EAD0E7B7651195EB4E424504985BAB(L_44, List_1__ctor_m845BD557E5EAD0E7B7651195EB4E424504985BAB_RuntimeMethod_var);
		__this->___m_InputMap_29 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InputMap_29), (void*)L_44);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// TechXR.Core.Sense.IXR TechXR.Core.Sense.ControllerFactory::GetIXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ControllerFactory_GetIXR_m860E4E3565C5C96D117CDF6DC42BA7C437813673 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerFactory_tDBFFE3B805A39CCAAFEAD2461F1119ED926200A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m4A3E657F19E0456005196EFE080664B5B74F8534_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m5D60D103E26BACE6FCA20140935EBF56330E4BC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_t5AA3D1D13FDB0CDFED5F4B19749050F99CE96E46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_tB3F117CD016202C931C3F5A781A2A0D7E69FCD94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	{
		bool L_0 = ((ControllerFactory_tDBFFE3B805A39CCAAFEAD2461F1119ED926200A0_StaticFields*)il2cpp_codegen_static_fields_for(ControllerFactory_tDBFFE3B805A39CCAAFEAD2461F1119ED926200A0_il2cpp_TypeInfo_var))->___IsOculus_0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_t5AA3D1D13FDB0CDFED5F4B19749050F99CE96E46_il2cpp_TypeInfo_var);
		SenseXR_t7B7241CE97061BA7BC71E3D9D061CD88F22ED7CA* L_2;
		L_2 = Singleton_1_get_Instance_m4A3E657F19E0456005196EFE080664B5B74F8534(Singleton_1_get_Instance_m4A3E657F19E0456005196EFE080664B5B74F8534_RuntimeMethod_var);
		V_1 = L_2;
		goto IL_001e;
	}

IL_0016:
	{
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_tB3F117CD016202C931C3F5A781A2A0D7E69FCD94_il2cpp_TypeInfo_var);
		OculusBridge_t7AEB3911A89CBEA0708DE5D82554AF2C00B8B1EC* L_3;
		L_3 = Singleton_1_get_Instance_m5D60D103E26BACE6FCA20140935EBF56330E4BC6(Singleton_1_get_Instance_m5D60D103E26BACE6FCA20140935EBF56330E4BC6_RuntimeMethod_var);
		V_1 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		RuntimeObject* L_4 = V_1;
		return L_4;
	}
}
// System.Void TechXR.Core.Sense.ControllerFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerFactory__ctor_mDE188F5B650FE6C9633421591C82DEB96D60CE8B (ControllerFactory_tDBFFE3B805A39CCAAFEAD2461F1119ED926200A0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TechXR.Core.Sense.OculusBridge::AddEventListener(TechXR.Core.Sense.SenseEvent,TechXR.Core.Sense.SenseEventDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusBridge_AddEventListener_mBC416BC4F6A9ED67803C0F2AEE3547FCD5AA0957 (OculusBridge_t7AEB3911A89CBEA0708DE5D82554AF2C00B8B1EC* __this, int32_t ___e0, SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C* ___listenerFunction1, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OculusBridge_AddEventListener_mBC416BC4F6A9ED67803C0F2AEE3547FCD5AA0957_RuntimeMethod_var)));
	}
}
// UnityEngine.GameObject TechXR.Core.Sense.OculusBridge::GetController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* OculusBridge_GetController_m9E13891B7678627ACBD8B6F0BE746B1E17E8AF9A (OculusBridge_t7AEB3911A89CBEA0708DE5D82554AF2C00B8B1EC* __this, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OculusBridge_GetController_m9E13891B7678627ACBD8B6F0BE746B1E17E8AF9A_RuntimeMethod_var)));
	}
}
// UnityEngine.GameObject TechXR.Core.Sense.OculusBridge::GetCurrentObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* OculusBridge_GetCurrentObject_mED081D2DB8BFA66342663E0A31AE10F9F77A46C5 (OculusBridge_t7AEB3911A89CBEA0708DE5D82554AF2C00B8B1EC* __this, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OculusBridge_GetCurrentObject_mED081D2DB8BFA66342663E0A31AE10F9F77A46C5_RuntimeMethod_var)));
	}
}
// UnityEngine.RaycastHit TechXR.Core.Sense.OculusBridge::GetRaycastHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 OculusBridge_GetRaycastHit_m1C45625B72FA270E7B105AE53B5DE771830AF959 (OculusBridge_t7AEB3911A89CBEA0708DE5D82554AF2C00B8B1EC* __this, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OculusBridge_GetRaycastHit_m1C45625B72FA270E7B105AE53B5DE771830AF959_RuntimeMethod_var)));
	}
}
// UnityEngine.Vector3 TechXR.Core.Sense.OculusBridge::GetXRLocalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 OculusBridge_GetXRLocalPosition_m6F71084BD82E0078C5E4A10103EB349A15F32137 (OculusBridge_t7AEB3911A89CBEA0708DE5D82554AF2C00B8B1EC* __this, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OculusBridge_GetXRLocalPosition_m6F71084BD82E0078C5E4A10103EB349A15F32137_RuntimeMethod_var)));
	}
}
// UnityEngine.Quaternion TechXR.Core.Sense.OculusBridge::GetXRLocalRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 OculusBridge_GetXRLocalRotation_m27139507AE9F8F0F6FF3D9A697447BDE196FD5D3 (OculusBridge_t7AEB3911A89CBEA0708DE5D82554AF2C00B8B1EC* __this, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OculusBridge_GetXRLocalRotation_m27139507AE9F8F0F6FF3D9A697447BDE196FD5D3_RuntimeMethod_var)));
	}
}
// UnityEngine.Vector3 TechXR.Core.Sense.OculusBridge::GetXRPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 OculusBridge_GetXRPosition_m5D77F63F10F04FB78AB8AD576356DC5D6B069A5F (OculusBridge_t7AEB3911A89CBEA0708DE5D82554AF2C00B8B1EC* __this, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OculusBridge_GetXRPosition_m5D77F63F10F04FB78AB8AD576356DC5D6B069A5F_RuntimeMethod_var)));
	}
}
// UnityEngine.Quaternion TechXR.Core.Sense.OculusBridge::GetXRRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 OculusBridge_GetXRRotation_mF6EF6AFDF162168C89058860285E3D2CB6F9D451 (OculusBridge_t7AEB3911A89CBEA0708DE5D82554AF2C00B8B1EC* __this, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OculusBridge_GetXRRotation_mF6EF6AFDF162168C89058860285E3D2CB6F9D451_RuntimeMethod_var)));
	}
}
// System.Void TechXR.Core.Sense.OculusBridge::RemoveEventListener(TechXR.Core.Sense.SenseEvent,TechXR.Core.Sense.SenseEventDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusBridge_RemoveEventListener_mCA0D6B3F7935E600ED5F8AF0636685E8ED522849 (OculusBridge_t7AEB3911A89CBEA0708DE5D82554AF2C00B8B1EC* __this, int32_t ___e0, SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C* ___listenerFunction1, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OculusBridge_RemoveEventListener_mCA0D6B3F7935E600ED5F8AF0636685E8ED522849_RuntimeMethod_var)));
	}
}
// System.Void TechXR.Core.Sense.OculusBridge::SetObjectInteractionMode(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusBridge_SetObjectInteractionMode_m31154317ABA6A384C022360D843715A3C8CD6E80 (OculusBridge_t7AEB3911A89CBEA0708DE5D82554AF2C00B8B1EC* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, bool ___interactive1, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OculusBridge_SetObjectInteractionMode_m31154317ABA6A384C022360D843715A3C8CD6E80_RuntimeMethod_var)));
	}
}
// System.Void TechXR.Core.Sense.OculusBridge::SetPointerColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusBridge_SetPointerColor_m845FF9C8D52E8790BDD5BEAB257F5B095508A76B (OculusBridge_t7AEB3911A89CBEA0708DE5D82554AF2C00B8B1EC* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OculusBridge_SetPointerColor_m845FF9C8D52E8790BDD5BEAB257F5B095508A76B_RuntimeMethod_var)));
	}
}
// System.Void TechXR.Core.Sense.OculusBridge::SetPointerDisplayMode(TechXR.Core.Sense.Defs/PointerDisplayMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusBridge_SetPointerDisplayMode_mCBFD0B0815F8F18ED049DF7BB991782BC0CA864C (OculusBridge_t7AEB3911A89CBEA0708DE5D82554AF2C00B8B1EC* __this, int32_t ___mode0, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OculusBridge_SetPointerDisplayMode_mCBFD0B0815F8F18ED049DF7BB991782BC0CA864C_RuntimeMethod_var)));
	}
}
// System.Void TechXR.Core.Sense.OculusBridge::ToggleControllerBodyDisplay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusBridge_ToggleControllerBodyDisplay_m9230344CC5DE569946C0F8A19067B5A211640B80 (OculusBridge_t7AEB3911A89CBEA0708DE5D82554AF2C00B8B1EC* __this, bool ___flag0, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OculusBridge_ToggleControllerBodyDisplay_m9230344CC5DE569946C0F8A19067B5A211640B80_RuntimeMethod_var)));
	}
}
// System.Void TechXR.Core.Sense.OculusBridge::TogglePointerDisplay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusBridge_TogglePointerDisplay_mF2F6264D5991DE007CAE80FE870871D0F79B06FF (OculusBridge_t7AEB3911A89CBEA0708DE5D82554AF2C00B8B1EC* __this, bool ___flag0, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OculusBridge_TogglePointerDisplay_mF2F6264D5991DE007CAE80FE870871D0F79B06FF_RuntimeMethod_var)));
	}
}
// System.Void TechXR.Core.Sense.OculusBridge::TriggerEvent(TechXR.Core.Sense.SenseEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusBridge_TriggerEvent_mE9C0577137830A47B0B00CA25B89EDE96956CAAC (OculusBridge_t7AEB3911A89CBEA0708DE5D82554AF2C00B8B1EC* __this, int32_t ___e0, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OculusBridge_TriggerEvent_mE9C0577137830A47B0B00CA25B89EDE96956CAAC_RuntimeMethod_var)));
	}
}
// System.Void TechXR.Core.Sense.OculusBridge::TriggerEvent(TechXR.Core.Sense.SenseEvent,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusBridge_TriggerEvent_m9FE411BBDA967FF683F5E6D93201D0B79B7FA126 (OculusBridge_t7AEB3911A89CBEA0708DE5D82554AF2C00B8B1EC* __this, int32_t ___e0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OculusBridge_TriggerEvent_m9FE411BBDA967FF683F5E6D93201D0B79B7FA126_RuntimeMethod_var)));
	}
}
// System.Void TechXR.Core.Sense.OculusBridge::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusBridge__ctor_mCF9763EB19C45D527FD54C385D93D8C19F45E510 (OculusBridge_t7AEB3911A89CBEA0708DE5D82554AF2C00B8B1EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1__ctor_m22E1F7284124781796F09E04E55732671B164CAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_tB3F117CD016202C931C3F5A781A2A0D7E69FCD94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_tB3F117CD016202C931C3F5A781A2A0D7E69FCD94_il2cpp_TypeInfo_var);
		Singleton_1__ctor_m22E1F7284124781796F09E04E55732671B164CAA(__this, Singleton_1__ctor_m22E1F7284124781796F09E04E55732671B164CAA_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TechXR.Core.Sense.SenseXR::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseXR_Start_m9BB55F08801566DF58902819EC87EFC51FDD4AD8 (SenseXR_t7B7241CE97061BA7BC71E3D9D061CD88F22ED7CA* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void TechXR.Core.Sense.SenseXR::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseXR_Update_m61747AFD0B0AFFAC7A113B5ABFF8D82C1CDBE518 (SenseXR_t7B7241CE97061BA7BC71E3D9D061CD88F22ED7CA* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// UnityEngine.GameObject TechXR.Core.Sense.SenseXR::GetCurrentObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* SenseXR_GetCurrentObject_m5D7C2C04ABC12C3C0F9F19E7A1035F7A4A5357CD (SenseXR_t7B7241CE97061BA7BC71E3D9D061CD88F22ED7CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* L_0 = ((SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_StaticFields*)il2cpp_codegen_static_fields_for(SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_il2cpp_TypeInfo_var))->____instance_4;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = SenseManager_GetCurrentGameObject_mFAFCA142595E2BBC9DDDE210CE8D9977B4A10930(L_0, NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.GameObject TechXR.Core.Sense.SenseXR::GetController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* SenseXR_GetController_mBFAB8DEFE7D4A26C6D813178548AB2D0427C245C (SenseXR_t7B7241CE97061BA7BC71E3D9D061CD88F22ED7CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* L_0 = ((SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_StaticFields*)il2cpp_codegen_static_fields_for(SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_il2cpp_TypeInfo_var))->____instance_4;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = SenseManager_GetController_m72CEFCF65CC609D3CB4900F4F34C4BA7FEDFF0F4(L_0, NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Vector3 TechXR.Core.Sense.SenseXR::GetXRPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SenseXR_GetXRPosition_mC1D2B264666E78AAB238043AD5714DAEB7E232A7 (SenseXR_t7B7241CE97061BA7BC71E3D9D061CD88F22ED7CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* L_0 = ((SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_StaticFields*)il2cpp_codegen_static_fields_for(SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_il2cpp_TypeInfo_var))->____instance_4;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = SenseManager_GetController_m72CEFCF65CC609D3CB4900F4F34C4BA7FEDFF0F4(L_0, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		V_0 = L_3;
		goto IL_0018;
	}

IL_0018:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Vector3 TechXR.Core.Sense.SenseXR::GetXRLocalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SenseXR_GetXRLocalPosition_m0A342584BA76368818202CC569C04CC167E76C68 (SenseXR_t7B7241CE97061BA7BC71E3D9D061CD88F22ED7CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* L_0 = ((SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_StaticFields*)il2cpp_codegen_static_fields_for(SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_il2cpp_TypeInfo_var))->____instance_4;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = SenseManager_GetController_m72CEFCF65CC609D3CB4900F4F34C4BA7FEDFF0F4(L_0, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_2, NULL);
		V_0 = L_3;
		goto IL_0018;
	}

IL_0018:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Quaternion TechXR.Core.Sense.SenseXR::GetXRRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 SenseXR_GetXRRotation_m5145D8E64B079E50B48AD08F2497D938F694E088 (SenseXR_t7B7241CE97061BA7BC71E3D9D061CD88F22ED7CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* L_0 = ((SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_StaticFields*)il2cpp_codegen_static_fields_for(SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_il2cpp_TypeInfo_var))->____instance_4;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = SenseManager_GetController_m72CEFCF65CC609D3CB4900F4F34C4BA7FEDFF0F4(L_0, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		NullCheck(L_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_2, NULL);
		V_0 = L_3;
		goto IL_0018;
	}

IL_0018:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Quaternion TechXR.Core.Sense.SenseXR::GetXRLocalRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 SenseXR_GetXRLocalRotation_m71708EC2E602F05F6EAAB28ED6738159406BD4BF (SenseXR_t7B7241CE97061BA7BC71E3D9D061CD88F22ED7CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* L_0 = ((SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_StaticFields*)il2cpp_codegen_static_fields_for(SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_il2cpp_TypeInfo_var))->____instance_4;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = SenseManager_GetController_m72CEFCF65CC609D3CB4900F4F34C4BA7FEDFF0F4(L_0, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		NullCheck(L_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_2, NULL);
		V_0 = L_3;
		goto IL_0018;
	}

IL_0018:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = V_0;
		return L_4;
	}
}
// System.Void TechXR.Core.Sense.SenseXR::SetObjectInteractionMode(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseXR_SetObjectInteractionMode_m3F0F2C6AB354C87D84A09D397F0E68118D506A02 (SenseXR_t7B7241CE97061BA7BC71E3D9D061CD88F22ED7CA* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, bool ___interactive1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = ___interactive1;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___gameObject0;
		NullCheck(L_2);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_2, 0, NULL);
		goto IL_0018;
	}

IL_0010:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___gameObject0;
		NullCheck(L_3);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_3, 2, NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void TechXR.Core.Sense.SenseXR::AddEventListener(TechXR.Core.Sense.SenseEvent,TechXR.Core.Sense.SenseEventDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseXR_AddEventListener_mB3B93B1DFB2788CB1C2A8427177F505E46C735FD (SenseXR_t7B7241CE97061BA7BC71E3D9D061CD88F22ED7CA* __this, int32_t ___e0, SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C* ___listenerFunction1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m78D05D468F30A6FA61E75B05CA4DC49D8E5C2F05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_tDE48F5D43D6ACE2A85EB85E8B734CF741D8D4306_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_tDE48F5D43D6ACE2A85EB85E8B734CF741D8D4306_il2cpp_TypeInfo_var);
		EventManager_t549C00EDCE4BC703024CB8204FDD317602311CA8* L_0;
		L_0 = Singleton_1_get_Instance_m78D05D468F30A6FA61E75B05CA4DC49D8E5C2F05(Singleton_1_get_Instance_m78D05D468F30A6FA61E75B05CA4DC49D8E5C2F05_RuntimeMethod_var);
		int32_t L_1 = ___e0;
		SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C* L_2 = ___listenerFunction1;
		NullCheck(L_0);
		EventManager_RegisterEvent_m531D6DAA0B13702A548D812F42B2C1C574BF8DDA(L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.SenseXR::RemoveEventListener(TechXR.Core.Sense.SenseEvent,TechXR.Core.Sense.SenseEventDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseXR_RemoveEventListener_m57D873217834079428385B849FABFCEBC199810A (SenseXR_t7B7241CE97061BA7BC71E3D9D061CD88F22ED7CA* __this, int32_t ___e0, SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C* ___listenerFunction1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m78D05D468F30A6FA61E75B05CA4DC49D8E5C2F05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_tDE48F5D43D6ACE2A85EB85E8B734CF741D8D4306_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_tDE48F5D43D6ACE2A85EB85E8B734CF741D8D4306_il2cpp_TypeInfo_var);
		EventManager_t549C00EDCE4BC703024CB8204FDD317602311CA8* L_0;
		L_0 = Singleton_1_get_Instance_m78D05D468F30A6FA61E75B05CA4DC49D8E5C2F05(Singleton_1_get_Instance_m78D05D468F30A6FA61E75B05CA4DC49D8E5C2F05_RuntimeMethod_var);
		int32_t L_1 = ___e0;
		SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C* L_2 = ___listenerFunction1;
		NullCheck(L_0);
		EventManager_DeRegisterEvent_mCEE43837A21C7B9881BF9DDD22616D2649278553(L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.SenseXR::TriggerEvent(TechXR.Core.Sense.SenseEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseXR_TriggerEvent_m5B06461FFA78E01AC712A041ECCC89A8B065207D (SenseXR_t7B7241CE97061BA7BC71E3D9D061CD88F22ED7CA* __this, int32_t ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m78D05D468F30A6FA61E75B05CA4DC49D8E5C2F05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_tDE48F5D43D6ACE2A85EB85E8B734CF741D8D4306_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_tDE48F5D43D6ACE2A85EB85E8B734CF741D8D4306_il2cpp_TypeInfo_var);
		EventManager_t549C00EDCE4BC703024CB8204FDD317602311CA8* L_0;
		L_0 = Singleton_1_get_Instance_m78D05D468F30A6FA61E75B05CA4DC49D8E5C2F05(Singleton_1_get_Instance_m78D05D468F30A6FA61E75B05CA4DC49D8E5C2F05_RuntimeMethod_var);
		int32_t L_1 = ___e0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		EventManager_TriggerEvent_m62A9DD742C11C3D8C1C6DA04361C0F479AD90112(L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.SenseXR::TriggerEvent(TechXR.Core.Sense.SenseEvent,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseXR_TriggerEvent_m57D0CA0A04F4069A0E0FA9C91B77111A1F85B29D (SenseXR_t7B7241CE97061BA7BC71E3D9D061CD88F22ED7CA* __this, int32_t ___e0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m78D05D468F30A6FA61E75B05CA4DC49D8E5C2F05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_tDE48F5D43D6ACE2A85EB85E8B734CF741D8D4306_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_tDE48F5D43D6ACE2A85EB85E8B734CF741D8D4306_il2cpp_TypeInfo_var);
		EventManager_t549C00EDCE4BC703024CB8204FDD317602311CA8* L_0;
		L_0 = Singleton_1_get_Instance_m78D05D468F30A6FA61E75B05CA4DC49D8E5C2F05(Singleton_1_get_Instance_m78D05D468F30A6FA61E75B05CA4DC49D8E5C2F05_RuntimeMethod_var);
		int32_t L_1 = ___e0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args1;
		NullCheck(L_0);
		EventManager_TriggerEvent_m62A9DD742C11C3D8C1C6DA04361C0F479AD90112(L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.SenseXR::TogglePointerDisplay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseXR_TogglePointerDisplay_mADD6DB3C199D3AF7BB8FE513850AF56415869840 (SenseXR_t7B7241CE97061BA7BC71E3D9D061CD88F22ED7CA* __this, bool ___flag0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* L_0 = ((SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_StaticFields*)il2cpp_codegen_static_fields_for(SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_il2cpp_TypeInfo_var))->____instance_4;
		bool L_1 = ___flag0;
		NullCheck(L_0);
		SenseManager_TogglePointerDisplay_m47909C5C0EC6AAB4666124F5BA4C2F16EF7C832C(L_0, L_1, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.SenseXR::ToggleControllerBodyDisplay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseXR_ToggleControllerBodyDisplay_mF2746D1CB0864CC96FCAECB5257FBCE459899E12 (SenseXR_t7B7241CE97061BA7BC71E3D9D061CD88F22ED7CA* __this, bool ___flag0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* L_0 = ((SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_StaticFields*)il2cpp_codegen_static_fields_for(SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_il2cpp_TypeInfo_var))->____instance_4;
		bool L_1 = ___flag0;
		NullCheck(L_0);
		SenseManager_ToggleControllerBodyDisplay_mF7A636CEC72A53440125EF76D4A619AA941F8F0E(L_0, L_1, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.SenseXR::SetPointerDisplayMode(TechXR.Core.Sense.Defs/PointerDisplayMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseXR_SetPointerDisplayMode_m2DCCFAD3608CACD97692EB716340B312B56ABA6E (SenseXR_t7B7241CE97061BA7BC71E3D9D061CD88F22ED7CA* __this, int32_t ___mode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* L_0 = ((SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_StaticFields*)il2cpp_codegen_static_fields_for(SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_il2cpp_TypeInfo_var))->____instance_4;
		int32_t L_1 = ___mode0;
		NullCheck(L_0);
		SenseManager_SetPointerDisplayMode_mC8C30FA39AC2E93AE806CDAD34C8206EF05D9B65(L_0, L_1, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.SenseXR::SetPointerColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseXR_SetPointerColor_m6E389FE18EBBBC3D3B66263D544D51802C92DFC5 (SenseXR_t7B7241CE97061BA7BC71E3D9D061CD88F22ED7CA* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* L_0 = ((SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_StaticFields*)il2cpp_codegen_static_fields_for(SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_il2cpp_TypeInfo_var))->____instance_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___color0;
		NullCheck(L_0);
		SenseManager_SetPointerColor_mBC05846C2BB0F5AC887D290DE49BB646F2F31063(L_0, L_1, NULL);
		return;
	}
}
// UnityEngine.RaycastHit TechXR.Core.Sense.SenseXR::GetRaycastHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 SenseXR_GetRaycastHit_m81B062842DF4E2004FEBFFE485EA7B02A072C81F (SenseXR_t7B7241CE97061BA7BC71E3D9D061CD88F22ED7CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* L_0 = ((SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_StaticFields*)il2cpp_codegen_static_fields_for(SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_il2cpp_TypeInfo_var))->____instance_4;
		NullCheck(L_0);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_1;
		L_1 = SenseManager_GetRaycastHit_mD613EC0F10ACE166FE4399292733050E04DA2C8F(L_0, NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_2 = V_0;
		return L_2;
	}
}
// System.Void TechXR.Core.Sense.SenseXR::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseXR__ctor_m4EA648309072C7950C8C3F3A5B7CC7E60FD5BCDD (SenseXR_t7B7241CE97061BA7BC71E3D9D061CD88F22ED7CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1__ctor_mCE765B4AF0CC9BC88BB15A8BED75932921D1BA64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_t5AA3D1D13FDB0CDFED5F4B19749050F99CE96E46_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_t5AA3D1D13FDB0CDFED5F4B19749050F99CE96E46_il2cpp_TypeInfo_var);
		Singleton_1__ctor_mCE765B4AF0CC9BC88BB15A8BED75932921D1BA64(__this, Singleton_1__ctor_mCE765B4AF0CC9BC88BB15A8BED75932921D1BA64_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TechXR.Core.Sense.JoystickController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickController_Start_m62971E4C5D4617BABE3BBFAFA1844EE114A31BF2 (JoystickController_t76376805DE06ACDB2581FD9C07C0F565F9B7DFA9* __this, const RuntimeMethod* method) 
{
	{
		__this->___m_DeltaTime_7 = (0.150000006f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___m_MoveAmount_8 = L_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		float L_2 = __this->___MoveMultiplier_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_1, L_2, NULL);
		__this->___m_MoveVelocity_9 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___m_MoveDirAmount_10 = L_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), (-30.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline(L_5, NULL);
		__this->___m_RotationMinX_11 = L_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_7), (30.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline(L_7, NULL);
		__this->___m_RotationMaxX_12 = L_8;
		return;
	}
}
// System.Void TechXR.Core.Sense.JoystickController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickController_Update_m8D8ECFCAC703CC679D2C5CC7CC0C330892626FDF (JoystickController_t76376805DE06ACDB2581FD9C07C0F565F9B7DFA9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral236F8A41CA4AE049DC8AB58ED5B925DC996681BA);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float G_B3_0 = 0.0f;
	JoystickController_t76376805DE06ACDB2581FD9C07C0F565F9B7DFA9* G_B5_0 = NULL;
	JoystickController_t76376805DE06ACDB2581FD9C07C0F565F9B7DFA9* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	JoystickController_t76376805DE06ACDB2581FD9C07C0F565F9B7DFA9* G_B6_1 = NULL;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_Player_15;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_1, NULL);
		VariableJoystick_t0D4819C1014E858778B0C435BF7D81EB0487B68E* L_3 = __this->___m_MoveJoystick_13;
		NullCheck(L_3);
		float L_4;
		L_4 = Joystick_get_Vertical_mA966D5867E87519AAEFABF299EDF6C02AFD52250(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_2, L_4, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___m_Player_15;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_7, NULL);
		VariableJoystick_t0D4819C1014E858778B0C435BF7D81EB0487B68E* L_9 = __this->___m_MoveJoystick_13;
		NullCheck(L_9);
		float L_10;
		L_10 = Joystick_get_Horizontal_m2F7CBF32653F738D9C24E7AD6DD20592F298C3D0(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_8, L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_5, L_11, NULL);
		V_0 = L_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = __this->___m_MoveAmount_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_14, (15.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_16 = (&__this->___m_MoveVelocity_9);
		float L_17 = __this->___m_DeltaTime_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_SmoothDamp_m017722BD53BAE32893C2A1B674746E340D4A5B89_inline(L_13, L_15, L_16, L_17, NULL);
		__this->___m_MoveAmount_8 = L_18;
		float L_19 = __this->___RotationXMax_6;
		VariableJoystick_t0D4819C1014E858778B0C435BF7D81EB0487B68E* L_20 = __this->___m_DirJoystick_14;
		NullCheck(L_20);
		float L_21;
		L_21 = Joystick_get_Vertical_mA966D5867E87519AAEFABF299EDF6C02AFD52250(L_20, NULL);
		V_1 = ((float)il2cpp_codegen_multiply(L_19, ((-L_21))));
		VariableJoystick_t0D4819C1014E858778B0C435BF7D81EB0487B68E* L_22 = __this->___m_DirJoystick_14;
		NullCheck(L_22);
		float L_23;
		L_23 = Joystick_get_Horizontal_m2F7CBF32653F738D9C24E7AD6DD20592F298C3D0(L_22, NULL);
		float L_24;
		L_24 = fabsf(L_23);
		if ((((float)L_24) > ((float)(0.200000003f))))
		{
			goto IL_00a1;
		}
	}
	{
		G_B3_0 = (0.0f);
		goto IL_00b2;
	}

IL_00a1:
	{
		VariableJoystick_t0D4819C1014E858778B0C435BF7D81EB0487B68E* L_25 = __this->___m_DirJoystick_14;
		NullCheck(L_25);
		float L_26;
		L_26 = Joystick_get_Horizontal_m2F7CBF32653F738D9C24E7AD6DD20592F298C3D0(L_25, NULL);
		G_B3_0 = ((float)il2cpp_codegen_multiply((1.20000005f), L_26));
	}

IL_00b2:
	{
		V_2 = G_B3_0;
		V_3 = (0.0f);
		VariableJoystick_t0D4819C1014E858778B0C435BF7D81EB0487B68E* L_27 = __this->___m_DirJoystick_14;
		NullCheck(L_27);
		float L_28;
		L_28 = Joystick_get_Horizontal_m2F7CBF32653F738D9C24E7AD6DD20592F298C3D0(L_27, NULL);
		float L_29;
		L_29 = fabsf(L_28);
		VariableJoystick_t0D4819C1014E858778B0C435BF7D81EB0487B68E* L_30 = __this->___m_DirJoystick_14;
		NullCheck(L_30);
		float L_31;
		L_31 = Joystick_get_Vertical_mA966D5867E87519AAEFABF299EDF6C02AFD52250(L_30, NULL);
		float L_32;
		L_32 = fabsf(L_31);
		float L_33;
		L_33 = atan2f(L_29, L_32);
		V_4 = ((float)(((float)il2cpp_codegen_multiply(L_33, (180.0f)))/(3.14159274f)));
		String_t* L_34;
		L_34 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_4), NULL);
		String_t* L_35;
		L_35 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral236F8A41CA4AE049DC8AB58ED5B925DC996681BA, L_34, NULL);
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(L_35, NULL);
		VariableJoystick_t0D4819C1014E858778B0C435BF7D81EB0487B68E* L_36 = __this->___m_DirJoystick_14;
		NullCheck(L_36);
		float L_37;
		L_37 = Joystick_get_Horizontal_m2F7CBF32653F738D9C24E7AD6DD20592F298C3D0(L_36, NULL);
		float L_38;
		L_38 = fabsf(L_37);
		VariableJoystick_t0D4819C1014E858778B0C435BF7D81EB0487B68E* L_39 = __this->___m_DirJoystick_14;
		NullCheck(L_39);
		float L_40;
		L_40 = Joystick_get_Vertical_mA966D5867E87519AAEFABF299EDF6C02AFD52250(L_39, NULL);
		float L_41;
		L_41 = fabsf(L_40);
		float L_42;
		L_42 = atan2f(L_38, L_41);
		G_B4_0 = __this;
		if ((((float)((float)(((float)il2cpp_codegen_multiply(L_42, (180.0f)))/(3.14159274f)))) <= ((float)(30.0f))))
		{
			G_B5_0 = __this;
			goto IL_013f;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_0140;
	}

IL_013f:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_0140:
	{
		NullCheck(G_B6_1);
		G_B6_1->___m_VerticalFlag_16 = (bool)G_B6_0;
		float L_43 = V_1;
		float L_44 = V_2;
		float L_45 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		memset((&L_46), 0, sizeof(L_46));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_46), L_43, L_44, L_45, /*hidden argument*/NULL);
		__this->___m_MoveDirAmount_10 = L_46;
		return;
	}
}
// System.Void TechXR.Core.Sense.JoystickController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickController_FixedUpdate_m8ED14066DA74104266A3D7D997BE49E2CA1EAC8B (JoystickController_t76376805DE06ACDB2581FD9C07C0F565F9B7DFA9* __this, const RuntimeMethod* method) 
{
	{
		JoystickController_Move_mF80A09FD7DBA2B3433F409180FCB7FF08FB14FB4(__this, NULL);
		JoystickController_Rotate_m5CC108390B536645ECA9119971DE07ABF9E78C55(__this, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.JoystickController::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickController_Move_mF80A09FD7DBA2B3433F409180FCB7FF08FB14FB4 (JoystickController_t76376805DE06ACDB2581FD9C07C0F565F9B7DFA9* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_Player_15;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		V_0 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___m_MoveAmount_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_3, L_4, NULL);
		V_1 = L_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___m_Player_15;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_1;
		float L_10;
		L_10 = Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_8, L_9, L_10, NULL);
		NullCheck(L_7);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_7, L_11, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.JoystickController::Rotate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickController_Rotate_m5CC108390B536645ECA9119971DE07ABF9E78C55 (JoystickController_t76376805DE06ACDB2581FD9C07C0F565F9B7DFA9* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t G_B3_0 = 0;
	{
		VariableJoystick_t0D4819C1014E858778B0C435BF7D81EB0487B68E* L_0 = __this->___m_DirJoystick_14;
		NullCheck(L_0);
		float L_1;
		L_1 = Joystick_get_Horizontal_m2F7CBF32653F738D9C24E7AD6DD20592F298C3D0(L_0, NULL);
		if ((!(((float)L_1) == ((float)(0.0f)))))
		{
			goto IL_0027;
		}
	}
	{
		VariableJoystick_t0D4819C1014E858778B0C435BF7D81EB0487B68E* L_2 = __this->___m_DirJoystick_14;
		NullCheck(L_2);
		float L_3;
		L_3 = Joystick_get_Vertical_mA966D5867E87519AAEFABF299EDF6C02AFD52250(L_2, NULL);
		G_B3_0 = ((((float)L_3) == ((float)(0.0f)))? 1 : 0);
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_008c;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___m_Player_15;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		NullCheck(L_6);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_6, NULL);
		V_1 = L_7;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = V_1;
		V_2 = L_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_2), NULL);
		V_3 = L_9;
		float L_10 = (0.0f);
		V_4 = L_10;
		(&V_3)->___z_4 = L_10;
		float L_11 = V_4;
		(&V_3)->___x_2 = L_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_3;
		Quaternion_set_eulerAngles_m441C342F21FEFCED9BABED01FA516C97EA424D6E_inline((&V_2), L_12, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___m_Player_15;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = V_2;
		float L_17;
		L_17 = Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Quaternion_Slerp_m5FDA8C178E7EB209B43845F73263AFE9C02F3949(L_15, L_16, L_17, NULL);
		NullCheck(L_14);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_14, L_18, NULL);
		goto IL_0119;
	}

IL_008c:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_19 = (&__this->___m_MoveDirAmount_10);
		float L_20 = L_19->___x_2;
		V_5 = L_20;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___m_Player_15;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_22, NULL);
		float L_24 = L_23.___y_3;
		V_6 = L_24;
		float L_25 = V_5;
		float L_26 = V_6;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_7), L_25, L_26, (0.0f), NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = __this->___m_Player_15;
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_27, NULL);
		NullCheck(L_28);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29;
		L_29 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_28, NULL);
		V_8 = L_29;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = __this->___m_Player_15;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_30, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_7;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34;
		L_34 = Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline(L_33, NULL);
		float L_35;
		L_35 = Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36;
		L_36 = Quaternion_Slerp_m5FDA8C178E7EB209B43845F73263AFE9C02F3949(L_32, L_34, L_35, NULL);
		NullCheck(L_31);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_31, L_36, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = __this->___m_Player_15;
		NullCheck(L_37);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_37, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_40 = (&__this->___m_MoveDirAmount_10);
		float L_41 = L_40->___y_3;
		NullCheck(L_38);
		Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F(L_38, L_39, L_41, NULL);
	}

IL_0119:
	{
		return;
	}
}
// System.Void TechXR.Core.Sense.JoystickController::SetPlayerReference(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickController_SetPlayerReference_mD55A8AC677244323C634F29223D7CA586DC63C44 (JoystickController_t76376805DE06ACDB2581FD9C07C0F565F9B7DFA9* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player0, const RuntimeMethod* method) 
{
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___player0;
		__this->___m_Player_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Player_15), (void*)L_0);
		return;
	}
}
// System.Void TechXR.Core.Sense.JoystickController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickController__ctor_m57FFE76323DD981839C7777B343BBA017FFA7617 (JoystickController_t76376805DE06ACDB2581FD9C07C0F565F9B7DFA9* __this, const RuntimeMethod* method) 
{
	{
		__this->___MoveMultiplier_4 = (250.0f);
		__this->___RotationMultiplier_5 = (0.00999999978f);
		__this->___RotationXMax_6 = (30.0f);
		__this->___m_VerticalFlag_16 = (bool)0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// TechXR.Core.Sense.Defs/PointerDisplayMode TechXR.Core.Sense.SenseManager::get_CurrentPointerMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SenseManager_get_CurrentPointerMode_m31A0BF74F3B55255B3E99FF5449313DD77F8B574 (SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCurrentPointerModeU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void TechXR.Core.Sense.SenseManager::set_CurrentPointerMode(TechXR.Core.Sense.Defs/PointerDisplayMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseManager_set_CurrentPointerMode_m9D137DF3C1C357F152F48AD7835248AF7E959010 (SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CCurrentPointerModeU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Void TechXR.Core.Sense.SenseManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseManager_Awake_m60ACBAA3C74A225618B3C6CCCD1FB4E25E1CD857 (SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mCABB09FC74E78681C1B182FCF5522649FBFD27CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SenseManager_SetJoystickMode_m551B60951D6844DB9C3493991EBF9797BFA163C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SenseManager_SetMouseKeyboardMode_m13008D9832C3E32BA995814A4C50986F9773CCE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SenseManager_SetRaycastMode_m0AC262C8299E1FCB4118085741EC290C0C9CDF12_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Dictionary_2_t80FEA5B79D158901F7724BC0BBF5836A8104227F* L_0 = __this->___m_InputMap_13;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)SenseManager_SetJoystickMode_m551B60951D6844DB9C3493991EBF9797BFA163C8_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		Dictionary_2_Add_mCABB09FC74E78681C1B182FCF5522649FBFD27CE(L_0, 1, L_1, Dictionary_2_Add_mCABB09FC74E78681C1B182FCF5522649FBFD27CE_RuntimeMethod_var);
		Dictionary_2_t80FEA5B79D158901F7724BC0BBF5836A8104227F* L_2 = __this->___m_InputMap_13;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, __this, (intptr_t)((void*)SenseManager_SetRaycastMode_m0AC262C8299E1FCB4118085741EC290C0C9CDF12_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		Dictionary_2_Add_mCABB09FC74E78681C1B182FCF5522649FBFD27CE(L_2, 0, L_3, Dictionary_2_Add_mCABB09FC74E78681C1B182FCF5522649FBFD27CE_RuntimeMethod_var);
		Dictionary_2_t80FEA5B79D158901F7724BC0BBF5836A8104227F* L_4 = __this->___m_InputMap_13;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_5, __this, (intptr_t)((void*)SenseManager_SetMouseKeyboardMode_m13008D9832C3E32BA995814A4C50986F9773CCE8_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		Dictionary_2_Add_mCABB09FC74E78681C1B182FCF5522649FBFD27CE(L_4, 2, L_5, Dictionary_2_Add_mCABB09FC74E78681C1B182FCF5522649FBFD27CE_RuntimeMethod_var);
		SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* L_6 = ((SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_StaticFields*)il2cpp_codegen_static_fields_for(SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_il2cpp_TypeInfo_var))->____instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_7;
		bool L_8 = V_0;
		if (!L_8)
		{
			goto IL_0068;
		}
	}
	{
		SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* L_9 = ((SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_StaticFields*)il2cpp_codegen_static_fields_for(SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_il2cpp_TypeInfo_var))->____instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_9, NULL);
	}

IL_0068:
	{
		((SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_StaticFields*)il2cpp_codegen_static_fields_for(SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_il2cpp_TypeInfo_var))->____instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_StaticFields*)il2cpp_codegen_static_fields_for(SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_il2cpp_TypeInfo_var))->____instance_4), (void*)__this);
		SenseManager_set_CurrentPointerMode_m9D137DF3C1C357F152F48AD7835248AF7E959010_inline(__this, 0, NULL);
		SenseManager_PopulateClassObjects_mD0F9CAC6D3F7B475307351DECA4F482E75A426E4(__this, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.SenseManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseManager_Start_m746C4450CD6A5B5067B6A90093245C1C302361D9 (SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mC12B82AEEE32C156B0CD676704C36068AC826AFC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t80FEA5B79D158901F7724BC0BBF5836A8104227F* L_0 = __this->___m_InputMap_13;
		int32_t L_1 = __this->___m_InputType_12;
		NullCheck(L_0);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2;
		L_2 = Dictionary_2_get_Item_mC12B82AEEE32C156B0CD676704C36068AC826AFC(L_0, L_1, Dictionary_2_get_Item_mC12B82AEEE32C156B0CD676704C36068AC826AFC_RuntimeMethod_var);
		NullCheck(L_2);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_2, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.SenseManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseManager_Update_mE7D8D44FE2C5DF2566EDFD5E0FBC521E0F2BB791 (SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void TechXR.Core.Sense.SenseManager::SetRaycastMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseManager_SetRaycastMode_m0AC262C8299E1FCB4118085741EC290C0C9CDF12 (SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		LaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6* L_0 = __this->___m_LaserPointerInput_8;
		NullCheck(L_0);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)1, NULL);
		StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530* L_1 = __this->___m_StandaloneInput_9;
		NullCheck(L_1);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)0, NULL);
		SenseController_tABCD7B30A1AA3F0BAB5AC6050F2C699A566ADA48* L_2 = __this->___m_SenseController_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_2, NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		SenseController_tABCD7B30A1AA3F0BAB5AC6050F2C699A566ADA48* L_5 = __this->___m_SenseController_6;
		NullCheck(L_5);
		SenseController_ToggleDisplay_m70CE6EB54546215B23652E2D8B2EE5217DB1EF6A(L_5, (bool)1, NULL);
	}

IL_0037:
	{
		TeleportManager_tAD810B203280055ABDE0A44548E696080148F3BE* L_6 = __this->___m_TeleportManager_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_6, NULL);
		V_1 = L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0053;
		}
	}
	{
		TeleportManager_tAD810B203280055ABDE0A44548E696080148F3BE* L_9 = __this->___m_TeleportManager_10;
		NullCheck(L_9);
		TeleportManager_ToggleDisplay_mE4980AD52B920D1576D8CDB3C3F93CF68BDBFF3E(L_9, (bool)1, NULL);
	}

IL_0053:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___Joystick_11;
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.SenseManager::SetJoystickMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseManager_SetJoystickMode_m551B60951D6844DB9C3493991EBF9797BFA163C8 (SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		LaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6* L_0 = __this->___m_LaserPointerInput_8;
		NullCheck(L_0);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)0, NULL);
		StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530* L_1 = __this->___m_StandaloneInput_9;
		NullCheck(L_1);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)1, NULL);
		SenseController_tABCD7B30A1AA3F0BAB5AC6050F2C699A566ADA48* L_2 = __this->___m_SenseController_6;
		NullCheck(L_2);
		SenseController_ToggleDisplay_m70CE6EB54546215B23652E2D8B2EE5217DB1EF6A(L_2, (bool)0, NULL);
		TeleportManager_tAD810B203280055ABDE0A44548E696080148F3BE* L_3 = __this->___m_TeleportManager_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_3, NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		TeleportManager_tAD810B203280055ABDE0A44548E696080148F3BE* L_6 = __this->___m_TeleportManager_10;
		NullCheck(L_6);
		TeleportManager_ToggleDisplay_mE4980AD52B920D1576D8CDB3C3F93CF68BDBFF3E(L_6, (bool)0, NULL);
	}

IL_0044:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___Joystick_11;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.SenseManager::SetMouseKeyboardMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseManager_SetMouseKeyboardMode_m13008D9832C3E32BA995814A4C50986F9773CCE8 (SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		LaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6* L_0 = __this->___m_LaserPointerInput_8;
		NullCheck(L_0);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)1, NULL);
		StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530* L_1 = __this->___m_StandaloneInput_9;
		NullCheck(L_1);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)0, NULL);
		SenseController_tABCD7B30A1AA3F0BAB5AC6050F2C699A566ADA48* L_2 = __this->___m_SenseController_6;
		NullCheck(L_2);
		SenseController_ToggleDisplay_m70CE6EB54546215B23652E2D8B2EE5217DB1EF6A(L_2, (bool)1, NULL);
		TeleportManager_tAD810B203280055ABDE0A44548E696080148F3BE* L_3 = __this->___m_TeleportManager_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_3, NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		TeleportManager_tAD810B203280055ABDE0A44548E696080148F3BE* L_6 = __this->___m_TeleportManager_10;
		NullCheck(L_6);
		TeleportManager_ToggleDisplay_mE4980AD52B920D1576D8CDB3C3F93CF68BDBFF3E(L_6, (bool)1, NULL);
	}

IL_0044:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___Joystick_11;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.SenseManager::TogglePointerDisplay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseManager_TogglePointerDisplay_m47909C5C0EC6AAB4666124F5BA4C2F16EF7C832C (SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* __this, bool ___flag0, const RuntimeMethod* method) 
{
	{
		SenseController_tABCD7B30A1AA3F0BAB5AC6050F2C699A566ADA48* L_0 = __this->___m_SenseController_6;
		bool L_1 = ___flag0;
		NullCheck(L_0);
		SenseController_ToggleDisplay_m70CE6EB54546215B23652E2D8B2EE5217DB1EF6A(L_0, L_1, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.SenseManager::ToggleControllerBodyDisplay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseManager_ToggleControllerBodyDisplay_mF7A636CEC72A53440125EF76D4A619AA941F8F0E (SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* __this, bool ___flag0, const RuntimeMethod* method) 
{
	{
		SenseController_tABCD7B30A1AA3F0BAB5AC6050F2C699A566ADA48* L_0 = __this->___m_SenseController_6;
		bool L_1 = ___flag0;
		NullCheck(L_0);
		SenseController_ToggleControllerBodyDisplay_mD9A609C3A122A6C5C4990F75DABB10D0C307C39B(L_0, L_1, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.SenseManager::SetPointerDisplayMode(TechXR.Core.Sense.Defs/PointerDisplayMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseManager_SetPointerDisplayMode_mC8C30FA39AC2E93AE806CDAD34C8206EF05D9B65 (SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* __this, int32_t ___mode0, const RuntimeMethod* method) 
{
	{
		LaserPointer_t16D0F974C5CCC33E600C322FFB605D6B7CB2B5A3* L_0 = __this->___m_LaserPointer_7;
		int32_t L_1 = ___mode0;
		NullCheck(L_0);
		VirtualActionInvoker1< int32_t >::Invoke(10 /* System.Void TechXR.Core.Sense.IUILaserPointer::SetPointerDisplayMode(TechXR.Core.Sense.Defs/PointerDisplayMode) */, L_0, L_1);
		return;
	}
}
// System.Void TechXR.Core.Sense.SenseManager::SetPointerColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseManager_SetPointerColor_mBC05846C2BB0F5AC887D290DE49BB646F2F31063 (SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, const RuntimeMethod* method) 
{
	{
		LaserPointer_t16D0F974C5CCC33E600C322FFB605D6B7CB2B5A3* L_0 = __this->___m_LaserPointer_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___color0;
		NullCheck(L_0);
		IUILaserPointer_SetColor_m19B632859C1662962BCEA9D385F616B3826E92B9(L_0, L_1, NULL);
		return;
	}
}
// UnityEngine.GameObject TechXR.Core.Sense.SenseManager::GetCurrentGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* SenseManager_GetCurrentGameObject_mFAFCA142595E2BBC9DDDE210CE8D9977B4A10930 (SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* __this, const RuntimeMethod* method) 
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		LaserPointer_t16D0F974C5CCC33E600C322FFB605D6B7CB2B5A3* L_0 = __this->___m_LaserPointer_7;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = LaserPointer_GetCurrentGameObject_mA3CC872E0F82C7AA2F342FC5CB1FC7E284A00064(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.RaycastHit TechXR.Core.Sense.SenseManager::GetRaycastHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 SenseManager_GetRaycastHit_mD613EC0F10ACE166FE4399292733050E04DA2C8F (SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* __this, const RuntimeMethod* method) 
{
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		LaserPointer_t16D0F974C5CCC33E600C322FFB605D6B7CB2B5A3* L_0 = __this->___m_LaserPointer_7;
		NullCheck(L_0);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_1;
		L_1 = LaserPointer_GetRaycastHit_mEDC023536BAF3D5A4E783ED374DB1E85C6ECBABE(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.GameObject TechXR.Core.Sense.SenseManager::GetController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* SenseManager_GetController_m72CEFCF65CC609D3CB4900F4F34C4BA7FEDFF0F4 (SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* __this, const RuntimeMethod* method) 
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		LaserPointer_t16D0F974C5CCC33E600C322FFB605D6B7CB2B5A3* L_0 = __this->___m_LaserPointer_7;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_0;
		return L_2;
	}
}
// System.Void TechXR.Core.Sense.SenseManager::ToggleTeleportMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseManager_ToggleTeleportMode_mD32D0FE0FA445A88B8D3404235753A2D3F6C5E24 (SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* __this, bool ___flag0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		TeleportManager_tAD810B203280055ABDE0A44548E696080148F3BE* L_0 = __this->___m_TeleportManager_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		TeleportManager_tAD810B203280055ABDE0A44548E696080148F3BE* L_3 = __this->___m_TeleportManager_10;
		bool L_4 = ___flag0;
		NullCheck(L_3);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_3, L_4, NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Void TechXR.Core.Sense.SenseManager::SetTeleportInput(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseManager_SetTeleportInput_mB9DD3040B705A79A9ED8528C27E41C4CE0226A52 (SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* __this, String_t* ____buttonName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		TeleportManager_tAD810B203280055ABDE0A44548E696080148F3BE* L_0 = __this->___m_TeleportManager_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		TeleportManager_tAD810B203280055ABDE0A44548E696080148F3BE* L_3 = __this->___m_TeleportManager_10;
		String_t* L_4 = ____buttonName0;
		NullCheck(L_3);
		TeleportManager_SetTeleportInput_m5A496389427F417B38E297D5A7153C94C047F8C9(L_3, L_4, NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Void TechXR.Core.Sense.SenseManager::PopulateClassObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseManager_PopulateClassObjects_mD0F9CAC6D3F7B475307351DECA4F482E75A426E4 (SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisLaserPointer_t16D0F974C5CCC33E600C322FFB605D6B7CB2B5A3_m728C5B593843EC64654A5EE68C10EF8F97101E21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisJoystickController_t76376805DE06ACDB2581FD9C07C0F565F9B7DFA9_mF39397CA0FD0030F45CA283BBB5566C4AB190B03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6_m82A4D38AF7C1CE0D22401D463CCC415ED0D2EB21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSenseController_tABCD7B30A1AA3F0BAB5AC6050F2C699A566ADA48_m9BF2F0DE6EA16F43888DEC311274352CA63E622C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisStandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530_m079528EF78E6312315FFB3F01362D4F2E6DA5C2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTeleportManager_tAD810B203280055ABDE0A44548E696080148F3BE_m5AE96867ECFDF4F25E8B6C7829CCF1E616C815E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C72D90D040B0C8E89DE105385D97883E9FFB47);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6FADF85B6969F5020FFEFFB687F63C26D7D01BA2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFB1D0B3628079F27B48270F1F9121BFC82DD278);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEBA8098E430AC39B8A1B0C94FF44C46F715D248);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	JoystickController_t76376805DE06ACDB2581FD9C07C0F565F9B7DFA9* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B9_0 = 0;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral47C72D90D040B0C8E89DE105385D97883E9FFB47, NULL);
		V_0 = L_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralEEBA8098E430AC39B8A1B0C94FF44C46F715D248, NULL);
		V_1 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralCFB1D0B3628079F27B48270F1F9121BFC82DD278, NULL);
		V_2 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral6FADF85B6969F5020FFEFFB687F63C26D7D01BA2, NULL);
		V_3 = L_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___Joystick_11;
		NullCheck(L_4);
		JoystickController_t76376805DE06ACDB2581FD9C07C0F565F9B7DFA9* L_5;
		L_5 = GameObject_GetComponent_TisJoystickController_t76376805DE06ACDB2581FD9C07C0F565F9B7DFA9_mF39397CA0FD0030F45CA283BBB5566C4AB190B03(L_4, GameObject_GetComponent_TisJoystickController_t76376805DE06ACDB2581FD9C07C0F565F9B7DFA9_mF39397CA0FD0030F45CA283BBB5566C4AB190B03_RuntimeMethod_var);
		V_4 = L_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_6, NULL);
		V_5 = L_7;
		bool L_8 = V_5;
		if (!L_8)
		{
			goto IL_0060;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_0;
		NullCheck(L_9);
		LaserPointer_t16D0F974C5CCC33E600C322FFB605D6B7CB2B5A3* L_10;
		L_10 = GameObject_GetComponentInChildren_TisLaserPointer_t16D0F974C5CCC33E600C322FFB605D6B7CB2B5A3_m728C5B593843EC64654A5EE68C10EF8F97101E21(L_9, GameObject_GetComponentInChildren_TisLaserPointer_t16D0F974C5CCC33E600C322FFB605D6B7CB2B5A3_m728C5B593843EC64654A5EE68C10EF8F97101E21_RuntimeMethod_var);
		__this->___m_LaserPointer_7 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LaserPointer_7), (void*)L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_0;
		NullCheck(L_11);
		SenseController_tABCD7B30A1AA3F0BAB5AC6050F2C699A566ADA48* L_12;
		L_12 = GameObject_GetComponent_TisSenseController_tABCD7B30A1AA3F0BAB5AC6050F2C699A566ADA48_m9BF2F0DE6EA16F43888DEC311274352CA63E622C(L_11, GameObject_GetComponent_TisSenseController_tABCD7B30A1AA3F0BAB5AC6050F2C699A566ADA48_m9BF2F0DE6EA16F43888DEC311274352CA63E622C_RuntimeMethod_var);
		__this->___m_SenseController_6 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SenseController_6), (void*)L_12);
	}

IL_0060:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_13, NULL);
		V_6 = L_14;
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_0086;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_1;
		NullCheck(L_16);
		LaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6* L_17;
		L_17 = GameObject_GetComponent_TisLaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6_m82A4D38AF7C1CE0D22401D463CCC415ED0D2EB21(L_16, GameObject_GetComponent_TisLaserPointerInputModule_tCE929D5DFEA998F2492A0861770324B1BA92B6B6_m82A4D38AF7C1CE0D22401D463CCC415ED0D2EB21_RuntimeMethod_var);
		__this->___m_LaserPointerInput_8 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LaserPointerInput_8), (void*)L_17);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = V_1;
		NullCheck(L_18);
		StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530* L_19;
		L_19 = GameObject_GetComponent_TisStandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530_m079528EF78E6312315FFB3F01362D4F2E6DA5C2D(L_18, GameObject_GetComponent_TisStandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530_m079528EF78E6312315FFB3F01362D4F2E6DA5C2D_RuntimeMethod_var);
		__this->___m_StandaloneInput_9 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_StandaloneInput_9), (void*)L_19);
	}

IL_0086:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_20, NULL);
		V_7 = L_21;
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00a0;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = V_2;
		NullCheck(L_23);
		TeleportManager_tAD810B203280055ABDE0A44548E696080148F3BE* L_24;
		L_24 = GameObject_GetComponent_TisTeleportManager_tAD810B203280055ABDE0A44548E696080148F3BE_m5AE96867ECFDF4F25E8B6C7829CCF1E616C815E3(L_23, GameObject_GetComponent_TisTeleportManager_tAD810B203280055ABDE0A44548E696080148F3BE_m5AE96867ECFDF4F25E8B6C7829CCF1E616C815E3_RuntimeMethod_var);
		__this->___m_TeleportManager_10 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TeleportManager_10), (void*)L_24);
	}

IL_00a0:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_25, NULL);
		if (!L_26)
		{
			goto IL_00b1;
		}
	}
	{
		JoystickController_t76376805DE06ACDB2581FD9C07C0F565F9B7DFA9* L_27 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_27, NULL);
		G_B9_0 = ((int32_t)(L_28));
		goto IL_00b2;
	}

IL_00b1:
	{
		G_B9_0 = 0;
	}

IL_00b2:
	{
		V_8 = (bool)G_B9_0;
		bool L_29 = V_8;
		if (!L_29)
		{
			goto IL_00c3;
		}
	}
	{
		JoystickController_t76376805DE06ACDB2581FD9C07C0F565F9B7DFA9* L_30 = V_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = V_3;
		NullCheck(L_30);
		JoystickController_SetPlayerReference_mD55A8AC677244323C634F29223D7CA586DC63C44(L_30, L_31, NULL);
	}

IL_00c3:
	{
		return;
	}
}
// System.Void TechXR.Core.Sense.SenseManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseManager__ctor_m0484E9A563B20CCB61F52D754C1EF93B0D143026 (SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m8686211E94EA1F61AC9686A1D20B6E6ACBFA4D72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t80FEA5B79D158901F7724BC0BBF5836A8104227F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t80FEA5B79D158901F7724BC0BBF5836A8104227F* L_0 = (Dictionary_2_t80FEA5B79D158901F7724BC0BBF5836A8104227F*)il2cpp_codegen_object_new(Dictionary_2_t80FEA5B79D158901F7724BC0BBF5836A8104227F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m8686211E94EA1F61AC9686A1D20B6E6ACBFA4D72(L_0, Dictionary_2__ctor_m8686211E94EA1F61AC9686A1D20B6E6ACBFA4D72_RuntimeMethod_var);
		__this->___m_InputMap_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InputMap_13), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TechXR.Core.Sense.SenseXRConnectivityStatus::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseXRConnectivityStatus_Start_mA0FDDB18E6AA2646497256E236781BB0C2AA5786 (SenseXRConnectivityStatus_t88F4187646A1231099F0A52CFA4CA2543D422558* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47C72D90D040B0C8E89DE105385D97883E9FFB47);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8269B9C13EB5E55ABF26BA774F70F07D17325944);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9CBFD3CE72AA902455FD40B4E5E14A28D06707B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF392EF2EFA59020D3308DDD255994299DC5BEF65);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	bool V_2 = false;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindWithTag_m8E5D34F652B0A6ECA1A90688726C22E272236C0F(_stringLiteral47C72D90D040B0C8E89DE105385D97883E9FFB47, NULL);
		__this->___XRController_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___XRController_4), (void*)L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___XRController_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_006c;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___XRController_4;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_5, _stringLiteral8269B9C13EB5E55ABF26BA774F70F07D17325944, NULL);
		V_1 = L_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_7, NULL);
		V_2 = L_8;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_005e;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = V_1;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		__this->___DisconnectedInfo_5 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DisconnectedInfo_5), (void*)L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___DisconnectedInfo_5;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
		goto IL_0069;
	}

IL_005e:
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteralB9CBFD3CE72AA902455FD40B4E5E14A28D06707B, NULL);
	}

IL_0069:
	{
		goto IL_0077;
	}

IL_006c:
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteralF392EF2EFA59020D3308DDD255994299DC5BEF65, NULL);
	}

IL_0077:
	{
		return;
	}
}
// System.Void TechXR.Core.Sense.SenseXRConnectivityStatus::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseXRConnectivityStatus_Update_m080002C89438E091E792A8E86CEFFFBA9A0CD40D (SenseXRConnectivityStatus_t88F4187646A1231099F0A52CFA4CA2543D422558* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B6_0 = 0;
	{
		bool L_0;
		L_0 = SenseXRConnectivityStatus_CheckSenseXRConnection_m35AAED459164DF74F8F0E9BF747C378CCCC3BAC1(__this, NULL);
		__this->___m_IsConnected_6 = L_0;
		bool L_1 = __this->___m_IsConnected_6;
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		bool L_3 = __this->___m_IsWarned_7;
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		SenseXRConnectivityStatus_Warn_mA9AE7A9E5DD2B33C702A4F33A900645904D2BB2C(__this, NULL);
	}

IL_002e:
	{
		bool L_5 = __this->___m_IsConnected_6;
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		bool L_6 = __this->___m_IsWarned_7;
		G_B6_0 = ((int32_t)(L_6));
		goto IL_003f;
	}

IL_003e:
	{
		G_B6_0 = 0;
	}

IL_003f:
	{
		V_2 = (bool)G_B6_0;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0068;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___DisconnectedInfo_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_8, NULL);
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0060;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___DisconnectedInfo_5;
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
	}

IL_0060:
	{
		__this->___m_IsWarned_7 = (bool)0;
	}

IL_0068:
	{
		return;
	}
}
// System.Void TechXR.Core.Sense.SenseXRConnectivityStatus::Warn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseXRConnectivityStatus_Warn_mA9AE7A9E5DD2B33C702A4F33A900645904D2BB2C (SenseXRConnectivityStatus_t88F4187646A1231099F0A52CFA4CA2543D422558* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___DisconnectedInfo_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___DisconnectedInfo_5;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
	}

IL_001d:
	{
		__this->___m_IsWarned_7 = (bool)1;
		return;
	}
}
// System.Boolean TechXR.Core.Sense.SenseXRConnectivityStatus::CheckSenseXRConnection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SenseXRConnectivityStatus_CheckSenseXRConnection_m35AAED459164DF74F8F0E9BF747C378CCCC3BAC1 (SenseXRConnectivityStatus_t88F4187646A1231099F0A52CFA4CA2543D422558* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0;
		L_0 = Input_GetJoystickNames_m398DA6DE3281D480F35E06AA92F746D4C82C9DC5(NULL);
		V_0 = L_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = V_0;
		NullCheck(L_1);
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_1)->max_length)), 1));
		goto IL_0028;
	}

IL_000f:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		String_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		bool L_6;
		L_6 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_5, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0024;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0039;
	}

IL_0024:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_0028:
	{
		int32_t L_9 = V_1;
		V_4 = (bool)((((int32_t)((((int32_t)L_9) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_4;
		if (L_10)
		{
			goto IL_000f;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_0039;
	}

IL_0039:
	{
		bool L_11 = V_3;
		return L_11;
	}
}
// System.Void TechXR.Core.Sense.SenseXRConnectivityStatus::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseXRConnectivityStatus__ctor_m038494B93748FFA4C24A1302DDF9818E45F305B7 (SenseXRConnectivityStatus_t88F4187646A1231099F0A52CFA4CA2543D422558* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean TechXR.Core.Sense.TeleportManager::get_TeleportMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TeleportManager_get_TeleportMode_mFAB8EDE2D71EBF715DF36315AC77422EE0005AFC (TeleportManager_tAD810B203280055ABDE0A44548E696080148F3BE* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CTeleportModeU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void TechXR.Core.Sense.TeleportManager::set_TeleportMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportManager_set_TeleportMode_mB75E4BFE990FAFCE7D1834AEF41846FCB9321408 (TeleportManager_tAD810B203280055ABDE0A44548E696080148F3BE* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CTeleportModeU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void TechXR.Core.Sense.TeleportManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportManager_Awake_mAC6C916C573E473CB5694B0AD5D53687A3D3D8A1 (TeleportManager_tAD810B203280055ABDE0A44548E696080148F3BE* __this, const RuntimeMethod* method) 
{
	{
		TeleportManager_set_TeleportMode_mB75E4BFE990FAFCE7D1834AEF41846FCB9321408_inline(__this, (bool)1, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.TeleportManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportManager_Start_mDC05237572BD95175B39FC13B111DF3180692587 (TeleportManager_tAD810B203280055ABDE0A44548E696080148F3BE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_get_root_m3AE09E7A2C0B2C4A649570498F25E4B4F69A1284(L_0, NULL);
		NullCheck(L_1);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_2;
		L_2 = Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040(L_1, Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var);
		__this->___m_CharacterController_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CharacterController_8), (void*)L_2);
		return;
	}
}
// System.Void TechXR.Core.Sense.TeleportManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportManager_Update_mE9C06CAA576B796B50B9936AB3B04D944B132A8E (TeleportManager_tAD810B203280055ABDE0A44548E696080148F3BE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		bool L_0 = __this->___m_DisplayFlag_7;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_00aa;
		}
	}
	{
		String_t* L_2 = __this->___m_TelportButton_6;
		bool L_3;
		L_3 = SenseInput_GetButtonDown_m9EA2DFC09426E9B72CD08D325237D4592FEAA179(L_2, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0055;
		}
	}
	{
		Teleporter_tACA9C5D8F933A0C3E1E86756B70BB18FC33DFC4A* L_5 = __this->___VRTeleporter_5;
		NullCheck(L_5);
		Teleporter_ToggleDisplay_m29F7A91A68AB1BDE9D39C2FC0D1D13D1851E0507(L_5, (bool)1, NULL);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_6 = __this->___m_CharacterController_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_6, NULL);
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0048;
		}
	}
	{
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_9 = __this->___m_CharacterController_8;
		NullCheck(L_9);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_9, (bool)0, NULL);
	}

IL_0048:
	{
		SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* L_10 = ((SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_StaticFields*)il2cpp_codegen_static_fields_for(SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_il2cpp_TypeInfo_var))->____instance_4;
		NullCheck(L_10);
		SenseManager_SetPointerDisplayMode_mC8C30FA39AC2E93AE806CDAD34C8206EF05D9B65(L_10, 1, NULL);
	}

IL_0055:
	{
		String_t* L_11 = __this->___m_TelportButton_6;
		bool L_12;
		L_12 = SenseInput_GetButtonUp_m95DF02DD234441AC047DB7A91176052C23BB38C9(L_11, NULL);
		V_3 = L_12;
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_00a9;
		}
	}
	{
		Teleporter_tACA9C5D8F933A0C3E1E86756B70BB18FC33DFC4A* L_14 = __this->___VRTeleporter_5;
		NullCheck(L_14);
		Teleporter_Teleport_m9E19D7889B3F3CFBB5A0E99CF034E2D928DB97D4(L_14, NULL);
		Teleporter_tACA9C5D8F933A0C3E1E86756B70BB18FC33DFC4A* L_15 = __this->___VRTeleporter_5;
		NullCheck(L_15);
		Teleporter_ToggleDisplay_m29F7A91A68AB1BDE9D39C2FC0D1D13D1851E0507(L_15, (bool)0, NULL);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_16 = __this->___m_CharacterController_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_16, NULL);
		V_4 = L_17;
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_009c;
		}
	}
	{
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_19 = __this->___m_CharacterController_8;
		NullCheck(L_19);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_19, (bool)1, NULL);
	}

IL_009c:
	{
		SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* L_20 = ((SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_StaticFields*)il2cpp_codegen_static_fields_for(SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_il2cpp_TypeInfo_var))->____instance_4;
		NullCheck(L_20);
		SenseManager_SetPointerDisplayMode_mC8C30FA39AC2E93AE806CDAD34C8206EF05D9B65(L_20, 0, NULL);
	}

IL_00a9:
	{
	}

IL_00aa:
	{
		return;
	}
}
// System.Void TechXR.Core.Sense.TeleportManager::ToggleDisplay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportManager_ToggleDisplay_mE4980AD52B920D1576D8CDB3C3F93CF68BDBFF3E (TeleportManager_tAD810B203280055ABDE0A44548E696080148F3BE* __this, bool ___flag0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___flag0;
		__this->___m_DisplayFlag_7 = L_0;
		return;
	}
}
// System.Void TechXR.Core.Sense.TeleportManager::SetTeleportInput(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportManager_SetTeleportInput_m5A496389427F417B38E297D5A7153C94C047F8C9 (TeleportManager_tAD810B203280055ABDE0A44548E696080148F3BE* __this, String_t* ____buttonName0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ____buttonName0;
		__this->___m_TelportButton_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TelportButton_6), (void*)L_0);
		return;
	}
}
// System.Void TechXR.Core.Sense.TeleportManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportManager__ctor_mF0087716C5747D1C546958EE1E6686656A623351 (TeleportManager_tAD810B203280055ABDE0A44548E696080148F3BE* __this, const RuntimeMethod* method) 
{
	{
		__this->___m_DisplayFlag_7 = (bool)0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TechXR.Core.Sense.Teleporter::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Teleporter_Awake_m8268150655B564FAAB95D60A8ED27924875B56D0 (Teleporter_tACA9C5D8F933A0C3E1E86756B70BB18FC33DFC4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m397CE83D3F0BA105E68C33389BAE8A9B35B592CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* V_0 = NULL;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		__this->___m_MaxVertexcount_11 = ((int32_t)100);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0;
		L_0 = Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49(__this, Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var);
		__this->___m_ArcRenderer_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ArcRenderer_12), (void*)L_0);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_1 = __this->___m_ArcRenderer_12;
		NullCheck(L_1);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_1, (bool)0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___PositionMarker_4;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_3;
		L_3 = Component_GetComponentInParent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m397CE83D3F0BA105E68C33389BAE8A9B35B592CA(__this, Component_GetComponentInParent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m397CE83D3F0BA105E68C33389BAE8A9B35B592CA_RuntimeMethod_var);
		V_0 = L_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___BodyTransform_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_4, NULL);
		if (L_5)
		{
			goto IL_004c;
		}
	}
	{
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B3_0 = ((int32_t)(L_7));
		goto IL_004d;
	}

IL_004c:
	{
		G_B3_0 = 0;
	}

IL_004d:
	{
		V_1 = (bool)G_B3_0;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_005f;
		}
	}
	{
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_9 = V_0;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		__this->___BodyTransform_6 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BodyTransform_6), (void*)L_10);
	}

IL_005f:
	{
		return;
	}
}
// System.Void TechXR.Core.Sense.Teleporter::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Teleporter_Start_m1144BE8C2B1FAD789C8C87A9A72422568CCB6468 (Teleporter_tACA9C5D8F933A0C3E1E86756B70BB18FC33DFC4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	bool V_2 = false;
	{
		V_0 = 0;
		goto IL_0037;
	}

IL_0005:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___Dot_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_0, L_1, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		V_1 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_1;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_4 = __this->___m_DotList_20;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_1;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		NullCheck(L_4);
		List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline(L_4, L_6, List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0037:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = __this->___m_MaxRayPoints_16;
		V_2 = (bool)((((int32_t)L_8) < ((int32_t)L_9))? 1 : 0);
		bool L_10 = V_2;
		if (L_10)
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// System.Void TechXR.Core.Sense.Teleporter::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Teleporter_Update_mD0C6047CD3DA7DFCF09EA18F7F7E10F3877D5D7D (Teleporter_tACA9C5D8F933A0C3E1E86756B70BB18FC33DFC4A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void TechXR.Core.Sense.Teleporter::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Teleporter_FixedUpdate_mC3ABCA64551D202A77DA6B35C3FAC76B6D9AC9B5 (Teleporter_tACA9C5D8F933A0C3E1E86756B70BB18FC33DFC4A* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = __this->___m_DisplayActive_18;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		Teleporter_UpdatePath_m75885C57C85A2446502FEE20D0A1196E15F6A1CE(__this, NULL);
	}

IL_0014:
	{
		return;
	}
}
// System.Void TechXR.Core.Sense.Teleporter::UpdatePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Teleporter_UpdatePath_m75885C57C85A2446502FEE20D0A1196E15F6A1CE (Teleporter_tACA9C5D8F933A0C3E1E86756B70BB18FC33DFC4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	bool V_9 = false;
	int32_t G_B9_0 = 0;
	{
		__this->___m_GroundDetected_17 = (bool)0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___PositionMarker_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_1 = __this->___m_VertexList_19;
		NullCheck(L_1);
		List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_inline(L_1, List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var);
		Teleporter_ToggleRayPointDisplay_m74CAB5F7803860051F5EFB77D3699706D125BED4(__this, (bool)0, NULL);
		float L_2 = __this->___Angle_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_3, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8(((-L_2)), L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_5, L_7, NULL);
		float L_9 = __this->___Strength_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_8, L_9, NULL);
		__this->___m_Velocity_13 = L_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		V_1 = L_12;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_13 = __this->___m_VertexList_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_1;
		NullCheck(L_13);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_13, L_14, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		goto IL_014a;
	}

IL_007f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = __this->___m_Velocity_13;
		float L_17 = __this->___VertexDelta_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_16, L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_15, L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Physics_get_gravity_m3A4C8594035C638686900919118B176B9F0A6F81(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline((0.5f), L_20, NULL);
		float L_22 = __this->___VertexDelta_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_21, L_22, NULL);
		float L_24 = __this->___VertexDelta_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_23, L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_19, L_25, NULL);
		V_3 = L_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = __this->___m_Velocity_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Physics_get_gravity_m3A4C8594035C638686900919118B176B9F0A6F81(NULL);
		float L_29 = __this->___VertexDelta_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_28, L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_27, L_30, NULL);
		__this->___m_Velocity_13 = L_31;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_32 = __this->___m_VertexList_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_3;
		NullCheck(L_32);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_32, L_33, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_3;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_36 = __this->___IncludeLayers_7;
		int32_t L_37;
		L_37 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_36, NULL);
		bool L_38;
		L_38 = Physics_Linecast_m6C18BCDDD4404C19008589CBD4C7BBBFFB0F1B9C(L_34, L_35, (&V_0), L_37, NULL);
		V_4 = L_38;
		bool L_39 = V_4;
		if (!L_39)
		{
			goto IL_0147;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		bool L_42;
		L_42 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_40, L_41, NULL);
		V_5 = L_42;
		bool L_43 = V_5;
		if (!L_43)
		{
			goto IL_0146;
		}
	}
	{
		__this->___m_GroundDetected_17 = (bool)1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_0), NULL);
		__this->___m_GroundPos_14 = L_44;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_0), NULL);
		__this->___m_LastNormal_15 = L_45;
		goto IL_0171;
	}

IL_0146:
	{
	}

IL_0147:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = V_3;
		V_1 = L_46;
	}

IL_014a:
	{
		bool L_47 = __this->___m_GroundDetected_17;
		if (L_47)
		{
			goto IL_0167;
		}
	}
	{
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_48 = __this->___m_VertexList_19;
		NullCheck(L_48);
		int32_t L_49;
		L_49 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_48, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		int32_t L_50 = __this->___m_MaxVertexcount_11;
		G_B9_0 = ((((int32_t)L_49) < ((int32_t)L_50))? 1 : 0);
		goto IL_0168;
	}

IL_0167:
	{
		G_B9_0 = 0;
	}

IL_0168:
	{
		V_6 = (bool)G_B9_0;
		bool L_51 = V_6;
		if (L_51)
		{
			goto IL_007f;
		}
	}

IL_0171:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52 = __this->___PositionMarker_4;
		bool L_53 = __this->___m_GroundDetected_17;
		NullCheck(L_52);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_52, L_53, NULL);
		bool L_54 = __this->___m_GroundDetected_17;
		V_7 = L_54;
		bool L_55 = V_7;
		if (!L_55)
		{
			goto IL_01e1;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56 = __this->___PositionMarker_4;
		NullCheck(L_56);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_56, (bool)1, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_57 = __this->___PositionMarker_4;
		NullCheck(L_57);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_58;
		L_58 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_57, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59 = __this->___m_GroundPos_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60 = __this->___m_LastNormal_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		L_61 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_60, (0.100000001f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		L_62 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_59, L_61, NULL);
		NullCheck(L_58);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_58, L_62, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_63 = __this->___PositionMarker_4;
		NullCheck(L_63);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_64;
		L_64 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_63, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65 = __this->___m_GroundPos_14;
		NullCheck(L_64);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_64, L_65, NULL);
	}

IL_01e1:
	{
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_66 = __this->___m_VertexList_19;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_66, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_67, 1));
		V_8 = 0;
		goto IL_0235;
	}

IL_01f4:
	{
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_68 = __this->___m_DotList_20;
		int32_t L_69 = V_8;
		NullCheck(L_68);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_70;
		L_70 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_68, L_69, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_71 = __this->___m_VertexList_19;
		int32_t L_72 = V_8;
		NullCheck(L_71);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_71, L_72, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		NullCheck(L_70);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_70, L_73, NULL);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_74 = __this->___m_DotList_20;
		int32_t L_75 = V_8;
		NullCheck(L_74);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_76;
		L_76 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_74, L_75, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		NullCheck(L_76);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_77;
		L_77 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_76, NULL);
		NullCheck(L_77);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_77, (bool)1, NULL);
		int32_t L_78 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_0235:
	{
		int32_t L_79 = V_8;
		int32_t L_80 = V_2;
		V_9 = (bool)((((int32_t)L_79) < ((int32_t)L_80))? 1 : 0);
		bool L_81 = V_9;
		if (L_81)
		{
			goto IL_01f4;
		}
	}
	{
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_82 = __this->___m_ArcRenderer_12;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_83 = __this->___m_VertexList_19;
		NullCheck(L_83);
		int32_t L_84;
		L_84 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_83, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		NullCheck(L_82);
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_82, ((int32_t)il2cpp_codegen_subtract(L_84, 2)), NULL);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_85 = __this->___m_ArcRenderer_12;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_86 = __this->___m_VertexList_19;
		NullCheck(L_86);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_87;
		L_87 = List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3(L_86, List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3_RuntimeMethod_var);
		NullCheck(L_85);
		LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02(L_85, L_87, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.Teleporter::ToggleRayPointDisplay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Teleporter_ToggleRayPointDisplay_m74CAB5F7803860051F5EFB77D3699706D125BED4 (Teleporter_tACA9C5D8F933A0C3E1E86756B70BB18FC33DFC4A* __this, bool ___flag0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D V_0;
	memset((&V_0), 0, sizeof(V_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	{
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_0 = __this->___m_DotList_20;
		NullCheck(L_0);
		Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D L_1;
		L_1 = List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5(L_0, List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0032:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5((&V_0), Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0027_1;
			}

IL_0010_1:
			{
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
				L_2 = Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_inline((&V_0), Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_RuntimeMethod_var);
				V_1 = L_2;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = V_1;
				NullCheck(L_3);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
				L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
				bool L_5 = ___flag0;
				NullCheck(L_4);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, L_5, NULL);
			}

IL_0027_1:
			{
				bool L_6;
				L_6 = Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87((&V_0), Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_0041;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0041:
	{
		return;
	}
}
// System.Void TechXR.Core.Sense.Teleporter::Teleport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Teleporter_Teleport_m9E19D7889B3F3CFBB5A0E99CF034E2D928DB97D4 (Teleporter_tACA9C5D8F933A0C3E1E86756B70BB18FC33DFC4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22BB2D0C78A4B2A0E16F9FC8DA91310F6E4E425C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = __this->___m_GroundDetected_17;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0036;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___BodyTransform_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___m_GroundPos_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___m_LastNormal_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_4, (0.100000001f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_3, L_5, NULL);
		NullCheck(L_2);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_2, L_6, NULL);
		goto IL_0043;
	}

IL_0036:
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral22BB2D0C78A4B2A0E16F9FC8DA91310F6E4E425C, NULL);
	}

IL_0043:
	{
		return;
	}
}
// System.Void TechXR.Core.Sense.Teleporter::ToggleDisplay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Teleporter_ToggleDisplay_m29F7A91A68AB1BDE9D39C2FC0D1D13D1851E0507 (Teleporter_tACA9C5D8F933A0C3E1E86756B70BB18FC33DFC4A* __this, bool ___active0, const RuntimeMethod* method) 
{
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		bool L_1 = ___active0;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, L_1, NULL);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_2 = __this->___m_ArcRenderer_12;
		bool L_3 = ___active0;
		NullCheck(L_2);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_2, L_3, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___PositionMarker_4;
		bool L_5 = ___active0;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, L_5, NULL);
		bool L_6 = ___active0;
		__this->___m_DisplayActive_18 = L_6;
		return;
	}
}
// System.Void TechXR.Core.Sense.Teleporter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Teleporter__ctor_mFC5E66F0DAF3FF326D1A4BDDA1CB9E83AB0E21E6 (Teleporter_tACA9C5D8F933A0C3E1E86756B70BB18FC33DFC4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___Angle_8 = (30.0f);
		__this->___Strength_9 = (10.0f);
		__this->___VertexDelta_10 = (0.0299999993f);
		__this->___m_GroundDetected_17 = (bool)0;
		__this->___m_DisplayActive_18 = (bool)0;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_0, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		__this->___m_VertexList_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_VertexList_19), (void*)L_0);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_1 = (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*)il2cpp_codegen_object_new(List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268(L_1, List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		__this->___m_DotList_20 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DotList_20), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TechXR.Core.Sense.SenseController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseController_Awake_m3AD195EE1FC38A0ED4C808C786B37C20E80E5310 (SenseController_tABCD7B30A1AA3F0BAB5AC6050F2C699A566ADA48* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void TechXR.Core.Sense.SenseController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseController_Start_m940CCC0D92515F16A598979158AB4F834D18E37A (SenseController_tABCD7B30A1AA3F0BAB5AC6050F2C699A566ADA48* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRButton_t0AF402B4DBB7E58A234C61C05A44BA10C64AC9E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	bool V_3 = false;
	{
		bool L_0 = __this->___JoystickMovement_8;
		SenseController_ToggleJoystickMovement_m5B35CCB028EDD7B56C0E34BB3050BBADDE264F8B(__this, L_0, NULL);
		bool L_1 = __this->___Teleport_4;
		SenseController_ToggleTeleportMovement_m2C4DAB312963BE53BFEA232801FDB8259BED17AB(__this, L_1, NULL);
		int32_t* L_2 = (&__this->___TeleportButton_5);
		Il2CppFakeBox<int32_t> L_3(XRButton_t0AF402B4DBB7E58A234C61C05A44BA10C64AC9E9_il2cpp_TypeInfo_var, L_2);
		String_t* L_4;
		L_4 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_3), NULL);
		SenseController_SetTeleportInput_mF6176CF36EC2829DF52A99C265D22493615F5192(__this, L_4, NULL);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = __this->___m_PointerOptions_7;
		V_0 = L_5;
		V_1 = 0;
		goto IL_005d;
	}

IL_003f:
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = L_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_2;
		NullCheck(L_10);
		bool L_11;
		L_11 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_10, NULL);
		V_3 = L_11;
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_0058;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_2;
		__this->___m_CurrentPointer_9 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CurrentPointer_9), (void*)L_13);
		goto IL_0063;
	}

IL_0058:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_005d:
	{
		int32_t L_15 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_003f;
		}
	}

IL_0063:
	{
		return;
	}
}
// System.Void TechXR.Core.Sense.SenseController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseController_Update_m86876FCD3960D02ABBC289FD7E0D3D4E47FF9021 (SenseController_tABCD7B30A1AA3F0BAB5AC6050F2C699A566ADA48* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void TechXR.Core.Sense.SenseController::ToggleJoystickMovement(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseController_ToggleJoystickMovement_m5B35CCB028EDD7B56C0E34BB3050BBADDE264F8B (SenseController_tABCD7B30A1AA3F0BAB5AC6050F2C699A566ADA48* __this, bool ___flag0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8* L_0 = ((SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_StaticFields*)il2cpp_codegen_static_fields_for(SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8_il2cpp_TypeInfo_var))->___Instance_4;
		bool L_1 = ___flag0;
		NullCheck(L_0);
		SenseInput_set_JoystickMovement_m6CDB0C09257C996955958351AA56484C647B6D12_inline(L_0, L_1, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.SenseController::ToggleTeleportMovement(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseController_ToggleTeleportMovement_m2C4DAB312963BE53BFEA232801FDB8259BED17AB (SenseController_tABCD7B30A1AA3F0BAB5AC6050F2C699A566ADA48* __this, bool ___flag0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* L_0 = ((SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_StaticFields*)il2cpp_codegen_static_fields_for(SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_il2cpp_TypeInfo_var))->____instance_4;
		bool L_1 = ___flag0;
		NullCheck(L_0);
		SenseManager_ToggleTeleportMode_mD32D0FE0FA445A88B8D3404235753A2D3F6C5E24(L_0, L_1, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.SenseController::SetTeleportInput(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseController_SetTeleportInput_mF6176CF36EC2829DF52A99C265D22493615F5192 (SenseController_tABCD7B30A1AA3F0BAB5AC6050F2C699A566ADA48* __this, String_t* ____buttonName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* L_0 = ((SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_StaticFields*)il2cpp_codegen_static_fields_for(SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860_il2cpp_TypeInfo_var))->____instance_4;
		String_t* L_1 = ____buttonName0;
		NullCheck(L_0);
		SenseManager_SetTeleportInput_mB9DD3040B705A79A9ED8528C27E41C4CE0226A52(L_0, L_1, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.SenseController::SetPointerType(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseController_SetPointerType_mB4A6AE14E14DA2D07AFC5E2ADF48DEE8C454B3AB (SenseController_tABCD7B30A1AA3F0BAB5AC6050F2C699A566ADA48* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09E7292B6C15802BA0B8DB9E013BB27C8DFF9548);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_1 = NULL;
	int32_t V_2 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_CurrentPointer_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___m_CurrentPointer_9;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
	}

IL_001f:
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_4 = __this->___m_PointerOptions_7;
		V_1 = L_4;
		V_2 = 0;
		goto IL_0047;
	}

IL_002b:
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = L_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_3;
		NullCheck(L_9);
		bool L_10;
		L_10 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_9, NULL);
		V_4 = L_10;
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_0043;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_3;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
	}

IL_0043:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0047:
	{
		int32_t L_14 = V_2;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_15 = V_1;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_16 = ___index0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_17 = __this->___m_PointerOptions_7;
		NullCheck(L_17);
		V_5 = (bool)((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))? 1 : 0);
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_007d;
		}
	}
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_19 = __this->___m_PointerOptions_7;
		int32_t L_20 = ___index0;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		__this->___m_CurrentPointer_9 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CurrentPointer_9), (void*)L_22);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___m_CurrentPointer_9;
		NullCheck(L_23);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_23, (bool)1, NULL);
		goto IL_0096;
	}

IL_007d:
	{
		String_t* L_24;
		L_24 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___index0), NULL);
		String_t* L_25;
		L_25 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral09E7292B6C15802BA0B8DB9E013BB27C8DFF9548, L_24, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_25, NULL);
	}

IL_0096:
	{
		return;
	}
}
// System.Void TechXR.Core.Sense.SenseController::ToggleControllerBodyDisplay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseController_ToggleControllerBodyDisplay_mD9A609C3A122A6C5C4990F75DABB10D0C307C39B (SenseController_tABCD7B30A1AA3F0BAB5AC6050F2C699A566ADA48* __this, bool ___flag0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_CurrentPointer_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___m_CurrentPointer_9;
		bool L_4 = ___flag0;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, L_4, NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Void TechXR.Core.Sense.SenseController::ToggleDisplay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseController_ToggleDisplay_m70CE6EB54546215B23652E2D8B2EE5217DB1EF6A (SenseController_tABCD7B30A1AA3F0BAB5AC6050F2C699A566ADA48* __this, bool ___flag0, const RuntimeMethod* method) 
{
	{
		LaserPointer_t16D0F974C5CCC33E600C322FFB605D6B7CB2B5A3* L_0 = __this->___m_LaserPointer_6;
		bool L_1 = ___flag0;
		NullCheck(L_0);
		VirtualActionInvoker1< bool >::Invoke(9 /* System.Void TechXR.Core.Sense.IUILaserPointer::ToggleDisplay(System.Boolean) */, L_0, L_1);
		return;
	}
}
// System.Void TechXR.Core.Sense.SenseController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseController__ctor_m296A0D27612CB070701C7421A45E00EC32A53141 (SenseController_tABCD7B30A1AA3F0BAB5AC6050F2C699A566ADA48* __this, const RuntimeMethod* method) 
{
	{
		__this->___JoystickMovement_8 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// TechXR.Core.Sense.GazeTimer TechXR.Core.Sense.GazeTimer::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GazeTimer_t3B3E8125DC73C12ABC4C4735B9A60462AD557E4D* GazeTimer_get_Instance_mCD92B120A5AB90020E0AB7792000A82C0A3EA2CA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GazeTimer_t3B3E8125DC73C12ABC4C4735B9A60462AD557E4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GazeTimer_t3B3E8125DC73C12ABC4C4735B9A60462AD557E4D* L_0 = ((GazeTimer_t3B3E8125DC73C12ABC4C4735B9A60462AD557E4D_StaticFields*)il2cpp_codegen_static_fields_for(GazeTimer_t3B3E8125DC73C12ABC4C4735B9A60462AD557E4D_il2cpp_TypeInfo_var))->____instance_4;
		return L_0;
	}
}
// System.Void TechXR.Core.Sense.GazeTimer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeTimer_Awake_m342462F4AE49BE521C6B6CDA14D3EA066196C0E5 (GazeTimer_t3B3E8125DC73C12ABC4C4735B9A60462AD557E4D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GazeTimer_t3B3E8125DC73C12ABC4C4735B9A60462AD557E4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39244DD8C4DD021B7E61832F11CEAE8EC82C9F3A);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		GazeTimer_t3B3E8125DC73C12ABC4C4735B9A60462AD557E4D* L_0 = ((GazeTimer_t3B3E8125DC73C12ABC4C4735B9A60462AD557E4D_StaticFields*)il2cpp_codegen_static_fields_for(GazeTimer_t3B3E8125DC73C12ABC4C4735B9A60462AD557E4D_il2cpp_TypeInfo_var))->____instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral39244DD8C4DD021B7E61832F11CEAE8EC82C9F3A, NULL);
		GazeTimer_t3B3E8125DC73C12ABC4C4735B9A60462AD557E4D* L_3 = ((GazeTimer_t3B3E8125DC73C12ABC4C4735B9A60462AD557E4D_StaticFields*)il2cpp_codegen_static_fields_for(GazeTimer_t3B3E8125DC73C12ABC4C4735B9A60462AD557E4D_il2cpp_TypeInfo_var))->____instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_3, NULL);
	}

IL_0028:
	{
		((GazeTimer_t3B3E8125DC73C12ABC4C4735B9A60462AD557E4D_StaticFields*)il2cpp_codegen_static_fields_for(GazeTimer_t3B3E8125DC73C12ABC4C4735B9A60462AD557E4D_il2cpp_TypeInfo_var))->____instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((GazeTimer_t3B3E8125DC73C12ABC4C4735B9A60462AD557E4D_StaticFields*)il2cpp_codegen_static_fields_for(GazeTimer_t3B3E8125DC73C12ABC4C4735B9A60462AD557E4D_il2cpp_TypeInfo_var))->____instance_4), (void*)__this);
		return;
	}
}
// System.Void TechXR.Core.Sense.GazeTimer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeTimer_Start_m965FE2152821FF6993ACF69D559A5C8340737B18 (GazeTimer_t3B3E8125DC73C12ABC4C4735B9A60462AD557E4D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisLaserPointer_t16D0F974C5CCC33E600C322FFB605D6B7CB2B5A3_mFEABE52DC46183287A33A14AECE9F41BB53C100E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D62C282849550F5C50379F05AC5D776D75E3882);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BAE65B77C5B8BEFFAB5C638DA126DBF8D56F692);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A2BF1645D7882775B4A512873D1E61EAD87FE3C);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		LaserPointer_t16D0F974C5CCC33E600C322FFB605D6B7CB2B5A3* L_0;
		L_0 = Object_FindObjectOfType_TisLaserPointer_t16D0F974C5CCC33E600C322FFB605D6B7CB2B5A3_mFEABE52DC46183287A33A14AECE9F41BB53C100E(Object_FindObjectOfType_TisLaserPointer_t16D0F974C5CCC33E600C322FFB605D6B7CB2B5A3_mFEABE52DC46183287A33A14AECE9F41BB53C100E_RuntimeMethod_var);
		__this->___m_LaserPointer_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LaserPointer_7), (void*)L_0);
		LaserPointer_t16D0F974C5CCC33E600C322FFB605D6B7CB2B5A3* L_1 = __this->___m_LaserPointer_7;
		bool L_2;
		L_2 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_1, NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral5D62C282849550F5C50379F05AC5D776D75E3882, NULL);
	}

IL_0029:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = GameObject_FindWithTag_m8E5D34F652B0A6ECA1A90688726C22E272236C0F(_stringLiteral7BAE65B77C5B8BEFFAB5C638DA126DBF8D56F692, NULL);
		V_0 = L_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_5, NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_004a;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_0;
		NullCheck(L_8);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9;
		L_9 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_8, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		__this->___m_GazeImg_6 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_GazeImg_6), (void*)L_9);
	}

IL_004a:
	{
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___m_GazeImg_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_10, NULL);
		V_3 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_0067;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral9A2BF1645D7882775B4A512873D1E61EAD87FE3C, NULL);
	}

IL_0067:
	{
		return;
	}
}
// System.Void TechXR.Core.Sense.GazeTimer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeTimer_Update_m8D3F27DF744F358C69DF4BA859858274C025441D (GazeTimer_t3B3E8125DC73C12ABC4C4735B9A60462AD557E4D* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0 = __this->___m_GazeStatus_8;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0074;
		}
	}
	{
		float L_2 = __this->___m_GazeTimer_9;
		float L_3;
		L_3 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___m_GazeTimer_9 = ((float)il2cpp_codegen_add(L_2, L_3));
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___m_GazeImg_6;
		float L_5 = __this->___m_GazeTimer_9;
		float L_6 = __this->___TotalTime_5;
		NullCheck(L_4);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_4, ((float)(L_5/L_6)), NULL);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7 = __this->___m_GazeImg_6;
		NullCheck(L_7);
		float L_8;
		L_8 = Image_get_fillAmount_mDEE52490D07124E21E7CB36718A5E3714D8B9788_inline(L_7, NULL);
		V_1 = (bool)((((float)L_8) == ((float)(1.0f)))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0073;
		}
	}
	{
		LaserPointer_t16D0F974C5CCC33E600C322FFB605D6B7CB2B5A3* L_10 = __this->___m_LaserPointer_7;
		NullCheck(L_10);
		L_10->___ButtonState_17 = (bool)1;
		__this->___m_GazeStatus_8 = (bool)0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_11 = __this->___m_GazeImg_6;
		NullCheck(L_11);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_11, (0.0f), NULL);
	}

IL_0073:
	{
	}

IL_0074:
	{
		return;
	}
}
// System.Void TechXR.Core.Sense.GazeTimer::GazeOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeTimer_GazeOn_m9E8CBD436017C5B72E9D23F31241CC5AEC907AF4 (GazeTimer_t3B3E8125DC73C12ABC4C4735B9A60462AD557E4D* __this, const RuntimeMethod* method) 
{
	{
		__this->___m_GazeStatus_8 = (bool)1;
		return;
	}
}
// System.Void TechXR.Core.Sense.GazeTimer::GazeOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeTimer_GazeOff_m0A381C8EFE1D692D89C6802DF8DB2ECB9D7DAC4E (GazeTimer_t3B3E8125DC73C12ABC4C4735B9A60462AD557E4D* __this, const RuntimeMethod* method) 
{
	{
		__this->___m_GazeStatus_8 = (bool)0;
		__this->___m_GazeTimer_9 = (0.0f);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___m_GazeImg_6;
		NullCheck(L_0);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_0, (0.0f), NULL);
		LaserPointer_t16D0F974C5CCC33E600C322FFB605D6B7CB2B5A3* L_1 = __this->___m_LaserPointer_7;
		NullCheck(L_1);
		L_1->___ButtonState_17 = (bool)0;
		return;
	}
}
// System.Void TechXR.Core.Sense.GazeTimer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeTimer__ctor_m2A92F70A5819B3EE7A1C6DCA1584582D34696D52 (GazeTimer_t3B3E8125DC73C12ABC4C4735B9A60462AD557E4D* __this, const RuntimeMethod* method) 
{
	{
		__this->___TotalTime_5 = (2.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TechXR.Core.Sense.SenseXRTrackingStatus::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseXRTrackingStatus_Start_m5931CDFEEA25AAA3ADBC274773996F6D685F6BED (SenseXRTrackingStatus_tACCC33CEC9913BC93FE7C43E0A456A424AE42164* __this, const RuntimeMethod* method) 
{
	{
		DefaultObserverEventHandler_Start_m4C0CD606664A8117685DE4476243FBC271F39A20(__this, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.SenseXRTrackingStatus::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseXRTrackingStatus_Update_m6D135C5533EFF765B34372CEBB550130C2CD9055 (SenseXRTrackingStatus_tACCC33CEC9913BC93FE7C43E0A456A424AE42164* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = __this->___m_IsTrackingLost_14;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_009a;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_7), (0.112000003f), (-0.0439999998f), (0.221000001f), /*hidden argument*/NULL);
		float L_8;
		L_8 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_6, L_7, ((float)il2cpp_codegen_multiply(L_8, (5.0f))), NULL);
		NullCheck(L_3);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_3, L_9, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), (0.0f), (90.0f), (0.0f), /*hidden argument*/NULL);
		float L_16;
		L_16 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_14, L_15, ((float)il2cpp_codegen_multiply(L_16, (5.0f))), NULL);
		NullCheck(L_11);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_11, L_17, NULL);
	}

IL_009a:
	{
		return;
	}
}
// System.Void TechXR.Core.Sense.SenseXRTrackingStatus::OnTrackingFound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseXRTrackingStatus_OnTrackingFound_m618EC9A6793D11FCE05C2FD513A8BDFCB8BA00F6 (SenseXRTrackingStatus_tACCC33CEC9913BC93FE7C43E0A456A424AE42164* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral157D758D6F0AE3BD2E0DF91C4F4628FFD75E14EC);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral157D758D6F0AE3BD2E0DF91C4F4628FFD75E14EC, NULL);
		__this->___m_IsTrackingLost_14 = (bool)0;
		return;
	}
}
// System.Void TechXR.Core.Sense.SenseXRTrackingStatus::OnTrackingLost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseXRTrackingStatus_OnTrackingLost_m51FA5E0938CB4057A777AA1BE7FFE893D03D4B0E (SenseXRTrackingStatus_tACCC33CEC9913BC93FE7C43E0A456A424AE42164* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCFBDF6B292C4B3879183E4BD0E8A340E43B85FF);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralBCFBDF6B292C4B3879183E4BD0E8A340E43B85FF, NULL);
		__this->___m_IsTrackingLost_14 = (bool)1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_0, NULL);
		NullCheck(L_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_1, NULL);
		V_0 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = V_0;
		NullCheck(L_4);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_4, L_5, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_7, NULL);
		V_1 = L_8;
		(&V_1)->___y_3 = (90.0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_1;
		NullCheck(L_10);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_10, L_11, NULL);
		return;
	}
}
// System.Void TechXR.Core.Sense.SenseXRTrackingStatus::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SenseXRTrackingStatus__ctor_m524B139A34F94DC047F1E1B72D1866945A208754 (SenseXRTrackingStatus_tACCC33CEC9913BC93FE7C43E0A456A424AE42164* __this, const RuntimeMethod* method) 
{
	{
		DefaultObserverEventHandler__ctor_mE40FCAD19043225054C315C22018F5780217E9DC(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TechXR.Core.Utils.DataManager::LoadData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataManager_LoadData_m496F4C0F7C47585D8C002BC5FDD6F367FAB39A69 (DataManager_t40CBB9B632C0C9F415E38AAFDBFC8C84FA458E1E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 V_3;
	memset((&V_3), 0, sizeof(V_3));
	String_t* V_4 = NULL;
	{
		bool L_0 = __this->___m_LocalData_8;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0050;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = __this->___m_Paths_7;
		NullCheck(L_2);
		Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 L_3;
		L_3 = List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D(L_2, List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003e:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7((&V_1), Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0033_1;
			}

IL_001b_1:
			{
				String_t* L_4;
				L_4 = Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline((&V_1), Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
				V_2 = L_4;
				String_t* L_5 = V_2;
				RuntimeObject* L_6;
				L_6 = DataManager_GetDataLocal_m7A3735F37C01AF341F4183EB0D586E3BEDFB629B(__this, L_5, NULL);
				Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
				L_7 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_6, NULL);
			}

IL_0033_1:
			{
				bool L_8;
				L_8 = Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED((&V_1), Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_001b_1;
				}
			}
			{
				goto IL_004d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004d:
	{
		goto IL_0095;
	}

IL_0050:
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_9 = __this->___m_Paths_7;
		NullCheck(L_9);
		Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 L_10;
		L_10 = List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D(L_9, List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		V_3 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0085:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7((&V_3), Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_007a_1;
			}

IL_0060_1:
			{
				String_t* L_11;
				L_11 = Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline((&V_3), Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
				V_4 = L_11;
				String_t* L_12 = V_4;
				RuntimeObject* L_13;
				L_13 = DataManager_GetDataRemote_m0AB20F374B9308D0D488FAEBD8180ED1A7555660(__this, L_12, NULL);
				Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_14;
				L_14 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_13, NULL);
			}

IL_007a_1:
			{
				bool L_15;
				L_15 = Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED((&V_3), Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_0060_1;
				}
			}
			{
				goto IL_0094;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0094:
	{
	}

IL_0095:
	{
		return;
	}
}
// System.Collections.IEnumerator TechXR.Core.Utils.DataManager::GetDataLocal(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataManager_GetDataLocal_m7A3735F37C01AF341F4183EB0D586E3BEDFB629B (DataManager_t40CBB9B632C0C9F415E38AAFDBFC8C84FA458E1E* __this, String_t* ___fileName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetDataLocalU3Ed__6_t35AF7AAA66C46989AAC6E3D6C18EF9F195FB60DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetDataLocalU3Ed__6_t35AF7AAA66C46989AAC6E3D6C18EF9F195FB60DB* L_0 = (U3CGetDataLocalU3Ed__6_t35AF7AAA66C46989AAC6E3D6C18EF9F195FB60DB*)il2cpp_codegen_object_new(U3CGetDataLocalU3Ed__6_t35AF7AAA66C46989AAC6E3D6C18EF9F195FB60DB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGetDataLocalU3Ed__6__ctor_m8F2F34A6239653CF19A38E090E3ADADDD6AE9DEE(L_0, 0, NULL);
		U3CGetDataLocalU3Ed__6_t35AF7AAA66C46989AAC6E3D6C18EF9F195FB60DB* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CGetDataLocalU3Ed__6_t35AF7AAA66C46989AAC6E3D6C18EF9F195FB60DB* L_2 = L_1;
		String_t* L_3 = ___fileName0;
		NullCheck(L_2);
		L_2->___fileName_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___fileName_2), (void*)L_3);
		return L_2;
	}
}
// System.Collections.IEnumerator TechXR.Core.Utils.DataManager::GetDataRemote(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataManager_GetDataRemote_m0AB20F374B9308D0D488FAEBD8180ED1A7555660 (DataManager_t40CBB9B632C0C9F415E38AAFDBFC8C84FA458E1E* __this, String_t* ___url0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetDataRemoteU3Ed__7_t9EF86BF47D64179500271B1D5CD90A11DF21DB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetDataRemoteU3Ed__7_t9EF86BF47D64179500271B1D5CD90A11DF21DB82* L_0 = (U3CGetDataRemoteU3Ed__7_t9EF86BF47D64179500271B1D5CD90A11DF21DB82*)il2cpp_codegen_object_new(U3CGetDataRemoteU3Ed__7_t9EF86BF47D64179500271B1D5CD90A11DF21DB82_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGetDataRemoteU3Ed__7__ctor_m4AF2F66BE485A061F49B25FC42FCDD223CF01AC8(L_0, 0, NULL);
		U3CGetDataRemoteU3Ed__7_t9EF86BF47D64179500271B1D5CD90A11DF21DB82* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CGetDataRemoteU3Ed__7_t9EF86BF47D64179500271B1D5CD90A11DF21DB82* L_2 = L_1;
		String_t* L_3 = ___url0;
		NullCheck(L_2);
		L_2->___url_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___url_2), (void*)L_3);
		return L_2;
	}
}
// System.Void TechXR.Core.Utils.DataManager::DataLoadedHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataManager_DataLoadedHandler_mCB1C4784A65FF6AE53091AB5E20363EB897A3484 (DataManager_t40CBB9B632C0C9F415E38AAFDBFC8C84FA458E1E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m78D05D468F30A6FA61E75B05CA4DC49D8E5C2F05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_tDE48F5D43D6ACE2A85EB85E8B734CF741D8D4306_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		int32_t L_0 = __this->___m_DataLoadedCounter_5;
		__this->___m_DataLoadedCounter_5 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = __this->___m_DataLoadedCounter_5;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = __this->___m_Paths_7;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_2, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_003c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_tDE48F5D43D6ACE2A85EB85E8B734CF741D8D4306_il2cpp_TypeInfo_var);
		EventManager_t549C00EDCE4BC703024CB8204FDD317602311CA8* L_5;
		L_5 = Singleton_1_get_Instance_m78D05D468F30A6FA61E75B05CA4DC49D8E5C2F05(Singleton_1_get_Instance_m78D05D468F30A6FA61E75B05CA4DC49D8E5C2F05_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6;
		L_6 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_5);
		EventManager_TriggerEvent_m62A9DD742C11C3D8C1C6DA04361C0F479AD90112(L_5, 3, L_6, NULL);
	}

IL_003c:
	{
		return;
	}
}
// System.Void TechXR.Core.Utils.DataManager::Init(System.Collections.Generic.List`1<System.String>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataManager_Init_mDEAED44E74A5E035D3111F1ACA95AAA9B8C9BA09 (DataManager_t40CBB9B632C0C9F415E38AAFDBFC8C84FA458E1E* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___filePaths0, bool ___local1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ___filePaths0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC(L_1, L_0, List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var);
		__this->___m_Paths_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Paths_7), (void*)L_1);
		bool L_2 = ___local1;
		__this->___m_LocalData_8 = L_2;
		__this->___m_DataLoadedCounter_5 = 0;
		DataManager_LoadData_m496F4C0F7C47585D8C002BC5FDD6F367FAB39A69(__this, NULL);
		return;
	}
}
// System.Void TechXR.Core.Utils.DataManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataManager__ctor_mE3759F24251B74C6381AED9B2F5185A33B3EB489 (DataManager_t40CBB9B632C0C9F415E38AAFDBFC8C84FA458E1E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1__ctor_m8CFF12B7C9D1C5D45123BFD91F043C04C2BA0CBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_tC289D00A047C79313DA529AB7DBBA764BAF771F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___m_DataLoadedCounter_5 = 0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		__this->___m_Data_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Data_6), (void*)L_0);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_1, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___m_Paths_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Paths_7), (void*)L_1);
		__this->___m_LocalData_8 = (bool)0;
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_tC289D00A047C79313DA529AB7DBBA764BAF771F4_il2cpp_TypeInfo_var);
		Singleton_1__ctor_m8CFF12B7C9D1C5D45123BFD91F043C04C2BA0CBC(__this, Singleton_1__ctor_m8CFF12B7C9D1C5D45123BFD91F043C04C2BA0CBC_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TechXR.Core.Utils.DataManager/<GetDataLocal>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDataLocalU3Ed__6__ctor_m8F2F34A6239653CF19A38E090E3ADADDD6AE9DEE (U3CGetDataLocalU3Ed__6_t35AF7AAA66C46989AAC6E3D6C18EF9F195FB60DB* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TechXR.Core.Utils.DataManager/<GetDataLocal>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDataLocalU3Ed__6_System_IDisposable_Dispose_m61E1103D97F6769957EBAC16FCFDBCDD6185E149 (U3CGetDataLocalU3Ed__6_t35AF7AAA66C46989AAC6E3D6C18EF9F195FB60DB* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TechXR.Core.Utils.DataManager/<GetDataLocal>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetDataLocalU3Ed__6_MoveNext_mA93303035193F0392E72889627DB25854EFC55F9 (U3CGetDataLocalU3Ed__6_t35AF7AAA66C46989AAC6E3D6C18EF9F195FB60DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0039;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (0.100000001f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0039:
	{
		__this->___U3CU3E1__state_0 = (-1);
		String_t* L_4 = __this->___fileName_2;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_5;
		L_5 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(L_4, NULL);
		__this->___U3CfileU3E5__1_4 = ((TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69*)IsInstClass((RuntimeObject*)L_5, TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CfileU3E5__1_4), (void*)((TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69*)IsInstClass((RuntimeObject*)L_5, TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_il2cpp_TypeInfo_var)));
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_6 = __this->___U3CfileU3E5__1_4;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		__this->___U3CjsonStringU3E5__2_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CjsonStringU3E5__2_5), (void*)L_7);
		DataManager_t40CBB9B632C0C9F415E38AAFDBFC8C84FA458E1E* L_8 = __this->___U3CU3E4__this_3;
		NullCheck(L_8);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_9 = L_8->___m_Data_6;
		String_t* L_10 = __this->___fileName_2;
		String_t* L_11 = __this->___U3CjsonStringU3E5__2_5;
		NullCheck(L_9);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_9, L_10, L_11, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		DataManager_t40CBB9B632C0C9F415E38AAFDBFC8C84FA458E1E* L_12 = __this->___U3CU3E4__this_3;
		NullCheck(L_12);
		DataManager_DataLoadedHandler_mCB1C4784A65FF6AE53091AB5E20363EB897A3484(L_12, NULL);
		return (bool)0;
	}
}
// System.Object TechXR.Core.Utils.DataManager/<GetDataLocal>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetDataLocalU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5B4775AF867EFA1F397D4EDC632EEE7914FB82BC (U3CGetDataLocalU3Ed__6_t35AF7AAA66C46989AAC6E3D6C18EF9F195FB60DB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TechXR.Core.Utils.DataManager/<GetDataLocal>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDataLocalU3Ed__6_System_Collections_IEnumerator_Reset_m1FD68A0360C33614081DD0178F7D21A121131DF4 (U3CGetDataLocalU3Ed__6_t35AF7AAA66C46989AAC6E3D6C18EF9F195FB60DB* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetDataLocalU3Ed__6_System_Collections_IEnumerator_Reset_m1FD68A0360C33614081DD0178F7D21A121131DF4_RuntimeMethod_var)));
	}
}
// System.Object TechXR.Core.Utils.DataManager/<GetDataLocal>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetDataLocalU3Ed__6_System_Collections_IEnumerator_get_Current_m0F09F3255F2915CCB59734A02035CD3437B59839 (U3CGetDataLocalU3Ed__6_t35AF7AAA66C46989AAC6E3D6C18EF9F195FB60DB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TechXR.Core.Utils.DataManager/<GetDataRemote>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDataRemoteU3Ed__7__ctor_m4AF2F66BE485A061F49B25FC42FCDD223CF01AC8 (U3CGetDataRemoteU3Ed__7_t9EF86BF47D64179500271B1D5CD90A11DF21DB82* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TechXR.Core.Utils.DataManager/<GetDataRemote>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDataRemoteU3Ed__7_System_IDisposable_Dispose_m5F32F4CBC87266E2E87DEF63B3A555EBAEA9EDC9 (U3CGetDataRemoteU3Ed__7_t9EF86BF47D64179500271B1D5CD90A11DF21DB82* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TechXR.Core.Utils.DataManager/<GetDataRemote>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetDataRemoteU3Ed__7_MoveNext_mA7C1C1011E33733DE5D1EA4734E586D45E9058F1 (U3CGetDataRemoteU3Ed__7_t9EF86BF47D64179500271B1D5CD90A11DF21DB82* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02C57FCD0B5FED3CA8492A7739DFA930A4EC4214);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C20A4E31A2FA637F64017ECC70929D4DDACF45D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B11_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_001f;
			}
		}
	}
	{
		goto IL_0021;
	}

IL_001b:
	{
		goto IL_0023;
	}

IL_001d:
	{
		goto IL_0044;
	}

IL_001f:
	{
		goto IL_0076;
	}

IL_0021:
	{
		return (bool)0;
	}

IL_0023:
	{
		__this->___U3CU3E1__state_0 = (-1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_2 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_2, (0.100000001f), NULL);
		__this->___U3CU3E2__current_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_2);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0044:
	{
		__this->___U3CU3E1__state_0 = (-1);
		String_t* L_3 = __this->___url_2;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_4;
		L_4 = UnityWebRequest_Get_mBCC8E02B34F75797C7171EBFC1E28CF32FBF9C4E(L_3, NULL);
		__this->___U3CwwwU3E5__1_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwwwU3E5__1_4), (void*)L_4);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_5 = __this->___U3CwwwU3E5__1_4;
		NullCheck(L_5);
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_6;
		L_6 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_5, NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0076:
	{
		__this->___U3CU3E1__state_0 = (-1);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_7 = __this->___U3CwwwU3E5__1_4;
		NullCheck(L_7);
		bool L_8;
		L_8 = UnityWebRequest_get_isHttpError_m945BA480A179E05CC9659846414D9521ED648ED5(L_7, NULL);
		if (L_8)
		{
			goto IL_0097;
		}
	}
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_9 = __this->___U3CwwwU3E5__1_4;
		NullCheck(L_9);
		bool L_10;
		L_10 = UnityWebRequest_get_isNetworkError_m036684411466688E71E67CDD3703BAC9035A56F0(L_9, NULL);
		G_B11_0 = ((int32_t)(L_10));
		goto IL_0098;
	}

IL_0097:
	{
		G_B11_0 = 1;
	}

IL_0098:
	{
		V_1 = (bool)G_B11_0;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_00c6;
		}
	}
	{
		String_t* L_12 = __this->___url_2;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_13 = __this->___U3CwwwU3E5__1_4;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_13, NULL);
		String_t* L_15;
		L_15 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteral02C57FCD0B5FED3CA8492A7739DFA930A4EC4214, L_12, _stringLiteral0C20A4E31A2FA637F64017ECC70929D4DDACF45D, L_14, NULL);
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(L_15, NULL);
		goto IL_010e;
	}

IL_00c6:
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_16 = __this->___U3CwwwU3E5__1_4;
		NullCheck(L_16);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_17;
		L_17 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_16, NULL);
		NullCheck(L_17);
		String_t* L_18;
		L_18 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_17, NULL);
		__this->___U3CjsonStringU3E5__2_5 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CjsonStringU3E5__2_5), (void*)L_18);
		DataManager_t40CBB9B632C0C9F415E38AAFDBFC8C84FA458E1E* L_19 = __this->___U3CU3E4__this_3;
		NullCheck(L_19);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_20 = L_19->___m_Data_6;
		String_t* L_21 = __this->___url_2;
		String_t* L_22 = __this->___U3CjsonStringU3E5__2_5;
		NullCheck(L_20);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_20, L_21, L_22, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		DataManager_t40CBB9B632C0C9F415E38AAFDBFC8C84FA458E1E* L_23 = __this->___U3CU3E4__this_3;
		NullCheck(L_23);
		DataManager_DataLoadedHandler_mCB1C4784A65FF6AE53091AB5E20363EB897A3484(L_23, NULL);
		__this->___U3CjsonStringU3E5__2_5 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CjsonStringU3E5__2_5), (void*)(String_t*)NULL);
	}

IL_010e:
	{
		return (bool)0;
	}
}
// System.Object TechXR.Core.Utils.DataManager/<GetDataRemote>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetDataRemoteU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m36F0E40337C8793D8F871CE46830C01D0E4F1639 (U3CGetDataRemoteU3Ed__7_t9EF86BF47D64179500271B1D5CD90A11DF21DB82* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TechXR.Core.Utils.DataManager/<GetDataRemote>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDataRemoteU3Ed__7_System_Collections_IEnumerator_Reset_m0658C95F297D94CD89F25DEF151766E091758B79 (U3CGetDataRemoteU3Ed__7_t9EF86BF47D64179500271B1D5CD90A11DF21DB82* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetDataRemoteU3Ed__7_System_Collections_IEnumerator_Reset_m0658C95F297D94CD89F25DEF151766E091758B79_RuntimeMethod_var)));
	}
}
// System.Object TechXR.Core.Utils.DataManager/<GetDataRemote>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetDataRemoteU3Ed__7_System_Collections_IEnumerator_get_Current_m12823AB4E46FBACA71B974262F44729CA9F42045 (U3CGetDataRemoteU3Ed__7_t9EF86BF47D64179500271B1D5CD90A11DF21DB82* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TechXR.Core.Utils.EventManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_Awake_m6ECCB395E4465F48126305039845F4EB281C06BF (EventManager_t549C00EDCE4BC703024CB8204FDD317602311CA8* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void TechXR.Core.Utils.EventManager::OnInstanceCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_OnInstanceCreated_m81C28CD81481C90E8CE82E8460C6A071C15D0AED (EventManager_t549C00EDCE4BC703024CB8204FDD317602311CA8* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void TechXR.Core.Utils.EventManager::RegisterEvent(TechXR.Core.Sense.SenseEvent,TechXR.Core.Sense.SenseEventDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_RegisterEvent_m531D6DAA0B13702A548D812F42B2C1C574BF8DDA (EventManager_t549C00EDCE4BC703024CB8204FDD317602311CA8* __this, int32_t ___a_eEvent0, SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C* ___a_delListener1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m0B865879077678CDB1541E56D43DD37820370472_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m34D663F47D61D46A3373EBB3EA4BD6BE56E06462_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB063F72CA129EA5C9E63FAB5A9D0DBA7B0A8BB98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m4BEF004F1A248906F4A61411E7FC2391407A7BF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Dictionary_2_t7501747BA89320958ACDB6ED070D99A6C7A3E6CB* V_1 = NULL;
	int32_t V_2 = 0;
	{
		Dictionary_2_t7501747BA89320958ACDB6ED070D99A6C7A3E6CB* L_0 = __this->___mEventRegistry_5;
		int32_t L_1 = ___a_eEvent0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m34D663F47D61D46A3373EBB3EA4BD6BE56E06462(L_0, L_1, Dictionary_2_ContainsKey_m34D663F47D61D46A3373EBB3EA4BD6BE56E06462_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		Dictionary_2_t7501747BA89320958ACDB6ED070D99A6C7A3E6CB* L_4 = __this->___mEventRegistry_5;
		int32_t L_5 = ___a_eEvent0;
		SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C* L_6 = ___a_delListener1;
		NullCheck(L_4);
		Dictionary_2_Add_m0B865879077678CDB1541E56D43DD37820370472(L_4, L_5, L_6, Dictionary_2_Add_m0B865879077678CDB1541E56D43DD37820370472_RuntimeMethod_var);
		goto IL_006b;
	}

IL_0025:
	{
		Dictionary_2_t7501747BA89320958ACDB6ED070D99A6C7A3E6CB* L_7 = __this->___mEventRegistry_5;
		V_1 = L_7;
		int32_t L_8 = ___a_eEvent0;
		V_2 = L_8;
		Dictionary_2_t7501747BA89320958ACDB6ED070D99A6C7A3E6CB* L_9 = V_1;
		int32_t L_10 = V_2;
		Dictionary_2_t7501747BA89320958ACDB6ED070D99A6C7A3E6CB* L_11 = V_1;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C* L_13;
		L_13 = Dictionary_2_get_Item_mB063F72CA129EA5C9E63FAB5A9D0DBA7B0A8BB98(L_11, L_12, Dictionary_2_get_Item_mB063F72CA129EA5C9E63FAB5A9D0DBA7B0A8BB98_RuntimeMethod_var);
		SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C* L_14 = ___a_delListener1;
		Delegate_t* L_15;
		L_15 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_13, L_14, NULL);
		NullCheck(L_9);
		Dictionary_2_set_Item_m4BEF004F1A248906F4A61411E7FC2391407A7BF4(L_9, L_10, ((SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C*)CastclassSealed((RuntimeObject*)L_15, SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C_il2cpp_TypeInfo_var)), Dictionary_2_set_Item_m4BEF004F1A248906F4A61411E7FC2391407A7BF4_RuntimeMethod_var);
		Dictionary_2_t7501747BA89320958ACDB6ED070D99A6C7A3E6CB* L_16 = __this->___mEventRegistry_5;
		V_1 = L_16;
		int32_t L_17 = ___a_eEvent0;
		V_2 = L_17;
		Dictionary_2_t7501747BA89320958ACDB6ED070D99A6C7A3E6CB* L_18 = V_1;
		int32_t L_19 = V_2;
		Dictionary_2_t7501747BA89320958ACDB6ED070D99A6C7A3E6CB* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C* L_22;
		L_22 = Dictionary_2_get_Item_mB063F72CA129EA5C9E63FAB5A9D0DBA7B0A8BB98(L_20, L_21, Dictionary_2_get_Item_mB063F72CA129EA5C9E63FAB5A9D0DBA7B0A8BB98_RuntimeMethod_var);
		SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C* L_23 = ___a_delListener1;
		Delegate_t* L_24;
		L_24 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_22, L_23, NULL);
		NullCheck(L_18);
		Dictionary_2_set_Item_m4BEF004F1A248906F4A61411E7FC2391407A7BF4(L_18, L_19, ((SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C*)CastclassSealed((RuntimeObject*)L_24, SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C_il2cpp_TypeInfo_var)), Dictionary_2_set_Item_m4BEF004F1A248906F4A61411E7FC2391407A7BF4_RuntimeMethod_var);
	}

IL_006b:
	{
		return;
	}
}
// System.Void TechXR.Core.Utils.EventManager::DeRegisterEvent(TechXR.Core.Sense.SenseEvent,TechXR.Core.Sense.SenseEventDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_DeRegisterEvent_mCEE43837A21C7B9881BF9DDD22616D2649278553 (EventManager_t549C00EDCE4BC703024CB8204FDD317602311CA8* __this, int32_t ___a_eEvent0, SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C* ___a_delListener1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m34D663F47D61D46A3373EBB3EA4BD6BE56E06462_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB063F72CA129EA5C9E63FAB5A9D0DBA7B0A8BB98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m4BEF004F1A248906F4A61411E7FC2391407A7BF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Dictionary_2_t7501747BA89320958ACDB6ED070D99A6C7A3E6CB* V_1 = NULL;
	int32_t V_2 = 0;
	{
		Dictionary_2_t7501747BA89320958ACDB6ED070D99A6C7A3E6CB* L_0 = __this->___mEventRegistry_5;
		int32_t L_1 = ___a_eEvent0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m34D663F47D61D46A3373EBB3EA4BD6BE56E06462(L_0, L_1, Dictionary_2_ContainsKey_m34D663F47D61D46A3373EBB3EA4BD6BE56E06462_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0016;
		}
	}
	{
		goto IL_0039;
	}

IL_0016:
	{
		Dictionary_2_t7501747BA89320958ACDB6ED070D99A6C7A3E6CB* L_4 = __this->___mEventRegistry_5;
		V_1 = L_4;
		int32_t L_5 = ___a_eEvent0;
		V_2 = L_5;
		Dictionary_2_t7501747BA89320958ACDB6ED070D99A6C7A3E6CB* L_6 = V_1;
		int32_t L_7 = V_2;
		Dictionary_2_t7501747BA89320958ACDB6ED070D99A6C7A3E6CB* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C* L_10;
		L_10 = Dictionary_2_get_Item_mB063F72CA129EA5C9E63FAB5A9D0DBA7B0A8BB98(L_8, L_9, Dictionary_2_get_Item_mB063F72CA129EA5C9E63FAB5A9D0DBA7B0A8BB98_RuntimeMethod_var);
		SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C* L_11 = ___a_delListener1;
		Delegate_t* L_12;
		L_12 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_10, L_11, NULL);
		NullCheck(L_6);
		Dictionary_2_set_Item_m4BEF004F1A248906F4A61411E7FC2391407A7BF4(L_6, L_7, ((SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C*)CastclassSealed((RuntimeObject*)L_12, SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C_il2cpp_TypeInfo_var)), Dictionary_2_set_Item_m4BEF004F1A248906F4A61411E7FC2391407A7BF4_RuntimeMethod_var);
	}

IL_0039:
	{
		return;
	}
}
// System.Void TechXR.Core.Utils.EventManager::TriggerEvent(TechXR.Core.Sense.SenseEvent,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_TriggerEvent_m62A9DD742C11C3D8C1C6DA04361C0F479AD90112 (EventManager_t549C00EDCE4BC703024CB8204FDD317602311CA8* __this, int32_t ___a_eEvent0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m80FD91538BABB6A58E4F39A342D2688DB7FA623A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SenseEvent_t19E0A62B413E103C13622AE807AC1221B1FAC9B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBD75549FACF088DB9778ED0BCD8EF703392086C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		Il2CppFakeBox<int32_t> L_0(SenseEvent_t19E0A62B413E103C13622AE807AC1221B1FAC9B6_il2cpp_TypeInfo_var, (&___a_eEvent0));
		String_t* L_1;
		L_1 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_0), NULL);
		__this->___strEventKey_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___strEventKey_6), (void*)L_1);
		Dictionary_2_t7501747BA89320958ACDB6ED070D99A6C7A3E6CB* L_2 = __this->___mEventRegistry_5;
		int32_t L_3 = ___a_eEvent0;
		SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C** L_4 = (&__this->___d_7);
		NullCheck(L_2);
		bool L_5;
		L_5 = Dictionary_2_TryGetValue_m80FD91538BABB6A58E4F39A342D2688DB7FA623A(L_2, L_3, L_4, Dictionary_2_TryGetValue_m80FD91538BABB6A58E4F39A342D2688DB7FA623A_RuntimeMethod_var);
		V_0 = L_5;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0060;
		}
	}
	{
		SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C* L_7 = __this->___d_7;
		V_1 = (bool)((!(((RuntimeObject*)(SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C*)L_7) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0049;
		}
	}
	{
		SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C* L_9 = __this->___d_7;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = ___args1;
		NullCheck(L_9);
		SenseEventDelegate_Invoke_m716A86E11F18D88768A1F535DF2BD764E581643A_inline(L_9, L_10, NULL);
		goto IL_005f;
	}

IL_0049:
	{
		String_t* L_11 = __this->___strEventKey_6;
		String_t* L_12;
		L_12 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralBBD75549FACF088DB9778ED0BCD8EF703392086C, L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_12, NULL);
	}

IL_005f:
	{
	}

IL_0060:
	{
		__this->___d_7 = (SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___d_7), (void*)(SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C*)NULL);
		return;
	}
}
// System.Void TechXR.Core.Utils.EventManager::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager_OnDestroy_m588932373FCD6C2E3AC5BD05ED6047569E49F6BE (EventManager_t549C00EDCE4BC703024CB8204FDD317602311CA8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m2489E55292F69B15797B49697EC0BC225101CB0F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t7501747BA89320958ACDB6ED070D99A6C7A3E6CB* L_0 = __this->___mEventRegistry_5;
		NullCheck(L_0);
		Dictionary_2_Clear_m2489E55292F69B15797B49697EC0BC225101CB0F(L_0, Dictionary_2_Clear_m2489E55292F69B15797B49697EC0BC225101CB0F_RuntimeMethod_var);
		return;
	}
}
// System.Void TechXR.Core.Utils.EventManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventManager__ctor_m8C9AD170F49DB23407390E159901AC4870FDE916 (EventManager_t549C00EDCE4BC703024CB8204FDD317602311CA8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mCD15BE67333EF76C6A8FE3EA6940649D11B92D18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t7501747BA89320958ACDB6ED070D99A6C7A3E6CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1__ctor_m51653CAB709EFBD968DEFEEF7B462DBC252B5D78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_tDE48F5D43D6ACE2A85EB85E8B734CF741D8D4306_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t7501747BA89320958ACDB6ED070D99A6C7A3E6CB* L_0 = (Dictionary_2_t7501747BA89320958ACDB6ED070D99A6C7A3E6CB*)il2cpp_codegen_object_new(Dictionary_2_t7501747BA89320958ACDB6ED070D99A6C7A3E6CB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mCD15BE67333EF76C6A8FE3EA6940649D11B92D18(L_0, Dictionary_2__ctor_mCD15BE67333EF76C6A8FE3EA6940649D11B92D18_RuntimeMethod_var);
		__this->___mEventRegistry_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mEventRegistry_5), (void*)L_0);
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_tDE48F5D43D6ACE2A85EB85E8B734CF741D8D4306_il2cpp_TypeInfo_var);
		Singleton_1__ctor_m51653CAB709EFBD968DEFEEF7B462DBC252B5D78(__this, Singleton_1__ctor_m51653CAB709EFBD968DEFEEF7B462DBC252B5D78_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String TechXR.Core.Utils.StateManager::get_GrabMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StateManager_get_GrabMode_m1DEF06F31F815647F46B2DF83C4C852AD66574C9 (StateManager_t0ECEE8223C864D7804BFC59A3EFAE27D46F5C9C1* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CGrabModeU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void TechXR.Core.Utils.StateManager::set_GrabMode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateManager_set_GrabMode_m0669EEC465EBBA0B32FA216768043F53D5CBD07E (StateManager_t0ECEE8223C864D7804BFC59A3EFAE27D46F5C9C1* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CGrabModeU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGrabModeU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// System.Void TechXR.Core.Utils.StateManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateManager__ctor_m2DC6BF21D2042C0418620CA33E619E688D29F1C1 (StateManager_t0ECEE8223C864D7804BFC59A3EFAE27D46F5C9C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1__ctor_m61B67BE9D0C290D4A3A8AF0E840431F78354453A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_t62FD18177113694BFBF5D00029441528F05D3123_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_t62FD18177113694BFBF5D00029441528F05D3123_il2cpp_TypeInfo_var);
		Singleton_1__ctor_m61B67BE9D0C290D4A3A8AF0E840431F78354453A(__this, Singleton_1__ctor_m61B67BE9D0C290D4A3A8AF0E840431F78354453A_RuntimeMethod_var);
		return;
	}
}
// System.Void TechXR.Core.Utils.StateManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateManager__cctor_m04B17E2E156E865C11536561FFFD75981AB14476 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateManager_t0ECEE8223C864D7804BFC59A3EFAE27D46F5C9C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B9CAA29183E1789E13261856D4186BE443C7122);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE03CBE699C2F9FFFCA97B8B3BE29026F71A2D4C);
		s_Il2CppMethodInitialized = true;
	}
	{
		((StateManager_t0ECEE8223C864D7804BFC59A3EFAE27D46F5C9C1_StaticFields*)il2cpp_codegen_static_fields_for(StateManager_t0ECEE8223C864D7804BFC59A3EFAE27D46F5C9C1_il2cpp_TypeInfo_var))->___GRAB_MODE_NEAR_5 = _stringLiteralEE03CBE699C2F9FFFCA97B8B3BE29026F71A2D4C;
		Il2CppCodeGenWriteBarrier((void**)(&((StateManager_t0ECEE8223C864D7804BFC59A3EFAE27D46F5C9C1_StaticFields*)il2cpp_codegen_static_fields_for(StateManager_t0ECEE8223C864D7804BFC59A3EFAE27D46F5C9C1_il2cpp_TypeInfo_var))->___GRAB_MODE_NEAR_5), (void*)_stringLiteralEE03CBE699C2F9FFFCA97B8B3BE29026F71A2D4C);
		((StateManager_t0ECEE8223C864D7804BFC59A3EFAE27D46F5C9C1_StaticFields*)il2cpp_codegen_static_fields_for(StateManager_t0ECEE8223C864D7804BFC59A3EFAE27D46F5C9C1_il2cpp_TypeInfo_var))->___GRAB_MODE_FAR_6 = _stringLiteral9B9CAA29183E1789E13261856D4186BE443C7122;
		Il2CppCodeGenWriteBarrier((void**)(&((StateManager_t0ECEE8223C864D7804BFC59A3EFAE27D46F5C9C1_StaticFields*)il2cpp_codegen_static_fields_for(StateManager_t0ECEE8223C864D7804BFC59A3EFAE27D46F5C9C1_il2cpp_TypeInfo_var))->___GRAB_MODE_FAR_6), (void*)_stringLiteral9B9CAA29183E1789E13261856D4186BE443C7122);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 position { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CpositionU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m6158066AFB36810D63D98EABF0FABEFFC647B2A0_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_mB1CA903ACF933DB0BE2016D105BB2B4702CF1004_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)(L_1/L_3)), ((float)(L_5/L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_0, L_1, NULL);
		Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		V_1 = L_2;
		goto IL_0020;
	}

IL_0020:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_1;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_mF4D6DB00DEA7D055940165B85FFE1CEF6F7CD3AA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___upVector_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Angle_m9668B13074D1664DD192669C14B3A8FC01676299_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___from0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___to1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		float L_0;
		L_0 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&___from0), NULL);
		float L_1;
		L_1 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&___to1), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sqrt(((double)((float)il2cpp_codegen_multiply(L_0, L_1))));
		V_0 = ((float)L_2);
		float L_3 = V_0;
		V_2 = (bool)((((float)L_3) < ((float)(1.0E-15f)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0056;
	}

IL_002c:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___from0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___to1;
		float L_7;
		L_7 = Vector2_Dot_mBF0FA0B529C821F4733DDC3AD366B07CD27625F4_inline(L_5, L_6, NULL);
		float L_8 = V_0;
		float L_9;
		L_9 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(((float)(L_7/L_8)), (-1.0f), (1.0f), NULL);
		V_1 = L_9;
		float L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = acos(((double)L_10));
		V_3 = ((float)il2cpp_codegen_multiply(((float)L_11), (57.2957802f)));
		goto IL_0056;
	}

IL_0056:
	{
		float L_12 = V_3;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LoginResponse_get_access_token_mE72019AFCDC2B5E9AECD0144D4C92260091833C2_inline (LoginResponse_t77C6BDF81B03D68B2BEA2EDBF9151D62DA16CE28* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3Caccess_tokenU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SenseManager_get_CurrentPointerMode_m31A0BF74F3B55255B3E99FF5449313DD77F8B574_inline (SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCurrentPointerModeU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SenseManager_set_CurrentPointerMode_m9D137DF3C1C357F152F48AD7835248AF7E959010_inline (SenseManager_tBF3C1967B280667DA51E567626B9E630E8D7B860* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CCurrentPointerModeU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* BaseInputModule_get_eventSystem_m341B2378F61A58D5432906B9EE1E12265E2FAB33_inline (BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_EventSystem; }
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0 = __this->___m_EventSystem_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_CurrentSelected; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_CurrentSelected_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PhysicsRaycaster_set_eventMask_mD5110BE565C7E3F1738369519D44587452CA056D_inline (PhysicsRaycaster_t0ACA9046D8D0B195B59DB1F7CA4DD6BB634A56DD* __this, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_EventMask = value; }
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0 = ___value0;
		__this->___m_EventMask_7 = L_0;
		// set { m_EventMask = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_delta_mD200AF7CCAEAD92D947091902AF864CB4ACE0F1D_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector2 delta { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___value0;
		__this->___U3CdeltaU3Ek__BackingField_14 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector2 position { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___value0;
		__this->___U3CpositionU3Ek__BackingField_13 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pointerCurrentRaycast_m52E1E9E89BACACFA6E8F105191654C7E24A98667_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___value0, const RuntimeMethod* method) 
{
	{
		// public RaycastResult pointerCurrentRaycast { get; set; }
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_0 = ___value0;
		__this->___U3CpointerCurrentRaycastU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 PointerEventData_get_pointerCurrentRaycast_m1C6B7D707CEE9C6574DD443289D90102EDC7A2C4_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public RaycastResult pointerCurrentRaycast { get; set; }
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_0 = __this->___U3CpointerCurrentRaycastU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* RaycastResult_get_gameObject_m77014B442B9E2D10F2CC3AEEDC07AA95CDE1E2F1_inline (RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_GameObject; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_GameObject_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pressPosition_m85544FBAB798DABE70067508294A6C4841A95379_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector2 pressPosition { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___value0;
		__this->___U3CpressPositionU3Ek__BackingField_15 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pointerPressRaycast_m55CA127474B4CBCA795A9C872B7630AAF766F852_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___value0, const RuntimeMethod* method) 
{
	{
		// public RaycastResult pointerPressRaycast { get; set; }
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_0 = ___value0;
		__this->___U3CpointerPressRaycastU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CpointerPressRaycastU3Ek__BackingField_9))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CpointerPressRaycastU3Ek__BackingField_9))->___module_1), (void*)NULL);
		#endif
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t00024D26E9CCD074EEBC25568B0383863A4CF117* ExecuteEvents_get_pointerDownHandler_mF03E3A959BA9C0FA008013C1A02AE0AF6042DF44_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return s_PointerDownHandler; }
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_t00024D26E9CCD074EEBC25568B0383863A4CF117* L_0 = ((ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var))->___s_PointerDownHandler_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t586168BFEFD0CF29A2B706B5411BF712BD73359E* ExecuteEvents_get_pointerClickHandler_m4BF7FB241BD3AE488E0E1BE900666ECC2F2DFA78_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return s_PointerClickHandler; }
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_t586168BFEFD0CF29A2B706B5411BF712BD73359E* L_0 = ((ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var))->___s_PointerClickHandler_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t5B9F26DC56564B82AEF63D8AFEEEADBAB365F403* ExecuteEvents_get_beginDragHandler_m330A9FEFFAF518FC1DAABE7A425BEB345B019421_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return s_BeginDragHandler; }
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_t5B9F26DC56564B82AEF63D8AFEEEADBAB365F403* L_0 = ((ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var))->___s_BeginDragHandler_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pointerDrag_m0E8D72362B07962843671C39ADC8F4D5E4915010_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// public GameObject pointerDrag { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___U3CpointerDragU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpointerDragU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t33BA7CA3F9202146F70BE77589CE24F7451C584C* ExecuteEvents_get_endDragHandler_m6F1588E368AD932233A5E6BCD8D7259E9C5B921E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return s_EndDragHandler; }
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_t33BA7CA3F9202146F70BE77589CE24F7451C584C* L_0 = ((ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var))->___s_EndDragHandler_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_tB3864D36512C3A896DAC44E898E5D9E1A92CB733* ExecuteEvents_get_dropHandler_m61ECC86CEAC77AA7C7E7793F6241D2413858354C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return s_DropHandler; }
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_tB3864D36512C3A896DAC44E898E5D9E1A92CB733* L_0 = ((ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var))->___s_DropHandler_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t919A3841A202FB8C678BC0172FAB7E2F79B88AD8* ExecuteEvents_get_pointerUpHandler_mD03905CA3A384EC6AA81326758AB878087DC8C86_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return s_PointerUpHandler; }
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_t919A3841A202FB8C678BC0172FAB7E2F79B88AD8* L_0 = ((ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var))->___s_PointerUpHandler_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_rawPointerPress_mEEC4E3C7CD00F1DDCD3DA98DA5837E71BB8455E3_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// public GameObject rawPointerPress { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___U3CrawPointerPressU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrawPointerPressU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_t37D97D8E7BDC68938191F138BFE31C7BEFCF855E* ExecuteEvents_get_dragHandler_m301F931ED0A78DBF5838822F836FBD221A57C76A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return s_DragHandler; }
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_t37D97D8E7BDC68938191F138BFE31C7BEFCF855E* L_0 = ((ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var))->___s_DragHandler_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventFunction_1_tB9684C6044C44F9A8317A5E5A9A3C1C0376A4678* ExecuteEvents_get_updateSelectedHandler_mB63CDEA5DE1C37F2E0974E9E9679686627E924E6_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return s_UpdateSelectedHandler; }
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_tB9684C6044C44F9A8317A5E5A9A3C1C0376A4678* L_0 = ((ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var))->___s_UpdateSelectedHandler_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SenseInput_set_JoystickMovement_m6CDB0C09257C996955958351AA56484C647B6D12_inline (SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CJoystickMovementU3Ek__BackingField_25 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SenseInput_get_JoystickMovement_m60AB63CAF82340714C75691722FB331B1787B98B_inline (SenseInput_t69DFA938BEB5303D8776C3A1BDF001B6A79C2DA8* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CJoystickMovementU3Ek__BackingField_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___euler0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_m017722BD53BAE32893C2A1B674746E340D4A5B89_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		float L_0;
		L_0 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		V_0 = L_0;
		V_1 = (std::numeric_limits<float>::infinity());
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___current0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___target1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = ___currentVelocity2;
		float L_4 = ___smoothTime3;
		float L_5 = V_1;
		float L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_SmoothDamp_mA20AB2E3DFAE680D742E9A17D969AF8A3E849711(L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		V_2 = L_7;
		goto IL_001b;
	}

IL_001b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m9B2C77284AEE6F2C43B6C42F1F888FB4FC904462(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m864320DA2D027C186C95B2A5BC2C66B0EB4A6C11(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion_set_eulerAngles_m441C342F21FEFCED9BABED01FA516C97EA424D6E_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_1, NULL);
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TeleportManager_set_TeleportMode_mB75E4BFE990FAFCE7D1834AEF41846FCB9321408_inline (TeleportManager_tAD810B203280055ABDE0A44548E696080148F3BE* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CTeleportModeU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a1;
		float L_1 = L_0.___x_2;
		float L_2 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a1;
		float L_4 = L_3.___y_3;
		float L_5 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a1;
		float L_7 = L_6.___z_4;
		float L_8 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Image_get_fillAmount_mDEE52490D07124E21E7CB36718A5E3714D8B9788_inline (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) 
{
	{
		// public float fillAmount { get { return m_FillAmount; } set { if (SetPropertyUtility.SetStruct(ref m_FillAmount, Mathf.Clamp01(value))) SetVerticesDirty(); } }
		float L_0 = __this->___m_FillAmount_43;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SenseEventDelegate_Invoke_m716A86E11F18D88768A1F535DF2BD764E581643A_inline (SenseEventDelegate_t1E302173DF0BC28D2DFBB1DCDFA4BE81FA1C9A5C* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___args0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m88ECE219176F771E4C5F913CC01FFCF91E93E3D0_gshared_inline (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7* L_3 = (RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) 
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = V_0;
		int32_t L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_8);
		return;
	}

IL_0034:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___item0;
		((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		float L_0;
		L_0 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(__this, NULL);
		V_0 = L_0;
		float L_1 = V_0;
		V_1 = (bool)((((float)L_1) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this);
		float L_4 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline(L_3, L_4, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_5;
		goto IL_0033;
	}

IL_0028:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_6;
	}

IL_0033:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mBF0FA0B529C821F4733DDC3AD366B07CD27625F4_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_8 = V_0;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
