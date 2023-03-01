﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>
struct BaseDataProvider_1_t1C7B9F1707FEB27659F53B230E0A18282D2F7F20;
// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>
struct BaseDataProvider_1_t8DC280A360428C68343AA5D6B95788F4A050196F;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32>
struct Dictionary_2_t924EC80B88AF529C31B6BD658C27711A7B2B2A5E;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController>
struct Dictionary_2_t7CD1EB186E13B5D76F6E39D033C5A0CD1A2A5659;
// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>
struct HashSet_1_tA6A38ACBB9B75A13510D4F82BD093B367BE4666E;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>
struct IEqualityComparer_1_t1539A49033C3F5A4026435640F020A586A4589F5;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController>
struct KeyCollection_tE794D6DD1B21B8F7F22ED237E5E52CE02DC50C87;
// System.Collections.Generic.List`1<System.Globalization.CultureInfo>
struct List_1_t028175274CA6F0D62F67AD5DB91A85569618614C;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController>
struct List_1_t9CC4FEF58341CCE10DACB77CEBF836E20E4B3647;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController>
struct ValueCollection_tB296124607AD0E5448E6B9010FCA8DCA56C330EA;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController>[]
struct EntryU5BU5D_t661D7AB2C7445EFBB9C8EAD4DE4F9BA7A240B62F;
// System.Collections.Generic.HashSet`1/Slot<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>[]
struct SlotU5BU5D_t5352D3708E20A120FCB9C071207F940FB2F2C004;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping[]
struct MixedRealityGestureMappingU5BU5D_tB7FAD6CC01C36F0760A6CAB2D7007CDFAF672712;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputDataProviderConfiguration[]
struct MixedRealityInputDataProviderConfigurationU5BU5D_t8B3C13A4246B24C47CDDA641B8F49FB4DE9B7CFA;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[]
struct MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMappingLegacyInput[]
struct MixedRealityInteractionMappingLegacyInputU5BU5D_tA5355B0D239C6D459111AC8A8D465B3200F4C3EF;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Touch[]
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3;
// Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController[]
struct UnityTouchControllerU5BU5D_t21C5ADD15D54D5FECC73542ACD6D8B9AE0C6F7FA;
// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager/PointerConfig[]
struct PointerConfigU5BU5D_tB0CE3BD4887D9B9BFC82FC1CA265B076BFD7B59F;
// Microsoft.MixedReality.Toolkit.Input.BaseController
struct BaseController_t1635F01D9B5000C345FAF98BAEEA495E97C32274;
// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager
struct BaseInputDeviceManager_t1D055DB03D88FA053C00671FEA5040B944CC26BC;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4;
// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_tB7EC5C0F60DC5EE2DA122A608226D3887B6421D0;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// Microsoft.MixedReality.Toolkit.Input.UnityInput.GenericJoystickController
struct GenericJoystickController_t973A6C1908E4F5C9D15B9448798CFF811C3B9A90;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer
struct IMixedRealityControllerVisualizer_t7B6B8F308ED8917976841E02F1525D6B7E478F7B;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_t9926A91DEC380AA837347E82976F5A6A9F9226C2;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition
struct IMixedRealityInputSourceDefinition_tE7BF76E1A2D7019ADB64FA561FB5D5DC1965E835;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer
struct IMixedRealityPointer_t6B17FD29F171D88877AB2EF9C59FEBB65ED6E446;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t4B893B7CDAAC977211D826D02C8522ECA327D715;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerMappingProfile
struct MixedRealityControllerMappingProfile_t7E9B2BF53DF6191DD3DB689D246847604330F3E2;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile
struct MixedRealityControllerVisualizationProfile_tF79D7E954FC4027FC6F5F9998B3A34729693ACB7;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile
struct MixedRealityGesturesProfile_t00CFAF0AF21B9B7DE975DB4EDF437FE662907019;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile
struct MixedRealityHandTrackingProfile_t24C5EDD14DE0DD2166015153F44239ECA6A1BE68;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionRulesProfile
struct MixedRealityInputActionRulesProfile_t888133FFA0621F8870D085E3130D73009DEA703F;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionsProfile
struct MixedRealityInputActionsProfile_t844541888EA292986A1986A7EE6386100808A9A2;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile
struct MixedRealityInputSystemProfile_t43E2FD730113CD773A9FDF6E6829519817478260;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerProfile
struct MixedRealityPointerProfile_t041A32832B10290649DBB45A90A451871910C6EE;
// Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile
struct MixedRealitySpeechCommandsProfile_t762A7C70B8B0C45954FDE49E40723CB28FA0907E;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.String
struct String_t;
// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct SystemType_t9C9A555B60497C18297AD1082247C2960A7B666E;
// Microsoft.MixedReality.Toolkit.Input.TouchScreenDefinition
struct TouchScreenDefinition_tB17BCF193F09C11A6F76275A8393C6CCABD451C2;
// Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController
struct UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013;
// Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchDeviceManager
struct UnityTouchDeviceManager_t862703BF437FF8A31556F69FBD68FF0248FBF925;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Microsoft.MixedReality.Toolkit.Input.UnityInput.XboxController
struct XboxController_t48DD56471B2420C49C7E36D67E73D20D8ECC72B1;
// Microsoft.MixedReality.Toolkit.Input.XboxControllerDefinition
struct XboxControllerDefinition_t25A5573F5D1F3D81A713BF6732C51AC6EEF53851;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;

IL2CPP_EXTERN_C RuntimeClass* BaseInputDeviceManager_t1D055DB03D88FA053C00671FEA5040B944CC26BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t7CD1EB186E13B5D76F6E39D033C5A0CD1A2A5659_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GenericJoystickController_t973A6C1908E4F5C9D15B9448798CFF811C3B9A90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityController_t8BF4741E7DBA358A1DB46E1DD9EF33C9CDEB8BFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityEventSource_t9E9DFD08DEE578702833FF502590A1E0476E59E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSource_t9926A91DEC380AA837347E82976F5A6A9F9226C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityPointer_t6B17FD29F171D88877AB2EF9C59FEBB65ED6E446_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityTouchPointer_tE0FE8957BA2D11207816961004C2CA8B81C2F5DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t9CC4FEF58341CCE10DACB77CEBF836E20E4B3647_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityInteractionMappingLegacyInputU5BU5D_tA5355B0D239C6D459111AC8A8D465B3200F4C3EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TouchScreenDefinition_tB17BCF193F09C11A6F76275A8393C6CCABD451C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityTouchDeviceManager_t862703BF437FF8A31556F69FBD68FF0248FBF925_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XboxControllerDefinition_t25A5573F5D1F3D81A713BF6732C51AC6EEF53851_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral04C7B50A3300CD0BA41A7D285650A2E75834169E;
IL2CPP_EXTERN_C String_t* _stringLiteral0CEA6BCEC90EDEFF96BDF8B9DFA3B15F88F92618;
IL2CPP_EXTERN_C String_t* _stringLiteral240F44D464CCC3E12D4D7AFDEC32B325BE29C87E;
IL2CPP_EXTERN_C String_t* _stringLiteral4D899EE9A99EE6B79B8715C4A8A17FC7E4C28DF9;
IL2CPP_EXTERN_C String_t* _stringLiteral4F59A907CA0E469899F0A752CE8865A082A11FCD;
IL2CPP_EXTERN_C String_t* _stringLiteral5A01D588B9C69138B51D8C228C7E6DF943913B44;
IL2CPP_EXTERN_C String_t* _stringLiteral6563818E4ABB744DF1C941B94BBE294F70A47042;
IL2CPP_EXTERN_C String_t* _stringLiteral7C854BA33FD2DC8ECA4532462C6C3BEBD01C42F4;
IL2CPP_EXTERN_C String_t* _stringLiteral801EACC9B8E831EA7D1A22ACE229E2222275490E;
IL2CPP_EXTERN_C String_t* _stringLiteral8E719678A0C6088F0DAF18FCE81FA5FB5D8AD4B2;
IL2CPP_EXTERN_C String_t* _stringLiteralBF8B574011A5AA65C13AB5BA38E67624D92741B6;
IL2CPP_EXTERN_C String_t* _stringLiteralC527D8933A29287B8D3C1EEF0C895DD35760EE27;
IL2CPP_EXTERN_C String_t* _stringLiteralD1C4A80C90449117887C3EFE0E5C9259A8AB441C;
IL2CPP_EXTERN_C String_t* _stringLiteralD605EF663B0E805D20EA905924A5BAB1060B65CE;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE706F4FB75F94F6CF18BF52AD26A43FD03E6C270;
IL2CPP_EXTERN_C String_t* _stringLiteralF05C49E0C609B7E5841C64A63E243F74F1CB4327;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProvider_1_get_Service_m886AE537D966101848DD8F8D348F366C71253B3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProvider_1_set_Registrar_mA370F1A7CB1E5689906DAC10776EC5F4821A3EFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC288B078F91986E705727939A2EAE0B3A6B56623_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m449D6FB13E51E487FB450B24A07846D745E9F001_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m2E8FC157538E93BBBDBDCC3ECFBCEB23B63C3D22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m76399CAD6C393B8D39ABFC83E392C1047620E4C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mD8FB0005B943D09AD2EC4FBA3CBD0CA49CCB7443_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m42C586A94890C3EF834AACAB282182ABA986632C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m1A01CF7AAEACC56D097C973FB27BA1DE1ECA19D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m3AE8AB64B31129A28D2FAB496E4CCBF22576E00C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m21E1D723A4EA1A8A474BEB11090E58DA5DA00517_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m58F01378ECC3DD6D19EAE44971AF84ABAF720CBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6F159853C1A8DAA77838EAFF7F6FD59EF3CA5900_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mD6F90CCD398A75E7350E649489014B3E2DEE2F45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_GetEnumerator_m7F521399752E6007B0B4EA60CB82D580C158A8B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m082BAC2BE14CFA3CE8735241B7E2DE2294B6603A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m8E4044843BE3B33D0739844AB9ABDC6F372B222D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m397BF703CED31925F3BAA65555857486FFF74C5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m392698326ECD6E3496A93B576216BFD8CFB72875_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m5BE1E4EF76832AA0C626FCBE458B3EACBB8D01F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m081F12A624E259002EB2425F60894D8419F6A040_RuntimeMethod_var;

struct IMixedRealityPointerU5BU5D_t122E67DFE2F5B082397D95C08F6AA94DE36F86A4;
struct MixedRealityGestureMappingU5BU5D_tB7FAD6CC01C36F0760A6CAB2D7007CDFAF672712;
struct MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE;
struct MixedRealityInteractionMappingLegacyInputU5BU5D_tA5355B0D239C6D459111AC8A8D465B3200F4C3EF;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController>
struct Dictionary_2_t7CD1EB186E13B5D76F6E39D033C5A0CD1A2A5659  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t661D7AB2C7445EFBB9C8EAD4DE4F9BA7A240B62F* ____entries_1;
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
	KeyCollection_tE794D6DD1B21B8F7F22ED237E5E52CE02DC50C87* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tB296124607AD0E5448E6B9010FCA8DCA56C330EA* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>
struct HashSet_1_tA6A38ACBB9B75A13510D4F82BD093B367BE4666E  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t5352D3708E20A120FCB9C071207F940FB2F2C004* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
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

// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController>
struct List_1_t9CC4FEF58341CCE10DACB77CEBF836E20E4B3647  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	UnityTouchControllerU5BU5D_t21C5ADD15D54D5FECC73542ACD6D8B9AE0C6F7FA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t9CC4FEF58341CCE10DACB77CEBF836E20E4B3647_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	UnityTouchControllerU5BU5D_t21C5ADD15D54D5FECC73542ACD6D8B9AE0C6F7FA* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// Microsoft.MixedReality.Toolkit.Input.BaseInputSourceDefinition
struct BaseInputSourceDefinition_t3C7E26E809069FB4D48181384861DEC5E2EA36DB  : public RuntimeObject
{
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.BaseInputSourceDefinition::<Handedness>k__BackingField
	uint8_t ___U3CHandednessU3Ek__BackingField_0;
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

// System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>
struct Enumerator_t863CF828B16CEE7D2D01E274F8E32DE140606E80 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_tA6A38ACBB9B75A13510D4F82BD093B367BE4666E* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
struct Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController>
struct KeyValuePair_2_t0EBAF7326F68F908F9523652CE68FEEFA5DD9CC1 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* ___value_1;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
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

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
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

// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 
{
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;
};

struct MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486_StaticFields
{
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 ___U3CNoneU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
};

// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMappingLegacyInput
struct MixedRealityInteractionMappingLegacyInput_tE9D2E40C94F2819FF0AEF36AC79AEA37EEC3E8C6 
{
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMappingLegacyInput::<KeyCode>k__BackingField
	int32_t ___U3CKeyCodeU3Ek__BackingField_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMappingLegacyInput::<AxisCodeX>k__BackingField
	String_t* ___U3CAxisCodeXU3Ek__BackingField_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMappingLegacyInput::<AxisCodeY>k__BackingField
	String_t* ___U3CAxisCodeYU3Ek__BackingField_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMappingLegacyInput::<InvertXAxis>k__BackingField
	bool ___U3CInvertXAxisU3Ek__BackingField_3;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMappingLegacyInput::<InvertYAxis>k__BackingField
	bool ___U3CInvertYAxisU3Ek__BackingField_4;
};
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMappingLegacyInput
struct MixedRealityInteractionMappingLegacyInput_tE9D2E40C94F2819FF0AEF36AC79AEA37EEC3E8C6_marshaled_pinvoke
{
	int32_t ___U3CKeyCodeU3Ek__BackingField_0;
	char* ___U3CAxisCodeXU3Ek__BackingField_1;
	char* ___U3CAxisCodeYU3Ek__BackingField_2;
	int32_t ___U3CInvertXAxisU3Ek__BackingField_3;
	int32_t ___U3CInvertYAxisU3Ek__BackingField_4;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMappingLegacyInput
struct MixedRealityInteractionMappingLegacyInput_tE9D2E40C94F2819FF0AEF36AC79AEA37EEC3E8C6_marshaled_com
{
	int32_t ___U3CKeyCodeU3Ek__BackingField_0;
	Il2CppChar* ___U3CAxisCodeXU3Ek__BackingField_1;
	Il2CppChar* ___U3CAxisCodeYU3Ek__BackingField_2;
	int32_t ___U3CInvertXAxisU3Ek__BackingField_3;
	int32_t ___U3CInvertYAxisU3Ek__BackingField_4;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// Microsoft.MixedReality.Toolkit.Input.TouchScreenDefinition
struct TouchScreenDefinition_tB17BCF193F09C11A6F76275A8393C6CCABD451C2  : public BaseInputSourceDefinition_t3C7E26E809069FB4D48181384861DEC5E2EA36DB
{
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// Microsoft.MixedReality.Toolkit.Input.XboxControllerDefinition
struct XboxControllerDefinition_t25A5573F5D1F3D81A713BF6732C51AC6EEF53851  : public BaseInputSourceDefinition_t3C7E26E809069FB4D48181384861DEC5E2EA36DB
{
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=100
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D100_t942D7E36E3FA5FC5202F32A1D1B5FCDB7A5C5432 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D100_t942D7E36E3FA5FC5202F32A1D1B5FCDB7A5C5432__padding[100];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=116
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D116_tB8D6B1A3F19DB7FAF303341740D31F6D119358D6 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D116_tB8D6B1A3F19DB7FAF303341740D31F6D119358D6__padding[116];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D128_t39EB4776048FC367F8813BC67040B19266478EF2 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_t39EB4776048FC367F8813BC67040B19266478EF2__padding[128];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=200
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D200_t4DB3C08538D1CACC4E58C94DC42C4D01356387B4 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D200_t4DB3C08538D1CACC4E58C94DC42C4D01356387B4__padding[200];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2048
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D2048_t2713C6E235D67364D35C73D0BD3250A5A81799B2 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2048_t2713C6E235D67364D35C73D0BD3250A5A81799B2__padding[2048];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D36_t883D0DA32324FB23DF3CD299F613C1988522BE7B 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D36_t883D0DA32324FB23DF3CD299F613C1988522BE7B__padding[36];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D40_t09764879D221D2A724414C49B27F48BC74E9F563 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D40_t09764879D221D2A724414C49B27F48BC74E9F563__padding[40];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=4480
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D4480_t719907177F9DBBD17FB37A5665323D9060A32805 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D4480_t719907177F9DBBD17FB37A5665323D9060A32805__padding[4480];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D48_tB35C554000A7A46339DFA53481EB76E8C344EFF5 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D48_tB35C554000A7A46339DFA53481EB76E8C344EFF5__padding[48];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=5120
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D5120_tC8C1FF40A6ADC5913171945BD0B45FB66ACED933 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D5120_tC8C1FF40A6ADC5913171945BD0B45FB66ACED933__padding[5120];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=576
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D576_t065555E741C68D0F6AD0E15B9426919B313225E0 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D576_t065555E741C68D0F6AD0E15B9426919B313225E0__padding[576];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D64_t9F1EBEB9F3039A04B3E0D29893691543BE27013A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D64_t9F1EBEB9F3039A04B3E0D29893691543BE27013A__padding[64];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=864
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D864_t9E3A0540A0D84BF9FE806A7913CE98584E8C926F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D864_t9E3A0540A0D84BF9FE806A7913CE98584E8C926F__padding[864];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D96_tC5AB142BC856350C8BED251B674527CF1976CBEF 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D96_tC5AB142BC856350C8BED251B674527CF1976CBEF__padding[96];
	};
};
#pragma pack(pop, tp)

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController>
struct Enumerator_t177EAF41C12F2014CF3660F92330858544D2E0EA 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t7CD1EB186E13B5D76F6E39D033C5A0CD1A2A5659* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t0EBAF7326F68F908F9523652CE68FEEFA5DD9CC1 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t80B8093CDE06DB3F26AAE0743C16402220EE2E9E  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t80B8093CDE06DB3F26AAE0743C16402220EE2E9E_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=5120 <PrivateImplementationDetails>::166ED64AD55DA1373758C8365D71D3115CFA2C21A6904B055D68F4E7CBE12122
	__StaticArrayInitTypeSizeU3D5120_tC8C1FF40A6ADC5913171945BD0B45FB66ACED933 ___166ED64AD55DA1373758C8365D71D3115CFA2C21A6904B055D68F4E7CBE12122_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::19431BCEA58601E38F5D80999B735D529CA7EC294A8A3CC463E90E8BBBFB7199
	__StaticArrayInitTypeSizeU3D128_t39EB4776048FC367F8813BC67040B19266478EF2 ___19431BCEA58601E38F5D80999B735D529CA7EC294A8A3CC463E90E8BBBFB7199_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::1A7C8DC3280280AAB4B04657941E2261F8BD452F79F430A07BD1B4C14BA58B93
	__StaticArrayInitTypeSizeU3D64_t9F1EBEB9F3039A04B3E0D29893691543BE27013A ___1A7C8DC3280280AAB4B04657941E2261F8BD452F79F430A07BD1B4C14BA58B93_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96 <PrivateImplementationDetails>::312BC4C7256E0CB735D462954C5B8110B7D71835B0827B68B9BA013556A4EC48
	__StaticArrayInitTypeSizeU3D96_tC5AB142BC856350C8BED251B674527CF1976CBEF ___312BC4C7256E0CB735D462954C5B8110B7D71835B0827B68B9BA013556A4EC48_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=576 <PrivateImplementationDetails>::31B73E648689B9DD93B0B426840C27135F65D125AEEC68D7D078ADEB6304D324
	__StaticArrayInitTypeSizeU3D576_t065555E741C68D0F6AD0E15B9426919B313225E0 ___31B73E648689B9DD93B0B426840C27135F65D125AEEC68D7D078ADEB6304D324_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96 <PrivateImplementationDetails>::3981A8B4D7B4688FAE246263B44512D1738F5ED4B868734FA3A4C30AECAF57B2
	__StaticArrayInitTypeSizeU3D96_tC5AB142BC856350C8BED251B674527CF1976CBEF ___3981A8B4D7B4688FAE246263B44512D1738F5ED4B868734FA3A4C30AECAF57B2_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=200 <PrivateImplementationDetails>::414690C1EDD43034229489AB29A3D8E2D41AE89F59F905D0BB52A3E125774EAA
	__StaticArrayInitTypeSizeU3D200_t4DB3C08538D1CACC4E58C94DC42C4D01356387B4 ___414690C1EDD43034229489AB29A3D8E2D41AE89F59F905D0BB52A3E125774EAA_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::4C7E2B6EF6530C5F9B191FEEAF9D0EE86308E7EC2C3691CA0F528B8A4BB26510
	__StaticArrayInitTypeSizeU3D36_t883D0DA32324FB23DF3CD299F613C1988522BE7B ___4C7E2B6EF6530C5F9B191FEEAF9D0EE86308E7EC2C3691CA0F528B8A4BB26510_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96 <PrivateImplementationDetails>::577BB66DB352A52651963484243DD20947F8819D4C6589BA449C17677806F41B
	__StaticArrayInitTypeSizeU3D96_tC5AB142BC856350C8BED251B674527CF1976CBEF ___577BB66DB352A52651963484243DD20947F8819D4C6589BA449C17677806F41B_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=864 <PrivateImplementationDetails>::60B965BB65E9656B7C430E76BFD1B84A57AA38A0D55D973D942479D398FA4B61
	__StaticArrayInitTypeSizeU3D864_t9E3A0540A0D84BF9FE806A7913CE98584E8C926F ___60B965BB65E9656B7C430E76BFD1B84A57AA38A0D55D973D942479D398FA4B61_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::6BE2711CE0EEE34B5775EC04919652D5C220834E0553C3CE9D9202604E9B5A3A
	__StaticArrayInitTypeSizeU3D40_t09764879D221D2A724414C49B27F48BC74E9F563 ___6BE2711CE0EEE34B5775EC04919652D5C220834E0553C3CE9D9202604E9B5A3A_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=4480 <PrivateImplementationDetails>::74B0FE229390D9CCB2FB31CA5E2117E1C1CC74BBA9CB5E9C81EBEEF5DBA28B6C
	__StaticArrayInitTypeSizeU3D4480_t719907177F9DBBD17FB37A5665323D9060A32805 ___74B0FE229390D9CCB2FB31CA5E2117E1C1CC74BBA9CB5E9C81EBEEF5DBA28B6C_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96 <PrivateImplementationDetails>::7815BB712A6D8F7E2BFE959EC3578A069089E0C5B5A63CCDFAA953980B215B3E
	__StaticArrayInitTypeSizeU3D96_tC5AB142BC856350C8BED251B674527CF1976CBEF ___7815BB712A6D8F7E2BFE959EC3578A069089E0C5B5A63CCDFAA953980B215B3E_12;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2048 <PrivateImplementationDetails>::903088B3ED84F3BC399E07866758BC1B0D48B07E259D87A04F62053B060DA9CD
	__StaticArrayInitTypeSizeU3D2048_t2713C6E235D67364D35C73D0BD3250A5A81799B2 ___903088B3ED84F3BC399E07866758BC1B0D48B07E259D87A04F62053B060DA9CD_13;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=100 <PrivateImplementationDetails>::94B32A0DD54D0AA9D39E3C1A06690550136C23DA388E8F92B1FB04644A854E0C
	__StaticArrayInitTypeSizeU3D100_t942D7E36E3FA5FC5202F32A1D1B5FCDB7A5C5432 ___94B32A0DD54D0AA9D39E3C1A06690550136C23DA388E8F92B1FB04644A854E0C_14;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=116 <PrivateImplementationDetails>::94C001844276A4E0B417054115A72DA8D74AFE9AADF53691F8C4C7D2CC6010A9
	__StaticArrayInitTypeSizeU3D116_tB8D6B1A3F19DB7FAF303341740D31F6D119358D6 ___94C001844276A4E0B417054115A72DA8D74AFE9AADF53691F8C4C7D2CC6010A9_15;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=100 <PrivateImplementationDetails>::A0F2B0EA91FC933B70E6B34E8A86F82FFB029DE52E4E48B264F08511F3196BEF
	__StaticArrayInitTypeSizeU3D100_t942D7E36E3FA5FC5202F32A1D1B5FCDB7A5C5432 ___A0F2B0EA91FC933B70E6B34E8A86F82FFB029DE52E4E48B264F08511F3196BEF_16;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::B94D26CC74B3661C2F35A8D65F830F186E288414B1D13F5C0D78A6F6FDF0D88C
	__StaticArrayInitTypeSizeU3D36_t883D0DA32324FB23DF3CD299F613C1988522BE7B ___B94D26CC74B3661C2F35A8D65F830F186E288414B1D13F5C0D78A6F6FDF0D88C_17;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=576 <PrivateImplementationDetails>::CAE6939691EE17FA45FEAE4A731F612ED2C6DCC7CD35D1F0BE9E486FD960C9C9
	__StaticArrayInitTypeSizeU3D576_t065555E741C68D0F6AD0E15B9426919B313225E0 ___CAE6939691EE17FA45FEAE4A731F612ED2C6DCC7CD35D1F0BE9E486FD960C9C9_18;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::D10E3D59BD6AD5CB4BCB53B1A015C024866004634D836A94ABBBD127B2D2BF34
	__StaticArrayInitTypeSizeU3D64_t9F1EBEB9F3039A04B3E0D29893691543BE27013A ___D10E3D59BD6AD5CB4BCB53B1A015C024866004634D836A94ABBBD127B2D2BF34_19;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=200 <PrivateImplementationDetails>::DFF88A40C6B25DC78B9940DEE88C8ACE92C192949231288E657194DE5C41591C
	__StaticArrayInitTypeSizeU3D200_t4DB3C08538D1CACC4E58C94DC42C4D01356387B4 ___DFF88A40C6B25DC78B9940DEE88C8ACE92C192949231288E657194DE5C41591C_20;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::F7976EDBEC20C2EDD79E46C76B7ECF1F269D60662E7F3FC1D971A7434B9CABC8
	__StaticArrayInitTypeSizeU3D48_tB35C554000A7A46339DFA53481EB76E8C344EFF5 ___F7976EDBEC20C2EDD79E46C76B7ECF1F269D60662E7F3FC1D971A7434B9CABC8_21;
};

// Microsoft.MixedReality.Toolkit.Input.BaseController
struct BaseController_t1635F01D9B5000C345FAF98BAEEA495E97C32274  : public RuntimeObject
{
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition Microsoft.MixedReality.Toolkit.Input.BaseController::<Definition>k__BackingField
	RuntimeObject* ___U3CDefinitionU3Ek__BackingField_0;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<Enabled>k__BackingField
	bool ___U3CEnabledU3Ek__BackingField_1;
	// Microsoft.MixedReality.Toolkit.TrackingState Microsoft.MixedReality.Toolkit.Input.BaseController::<TrackingState>k__BackingField
	int32_t ___U3CTrackingStateU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.BaseController::<ControllerHandedness>k__BackingField
	uint8_t ___U3CControllerHandednessU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseController::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_4;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer Microsoft.MixedReality.Toolkit.Input.BaseController::<Visualizer>k__BackingField
	RuntimeObject* ___U3CVisualizerU3Ek__BackingField_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsPositionAvailable>k__BackingField
	bool ___U3CIsPositionAvailableU3Ek__BackingField_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsPositionApproximate>k__BackingField
	bool ___U3CIsPositionApproximateU3Ek__BackingField_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsRotationAvailable>k__BackingField
	bool ___U3CIsRotationAvailableU3Ek__BackingField_8;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::<Interactions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* ___U3CInteractionsU3Ek__BackingField_9;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.BaseController::<AngularVelocity>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CAngularVelocityU3Ek__BackingField_10;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.BaseController::<Velocity>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CVelocityU3Ek__BackingField_11;
};

// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_tB7EC5C0F60DC5EE2DA122A608226D3887B6421D0  : public RuntimeObject
{
	// System.String Microsoft.MixedReality.Toolkit.BaseService::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.BaseService::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::<ConfigurationProfile>k__BackingField
	BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* ___U3CConfigurationProfileU3Ek__BackingField_3;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isInitialized
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___isInitialized_4;
	// System.String[] Microsoft.MixedReality.Toolkit.BaseService::typeName
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___typeName_5;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isEnabled
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___isEnabled_9;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isMarkedDestroyed
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___isMarkedDestroyed_10;
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseService::disposed
	bool ___disposed_11;
};

// Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping
struct MixedRealityGestureMapping_t8C36E224B111021D8F4DA1C9B54A2815F28AA22E 
{
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping::description
	String_t* ___description_0;
	// Microsoft.MixedReality.Toolkit.Input.GestureInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping::gestureType
	int32_t ___gestureType_1;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping::action
	MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 ___action_2;
};
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping
struct MixedRealityGestureMapping_t8C36E224B111021D8F4DA1C9B54A2815F28AA22E_marshaled_pinvoke
{
	char* ___description_0;
	int32_t ___gestureType_1;
	MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486_marshaled_pinvoke ___action_2;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping
struct MixedRealityGestureMapping_t8C36E224B111021D8F4DA1C9B54A2815F28AA22E_marshaled_com
{
	Il2CppChar* ___description_0;
	int32_t ___gestureType_1;
	MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486_marshaled_com ___action_2;
};

// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose
struct MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 
{
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_1;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_2;
};

struct MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5_StaticFields
{
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::<ZeroIdentity>k__BackingField
	MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 ___U3CZeroIdentityU3Ek__BackingField_0;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// Unity.Profiling.ProfilerMarker/AutoScope
struct AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker/AutoScope::m_Ptr
	intptr_t ___m_Ptr_0;
};

// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>
struct BaseDataProvider_1_t1C7B9F1707FEB27659F53B230E0A18282D2F7F20  : public BaseService_tB7EC5C0F60DC5EE2DA122A608226D3887B6421D0
{
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_12;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_13;
};

// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>
struct BaseDataProvider_1_t8DC280A360428C68343AA5D6B95788F4A050196F  : public BaseService_tB7EC5C0F60DC5EE2DA122A608226D3887B6421D0
{
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_12;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_13;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Microsoft.MixedReality.Toolkit.Input.UnityInput.GenericJoystickController
struct GenericJoystickController_t973A6C1908E4F5C9D15B9448798CFF811C3B9A90  : public BaseController_t1635F01D9B5000C345FAF98BAEEA495E97C32274
{
	// System.Single Microsoft.MixedReality.Toolkit.Input.UnityInput.GenericJoystickController::<PointerOffsetAngle>k__BackingField
	float ___U3CPointerOffsetAngleU3Ek__BackingField_12;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.UnityInput.GenericJoystickController::dualAxisPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___dualAxisPosition_13;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.UnityInput.GenericJoystickController::pointerOffsetPose
	MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 ___pointerOffsetPose_14;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.UnityInput.GenericJoystickController::CurrentControllerPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___CurrentControllerPosition_15;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.UnityInput.GenericJoystickController::CurrentControllerRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___CurrentControllerRotation_16;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.UnityInput.GenericJoystickController::LastControllerPose
	MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 ___LastControllerPose_17;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.UnityInput.GenericJoystickController::CurrentControllerPose
	MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 ___CurrentControllerPose_18;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMappingLegacyInput[] Microsoft.MixedReality.Toolkit.Input.UnityInput.GenericJoystickController::<LegacyInputSupport>k__BackingField
	MixedRealityInteractionMappingLegacyInputU5BU5D_tA5355B0D239C6D459111AC8A8D465B3200F4C3EF* ___U3CLegacyInputSupportU3Ek__BackingField_19;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMappingLegacyInput[] Microsoft.MixedReality.Toolkit.Input.UnityInput.GenericJoystickController::<LeftHandedLegacyInputSupport>k__BackingField
	MixedRealityInteractionMappingLegacyInputU5BU5D_tA5355B0D239C6D459111AC8A8D465B3200F4C3EF* ___U3CLeftHandedLegacyInputSupportU3Ek__BackingField_20;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMappingLegacyInput[] Microsoft.MixedReality.Toolkit.Input.UnityInput.GenericJoystickController::<RightHandedLegacyInputSupport>k__BackingField
	MixedRealityInteractionMappingLegacyInputU5BU5D_tA5355B0D239C6D459111AC8A8D465B3200F4C3EF* ___U3CRightHandedLegacyInputSupportU3Ek__BackingField_21;
};

struct GenericJoystickController_t973A6C1908E4F5C9D15B9448798CFF811C3B9A90_StaticFields
{
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.UnityInput.GenericJoystickController::UpdateControllerPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdateControllerPerfMarker_22;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.UnityInput.GenericJoystickController::UpdateButtonDataPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdateButtonDataPerfMarker_23;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.UnityInput.GenericJoystickController::UpdateSingleAxisDataPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdateSingleAxisDataPerfMarker_24;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.UnityInput.GenericJoystickController::UpdateDualAxisDataPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdateDualAxisDataPerfMarker_25;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.UnityInput.GenericJoystickController::UpdatePoseDataPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdatePoseDataPerfMarker_26;
};

// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0  : public RuntimeObject
{
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::id
	uint32_t ___id_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::description
	String_t* ___description_1;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisType
	int32_t ___axisType_2;
	// Microsoft.MixedReality.Toolkit.Input.DeviceInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::inputType
	int32_t ___inputType_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::inputAction
	MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 ___inputAction_4;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::keyCode
	int32_t ___keyCode_5;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisCodeX
	String_t* ___axisCodeX_6;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisCodeY
	String_t* ___axisCodeY_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::invertXAxis
	bool ___invertXAxis_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::invertYAxis
	bool ___invertYAxis_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::changed
	bool ___changed_10;
	// System.Object Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::rawData
	RuntimeObject* ___rawData_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::boolData
	bool ___boolData_12;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::floatData
	float ___floatData_13;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::vector2Data
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___vector2Data_14;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::positionData
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positionData_15;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::rotationData
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotationData_16;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::poseData
	MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 ___poseData_17;
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

// Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController
struct UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013  : public BaseController_t1635F01D9B5000C345FAF98BAEEA495E97C32274
{
	// System.Single Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController::<MaxTapContactTime>k__BackingField
	float ___U3CMaxTapContactTimeU3Ek__BackingField_12;
	// System.Single Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController::<ManipulationThreshold>k__BackingField
	float ___U3CManipulationThresholdU3Ek__BackingField_13;
	// UnityEngine.Touch Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController::<TouchData>k__BackingField
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 ___U3CTouchDataU3Ek__BackingField_14;
	// UnityEngine.Ray Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController::<ScreenPointRay>k__BackingField
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___U3CScreenPointRayU3Ek__BackingField_15;
	// System.Single Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController::<Lifetime>k__BackingField
	float ___U3CLifetimeU3Ek__BackingField_16;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController::isTouched
	bool ___isTouched_17;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController::holdingAction
	MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 ___holdingAction_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController::isHolding
	bool ___isHolding_19;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController::manipulationAction
	MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 ___manipulationAction_20;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController::isManipulating
	bool ___isManipulating_21;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController::lastPose
	MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 ___lastPose_22;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController::isNewController
	bool ___isNewController_23;
};

struct UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013_StaticFields
{
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController::UpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdatePerfMarker_24;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController::EndTouchPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___EndTouchPerfMarker_25;
};

// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager
struct BaseInputDeviceManager_t1D055DB03D88FA053C00671FEA5040B944CC26BC  : public BaseDataProvider_1_t1C7B9F1707FEB27659F53B230E0A18282D2F7F20
{
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::enablePointerCache
	bool ___enablePointerCache_14;
	// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager/PointerConfig[] Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::pointerConfigurations
	PointerConfigU5BU5D_tB0CE3BD4887D9B9BFC82FC1CA265B076BFD7B59F* ___pointerConfigurations_15;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32> Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::activePointersToConfig
	Dictionary_2_t924EC80B88AF529C31B6BD658C27711A7B2B2A5E* ___activePointersToConfig_17;
};

struct BaseInputDeviceManager_t1D055DB03D88FA053C00671FEA5040B944CC26BC_StaticFields
{
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::RequestPointersPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___RequestPointersPerfMarker_16;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::RecyclePointersPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___RecyclePointersPerfMarker_18;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::CreatePointerPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___CreatePointerPerfMarker_19;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::CleanActivePointersPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___CleanActivePointersPerfMarker_20;
};

// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::isCustomProfile
	bool ___isCustomProfile_4;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Microsoft.MixedReality.Toolkit.Input.UnityInput.XboxController
struct XboxController_t48DD56471B2420C49C7E36D67E73D20D8ECC72B1  : public GenericJoystickController_t973A6C1908E4F5C9D15B9448798CFF811C3B9A90
{
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMappingLegacyInput[] Microsoft.MixedReality.Toolkit.Input.UnityInput.XboxController::<LegacyInputSupport>k__BackingField
	MixedRealityInteractionMappingLegacyInputU5BU5D_tA5355B0D239C6D459111AC8A8D465B3200F4C3EF* ___U3CLegacyInputSupportU3Ek__BackingField_27;
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

// Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile
struct MixedRealityGesturesProfile_t00CFAF0AF21B9B7DE975DB4EDF437FE662907019  : public BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4
{
	// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsGestureSettings Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile::manipulationGestures
	int32_t ___manipulationGestures_5;
	// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsGestureSettings Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile::navigationGestures
	int32_t ___navigationGestures_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile::useRailsNavigation
	bool ___useRailsNavigation_7;
	// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsGestureSettings Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile::railsNavigationGestures
	int32_t ___railsNavigationGestures_8;
	// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile::windowsGestureAutoStart
	int32_t ___windowsGestureAutoStart_9;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping[] Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile::gestures
	MixedRealityGestureMappingU5BU5D_tB7FAD6CC01C36F0760A6CAB2D7007CDFAF672712* ___gestures_10;
};

// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile
struct MixedRealityInputSystemProfile_t43E2FD730113CD773A9FDF6E6829519817478260  : public BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4
{
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputDataProviderConfiguration[] Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::dataProviderConfigurations
	MixedRealityInputDataProviderConfigurationU5BU5D_t8B3C13A4246B24C47CDDA641B8F49FB4DE9B7CFA* ___dataProviderConfigurations_5;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::focusProviderType
	SystemType_t9C9A555B60497C18297AD1082247C2960A7B666E* ___focusProviderType_6;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::raycastProviderType
	SystemType_t9C9A555B60497C18297AD1082247C2960A7B666E* ___raycastProviderType_7;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::focusQueryBufferSize
	int32_t ___focusQueryBufferSize_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::shouldUseGraphicsRaycast
	bool ___shouldUseGraphicsRaycast_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::focusIndividualCompoundCollider
	bool ___focusIndividualCompoundCollider_10;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionsProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::inputActionsProfile
	MixedRealityInputActionsProfile_t844541888EA292986A1986A7EE6386100808A9A2* ___inputActionsProfile_11;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionRulesProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::inputActionRulesProfile
	MixedRealityInputActionRulesProfile_t888133FFA0621F8870D085E3130D73009DEA703F* ___inputActionRulesProfile_12;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::pointerProfile
	MixedRealityPointerProfile_t041A32832B10290649DBB45A90A451871910C6EE* ___pointerProfile_13;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::gesturesProfile
	MixedRealityGesturesProfile_t00CFAF0AF21B9B7DE975DB4EDF437FE662907019* ___gesturesProfile_14;
	// System.Collections.Generic.List`1<System.Globalization.CultureInfo> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::supportedVoiceCultures
	List_1_t028175274CA6F0D62F67AD5DB91A85569618614C* ___supportedVoiceCultures_15;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::speechCommandsProfile
	MixedRealitySpeechCommandsProfile_t762A7C70B8B0C45954FDE49E40723CB28FA0907E* ___speechCommandsProfile_16;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::enableControllerMapping
	bool ___enableControllerMapping_17;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerMappingProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::controllerMappingProfile
	MixedRealityControllerMappingProfile_t7E9B2BF53DF6191DD3DB689D246847604330F3E2* ___controllerMappingProfile_18;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::controllerVisualizationProfile
	MixedRealityControllerVisualizationProfile_tF79D7E954FC4027FC6F5F9998B3A34729693ACB7* ___controllerVisualizationProfile_19;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::handTrackingProfile
	MixedRealityHandTrackingProfile_t24C5EDD14DE0DD2166015153F44239ECA6A1BE68* ___handTrackingProfile_20;
};

// Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchDeviceManager
struct UnityTouchDeviceManager_t862703BF437FF8A31556F69FBD68FF0248FBF925  : public BaseInputDeviceManager_t1D055DB03D88FA053C00671FEA5040B944CC26BC
{
	// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController> Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchDeviceManager::ActiveTouches
	Dictionary_2_t7CD1EB186E13B5D76F6E39D033C5A0CD1A2A5659* ___ActiveTouches_21;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController> Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchDeviceManager::touchesToRemove
	List_1_t9CC4FEF58341CCE10DACB77CEBF836E20E4B3647* ___touchesToRemove_22;
};

struct UnityTouchDeviceManager_t862703BF437FF8A31556F69FBD68FF0248FBF925_StaticFields
{
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchDeviceManager::UpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdatePerfMarker_23;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchDeviceManager::AddTouchControllerPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___AddTouchControllerPerfMarker_24;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchDeviceManager::UpdateTouchDataPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdateTouchDataPerfMarker_25;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchDeviceManager::RemoveTouchControllerPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___RemoveTouchControllerPerfMarker_26;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[]
struct MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE  : public RuntimeArray
{
	ALIGN_FIELD (8) MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* m_Items[1];

	inline MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping[]
struct MixedRealityGestureMappingU5BU5D_tB7FAD6CC01C36F0760A6CAB2D7007CDFAF672712  : public RuntimeArray
{
	ALIGN_FIELD (8) MixedRealityGestureMapping_t8C36E224B111021D8F4DA1C9B54A2815F28AA22E m_Items[1];

	inline MixedRealityGestureMapping_t8C36E224B111021D8F4DA1C9B54A2815F28AA22E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealityGestureMapping_t8C36E224B111021D8F4DA1C9B54A2815F28AA22E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealityGestureMapping_t8C36E224B111021D8F4DA1C9B54A2815F28AA22E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___description_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___action_2))->___description_2), (void*)NULL);
		#endif
	}
	inline MixedRealityGestureMapping_t8C36E224B111021D8F4DA1C9B54A2815F28AA22E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealityGestureMapping_t8C36E224B111021D8F4DA1C9B54A2815F28AA22E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealityGestureMapping_t8C36E224B111021D8F4DA1C9B54A2815F28AA22E value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___description_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___action_2))->___description_2), (void*)NULL);
		#endif
	}
};
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[]
struct IMixedRealityPointerU5BU5D_t122E67DFE2F5B082397D95C08F6AA94DE36F86A4  : public RuntimeArray
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
// UnityEngine.Touch[]
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3  : public RuntimeArray
{
	ALIGN_FIELD (8) Touch_t03E51455ED508492B3F278903A0114FA0E87B417 m_Items[1];

	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 value)
	{
		m_Items[index] = value;
	}
};
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMappingLegacyInput[]
struct MixedRealityInteractionMappingLegacyInputU5BU5D_tA5355B0D239C6D459111AC8A8D465B3200F4C3EF  : public RuntimeArray
{
	ALIGN_FIELD (8) MixedRealityInteractionMappingLegacyInput_tE9D2E40C94F2819FF0AEF36AC79AEA37EEC3E8C6 m_Items[1];

	inline MixedRealityInteractionMappingLegacyInput_tE9D2E40C94F2819FF0AEF36AC79AEA37EEC3E8C6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealityInteractionMappingLegacyInput_tE9D2E40C94F2819FF0AEF36AC79AEA37EEC3E8C6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealityInteractionMappingLegacyInput_tE9D2E40C94F2819FF0AEF36AC79AEA37EEC3E8C6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CAxisCodeXU3Ek__BackingField_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CAxisCodeYU3Ek__BackingField_2), (void*)NULL);
		#endif
	}
	inline MixedRealityInteractionMappingLegacyInput_tE9D2E40C94F2819FF0AEF36AC79AEA37EEC3E8C6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealityInteractionMappingLegacyInput_tE9D2E40C94F2819FF0AEF36AC79AEA37EEC3E8C6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealityInteractionMappingLegacyInput_tE9D2E40C94F2819FF0AEF36AC79AEA37EEC3E8C6 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CAxisCodeXU3Ek__BackingField_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CAxisCodeYU3Ek__BackingField_2), (void*)NULL);
		#endif
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


// System.Void Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>::set_Registrar(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseDataProvider_1_set_Registrar_m1A130D1847D364BF3D65E45B6C85965B0637465F_gshared_inline (BaseDataProvider_1_t8DC280A360428C68343AA5D6B95788F4A050196F* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>::get_Service()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseDataProvider_1_get_Service_m9D57380441608DEC9ABF2199EA5585FC967E038F_gshared_inline (BaseDataProvider_1_t8DC280A360428C68343AA5D6B95788F4A050196F* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3 Dictionary_2_GetEnumerator_m3F1620145BA0815B7C7CD648EF054558AA26556A_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mAECCBE12C0427D7ACF88F82FA266F1AE37402565_gshared (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 Enumerator_get_Current_m90160D324DA0D9F5624A345F47D8E226A118911A_gshared_inline (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_gshared_inline (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.HashSet`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m4DC143BC57F14EDD85AB13B6D6F3B5D0E319B30E_gshared (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mE1EFF7C68491EE07D21EE9924475A559BF0A4773_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method) ;

// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_ZeroIdentity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 MixedRealityPose_get_ZeroIdentity_m5F6C0EE34C84272B653BEF09731AC5E219F51EDD_inline (const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.TouchScreenDefinition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchScreenDefinition__ctor_m570F7492361562C859A4EE1303DDAA82F59E71DD (TouchScreenDefinition_tB17BCF193F09C11A6F76275A8393C6CCABD451C2* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseController::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[],Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseController__ctor_m3EFCFBDA83D596AD950970D621DF5EB8B006F2FE (BaseController_t1635F01D9B5000C345FAF98BAEEA495E97C32274* __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* ___interactions3, RuntimeObject* ___definition4, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseController::SetupDefaultInteractions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseController_SetupDefaultInteractions_m1505A2460FAA3D71A86DA8263F9A60A25455261B (BaseController_t1635F01D9B5000C345FAF98BAEEA495E97C32274* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_m09CC5207090321051B3C092D5BA21F2858DCD607 (const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::get_GesturesProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityGesturesProfile_t00CFAF0AF21B9B7DE975DB4EDF437FE662907019* MixedRealityInputSystemProfile_get_GesturesProfile_mD6A023CDA79B02886184DE4CFB30F33C5D57D4B4 (MixedRealityInputSystemProfile_t43E2FD730113CD773A9FDF6E6829519817478260* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping[] Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile::get_Gestures()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityGestureMappingU5BU5D_tB7FAD6CC01C36F0760A6CAB2D7007CDFAF672712* MixedRealityGesturesProfile_get_Gestures_m3F0CA9852A01B08D6AD5D56E6E0CB8207007D4A5_inline (MixedRealityGesturesProfile_t00CFAF0AF21B9B7DE975DB4EDF437FE662907019* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Input.GestureInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping::get_GestureType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityGestureMapping_get_GestureType_mBF949A7BEC682AF175F9678D9C9B85D2ADEB6778_inline (MixedRealityGestureMapping_t8C36E224B111021D8F4DA1C9B54A2815F28AA22E* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityGestureMapping::get_Action()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 MixedRealityGestureMapping_get_Action_mB00395DC4F6907AC86C7318B6C9A561A0C85F9F3_inline (MixedRealityGestureMapping_t8C36E224B111021D8F4DA1C9B54A2815F28AA22E* __this, const RuntimeMethod* method) ;
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline (AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseController::get_InputSource()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseController_get_InputSource_m8FE11DBDF7B41338ACF8AFF3A0C8FAD83E5D2870_inline (BaseController_t1635F01D9B5000C345FAF98BAEEA495E97C32274* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::get_Interactions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* BaseController_get_Interactions_m0FDC472367761C254E7472EC21FE1251E7FA5A74_inline (BaseController_t1635F01D9B5000C345FAF98BAEEA495E97C32274* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_MixedRealityInputAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 MixedRealityInteractionMapping_get_MixedRealityInputAction_mE813B3EBBA0A10F64E34EA6E5001D140D81141E9 (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController::get_Lifetime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float UnityTouchController_get_Lifetime_mAF81EBCA77CCAFD62C0115A3C26B7D6C0397756F_inline (UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController::set_Lifetime(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityTouchController_set_Lifetime_m71BDC9BC20D12C141753D28A4965923E6EB8E1D0_inline (UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Touch Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController::get_TouchData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 UnityTouchController_get_TouchData_mB2FE4439F33547BB4114A75154DF4D9DD0B9DC03_inline (UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* __this, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_deltaPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_deltaPosition_m2D51F960B74C94821ED0F6A09E44C80FD796D299 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::set_Vector2Data(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping_set_Vector2Data_m393F740387B58C5A3BFF6FD7835A6D05F98C7456 (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_Changed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_Changed_mC98FFE1F0E915A3F03110D83000E473E7F05BC53 (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.BaseController::get_ControllerHandedness()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t BaseController_get_ControllerHandedness_m739908CFF885DB452AD9A115F569C455BA46A3A1_inline (BaseController_t1635F01D9B5000C345FAF98BAEEA495E97C32274* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::set_Position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityPose_set_Position_m9806379126B288614A363F39705935CA0D86888C (MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::set_Rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityPose_set_Rotation_m090951B4A308155032C377FF0AE6BED025C39868 (MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::set_PoseData(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping_set_PoseData_m2AD97DB2F27527268C645A037E7E358A8CDF3A90 (MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* __this, MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 ___value0, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController::get_ManipulationThreshold()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float UnityTouchController_get_ManipulationThreshold_mDDB7BFE9C187A76CC00C3F93E7AAD2221FDD6238_inline (UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* __this, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController::get_MaxTapContactTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float UnityTouchController_get_MaxTapContactTime_m1696100BF2BF6B8569412EBA253470AA0D621C15_inline (UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Touch::get_tapCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_tapCount_mE75D2783AC38FCF536C99F36AB9F76AFA3EB7EB6 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Assert(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D (bool ___condition0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchDeviceManager::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTouchDeviceManager__ctor_mF8971528F66128300D34442CFE3562B18CE2268B (UnityTouchDeviceManager_t862703BF437FF8A31556F69FBD68FF0248FBF925* __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* ___profile3, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>::set_Registrar(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar)
inline void BaseDataProvider_1_set_Registrar_mA370F1A7CB1E5689906DAC10776EC5F4821A3EFC_inline (BaseDataProvider_1_t1C7B9F1707FEB27659F53B230E0A18282D2F7F20* __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	((  void (*) (BaseDataProvider_1_t1C7B9F1707FEB27659F53B230E0A18282D2F7F20*, RuntimeObject*, const RuntimeMethod*))BaseDataProvider_1_set_Registrar_m1A130D1847D364BF3D65E45B6C85965B0637465F_gshared_inline)(__this, ___value0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController>::.ctor()
inline void Dictionary_2__ctor_m42C586A94890C3EF834AACAB282182ABA986632C (Dictionary_2_t7CD1EB186E13B5D76F6E39D033C5A0CD1A2A5659* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7CD1EB186E13B5D76F6E39D033C5A0CD1A2A5659*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController>::.ctor()
inline void List_1__ctor_m392698326ECD6E3496A93B576216BFD8CFB72875 (List_1_t9CC4FEF58341CCE10DACB77CEBF836E20E4B3647* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9CC4FEF58341CCE10DACB77CEBF836E20E4B3647*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseInputDeviceManager__ctor_m55B7F2B3368B9234F956C7D94273E8CA0DBC15EC (BaseInputDeviceManager_t1D055DB03D88FA053C00671FEA5040B944CC26BC* __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* ___profile3, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Update_m07A22E1552ABDCD9AD86737D12D43DA27915370D (BaseService_tB7EC5C0F60DC5EE2DA122A608226D3887B6421D0* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController>::get_Item(System.Int32)
inline UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* List_1_get_Item_m081F12A624E259002EB2425F60894D8419F6A040 (List_1_t9CC4FEF58341CCE10DACB77CEBF836E20E4B3647* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* (*) (List_1_t9CC4FEF58341CCE10DACB77CEBF836E20E4B3647*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>::get_Service()
inline RuntimeObject* BaseDataProvider_1_get_Service_m886AE537D966101848DD8F8D348F366C71253B3B_inline (BaseDataProvider_1_t1C7B9F1707FEB27659F53B230E0A18282D2F7F20* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (BaseDataProvider_1_t1C7B9F1707FEB27659F53B230E0A18282D2F7F20*, const RuntimeMethod*))BaseDataProvider_1_get_Service_m9D57380441608DEC9ABF2199EA5585FC967E038F_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController>::get_Count()
inline int32_t List_1_get_Count_m5BE1E4EF76832AA0C626FCBE458B3EACBB8D01F1_inline (List_1_t9CC4FEF58341CCE10DACB77CEBF836E20E4B3647* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t9CC4FEF58341CCE10DACB77CEBF836E20E4B3647*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController>::Clear()
inline void List_1_Clear_m397BF703CED31925F3BAA65555857486FFF74C5B_inline (List_1_t9CC4FEF58341CCE10DACB77CEBF836E20E4B3647* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9CC4FEF58341CCE10DACB77CEBF836E20E4B3647*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39 (const RuntimeMethod* method) ;
// UnityEngine.Touch[] UnityEngine.Input::get_touches()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* Input_get_touches_m7CFDF6848F3EC3A8FE458436B2B8BD14B5C65CEF (const RuntimeMethod* method) ;
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Utilities.CameraCache::get_Main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* CameraCache_get_Main_m08DDDB3EC260B690A997F10C0B85678322E20B6A (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchDeviceManager::AddTouchController(UnityEngine.Touch,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTouchDeviceManager_AddTouchController_m248F213328FAFF68BA479D32443A8ACF3C47CFAD (UnityTouchDeviceManager_t862703BF437FF8A31556F69FBD68FF0248FBF925* __this, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 ___touch0, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray1, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchDeviceManager::UpdateTouchData(UnityEngine.Touch,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTouchDeviceManager_UpdateTouchData_m447C7570CA37EA1F574652A787B6535E22BEDA02 (UnityTouchDeviceManager_t862703BF437FF8A31556F69FBD68FF0248FBF925* __this, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 ___touch0, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray1, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchDeviceManager::RemoveTouchController(UnityEngine.Touch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTouchDeviceManager_RemoveTouchController_m94178FFA1C9D9ACDE31C97D6771727BF62D0F3F8 (UnityTouchDeviceManager_t862703BF437FF8A31556F69FBD68FF0248FBF925* __this, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 ___touch0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Disable_m75AA61136BE79E0C8EA4B058D1506882A56683C4 (BaseService_tB7EC5C0F60DC5EE2DA122A608226D3887B6421D0* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController>::GetEnumerator()
inline Enumerator_t177EAF41C12F2014CF3660F92330858544D2E0EA Dictionary_2_GetEnumerator_m2E8FC157538E93BBBDBDCC3ECFBCEB23B63C3D22 (Dictionary_2_t7CD1EB186E13B5D76F6E39D033C5A0CD1A2A5659* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t177EAF41C12F2014CF3660F92330858544D2E0EA (*) (Dictionary_2_t7CD1EB186E13B5D76F6E39D033C5A0CD1A2A5659*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m3F1620145BA0815B7C7CD648EF054558AA26556A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController>::Dispose()
inline void Enumerator_Dispose_m3AE8AB64B31129A28D2FAB496E4CCBF22576E00C (Enumerator_t177EAF41C12F2014CF3660F92330858544D2E0EA* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t177EAF41C12F2014CF3660F92330858544D2E0EA*, const RuntimeMethod*))Enumerator_Dispose_mAECCBE12C0427D7ACF88F82FA266F1AE37402565_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController>::get_Current()
inline KeyValuePair_2_t0EBAF7326F68F908F9523652CE68FEEFA5DD9CC1 Enumerator_get_Current_mD6F90CCD398A75E7350E649489014B3E2DEE2F45_inline (Enumerator_t177EAF41C12F2014CF3660F92330858544D2E0EA* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t0EBAF7326F68F908F9523652CE68FEEFA5DD9CC1 (*) (Enumerator_t177EAF41C12F2014CF3660F92330858544D2E0EA*, const RuntimeMethod*))Enumerator_get_Current_m90160D324DA0D9F5624A345F47D8E226A118911A_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController>::get_Value()
inline UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* KeyValuePair_2_get_Value_m082BAC2BE14CFA3CE8735241B7E2DE2294B6603A_inline (KeyValuePair_2_t0EBAF7326F68F908F9523652CE68FEEFA5DD9CC1* __this, const RuntimeMethod* method)
{
	return ((  UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* (*) (KeyValuePair_2_t0EBAF7326F68F908F9523652CE68FEEFA5DD9CC1*, const RuntimeMethod*))KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_gshared_inline)(__this, method);
}
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>::GetEnumerator()
inline Enumerator_t863CF828B16CEE7D2D01E274F8E32DE140606E80 HashSet_1_GetEnumerator_m7F521399752E6007B0B4EA60CB82D580C158A8B9 (HashSet_1_tA6A38ACBB9B75A13510D4F82BD093B367BE4666E* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t863CF828B16CEE7D2D01E274F8E32DE140606E80 (*) (HashSet_1_tA6A38ACBB9B75A13510D4F82BD093B367BE4666E*, const RuntimeMethod*))HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>::Dispose()
inline void Enumerator_Dispose_m1A01CF7AAEACC56D097C973FB27BA1DE1ECA19D5 (Enumerator_t863CF828B16CEE7D2D01E274F8E32DE140606E80* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t863CF828B16CEE7D2D01E274F8E32DE140606E80*, const RuntimeMethod*))Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared)(__this, method);
}
// T System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m6F159853C1A8DAA77838EAFF7F6FD59EF3CA5900_inline (Enumerator_t863CF828B16CEE7D2D01E274F8E32DE140606E80* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t863CF828B16CEE7D2D01E274F8E32DE140606E80*, const RuntimeMethod*))Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>::MoveNext()
inline bool Enumerator_MoveNext_m21E1D723A4EA1A8A474BEB11090E58DA5DA00517 (Enumerator_t863CF828B16CEE7D2D01E274F8E32DE140606E80* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t863CF828B16CEE7D2D01E274F8E32DE140606E80*, const RuntimeMethod*))Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController>::MoveNext()
inline bool Enumerator_MoveNext_m58F01378ECC3DD6D19EAE44971AF84ABAF720CBC (Enumerator_t177EAF41C12F2014CF3660F92330858544D2E0EA* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t177EAF41C12F2014CF3660F92330858544D2E0EA*, const RuntimeMethod*))Enumerator_MoveNext_m4DC143BC57F14EDD85AB13B6D6F3B5D0E319B30E_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController>::Clear()
inline void Dictionary_2_Clear_m449D6FB13E51E487FB450B24A07846D745E9F001 (Dictionary_2_t7CD1EB186E13B5D76F6E39D033C5A0CD1A2A5659* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7CD1EB186E13B5D76F6E39D033C5A0CD1A2A5659*, const RuntimeMethod*))Dictionary_2_Clear_mE1EFF7C68491EE07D21EE9924475A559BF0A4773_gshared)(__this, method);
}
// System.Int32 UnityEngine.Touch::get_fingerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mD8FB0005B943D09AD2EC4FBA3CBD0CA49CCB7443 (Dictionary_2_t7CD1EB186E13B5D76F6E39D033C5A0CD1A2A5659* __this, int32_t ___key0, UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t7CD1EB186E13B5D76F6E39D033C5A0CD1A2A5659*, int32_t, UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013**, const RuntimeMethod*))Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared)(__this, ___key0, ___value1, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTouchController__ctor_m4B0EB0BFD5FEBEF6A2683D73222AF87586E6FF1C (UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* ___interactions3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC288B078F91986E705727939A2EAE0B3A6B56623 (Dictionary_2_t7CD1EB186E13B5D76F6E39D033C5A0CD1A2A5659* __this, int32_t ___key0, UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7CD1EB186E13B5D76F6E39D033C5A0CD1A2A5659*, int32_t, UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController::set_TouchData(UnityEngine.Touch)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityTouchController_set_TouchData_mB97FBCDCEAA19D2F64B19A6E2335E560A488DCDF_inline (UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* __this, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController::StartTouch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTouchController_StartTouch_m7B67940DB4A836A22DBA0BFCAB5C8E3718F6FDCB (UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController::set_ScreenPointRay(UnityEngine.Ray)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityTouchController_set_ScreenPointRay_mE43A0DFD4CBF95BEB09E939DDFFE6DEB55D11DE9_inline (UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTouchController_Update_mA0FA63885F5493EB0BE0FFF70D7D5188059F9058 (UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController::EndTouch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTouchController_EndTouch_mF798FB64B48271C16D4E5FC6F2395C4467C0CFBF (UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController>::Add(T)
inline void List_1_Add_m8E4044843BE3B33D0739844AB9ABDC6F372B222D_inline (List_1_t9CC4FEF58341CCE10DACB77CEBF836E20E4B3647* __this, UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9CC4FEF58341CCE10DACB77CEBF836E20E4B3647*, UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController>::Remove(TKey)
inline bool Dictionary_2_Remove_m76399CAD6C393B8D39ABFC83E392C1047620E4C7 (Dictionary_2_t7CD1EB186E13B5D76F6E39D033C5A0CD1A2A5659* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t7CD1EB186E13B5D76F6E39D033C5A0CD1A2A5659*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared)(__this, ___key0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMappingLegacyInput::.ctor(UnityEngine.KeyCode,System.String,System.String,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMappingLegacyInput__ctor_m36B9A37A6973FBDD469C5E1C526DE33DDA8DC2B2 (MixedRealityInteractionMappingLegacyInput_tE9D2E40C94F2819FF0AEF36AC79AEA37EEC3E8C6* __this, int32_t ___keyCode0, String_t* ___axisCodeX1, String_t* ___axisCodeY2, bool ___invertXAxis3, bool ___invertYAxis4, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.XboxControllerDefinition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XboxControllerDefinition__ctor_mC350675EE8EA7005F1CBD3CE937BF9ABA932080F (XboxControllerDefinition_t25A5573F5D1F3D81A713BF6732C51AC6EEF53851* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.UnityInput.GenericJoystickController::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericJoystickController__ctor_m2E8C5C397E6189E87DA99B5B36AFE12F91828BC5 (GenericJoystickController_t973A6C1908E4F5C9D15B9448798CFF811C3B9A90* __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___definition2, RuntimeObject* ___inputSource3, MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* ___interactions4, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::.ctor(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m7F63A273E382CB6328736B6E7F321DDFA40EA9E3_inline (AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139* __this, intptr_t ___markerPtr0, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_EndSample_mFDB4EFB160A9CB817D2F8ED21B88693616B27409 (intptr_t ___markerPtr0, const RuntimeMethod* method) ;
// System.IntPtr Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateMarker(System.String,System.UInt16,Unity.Profiling.LowLevel.MarkerFlags,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerUnsafeUtility_CreateMarker_mC5E1AAB8CC1F0342065DF85BA3334445ED754E64 (String_t* ___name0, uint16_t ___categoryId1, uint16_t ___flags2, int32_t ___metadataCount3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::BeginSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_BeginSample_mB5106F4E7ECEF54906545665ED23928D14F5FCA7 (intptr_t ___markerPtr0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTouchController__ctor_m4B0EB0BFD5FEBEF6A2683D73222AF87586E6FF1C (UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* ___interactions3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchScreenDefinition_tB17BCF193F09C11A6F76275A8393C6CCABD451C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float MaxTapContactTime { get; set; } = 0.5f;
		__this->___U3CMaxTapContactTimeU3Ek__BackingField_12 = (0.5f);
		// public float ManipulationThreshold { get; set; } = 5f;
		__this->___U3CManipulationThresholdU3Ek__BackingField_13 = (5.0f);
		// public float Lifetime { get; private set; } = 0.0f;
		__this->___U3CLifetimeU3Ek__BackingField_16 = (0.0f);
		// private MixedRealityPose lastPose = MixedRealityPose.ZeroIdentity;
		il2cpp_codegen_runtime_class_init_inline(MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5_il2cpp_TypeInfo_var);
		MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 L_0;
		L_0 = MixedRealityPose_get_ZeroIdentity_m5F6C0EE34C84272B653BEF09731AC5E219F51EDD_inline(NULL);
		__this->___lastPose_22 = L_0;
		// private bool isNewController = false;
		__this->___isNewController_23 = (bool)0;
		// : base(trackingState, controllerHandedness, inputSource, interactions, new TouchScreenDefinition())
		int32_t L_1 = ___trackingState0;
		uint8_t L_2 = ___controllerHandedness1;
		RuntimeObject* L_3 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* L_4 = ___interactions3;
		TouchScreenDefinition_tB17BCF193F09C11A6F76275A8393C6CCABD451C2* L_5 = (TouchScreenDefinition_tB17BCF193F09C11A6F76275A8393C6CCABD451C2*)il2cpp_codegen_object_new(TouchScreenDefinition_tB17BCF193F09C11A6F76275A8393C6CCABD451C2_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		TouchScreenDefinition__ctor_m570F7492361562C859A4EE1303DDAA82F59E71DD(L_5, NULL);
		BaseController__ctor_m3EFCFBDA83D596AD950970D621DF5EB8B006F2FE(__this, L_1, L_2, L_3, L_4, L_5, NULL);
		// { }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController::get_MaxTapContactTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityTouchController_get_MaxTapContactTime_m1696100BF2BF6B8569412EBA253470AA0D621C15 (UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* __this, const RuntimeMethod* method) 
{
	{
		// public float MaxTapContactTime { get; set; } = 0.5f;
		float L_0 = __this->___U3CMaxTapContactTimeU3Ek__BackingField_12;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController::set_MaxTapContactTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTouchController_set_MaxTapContactTime_m48DF7F47CE27B7A9DD468426FBE75F1DCD4336A4 (UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MaxTapContactTime { get; set; } = 0.5f;
		float L_0 = ___value0;
		__this->___U3CMaxTapContactTimeU3Ek__BackingField_12 = L_0;
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController::get_ManipulationThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityTouchController_get_ManipulationThreshold_mDDB7BFE9C187A76CC00C3F93E7AAD2221FDD6238 (UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* __this, const RuntimeMethod* method) 
{
	{
		// public float ManipulationThreshold { get; set; } = 5f;
		float L_0 = __this->___U3CManipulationThresholdU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController::set_ManipulationThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTouchController_set_ManipulationThreshold_m986CDA6EF409D52C755F52AC53E9F4F73FB8D8BC (UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float ManipulationThreshold { get; set; } = 5f;
		float L_0 = ___value0;
		__this->___U3CManipulationThresholdU3Ek__BackingField_13 = L_0;
		return;
	}
}
// UnityEngine.Touch Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController::get_TouchData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 UnityTouchController_get_TouchData_mB2FE4439F33547BB4114A75154DF4D9DD0B9DC03 (UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* __this, const RuntimeMethod* method) 
{
	{
		// public Touch TouchData { get; internal set; }
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_0 = __this->___U3CTouchDataU3Ek__BackingField_14;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController::set_TouchData(UnityEngine.Touch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTouchController_set_TouchData_mB97FBCDCEAA19D2F64B19A6E2335E560A488DCDF (UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* __this, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 ___value0, const RuntimeMethod* method) 
{
	{
		// public Touch TouchData { get; internal set; }
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_0 = ___value0;
		__this->___U3CTouchDataU3Ek__BackingField_14 = L_0;
		return;
	}
}
// UnityEngine.Ray Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController::get_ScreenPointRay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 UnityTouchController_get_ScreenPointRay_mB56F097B220A83A6ADF69D58EFEF51EF82F6ECAE (UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* __this, const RuntimeMethod* method) 
{
	{
		// public Ray ScreenPointRay { get; internal set; }
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_0 = __this->___U3CScreenPointRayU3Ek__BackingField_15;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController::set_ScreenPointRay(UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTouchController_set_ScreenPointRay_mE43A0DFD4CBF95BEB09E939DDFFE6DEB55D11DE9 (UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___value0, const RuntimeMethod* method) 
{
	{
		// public Ray ScreenPointRay { get; internal set; }
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_0 = ___value0;
		__this->___U3CScreenPointRayU3Ek__BackingField_15 = L_0;
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController::get_Lifetime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityTouchController_get_Lifetime_mAF81EBCA77CCAFD62C0115A3C26B7D6C0397756F (UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* __this, const RuntimeMethod* method) 
{
	{
		// public float Lifetime { get; private set; } = 0.0f;
		float L_0 = __this->___U3CLifetimeU3Ek__BackingField_16;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController::set_Lifetime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTouchController_set_Lifetime_m71BDC9BC20D12C141753D28A4965923E6EB8E1D0 (UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Lifetime { get; private set; } = 0.0f;
		float L_0 = ___value0;
		__this->___U3CLifetimeU3Ek__BackingField_16 = L_0;
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController::SetupDefaultInteractions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTouchController_SetupDefaultInteractions_m595AED5E2D096D0EFD79472C673EF73B35EBE93F (UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	MixedRealityGestureMappingU5BU5D_tB7FAD6CC01C36F0760A6CAB2D7007CDFAF672712* V_1 = NULL;
	int32_t V_2 = 0;
	MixedRealityGestureMapping_t8C36E224B111021D8F4DA1C9B54A2815F28AA22E V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	MixedRealityGesturesProfile_t00CFAF0AF21B9B7DE975DB4EDF437FE662907019* G_B3_0 = NULL;
	{
		// base.SetupDefaultInteractions();
		BaseController_SetupDefaultInteractions_m1505A2460FAA3D71A86DA8263F9A60A25455261B(__this, NULL);
		// if (CoreServices.InputSystem?.InputSystemProfile.GesturesProfile != null)
		il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_get_InputSystem_m09CC5207090321051B3C092D5BA21F2858DCD607(NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0014;
		}
	}
	{
		G_B3_0 = ((MixedRealityGesturesProfile_t00CFAF0AF21B9B7DE975DB4EDF437FE662907019*)(NULL));
		goto IL_001e;
	}

IL_0014:
	{
		NullCheck(G_B2_0);
		MixedRealityInputSystemProfile_t43E2FD730113CD773A9FDF6E6829519817478260* L_2;
		L_2 = InterfaceFuncInvoker0< MixedRealityInputSystemProfile_t43E2FD730113CD773A9FDF6E6829519817478260* >::Invoke(6 /* Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_InputSystemProfile() */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, G_B2_0);
		NullCheck(L_2);
		MixedRealityGesturesProfile_t00CFAF0AF21B9B7DE975DB4EDF437FE662907019* L_3;
		L_3 = MixedRealityInputSystemProfile_get_GesturesProfile_mD6A023CDA79B02886184DE4CFB30F33C5D57D4B4(L_2, NULL);
		G_B3_0 = L_3;
	}

IL_001e:
	{
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(G_B3_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0096;
		}
	}
	{
		// var gestures = CoreServices.InputSystem.InputSystemProfile.GesturesProfile.Gestures;
		il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		RuntimeObject* L_6;
		L_6 = CoreServices_get_InputSystem_m09CC5207090321051B3C092D5BA21F2858DCD607(NULL);
		NullCheck(L_6);
		MixedRealityInputSystemProfile_t43E2FD730113CD773A9FDF6E6829519817478260* L_7;
		L_7 = InterfaceFuncInvoker0< MixedRealityInputSystemProfile_t43E2FD730113CD773A9FDF6E6829519817478260* >::Invoke(6 /* Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_InputSystemProfile() */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, L_6);
		NullCheck(L_7);
		MixedRealityGesturesProfile_t00CFAF0AF21B9B7DE975DB4EDF437FE662907019* L_8;
		L_8 = MixedRealityInputSystemProfile_get_GesturesProfile_mD6A023CDA79B02886184DE4CFB30F33C5D57D4B4(L_7, NULL);
		NullCheck(L_8);
		MixedRealityGestureMappingU5BU5D_tB7FAD6CC01C36F0760A6CAB2D7007CDFAF672712* L_9;
		L_9 = MixedRealityGesturesProfile_get_Gestures_m3F0CA9852A01B08D6AD5D56E6E0CB8207007D4A5_inline(L_8, NULL);
		V_1 = L_9;
		// for (int i = 0; i < gestures.Length; i++)
		V_2 = 0;
		goto IL_0089;
	}

IL_0042:
	{
		// var gesture = gestures[i];
		MixedRealityGestureMappingU5BU5D_tB7FAD6CC01C36F0760A6CAB2D7007CDFAF672712* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		MixedRealityGestureMapping_t8C36E224B111021D8F4DA1C9B54A2815F28AA22E L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = L_13;
		// switch (gesture.GestureType)
		int32_t L_14;
		L_14 = MixedRealityGestureMapping_get_GestureType_mBF949A7BEC682AF175F9678D9C9B85D2ADEB6778_inline((&V_3), NULL);
		V_5 = L_14;
		int32_t L_15 = V_5;
		V_4 = L_15;
		int32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)1)))
		{
			goto IL_0066;
		}
	}
	{
		goto IL_005f;
	}

IL_005f:
	{
		int32_t L_17 = V_4;
		if ((((int32_t)L_17) == ((int32_t)3)))
		{
			goto IL_0075;
		}
	}
	{
		goto IL_0084;
	}

IL_0066:
	{
		// holdingAction = gesture.Action;
		MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 L_18;
		L_18 = MixedRealityGestureMapping_get_Action_mB00395DC4F6907AC86C7318B6C9A561A0C85F9F3_inline((&V_3), NULL);
		__this->___holdingAction_18 = L_18;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___holdingAction_18))->___description_2), (void*)NULL);
		// break;
		goto IL_0084;
	}

IL_0075:
	{
		// manipulationAction = gesture.Action;
		MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 L_19;
		L_19 = MixedRealityGestureMapping_get_Action_mB00395DC4F6907AC86C7318B6C9A561A0C85F9F3_inline((&V_3), NULL);
		__this->___manipulationAction_20 = L_19;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___manipulationAction_20))->___description_2), (void*)NULL);
		// break;
		goto IL_0084;
	}

IL_0084:
	{
		// for (int i = 0; i < gestures.Length; i++)
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0089:
	{
		// for (int i = 0; i < gestures.Length; i++)
		int32_t L_21 = V_2;
		MixedRealityGestureMappingU5BU5D_tB7FAD6CC01C36F0760A6CAB2D7007CDFAF672712* L_22 = V_1;
		NullCheck(L_22);
		V_6 = (bool)((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))))? 1 : 0);
		bool L_23 = V_6;
		if (L_23)
		{
			goto IL_0042;
		}
	}
	{
	}

IL_0096:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController::StartTouch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTouchController_StartTouch_m7B67940DB4A836A22DBA0BFCAB5C8E3718F6FDCB (UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* __this, const RuntimeMethod* method) 
{
	{
		// isNewController = true;
		__this->___isNewController_23 = (bool)1;
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTouchController_Update_mA0FA63885F5493EB0BE0FFF70D7D5188059F9058 (UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSource_t9926A91DEC380AA837347E82976F5A6A9F9226C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointer_t6B17FD29F171D88877AB2EF9C59FEBB65ED6E446_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t G_B16_0 = 0;
	{
		// using (UpdatePerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013_StaticFields*)il2cpp_codegen_static_fields_for(UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013_il2cpp_TypeInfo_var))->___UpdatePerfMarker_24;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_02b4:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// var inputSystem = CoreServices.InputSystem;
				il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
				RuntimeObject* L_2;
				L_2 = CoreServices_get_InputSystem_m09CC5207090321051B3C092D5BA21F2858DCD607(NULL);
				V_2 = L_2;
				// if (inputSystem == null)
				RuntimeObject* L_3 = V_2;
				V_3 = (bool)((((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
				bool L_4 = V_3;
				if (!L_4)
				{
					goto IL_0024_1;
				}
			}
			{
				// return;
				goto IL_02c3;
			}

IL_0024_1:
			{
				// if (isNewController)
				bool L_5 = __this->___isNewController_23;
				V_4 = L_5;
				bool L_6 = V_4;
				if (!L_6)
				{
					goto IL_0093_1;
				}
			}
			{
				// isNewController = false;
				__this->___isNewController_23 = (bool)0;
				// inputSystem.RaiseOnInputDown(InputSource, Handedness.None, Interactions[2].MixedRealityInputAction);
				RuntimeObject* L_7 = V_2;
				RuntimeObject* L_8;
				L_8 = BaseController_get_InputSource_m8FE11DBDF7B41338ACF8AFF3A0C8FAD83E5D2870_inline(__this, NULL);
				MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* L_9;
				L_9 = BaseController_get_Interactions_m0FDC472367761C254E7472EC21FE1251E7FA5A74_inline(__this, NULL);
				NullCheck(L_9);
				int32_t L_10 = 2;
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
				NullCheck(L_11);
				MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 L_12;
				L_12 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mE813B3EBBA0A10F64E34EA6E5001D140D81141E9(L_11, NULL);
				NullCheck(L_7);
				InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 >::Invoke(39 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputDown(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, L_7, L_8, 0, L_12);
				// inputSystem.RaisePointerDown(InputSource.Pointers[0], Interactions[2].MixedRealityInputAction);
				RuntimeObject* L_13 = V_2;
				RuntimeObject* L_14;
				L_14 = BaseController_get_InputSource_m8FE11DBDF7B41338ACF8AFF3A0C8FAD83E5D2870_inline(__this, NULL);
				NullCheck(L_14);
				IMixedRealityPointerU5BU5D_t122E67DFE2F5B082397D95C08F6AA94DE36F86A4* L_15;
				L_15 = InterfaceFuncInvoker0< IMixedRealityPointerU5BU5D_t122E67DFE2F5B082397D95C08F6AA94DE36F86A4* >::Invoke(0 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource::get_Pointers() */, IMixedRealityInputSource_t9926A91DEC380AA837347E82976F5A6A9F9226C2_il2cpp_TypeInfo_var, L_14);
				NullCheck(L_15);
				int32_t L_16 = 0;
				RuntimeObject* L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
				MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* L_18;
				L_18 = BaseController_get_Interactions_m0FDC472367761C254E7472EC21FE1251E7FA5A74_inline(__this, NULL);
				NullCheck(L_18);
				int32_t L_19 = 2;
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
				NullCheck(L_20);
				MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 L_21;
				L_21 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mE813B3EBBA0A10F64E34EA6E5001D140D81141E9(L_20, NULL);
				NullCheck(L_13);
				InterfaceActionInvoker4< RuntimeObject*, MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486, uint8_t, RuntimeObject* >::Invoke(35 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePointerDown(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource) */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, L_13, L_17, L_21, 0, (RuntimeObject*)NULL);
				// isTouched = true;
				__this->___isTouched_17 = (bool)1;
				// inputSystem.RaiseGestureStarted(this, holdingAction);
				RuntimeObject* L_22 = V_2;
				MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 L_23 = __this->___holdingAction_18;
				NullCheck(L_22);
				InterfaceActionInvoker2< RuntimeObject*, MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 >::Invoke(46 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureStarted(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, L_22, __this, L_23);
				// isHolding = true;
				__this->___isHolding_19 = (bool)1;
			}

IL_0093_1:
			{
				// if (!isTouched)
				bool L_24 = __this->___isTouched_17;
				V_5 = (bool)((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
				bool L_25 = V_5;
				if (!L_25)
				{
					goto IL_00a8_1;
				}
			}
			{
				// return;
				goto IL_02c3;
			}

IL_00a8_1:
			{
				// Lifetime += Time.deltaTime;
				float L_26;
				L_26 = UnityTouchController_get_Lifetime_mAF81EBCA77CCAFD62C0115A3C26B7D6C0397756F_inline(__this, NULL);
				float L_27;
				L_27 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
				UnityTouchController_set_Lifetime_m71BDC9BC20D12C141753D28A4965923E6EB8E1D0_inline(__this, ((float)il2cpp_codegen_add(L_26, L_27)), NULL);
				// if (TouchData.phase == TouchPhase.Moved)
				Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_28;
				L_28 = UnityTouchController_get_TouchData_mB2FE4439F33547BB4114A75154DF4D9DD0B9DC03_inline(__this, NULL);
				V_7 = L_28;
				int32_t L_29;
				L_29 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_7), NULL);
				V_6 = (bool)((((int32_t)L_29) == ((int32_t)1))? 1 : 0);
				bool L_30 = V_6;
				if (!L_30)
				{
					goto IL_02b1_1;
				}
			}
			{
				// Interactions[0].Vector2Data = TouchData.deltaPosition;
				MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* L_31;
				L_31 = BaseController_get_Interactions_m0FDC472367761C254E7472EC21FE1251E7FA5A74_inline(__this, NULL);
				NullCheck(L_31);
				int32_t L_32 = 0;
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
				Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_34;
				L_34 = UnityTouchController_get_TouchData_mB2FE4439F33547BB4114A75154DF4D9DD0B9DC03_inline(__this, NULL);
				V_7 = L_34;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35;
				L_35 = Touch_get_deltaPosition_m2D51F960B74C94821ED0F6A09E44C80FD796D299((&V_7), NULL);
				NullCheck(L_33);
				MixedRealityInteractionMapping_set_Vector2Data_m393F740387B58C5A3BFF6FD7835A6D05F98C7456(L_33, L_35, NULL);
				// if (Interactions[0].Changed)
				MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* L_36;
				L_36 = BaseController_get_Interactions_m0FDC472367761C254E7472EC21FE1251E7FA5A74_inline(__this, NULL);
				NullCheck(L_36);
				int32_t L_37 = 0;
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
				NullCheck(L_38);
				bool L_39;
				L_39 = MixedRealityInteractionMapping_get_Changed_mC98FFE1F0E915A3F03110D83000E473E7F05BC53(L_38, NULL);
				V_8 = L_39;
				bool L_40 = V_8;
				if (!L_40)
				{
					goto IL_0138_1;
				}
			}
			{
				// inputSystem.RaisePositionInputChanged(InputSource, ControllerHandedness, Interactions[0].MixedRealityInputAction, TouchData.deltaPosition);
				RuntimeObject* L_41 = V_2;
				RuntimeObject* L_42;
				L_42 = BaseController_get_InputSource_m8FE11DBDF7B41338ACF8AFF3A0C8FAD83E5D2870_inline(__this, NULL);
				uint8_t L_43;
				L_43 = BaseController_get_ControllerHandedness_m739908CFF885DB452AD9A115F569C455BA46A3A1_inline(__this, NULL);
				MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* L_44;
				L_44 = BaseController_get_Interactions_m0FDC472367761C254E7472EC21FE1251E7FA5A74_inline(__this, NULL);
				NullCheck(L_44);
				int32_t L_45 = 0;
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
				NullCheck(L_46);
				MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 L_47;
				L_47 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mE813B3EBBA0A10F64E34EA6E5001D140D81141E9(L_46, NULL);
				Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_48;
				L_48 = UnityTouchController_get_TouchData_mB2FE4439F33547BB4114A75154DF4D9DD0B9DC03_inline(__this, NULL);
				V_7 = L_48;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49;
				L_49 = Touch_get_deltaPosition_m2D51F960B74C94821ED0F6A09E44C80FD796D299((&V_7), NULL);
				NullCheck(L_41);
				InterfaceActionInvoker4< RuntimeObject*, uint8_t, MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(42 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePositionInputChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,UnityEngine.Vector2) */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, L_41, L_42, L_43, L_47, L_49);
			}

IL_0138_1:
			{
				// lastPose.Position = InputSource.Pointers[0].Position;
				MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5* L_50 = (&__this->___lastPose_22);
				RuntimeObject* L_51;
				L_51 = BaseController_get_InputSource_m8FE11DBDF7B41338ACF8AFF3A0C8FAD83E5D2870_inline(__this, NULL);
				NullCheck(L_51);
				IMixedRealityPointerU5BU5D_t122E67DFE2F5B082397D95C08F6AA94DE36F86A4* L_52;
				L_52 = InterfaceFuncInvoker0< IMixedRealityPointerU5BU5D_t122E67DFE2F5B082397D95C08F6AA94DE36F86A4* >::Invoke(0 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource::get_Pointers() */, IMixedRealityInputSource_t9926A91DEC380AA837347E82976F5A6A9F9226C2_il2cpp_TypeInfo_var, L_51);
				NullCheck(L_52);
				int32_t L_53 = 0;
				RuntimeObject* L_54 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
				NullCheck(L_54);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
				L_55 = InterfaceFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(28 /* UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_Position() */, IMixedRealityPointer_t6B17FD29F171D88877AB2EF9C59FEBB65ED6E446_il2cpp_TypeInfo_var, L_54);
				MixedRealityPose_set_Position_m9806379126B288614A363F39705935CA0D86888C(L_50, L_55, NULL);
				// lastPose.Rotation = InputSource.Pointers[0].Rotation;
				MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5* L_56 = (&__this->___lastPose_22);
				RuntimeObject* L_57;
				L_57 = BaseController_get_InputSource_m8FE11DBDF7B41338ACF8AFF3A0C8FAD83E5D2870_inline(__this, NULL);
				NullCheck(L_57);
				IMixedRealityPointerU5BU5D_t122E67DFE2F5B082397D95C08F6AA94DE36F86A4* L_58;
				L_58 = InterfaceFuncInvoker0< IMixedRealityPointerU5BU5D_t122E67DFE2F5B082397D95C08F6AA94DE36F86A4* >::Invoke(0 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource::get_Pointers() */, IMixedRealityInputSource_t9926A91DEC380AA837347E82976F5A6A9F9226C2_il2cpp_TypeInfo_var, L_57);
				NullCheck(L_58);
				int32_t L_59 = 0;
				RuntimeObject* L_60 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
				NullCheck(L_60);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_61;
				L_61 = InterfaceFuncInvoker0< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(29 /* UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_Rotation() */, IMixedRealityPointer_t6B17FD29F171D88877AB2EF9C59FEBB65ED6E446_il2cpp_TypeInfo_var, L_60);
				MixedRealityPose_set_Rotation_m090951B4A308155032C377FF0AE6BED025C39868(L_56, L_61, NULL);
				// inputSystem.RaiseSourcePoseChanged(InputSource, this, lastPose);
				RuntimeObject* L_62 = V_2;
				RuntimeObject* L_63;
				L_63 = BaseController_get_InputSource_m8FE11DBDF7B41338ACF8AFF3A0C8FAD83E5D2870_inline(__this, NULL);
				MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 L_64 = __this->___lastPose_22;
				NullCheck(L_62);
				InterfaceActionInvoker3< RuntimeObject*, RuntimeObject*, MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 >::Invoke(30 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSourcePoseChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose) */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, L_62, L_63, __this, L_64);
				// Interactions[1].PoseData = lastPose;
				MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* L_65;
				L_65 = BaseController_get_Interactions_m0FDC472367761C254E7472EC21FE1251E7FA5A74_inline(__this, NULL);
				NullCheck(L_65);
				int32_t L_66 = 1;
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_67 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
				MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 L_68 = __this->___lastPose_22;
				NullCheck(L_67);
				MixedRealityInteractionMapping_set_PoseData_m2AD97DB2F27527268C645A037E7E358A8CDF3A90(L_67, L_68, NULL);
				// if (Interactions[1].Changed)
				MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* L_69;
				L_69 = BaseController_get_Interactions_m0FDC472367761C254E7472EC21FE1251E7FA5A74_inline(__this, NULL);
				NullCheck(L_69);
				int32_t L_70 = 1;
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_71 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
				NullCheck(L_71);
				bool L_72;
				L_72 = MixedRealityInteractionMapping_get_Changed_mC98FFE1F0E915A3F03110D83000E473E7F05BC53(L_71, NULL);
				V_9 = L_72;
				bool L_73 = V_9;
				if (!L_73)
				{
					goto IL_01d7_1;
				}
			}
			{
				// inputSystem.RaisePoseInputChanged(InputSource, ControllerHandedness, Interactions[1].MixedRealityInputAction, lastPose);
				RuntimeObject* L_74 = V_2;
				RuntimeObject* L_75;
				L_75 = BaseController_get_InputSource_m8FE11DBDF7B41338ACF8AFF3A0C8FAD83E5D2870_inline(__this, NULL);
				uint8_t L_76;
				L_76 = BaseController_get_ControllerHandedness_m739908CFF885DB452AD9A115F569C455BA46A3A1_inline(__this, NULL);
				MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* L_77;
				L_77 = BaseController_get_Interactions_m0FDC472367761C254E7472EC21FE1251E7FA5A74_inline(__this, NULL);
				NullCheck(L_77);
				int32_t L_78 = 1;
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_79 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
				NullCheck(L_79);
				MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 L_80;
				L_80 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mE813B3EBBA0A10F64E34EA6E5001D140D81141E9(L_79, NULL);
				MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 L_81 = __this->___lastPose_22;
				NullCheck(L_74);
				InterfaceActionInvoker4< RuntimeObject*, uint8_t, MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486, MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 >::Invoke(45 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePoseInputChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose) */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, L_74, L_75, L_76, L_80, L_81);
			}

IL_01d7_1:
			{
				// if (!isManipulating)
				bool L_82 = __this->___isManipulating_21;
				V_10 = (bool)((((int32_t)L_82) == ((int32_t)0))? 1 : 0);
				bool L_83 = V_10;
				if (!L_83)
				{
					goto IL_026e_1;
				}
			}
			{
				// if (Mathf.Abs(TouchData.deltaPosition.x) > ManipulationThreshold ||
				//     Mathf.Abs(TouchData.deltaPosition.y) > ManipulationThreshold)
				Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_84;
				L_84 = UnityTouchController_get_TouchData_mB2FE4439F33547BB4114A75154DF4D9DD0B9DC03_inline(__this, NULL);
				V_7 = L_84;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_85;
				L_85 = Touch_get_deltaPosition_m2D51F960B74C94821ED0F6A09E44C80FD796D299((&V_7), NULL);
				float L_86 = L_85.___x_0;
				float L_87;
				L_87 = fabsf(L_86);
				float L_88;
				L_88 = UnityTouchController_get_ManipulationThreshold_mDDB7BFE9C187A76CC00C3F93E7AAD2221FDD6238_inline(__this, NULL);
				if ((((float)L_87) > ((float)L_88)))
				{
					goto IL_022e_1;
				}
			}
			{
				Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_89;
				L_89 = UnityTouchController_get_TouchData_mB2FE4439F33547BB4114A75154DF4D9DD0B9DC03_inline(__this, NULL);
				V_7 = L_89;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_90;
				L_90 = Touch_get_deltaPosition_m2D51F960B74C94821ED0F6A09E44C80FD796D299((&V_7), NULL);
				float L_91 = L_90.___y_1;
				float L_92;
				L_92 = fabsf(L_91);
				float L_93;
				L_93 = UnityTouchController_get_ManipulationThreshold_mDDB7BFE9C187A76CC00C3F93E7AAD2221FDD6238_inline(__this, NULL);
				G_B16_0 = ((((float)L_92) > ((float)L_93))? 1 : 0);
				goto IL_022f_1;
			}

IL_022e_1:
			{
				G_B16_0 = 1;
			}

IL_022f_1:
			{
				V_11 = (bool)G_B16_0;
				bool L_94 = V_11;
				if (!L_94)
				{
					goto IL_026b_1;
				}
			}
			{
				// inputSystem?.RaiseGestureCanceled(this, holdingAction);
				RuntimeObject* L_95 = V_2;
				if (L_95)
				{
					goto IL_023b_1;
				}
			}
			{
				goto IL_0249_1;
			}

IL_023b_1:
			{
				RuntimeObject* L_96 = V_2;
				MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 L_97 = __this->___holdingAction_18;
				NullCheck(L_96);
				InterfaceActionInvoker2< RuntimeObject*, MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 >::Invoke(57 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureCanceled(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, L_96, __this, L_97);
			}

IL_0249_1:
			{
				// isHolding = false;
				__this->___isHolding_19 = (bool)0;
				// inputSystem?.RaiseGestureStarted(this, manipulationAction);
				RuntimeObject* L_98 = V_2;
				if (L_98)
				{
					goto IL_0255_1;
				}
			}
			{
				goto IL_0263_1;
			}

IL_0255_1:
			{
				RuntimeObject* L_99 = V_2;
				MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 L_100 = __this->___manipulationAction_20;
				NullCheck(L_99);
				InterfaceActionInvoker2< RuntimeObject*, MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 >::Invoke(46 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureStarted(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, L_99, __this, L_100);
			}

IL_0263_1:
			{
				// isManipulating = true;
				__this->___isManipulating_21 = (bool)1;
			}

IL_026b_1:
			{
				goto IL_028d_1;
			}

IL_026e_1:
			{
				// inputSystem.RaiseGestureUpdated(this, manipulationAction, TouchData.deltaPosition);
				RuntimeObject* L_101 = V_2;
				MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 L_102 = __this->___manipulationAction_20;
				Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_103;
				L_103 = UnityTouchController_get_TouchData_mB2FE4439F33547BB4114A75154DF4D9DD0B9DC03_inline(__this, NULL);
				V_7 = L_103;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_104;
				L_104 = Touch_get_deltaPosition_m2D51F960B74C94821ED0F6A09E44C80FD796D299((&V_7), NULL);
				NullCheck(L_101);
				InterfaceActionInvoker3< RuntimeObject*, MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(48 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureUpdated(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,UnityEngine.Vector2) */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, L_101, __this, L_102, L_104);
			}

IL_028d_1:
			{
				// inputSystem.RaisePointerDragged(InputSource.Pointers[0], Interactions[1].MixedRealityInputAction);
				RuntimeObject* L_105 = V_2;
				RuntimeObject* L_106;
				L_106 = BaseController_get_InputSource_m8FE11DBDF7B41338ACF8AFF3A0C8FAD83E5D2870_inline(__this, NULL);
				NullCheck(L_106);
				IMixedRealityPointerU5BU5D_t122E67DFE2F5B082397D95C08F6AA94DE36F86A4* L_107;
				L_107 = InterfaceFuncInvoker0< IMixedRealityPointerU5BU5D_t122E67DFE2F5B082397D95C08F6AA94DE36F86A4* >::Invoke(0 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource::get_Pointers() */, IMixedRealityInputSource_t9926A91DEC380AA837347E82976F5A6A9F9226C2_il2cpp_TypeInfo_var, L_106);
				NullCheck(L_107);
				int32_t L_108 = 0;
				RuntimeObject* L_109 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
				MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* L_110;
				L_110 = BaseController_get_Interactions_m0FDC472367761C254E7472EC21FE1251E7FA5A74_inline(__this, NULL);
				NullCheck(L_110);
				int32_t L_111 = 1;
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_112 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
				NullCheck(L_112);
				MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 L_113;
				L_113 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mE813B3EBBA0A10F64E34EA6E5001D140D81141E9(L_112, NULL);
				NullCheck(L_105);
				InterfaceActionInvoker4< RuntimeObject*, MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486, uint8_t, RuntimeObject* >::Invoke(36 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePointerDragged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource) */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, L_105, L_109, L_113, 0, (RuntimeObject*)NULL);
			}

IL_02b1_1:
			{
				goto IL_02c3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_02c3:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController::EndTouch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTouchController_EndTouch_mF798FB64B48271C16D4E5FC6F2395C4467C0CFBF (UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSource_t9926A91DEC380AA837347E82976F5A6A9F9226C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	{
		// using (EndTouchPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013_StaticFields*)il2cpp_codegen_static_fields_for(UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013_il2cpp_TypeInfo_var))->___EndTouchPerfMarker_25;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0211:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// var inputSystem = CoreServices.InputSystem;
				il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
				RuntimeObject* L_2;
				L_2 = CoreServices_get_InputSystem_m09CC5207090321051B3C092D5BA21F2858DCD607(NULL);
				V_2 = L_2;
				// if (inputSystem == null)
				RuntimeObject* L_3 = V_2;
				V_3 = (bool)((((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
				bool L_4 = V_3;
				if (!L_4)
				{
					goto IL_0024_1;
				}
			}
			{
				// return;
				goto IL_0220;
			}

IL_0024_1:
			{
				// if (TouchData.phase == TouchPhase.Ended)
				Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_5;
				L_5 = UnityTouchController_get_TouchData_mB2FE4439F33547BB4114A75154DF4D9DD0B9DC03_inline(__this, NULL);
				V_5 = L_5;
				int32_t L_6;
				L_6 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_5), NULL);
				V_4 = (bool)((((int32_t)L_6) == ((int32_t)3))? 1 : 0);
				bool L_7 = V_4;
				if (!L_7)
				{
					goto IL_0124_1;
				}
			}
			{
				// if (Lifetime < MaxTapContactTime)
				float L_8;
				L_8 = UnityTouchController_get_Lifetime_mAF81EBCA77CCAFD62C0115A3C26B7D6C0397756F_inline(__this, NULL);
				float L_9;
				L_9 = UnityTouchController_get_MaxTapContactTime_m1696100BF2BF6B8569412EBA253470AA0D621C15_inline(__this, NULL);
				V_6 = (bool)((((float)L_8) < ((float)L_9))? 1 : 0);
				bool L_10 = V_6;
				if (!L_10)
				{
					goto IL_00ce_1;
				}
			}
			{
				// if (isHolding)
				bool L_11 = __this->___isHolding_19;
				V_7 = L_11;
				bool L_12 = V_7;
				if (!L_12)
				{
					goto IL_0078_1;
				}
			}
			{
				// inputSystem.RaiseGestureCanceled(this, holdingAction);
				RuntimeObject* L_13 = V_2;
				MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 L_14 = __this->___holdingAction_18;
				NullCheck(L_13);
				InterfaceActionInvoker2< RuntimeObject*, MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 >::Invoke(57 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureCanceled(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, L_13, __this, L_14);
				// isHolding = false;
				__this->___isHolding_19 = (bool)0;
			}

IL_0078_1:
			{
				// if (isManipulating)
				bool L_15 = __this->___isManipulating_21;
				V_8 = L_15;
				bool L_16 = V_8;
				if (!L_16)
				{
					goto IL_009b_1;
				}
			}
			{
				// inputSystem.RaiseGestureCanceled(this, manipulationAction);
				RuntimeObject* L_17 = V_2;
				MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 L_18 = __this->___manipulationAction_20;
				NullCheck(L_17);
				InterfaceActionInvoker2< RuntimeObject*, MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 >::Invoke(57 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureCanceled(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, L_17, __this, L_18);
				// isManipulating = false;
				__this->___isManipulating_21 = (bool)0;
			}

IL_009b_1:
			{
				// inputSystem.RaisePointerClicked(InputSource.Pointers[0], Interactions[2].MixedRealityInputAction, TouchData.tapCount);
				RuntimeObject* L_19 = V_2;
				RuntimeObject* L_20;
				L_20 = BaseController_get_InputSource_m8FE11DBDF7B41338ACF8AFF3A0C8FAD83E5D2870_inline(__this, NULL);
				NullCheck(L_20);
				IMixedRealityPointerU5BU5D_t122E67DFE2F5B082397D95C08F6AA94DE36F86A4* L_21;
				L_21 = InterfaceFuncInvoker0< IMixedRealityPointerU5BU5D_t122E67DFE2F5B082397D95C08F6AA94DE36F86A4* >::Invoke(0 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource::get_Pointers() */, IMixedRealityInputSource_t9926A91DEC380AA837347E82976F5A6A9F9226C2_il2cpp_TypeInfo_var, L_20);
				NullCheck(L_21);
				int32_t L_22 = 0;
				RuntimeObject* L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
				MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* L_24;
				L_24 = BaseController_get_Interactions_m0FDC472367761C254E7472EC21FE1251E7FA5A74_inline(__this, NULL);
				NullCheck(L_24);
				int32_t L_25 = 2;
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
				NullCheck(L_26);
				MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 L_27;
				L_27 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mE813B3EBBA0A10F64E34EA6E5001D140D81141E9(L_26, NULL);
				Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_28;
				L_28 = UnityTouchController_get_TouchData_mB2FE4439F33547BB4114A75154DF4D9DD0B9DC03_inline(__this, NULL);
				V_5 = L_28;
				int32_t L_29;
				L_29 = Touch_get_tapCount_mE75D2783AC38FCF536C99F36AB9F76AFA3EB7EB6((&V_5), NULL);
				NullCheck(L_19);
				InterfaceActionInvoker5< RuntimeObject*, MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486, int32_t, uint8_t, RuntimeObject* >::Invoke(37 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePointerClicked(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,System.Int32,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource) */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, L_19, L_23, L_27, L_29, 0, (RuntimeObject*)NULL);
			}

IL_00ce_1:
			{
				// if (isHolding)
				bool L_30 = __this->___isHolding_19;
				V_9 = L_30;
				bool L_31 = V_9;
				if (!L_31)
				{
					goto IL_00f1_1;
				}
			}
			{
				// inputSystem.RaiseGestureCompleted(this, holdingAction);
				RuntimeObject* L_32 = V_2;
				MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 L_33 = __this->___holdingAction_18;
				NullCheck(L_32);
				InterfaceActionInvoker2< RuntimeObject*, MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 >::Invoke(52 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureCompleted(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, L_32, __this, L_33);
				// isHolding = false;
				__this->___isHolding_19 = (bool)0;
			}

IL_00f1_1:
			{
				// if (isManipulating)
				bool L_34 = __this->___isManipulating_21;
				V_10 = L_34;
				bool L_35 = V_10;
				if (!L_35)
				{
					goto IL_0123_1;
				}
			}
			{
				// inputSystem.RaiseGestureCompleted(this, manipulationAction, TouchData.deltaPosition);
				RuntimeObject* L_36 = V_2;
				MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 L_37 = __this->___manipulationAction_20;
				Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_38;
				L_38 = UnityTouchController_get_TouchData_mB2FE4439F33547BB4114A75154DF4D9DD0B9DC03_inline(__this, NULL);
				V_5 = L_38;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39;
				L_39 = Touch_get_deltaPosition_m2D51F960B74C94821ED0F6A09E44C80FD796D299((&V_5), NULL);
				NullCheck(L_36);
				InterfaceActionInvoker3< RuntimeObject*, MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(53 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureCompleted(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,UnityEngine.Vector2) */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, L_36, __this, L_37, L_39);
				// isManipulating = false;
				__this->___isManipulating_21 = (bool)0;
			}

IL_0123_1:
			{
			}

IL_0124_1:
			{
				// if (isHolding)
				bool L_40 = __this->___isHolding_19;
				V_11 = L_40;
				bool L_41 = V_11;
				if (!L_41)
				{
					goto IL_0147_1;
				}
			}
			{
				// inputSystem.RaiseGestureCompleted(this, holdingAction);
				RuntimeObject* L_42 = V_2;
				MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 L_43 = __this->___holdingAction_18;
				NullCheck(L_42);
				InterfaceActionInvoker2< RuntimeObject*, MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 >::Invoke(52 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureCompleted(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, L_42, __this, L_43);
				// isHolding = false;
				__this->___isHolding_19 = (bool)0;
			}

IL_0147_1:
			{
				// Debug.Assert(!isHolding);
				bool L_44 = __this->___isHolding_19;
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((int32_t)L_44) == ((int32_t)0))? 1 : 0), NULL);
				// if (isManipulating)
				bool L_45 = __this->___isManipulating_21;
				V_12 = L_45;
				bool L_46 = V_12;
				if (!L_46)
				{
					goto IL_0188_1;
				}
			}
			{
				// inputSystem.RaiseGestureCompleted(this, manipulationAction, TouchData.deltaPosition);
				RuntimeObject* L_47 = V_2;
				MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 L_48 = __this->___manipulationAction_20;
				Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_49;
				L_49 = UnityTouchController_get_TouchData_mB2FE4439F33547BB4114A75154DF4D9DD0B9DC03_inline(__this, NULL);
				V_5 = L_49;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_50;
				L_50 = Touch_get_deltaPosition_m2D51F960B74C94821ED0F6A09E44C80FD796D299((&V_5), NULL);
				NullCheck(L_47);
				InterfaceActionInvoker3< RuntimeObject*, MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(53 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseGestureCompleted(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,UnityEngine.Vector2) */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, L_47, __this, L_48, L_50);
				// isManipulating = false;
				__this->___isManipulating_21 = (bool)0;
			}

IL_0188_1:
			{
				// Debug.Assert(!isManipulating);
				bool L_51 = __this->___isManipulating_21;
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((int32_t)L_51) == ((int32_t)0))? 1 : 0), NULL);
				// inputSystem.RaiseOnInputUp(InputSource, Handedness.None, Interactions[2].MixedRealityInputAction);
				RuntimeObject* L_52 = V_2;
				RuntimeObject* L_53;
				L_53 = BaseController_get_InputSource_m8FE11DBDF7B41338ACF8AFF3A0C8FAD83E5D2870_inline(__this, NULL);
				MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* L_54;
				L_54 = BaseController_get_Interactions_m0FDC472367761C254E7472EC21FE1251E7FA5A74_inline(__this, NULL);
				NullCheck(L_54);
				int32_t L_55 = 2;
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
				NullCheck(L_56);
				MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 L_57;
				L_57 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mE813B3EBBA0A10F64E34EA6E5001D140D81141E9(L_56, NULL);
				NullCheck(L_52);
				InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 >::Invoke(40 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputUp(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, L_52, L_53, 0, L_57);
				// inputSystem.RaisePointerUp(InputSource.Pointers[0], Interactions[2].MixedRealityInputAction);
				RuntimeObject* L_58 = V_2;
				RuntimeObject* L_59;
				L_59 = BaseController_get_InputSource_m8FE11DBDF7B41338ACF8AFF3A0C8FAD83E5D2870_inline(__this, NULL);
				NullCheck(L_59);
				IMixedRealityPointerU5BU5D_t122E67DFE2F5B082397D95C08F6AA94DE36F86A4* L_60;
				L_60 = InterfaceFuncInvoker0< IMixedRealityPointerU5BU5D_t122E67DFE2F5B082397D95C08F6AA94DE36F86A4* >::Invoke(0 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource::get_Pointers() */, IMixedRealityInputSource_t9926A91DEC380AA837347E82976F5A6A9F9226C2_il2cpp_TypeInfo_var, L_59);
				NullCheck(L_60);
				int32_t L_61 = 0;
				RuntimeObject* L_62 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
				MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* L_63;
				L_63 = BaseController_get_Interactions_m0FDC472367761C254E7472EC21FE1251E7FA5A74_inline(__this, NULL);
				NullCheck(L_63);
				int32_t L_64 = 2;
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
				NullCheck(L_65);
				MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 L_66;
				L_66 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mE813B3EBBA0A10F64E34EA6E5001D140D81141E9(L_65, NULL);
				NullCheck(L_58);
				InterfaceActionInvoker4< RuntimeObject*, MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486, uint8_t, RuntimeObject* >::Invoke(38 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePointerUp(Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource) */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, L_58, L_62, L_66, 0, (RuntimeObject*)NULL);
				// Lifetime = 0.0f;
				UnityTouchController_set_Lifetime_m71BDC9BC20D12C141753D28A4965923E6EB8E1D0_inline(__this, (0.0f), NULL);
				// isTouched = false;
				__this->___isTouched_17 = (bool)0;
				// Interactions[1].PoseData = MixedRealityPose.ZeroIdentity;
				MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* L_67;
				L_67 = BaseController_get_Interactions_m0FDC472367761C254E7472EC21FE1251E7FA5A74_inline(__this, NULL);
				NullCheck(L_67);
				int32_t L_68 = 1;
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_69 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
				il2cpp_codegen_runtime_class_init_inline(MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5_il2cpp_TypeInfo_var);
				MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 L_70;
				L_70 = MixedRealityPose_get_ZeroIdentity_m5F6C0EE34C84272B653BEF09731AC5E219F51EDD_inline(NULL);
				NullCheck(L_69);
				MixedRealityInteractionMapping_set_PoseData_m2AD97DB2F27527268C645A037E7E358A8CDF3A90(L_69, L_70, NULL);
				// Interactions[0].Vector2Data = Vector2.zero;
				MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* L_71;
				L_71 = BaseController_get_Interactions_m0FDC472367761C254E7472EC21FE1251E7FA5A74_inline(__this, NULL);
				NullCheck(L_71);
				int32_t L_72 = 0;
				MixedRealityInteractionMapping_t10DB776EEA5255542F8F4AF0DC0BC566AF0095E0* L_73 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_74;
				L_74 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
				NullCheck(L_73);
				MixedRealityInteractionMapping_set_Vector2Data_m393F740387B58C5A3BFF6FD7835A6D05F98C7456(L_73, L_74, NULL);
				goto IL_0220;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0220:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchController::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTouchController__cctor_m486335A787C8A550C643D9E7E25E8A323142CB1E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04C7B50A3300CD0BA41A7D285650A2E75834169E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF05C49E0C609B7E5841C64A63E243F74F1CB4327);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdatePerfMarker = new ProfilerMarker("[MRTK] UnityTouchController.Update");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_0), _stringLiteralF05C49E0C609B7E5841C64A63E243F74F1CB4327, /*hidden argument*/NULL);
		((UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013_StaticFields*)il2cpp_codegen_static_fields_for(UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013_il2cpp_TypeInfo_var))->___UpdatePerfMarker_24 = L_0;
		// private static readonly ProfilerMarker EndTouchPerfMarker = new ProfilerMarker("[MRTK] UnityTouchController.EndTouch");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_1), _stringLiteral04C7B50A3300CD0BA41A7D285650A2E75834169E, /*hidden argument*/NULL);
		((UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013_StaticFields*)il2cpp_codegen_static_fields_for(UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013_il2cpp_TypeInfo_var))->___EndTouchPerfMarker_25 = L_1;
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
// System.Void Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchDeviceManager::.ctor(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTouchDeviceManager__ctor_mEE9662C055797AFF477DB993616DF47B2AFFADE7 (UnityTouchDeviceManager_t862703BF437FF8A31556F69FBD68FF0248FBF925* __this, RuntimeObject* ___registrar0, RuntimeObject* ___inputSystem1, String_t* ___name2, uint32_t ___priority3, BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* ___profile4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProvider_1_set_Registrar_mA370F1A7CB1E5689906DAC10776EC5F4821A3EFC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BaseMixedRealityProfile profile = null) : this(inputSystem, name, priority, profile)
		RuntimeObject* L_0 = ___inputSystem1;
		String_t* L_1 = ___name2;
		uint32_t L_2 = ___priority3;
		BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* L_3 = ___profile4;
		UnityTouchDeviceManager__ctor_mF8971528F66128300D34442CFE3562B18CE2268B(__this, L_0, L_1, L_2, L_3, NULL);
		// Registrar = registrar;
		RuntimeObject* L_4 = ___registrar0;
		BaseDataProvider_1_set_Registrar_mA370F1A7CB1E5689906DAC10776EC5F4821A3EFC_inline(__this, L_4, BaseDataProvider_1_set_Registrar_mA370F1A7CB1E5689906DAC10776EC5F4821A3EFC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchDeviceManager::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTouchDeviceManager__ctor_mF8971528F66128300D34442CFE3562B18CE2268B (UnityTouchDeviceManager_t862703BF437FF8A31556F69FBD68FF0248FBF925* __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* ___profile3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseInputDeviceManager_t1D055DB03D88FA053C00671FEA5040B944CC26BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m42C586A94890C3EF834AACAB282182ABA986632C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t7CD1EB186E13B5D76F6E39D033C5A0CD1A2A5659_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m392698326ECD6E3496A93B576216BFD8CFB72875_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t9CC4FEF58341CCE10DACB77CEBF836E20E4B3647_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Dictionary<int, UnityTouchController> ActiveTouches = new Dictionary<int, UnityTouchController>();
		Dictionary_2_t7CD1EB186E13B5D76F6E39D033C5A0CD1A2A5659* L_0 = (Dictionary_2_t7CD1EB186E13B5D76F6E39D033C5A0CD1A2A5659*)il2cpp_codegen_object_new(Dictionary_2_t7CD1EB186E13B5D76F6E39D033C5A0CD1A2A5659_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m42C586A94890C3EF834AACAB282182ABA986632C(L_0, Dictionary_2__ctor_m42C586A94890C3EF834AACAB282182ABA986632C_RuntimeMethod_var);
		__this->___ActiveTouches_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ActiveTouches_21), (void*)L_0);
		// private List<UnityTouchController> touchesToRemove = new List<UnityTouchController>();
		List_1_t9CC4FEF58341CCE10DACB77CEBF836E20E4B3647* L_1 = (List_1_t9CC4FEF58341CCE10DACB77CEBF836E20E4B3647*)il2cpp_codegen_object_new(List_1_t9CC4FEF58341CCE10DACB77CEBF836E20E4B3647_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m392698326ECD6E3496A93B576216BFD8CFB72875(L_1, List_1__ctor_m392698326ECD6E3496A93B576216BFD8CFB72875_RuntimeMethod_var);
		__this->___touchesToRemove_22 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___touchesToRemove_22), (void*)L_1);
		// BaseMixedRealityProfile profile = null) : base(inputSystem, name, priority, profile) { }
		RuntimeObject* L_2 = ___inputSystem0;
		String_t* L_3 = ___name1;
		uint32_t L_4 = ___priority2;
		BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* L_5 = ___profile3;
		il2cpp_codegen_runtime_class_init_inline(BaseInputDeviceManager_t1D055DB03D88FA053C00671FEA5040B944CC26BC_il2cpp_TypeInfo_var);
		BaseInputDeviceManager__ctor_m55B7F2B3368B9234F956C7D94273E8CA0DBC15EC(__this, L_2, L_3, L_4, L_5, NULL);
		// BaseMixedRealityProfile profile = null) : base(inputSystem, name, priority, profile) { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchDeviceManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTouchDeviceManager_Update_m562521538D1EBF1AD4507E39E58AEE405C5C0E9F (UnityTouchDeviceManager_t862703BF437FF8A31556F69FBD68FF0248FBF925* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProvider_1_get_Service_m886AE537D966101848DD8F8D348F366C71253B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityController_t8BF4741E7DBA358A1DB46E1DD9EF33C9CDEB8BFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m397BF703CED31925F3BAA65555857486FFF74C5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5BE1E4EF76832AA0C626FCBE458B3EACBB8D01F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m081F12A624E259002EB2425F60894D8419F6A040_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityTouchDeviceManager_t862703BF437FF8A31556F69FBD68FF0248FBF925_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	bool V_6 = false;
	int32_t V_7 = 0;
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	bool V_12 = false;
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	{
		// using (UpdatePerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(UnityTouchDeviceManager_t862703BF437FF8A31556F69FBD68FF0248FBF925_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((UnityTouchDeviceManager_t862703BF437FF8A31556F69FBD68FF0248FBF925_StaticFields*)il2cpp_codegen_static_fields_for(UnityTouchDeviceManager_t862703BF437FF8A31556F69FBD68FF0248FBF925_il2cpp_TypeInfo_var))->___UpdatePerfMarker_23;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_011b:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if (!IsEnabled)
				bool L_2;
				L_2 = VirtualFuncInvoker0< bool >::Invoke(33 /* System.Boolean Microsoft.MixedReality.Toolkit.BaseService::get_IsEnabled() */, __this);
				V_3 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
				bool L_3 = V_3;
				if (!L_3)
				{
					goto IL_0023_1;
				}
			}
			{
				// return;
				goto IL_012a;
			}

IL_0023_1:
			{
				// base.Update();
				BaseService_Update_m07A22E1552ABDCD9AD86737D12D43DA27915370D(__this, NULL);
				// for (int i = 0; i < touchesToRemove.Count; i++)
				V_4 = 0;
				goto IL_0061_1;
			}

IL_002f_1:
			{
				// IMixedRealityController controller = touchesToRemove[i];
				List_1_t9CC4FEF58341CCE10DACB77CEBF836E20E4B3647* L_4 = __this->___touchesToRemove_22;
				int32_t L_5 = V_4;
				NullCheck(L_4);
				UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* L_6;
				L_6 = List_1_get_Item_m081F12A624E259002EB2425F60894D8419F6A040(L_4, L_5, List_1_get_Item_m081F12A624E259002EB2425F60894D8419F6A040_RuntimeMethod_var);
				V_5 = L_6;
				// Service?.RaiseSourceLost(controller.InputSource, controller);
				RuntimeObject* L_7;
				L_7 = BaseDataProvider_1_get_Service_m886AE537D966101848DD8F8D348F366C71253B3B_inline(__this, BaseDataProvider_1_get_Service_m886AE537D966101848DD8F8D348F366C71253B3B_RuntimeMethod_var);
				RuntimeObject* L_8 = L_7;
				G_B5_0 = L_8;
				if (L_8)
				{
					G_B6_0 = L_8;
					goto IL_004b_1;
				}
			}
			{
				goto IL_005a_1;
			}

IL_004b_1:
			{
				RuntimeObject* L_9 = V_5;
				NullCheck(L_9);
				RuntimeObject* L_10;
				L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_InputSource() */, IMixedRealityController_t8BF4741E7DBA358A1DB46E1DD9EF33C9CDEB8BFA_il2cpp_TypeInfo_var, L_9);
				RuntimeObject* L_11 = V_5;
				NullCheck(G_B6_0);
				InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(25 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSourceLost(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.IMixedRealityController) */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, G_B6_0, L_10, L_11);
			}

IL_005a_1:
			{
				// for (int i = 0; i < touchesToRemove.Count; i++)
				int32_t L_12 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_12, 1));
			}

IL_0061_1:
			{
				// for (int i = 0; i < touchesToRemove.Count; i++)
				int32_t L_13 = V_4;
				List_1_t9CC4FEF58341CCE10DACB77CEBF836E20E4B3647* L_14 = __this->___touchesToRemove_22;
				NullCheck(L_14);
				int32_t L_15;
				L_15 = List_1_get_Count_m5BE1E4EF76832AA0C626FCBE458B3EACBB8D01F1_inline(L_14, List_1_get_Count_m5BE1E4EF76832AA0C626FCBE458B3EACBB8D01F1_RuntimeMethod_var);
				V_6 = (bool)((((int32_t)L_13) < ((int32_t)L_15))? 1 : 0);
				bool L_16 = V_6;
				if (L_16)
				{
					goto IL_002f_1;
				}
			}
			{
				// touchesToRemove.Clear();
				List_1_t9CC4FEF58341CCE10DACB77CEBF836E20E4B3647* L_17 = __this->___touchesToRemove_22;
				NullCheck(L_17);
				List_1_Clear_m397BF703CED31925F3BAA65555857486FFF74C5B_inline(L_17, List_1_Clear_m397BF703CED31925F3BAA65555857486FFF74C5B_RuntimeMethod_var);
				// int touchCount = UInput.touchCount;
				int32_t L_18;
				L_18 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
				V_2 = L_18;
				// for (int i = 0; i < touchCount; i++)
				V_7 = 0;
				goto IL_010a_1;
			}

IL_008d_1:
			{
				// Touch touch = UInput.touches[i];
				TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_19;
				L_19 = Input_get_touches_m7CFDF6848F3EC3A8FE458436B2B8BD14B5C65CEF(NULL);
				int32_t L_20 = V_7;
				NullCheck(L_19);
				int32_t L_21 = L_20;
				Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
				V_8 = L_22;
				// Ray ray = CameraCache.Main.ScreenPointToRay(touch.position);
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_23;
				L_23 = CameraCache_get_Main_m08DDDB3EC260B690A997F10C0B85678322E20B6A(NULL);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
				L_24 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_8), NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
				L_25 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_24, NULL);
				NullCheck(L_23);
				Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_26;
				L_26 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_23, L_25, NULL);
				V_9 = L_26;
				// switch (touch.phase)
				int32_t L_27;
				L_27 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_8), NULL);
				V_11 = L_27;
				int32_t L_28 = V_11;
				V_10 = L_28;
				int32_t L_29 = V_10;
				switch (L_29)
				{
					case 0:
					{
						goto IL_00de_1;
					}
					case 1:
					{
						goto IL_00eb_1;
					}
					case 2:
					{
						goto IL_00eb_1;
					}
					case 3:
					{
						goto IL_00f8_1;
					}
					case 4:
					{
						goto IL_00f8_1;
					}
				}
			}
			{
				goto IL_0103_1;
			}

IL_00de_1:
			{
				// AddTouchController(touch, ray);
				Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_30 = V_8;
				Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_31 = V_9;
				UnityTouchDeviceManager_AddTouchController_m248F213328FAFF68BA479D32443A8ACF3C47CFAD(__this, L_30, L_31, NULL);
				// break;
				goto IL_0103_1;
			}

IL_00eb_1:
			{
				// UpdateTouchData(touch, ray);
				Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_32 = V_8;
				Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_33 = V_9;
				UnityTouchDeviceManager_UpdateTouchData_m447C7570CA37EA1F574652A787B6535E22BEDA02(__this, L_32, L_33, NULL);
				// break;
				goto IL_0103_1;
			}

IL_00f8_1:
			{
				// RemoveTouchController(touch);
				Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_34 = V_8;
				UnityTouchDeviceManager_RemoveTouchController_m94178FFA1C9D9ACDE31C97D6771727BF62D0F3F8(__this, L_34, NULL);
				// break;
				goto IL_0103_1;
			}

IL_0103_1:
			{
				// for (int i = 0; i < touchCount; i++)
				int32_t L_35 = V_7;
				V_7 = ((int32_t)il2cpp_codegen_add(L_35, 1));
			}

IL_010a_1:
			{
				// for (int i = 0; i < touchCount; i++)
				int32_t L_36 = V_7;
				int32_t L_37 = V_2;
				V_12 = (bool)((((int32_t)L_36) < ((int32_t)L_37))? 1 : 0);
				bool L_38 = V_12;
				if (L_38)
				{
					goto IL_008d_1;
				}
			}
			{
				goto IL_012a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_012a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchDeviceManager::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTouchDeviceManager_Disable_m9A2B2402C9C5C93BE7F978D01BE49751D65C2F2B (UnityTouchDeviceManager_t862703BF437FF8A31556F69FBD68FF0248FBF925* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProvider_1_get_Service_m886AE537D966101848DD8F8D348F366C71253B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m449D6FB13E51E487FB450B24A07846D745E9F001_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m2E8FC157538E93BBBDBDCC3ECFBCEB23B63C3D22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m1A01CF7AAEACC56D097C973FB27BA1DE1ECA19D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3AE8AB64B31129A28D2FAB496E4CCBF22576E00C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m21E1D723A4EA1A8A474BEB11090E58DA5DA00517_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m58F01378ECC3DD6D19EAE44971AF84ABAF720CBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6F159853C1A8DAA77838EAFF7F6FD59EF3CA5900_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD6F90CCD398A75E7350E649489014B3E2DEE2F45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_m7F521399752E6007B0B4EA60CB82D580C158A8B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityEventSource_t9E9DFD08DEE578702833FF502590A1E0476E59E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m082BAC2BE14CFA3CE8735241B7E2DE2294B6603A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t177EAF41C12F2014CF3660F92330858544D2E0EA V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t0EBAF7326F68F908F9523652CE68FEEFA5DD9CC1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Enumerator_t863CF828B16CEE7D2D01E274F8E32DE140606E80 V_3;
	memset((&V_3), 0, sizeof(V_3));
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	int32_t G_B5_0 = 0;
	{
		// base.Disable();
		BaseService_Disable_m75AA61136BE79E0C8EA4B058D1506882A56683C4(__this, NULL);
		// foreach (var controller in ActiveTouches)
		Dictionary_2_t7CD1EB186E13B5D76F6E39D033C5A0CD1A2A5659* L_0 = __this->___ActiveTouches_21;
		NullCheck(L_0);
		Enumerator_t177EAF41C12F2014CF3660F92330858544D2E0EA L_1;
		L_1 = Dictionary_2_GetEnumerator_m2E8FC157538E93BBBDBDCC3ECFBCEB23B63C3D22(L_0, Dictionary_2_GetEnumerator_m2E8FC157538E93BBBDBDCC3ECFBCEB23B63C3D22_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c8:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m3AE8AB64B31129A28D2FAB496E4CCBF22576E00C((&V_0), Enumerator_Dispose_m3AE8AB64B31129A28D2FAB496E4CCBF22576E00C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00ba_1;
			}

IL_001a_1:
			{
				// foreach (var controller in ActiveTouches)
				KeyValuePair_2_t0EBAF7326F68F908F9523652CE68FEEFA5DD9CC1 L_2;
				L_2 = Enumerator_get_Current_mD6F90CCD398A75E7350E649489014B3E2DEE2F45_inline((&V_0), Enumerator_get_Current_mD6F90CCD398A75E7350E649489014B3E2DEE2F45_RuntimeMethod_var);
				V_1 = L_2;
				// if (controller.Value == null || Service == null) { continue; }
				UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* L_3;
				L_3 = KeyValuePair_2_get_Value_m082BAC2BE14CFA3CE8735241B7E2DE2294B6603A_inline((&V_1), KeyValuePair_2_get_Value_m082BAC2BE14CFA3CE8735241B7E2DE2294B6603A_RuntimeMethod_var);
				if (!L_3)
				{
					goto IL_0037_1;
				}
			}
			{
				RuntimeObject* L_4;
				L_4 = BaseDataProvider_1_get_Service_m886AE537D966101848DD8F8D348F366C71253B3B_inline(__this, BaseDataProvider_1_get_Service_m886AE537D966101848DD8F8D348F366C71253B3B_RuntimeMethod_var);
				G_B5_0 = ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
				goto IL_0038_1;
			}

IL_0037_1:
			{
				G_B5_0 = 1;
			}

IL_0038_1:
			{
				V_2 = (bool)G_B5_0;
				bool L_5 = V_2;
				if (!L_5)
				{
					goto IL_003f_1;
				}
			}
			{
				// if (controller.Value == null || Service == null) { continue; }
				goto IL_00ba_1;
			}

IL_003f_1:
			{
				// foreach (var inputSource in Service.DetectedInputSources)
				RuntimeObject* L_6;
				L_6 = BaseDataProvider_1_get_Service_m886AE537D966101848DD8F8D348F366C71253B3B_inline(__this, BaseDataProvider_1_get_Service_m886AE537D966101848DD8F8D348F366C71253B3B_RuntimeMethod_var);
				NullCheck(L_6);
				HashSet_1_tA6A38ACBB9B75A13510D4F82BD093B367BE4666E* L_7;
				L_7 = InterfaceFuncInvoker0< HashSet_1_tA6A38ACBB9B75A13510D4F82BD093B367BE4666E* >::Invoke(4 /* System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource> Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_DetectedInputSources() */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, L_6);
				NullCheck(L_7);
				Enumerator_t863CF828B16CEE7D2D01E274F8E32DE140606E80 L_8;
				L_8 = HashSet_1_GetEnumerator_m7F521399752E6007B0B4EA60CB82D580C158A8B9(L_7, HashSet_1_GetEnumerator_m7F521399752E6007B0B4EA60CB82D580C158A8B9_RuntimeMethod_var);
				V_3 = L_8;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00aa_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m1A01CF7AAEACC56D097C973FB27BA1DE1ECA19D5((&V_3), Enumerator_Dispose_m1A01CF7AAEACC56D097C973FB27BA1DE1ECA19D5_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_009f_2;
					}

IL_0053_2:
					{
						// foreach (var inputSource in Service.DetectedInputSources)
						RuntimeObject* L_9;
						L_9 = Enumerator_get_Current_m6F159853C1A8DAA77838EAFF7F6FD59EF3CA5900_inline((&V_3), Enumerator_get_Current_m6F159853C1A8DAA77838EAFF7F6FD59EF3CA5900_RuntimeMethod_var);
						V_4 = L_9;
						// if (inputSource.SourceId == controller.Value.InputSource.SourceId)
						RuntimeObject* L_10 = V_4;
						NullCheck(L_10);
						uint32_t L_11;
						L_11 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Microsoft.MixedReality.Toolkit.IMixedRealityEventSource::get_SourceId() */, IMixedRealityEventSource_t9E9DFD08DEE578702833FF502590A1E0476E59E1_il2cpp_TypeInfo_var, L_10);
						UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* L_12;
						L_12 = KeyValuePair_2_get_Value_m082BAC2BE14CFA3CE8735241B7E2DE2294B6603A_inline((&V_1), KeyValuePair_2_get_Value_m082BAC2BE14CFA3CE8735241B7E2DE2294B6603A_RuntimeMethod_var);
						NullCheck(L_12);
						RuntimeObject* L_13;
						L_13 = BaseController_get_InputSource_m8FE11DBDF7B41338ACF8AFF3A0C8FAD83E5D2870_inline(L_12, NULL);
						NullCheck(L_13);
						uint32_t L_14;
						L_14 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Microsoft.MixedReality.Toolkit.IMixedRealityEventSource::get_SourceId() */, IMixedRealityEventSource_t9E9DFD08DEE578702833FF502590A1E0476E59E1_il2cpp_TypeInfo_var, L_13);
						V_5 = (bool)((((int32_t)L_11) == ((int32_t)L_14))? 1 : 0);
						bool L_15 = V_5;
						if (!L_15)
						{
							goto IL_009e_2;
						}
					}
					{
						// Service.RaiseSourceLost(controller.Value.InputSource, controller.Value);
						RuntimeObject* L_16;
						L_16 = BaseDataProvider_1_get_Service_m886AE537D966101848DD8F8D348F366C71253B3B_inline(__this, BaseDataProvider_1_get_Service_m886AE537D966101848DD8F8D348F366C71253B3B_RuntimeMethod_var);
						UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* L_17;
						L_17 = KeyValuePair_2_get_Value_m082BAC2BE14CFA3CE8735241B7E2DE2294B6603A_inline((&V_1), KeyValuePair_2_get_Value_m082BAC2BE14CFA3CE8735241B7E2DE2294B6603A_RuntimeMethod_var);
						NullCheck(L_17);
						RuntimeObject* L_18;
						L_18 = BaseController_get_InputSource_m8FE11DBDF7B41338ACF8AFF3A0C8FAD83E5D2870_inline(L_17, NULL);
						UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* L_19;
						L_19 = KeyValuePair_2_get_Value_m082BAC2BE14CFA3CE8735241B7E2DE2294B6603A_inline((&V_1), KeyValuePair_2_get_Value_m082BAC2BE14CFA3CE8735241B7E2DE2294B6603A_RuntimeMethod_var);
						NullCheck(L_16);
						InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(25 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSourceLost(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.IMixedRealityController) */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, L_16, L_18, L_19);
					}

IL_009e_2:
					{
					}

IL_009f_2:
					{
						// foreach (var inputSource in Service.DetectedInputSources)
						bool L_20;
						L_20 = Enumerator_MoveNext_m21E1D723A4EA1A8A474BEB11090E58DA5DA00517((&V_3), Enumerator_MoveNext_m21E1D723A4EA1A8A474BEB11090E58DA5DA00517_RuntimeMethod_var);
						if (L_20)
						{
							goto IL_0053_2;
						}
					}
					{
						goto IL_00b9_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00b9_1:
			{
			}

IL_00ba_1:
			{
				// foreach (var controller in ActiveTouches)
				bool L_21;
				L_21 = Enumerator_MoveNext_m58F01378ECC3DD6D19EAE44971AF84ABAF720CBC((&V_0), Enumerator_MoveNext_m58F01378ECC3DD6D19EAE44971AF84ABAF720CBC_RuntimeMethod_var);
				if (L_21)
				{
					goto IL_001a_1;
				}
			}
			{
				goto IL_00d7;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d7:
	{
		// ActiveTouches.Clear();
		Dictionary_2_t7CD1EB186E13B5D76F6E39D033C5A0CD1A2A5659* L_22 = __this->___ActiveTouches_21;
		NullCheck(L_22);
		Dictionary_2_Clear_m449D6FB13E51E487FB450B24A07846D745E9F001(L_22, Dictionary_2_Clear_m449D6FB13E51E487FB450B24A07846D745E9F001_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchDeviceManager::AddTouchController(UnityEngine.Touch,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTouchDeviceManager_AddTouchController_m248F213328FAFF68BA479D32443A8ACF3C47CFAD (UnityTouchDeviceManager_t862703BF437FF8A31556F69FBD68FF0248FBF925* __this, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 ___touch0, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProvider_1_get_Service_m886AE537D966101848DD8F8D348F366C71253B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC288B078F91986E705727939A2EAE0B3A6B56623_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD8FB0005B943D09AD2EC4FBA3CBD0CA49CCB7443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSource_t9926A91DEC380AA837347E82976F5A6A9F9226C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointer_t6B17FD29F171D88877AB2EF9C59FEBB65ED6E446_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityTouchPointer_tE0FE8957BA2D11207816961004C2CA8B81C2F5DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityTouchDeviceManager_t862703BF437FF8A31556F69FBD68FF0248FBF925_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A01D588B9C69138B51D8C228C7E6DF943913B44);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* V_2 = NULL;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	IMixedRealityPointerU5BU5D_t122E67DFE2F5B082397D95C08F6AA94DE36F86A4* V_6 = NULL;
	bool V_7 = false;
	int32_t V_8 = 0;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	RuntimeObject* G_B12_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	{
		// using (AddTouchControllerPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(UnityTouchDeviceManager_t862703BF437FF8A31556F69FBD68FF0248FBF925_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((UnityTouchDeviceManager_t862703BF437FF8A31556F69FBD68FF0248FBF925_StaticFields*)il2cpp_codegen_static_fields_for(UnityTouchDeviceManager_t862703BF437FF8A31556F69FBD68FF0248FBF925_il2cpp_TypeInfo_var))->___AddTouchControllerPerfMarker_24;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0129:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if (!ActiveTouches.TryGetValue(touch.fingerId, out controller))
				Dictionary_2_t7CD1EB186E13B5D76F6E39D033C5A0CD1A2A5659* L_2 = __this->___ActiveTouches_21;
				int32_t L_3;
				L_3 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD((&___touch0), NULL);
				NullCheck(L_2);
				bool L_4;
				L_4 = Dictionary_2_TryGetValue_mD8FB0005B943D09AD2EC4FBA3CBD0CA49CCB7443(L_2, L_3, (&V_2), Dictionary_2_TryGetValue_mD8FB0005B943D09AD2EC4FBA3CBD0CA49CCB7443_RuntimeMethod_var);
				V_3 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
				bool L_5 = V_3;
				if (!L_5)
				{
					goto IL_00fe_1;
				}
			}
			{
				// IMixedRealityInputSource inputSource = null;
				V_4 = (RuntimeObject*)NULL;
				// if (Service != null)
				RuntimeObject* L_6;
				L_6 = BaseDataProvider_1_get_Service_m886AE537D966101848DD8F8D348F366C71253B3B_inline(__this, BaseDataProvider_1_get_Service_m886AE537D966101848DD8F8D348F366C71253B3B_RuntimeMethod_var);
				V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_7 = V_5;
				if (!L_7)
				{
					goto IL_0077_1;
				}
			}
			{
				// var pointers = RequestPointers(SupportedControllerType.TouchScreen, Handedness.Any);
				IMixedRealityPointerU5BU5D_t122E67DFE2F5B082397D95C08F6AA94DE36F86A4* L_8;
				L_8 = VirtualFuncInvoker2< IMixedRealityPointerU5BU5D_t122E67DFE2F5B082397D95C08F6AA94DE36F86A4*, int32_t, uint8_t >::Invoke(40 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[] Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::RequestPointers(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType,Microsoft.MixedReality.Toolkit.Utilities.Handedness) */, __this, ((int32_t)256), 7);
				V_6 = L_8;
				// inputSource = Service.RequestNewGenericInputSource($"Touch {touch.fingerId}", pointers);
				RuntimeObject* L_9;
				L_9 = BaseDataProvider_1_get_Service_m886AE537D966101848DD8F8D348F366C71253B3B_inline(__this, BaseDataProvider_1_get_Service_m886AE537D966101848DD8F8D348F366C71253B3B_RuntimeMethod_var);
				int32_t L_10;
				L_10 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD((&___touch0), NULL);
				int32_t L_11 = L_10;
				RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
				String_t* L_13;
				L_13 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral5A01D588B9C69138B51D8C228C7E6DF943913B44, L_12, NULL);
				IMixedRealityPointerU5BU5D_t122E67DFE2F5B082397D95C08F6AA94DE36F86A4* L_14 = V_6;
				NullCheck(L_9);
				RuntimeObject* L_15;
				L_15 = InterfaceFuncInvoker3< RuntimeObject*, String_t*, IMixedRealityPointerU5BU5D_t122E67DFE2F5B082397D95C08F6AA94DE36F86A4*, int32_t >::Invoke(22 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RequestNewGenericInputSource(System.String,Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[],Microsoft.MixedReality.Toolkit.Input.InputSourceType) */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, L_9, L_13, L_14, 0);
				V_4 = L_15;
			}

IL_0077_1:
			{
				// controller = new UnityTouchController(TrackingState.NotApplicable, Handedness.Any, inputSource);
				RuntimeObject* L_16 = V_4;
				UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* L_17 = (UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013*)il2cpp_codegen_object_new(UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013_il2cpp_TypeInfo_var);
				NullCheck(L_17);
				UnityTouchController__ctor_m4B0EB0BFD5FEBEF6A2683D73222AF87586E6FF1C(L_17, 0, 7, L_16, (MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE*)NULL, NULL);
				V_2 = L_17;
				// if (inputSource != null)
				RuntimeObject* L_18 = V_4;
				V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_18) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_19 = V_7;
				if (!L_19)
				{
					goto IL_00e9_1;
				}
			}
			{
				// for (int i = 0; i < inputSource.Pointers.Length; i++)
				V_8 = 0;
				goto IL_00d5_1;
			}

IL_0093_1:
			{
				// inputSource.Pointers[i].Controller = controller;
				RuntimeObject* L_20 = V_4;
				NullCheck(L_20);
				IMixedRealityPointerU5BU5D_t122E67DFE2F5B082397D95C08F6AA94DE36F86A4* L_21;
				L_21 = InterfaceFuncInvoker0< IMixedRealityPointerU5BU5D_t122E67DFE2F5B082397D95C08F6AA94DE36F86A4* >::Invoke(0 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource::get_Pointers() */, IMixedRealityInputSource_t9926A91DEC380AA837347E82976F5A6A9F9226C2_il2cpp_TypeInfo_var, L_20);
				int32_t L_22 = V_8;
				NullCheck(L_21);
				int32_t L_23 = L_22;
				RuntimeObject* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
				UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* L_25 = V_2;
				NullCheck(L_24);
				InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::set_Controller(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController) */, IMixedRealityPointer_t6B17FD29F171D88877AB2EF9C59FEBB65ED6E446_il2cpp_TypeInfo_var, L_24, L_25);
				// var touchPointer = (IMixedRealityTouchPointer)inputSource.Pointers[i];
				RuntimeObject* L_26 = V_4;
				NullCheck(L_26);
				IMixedRealityPointerU5BU5D_t122E67DFE2F5B082397D95C08F6AA94DE36F86A4* L_27;
				L_27 = InterfaceFuncInvoker0< IMixedRealityPointerU5BU5D_t122E67DFE2F5B082397D95C08F6AA94DE36F86A4* >::Invoke(0 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource::get_Pointers() */, IMixedRealityInputSource_t9926A91DEC380AA837347E82976F5A6A9F9226C2_il2cpp_TypeInfo_var, L_26);
				int32_t L_28 = V_8;
				NullCheck(L_27);
				int32_t L_29 = L_28;
				RuntimeObject* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
				V_9 = ((RuntimeObject*)Castclass((RuntimeObject*)L_30, IMixedRealityTouchPointer_tE0FE8957BA2D11207816961004C2CA8B81C2F5DF_il2cpp_TypeInfo_var));
				// touchPointer.TouchRay = ray;
				RuntimeObject* L_31 = V_9;
				Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_32 = ___ray1;
				NullCheck(L_31);
				InterfaceActionInvoker1< Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 >::Invoke(3 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchPointer::set_TouchRay(UnityEngine.Ray) */, IMixedRealityTouchPointer_tE0FE8957BA2D11207816961004C2CA8B81C2F5DF_il2cpp_TypeInfo_var, L_31, L_32);
				// touchPointer.FingerId = touch.fingerId;
				RuntimeObject* L_33 = V_9;
				int32_t L_34;
				L_34 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD((&___touch0), NULL);
				NullCheck(L_33);
				InterfaceActionInvoker1< int32_t >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchPointer::set_FingerId(System.Int32) */, IMixedRealityTouchPointer_tE0FE8957BA2D11207816961004C2CA8B81C2F5DF_il2cpp_TypeInfo_var, L_33, L_34);
				// for (int i = 0; i < inputSource.Pointers.Length; i++)
				int32_t L_35 = V_8;
				V_8 = ((int32_t)il2cpp_codegen_add(L_35, 1));
			}

IL_00d5_1:
			{
				// for (int i = 0; i < inputSource.Pointers.Length; i++)
				int32_t L_36 = V_8;
				RuntimeObject* L_37 = V_4;
				NullCheck(L_37);
				IMixedRealityPointerU5BU5D_t122E67DFE2F5B082397D95C08F6AA94DE36F86A4* L_38;
				L_38 = InterfaceFuncInvoker0< IMixedRealityPointerU5BU5D_t122E67DFE2F5B082397D95C08F6AA94DE36F86A4* >::Invoke(0 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource::get_Pointers() */, IMixedRealityInputSource_t9926A91DEC380AA837347E82976F5A6A9F9226C2_il2cpp_TypeInfo_var, L_37);
				NullCheck(L_38);
				V_10 = (bool)((((int32_t)L_36) < ((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length))))? 1 : 0);
				bool L_39 = V_10;
				if (L_39)
				{
					goto IL_0093_1;
				}
			}
			{
			}

IL_00e9_1:
			{
				// ActiveTouches.Add(touch.fingerId, controller);
				Dictionary_2_t7CD1EB186E13B5D76F6E39D033C5A0CD1A2A5659* L_40 = __this->___ActiveTouches_21;
				int32_t L_41;
				L_41 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD((&___touch0), NULL);
				UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* L_42 = V_2;
				NullCheck(L_40);
				Dictionary_2_Add_mC288B078F91986E705727939A2EAE0B3A6B56623(L_40, L_41, L_42, Dictionary_2_Add_mC288B078F91986E705727939A2EAE0B3A6B56623_RuntimeMethod_var);
			}

IL_00fe_1:
			{
				// Service?.RaiseSourceDetected(controller.InputSource, controller);
				RuntimeObject* L_43;
				L_43 = BaseDataProvider_1_get_Service_m886AE537D966101848DD8F8D348F366C71253B3B_inline(__this, BaseDataProvider_1_get_Service_m886AE537D966101848DD8F8D348F366C71253B3B_RuntimeMethod_var);
				RuntimeObject* L_44 = L_43;
				G_B11_0 = L_44;
				if (L_44)
				{
					G_B12_0 = L_44;
					goto IL_010a_1;
				}
			}
			{
				goto IL_0117_1;
			}

IL_010a_1:
			{
				UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* L_45 = V_2;
				NullCheck(L_45);
				RuntimeObject* L_46;
				L_46 = BaseController_get_InputSource_m8FE11DBDF7B41338ACF8AFF3A0C8FAD83E5D2870_inline(L_45, NULL);
				UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* L_47 = V_2;
				NullCheck(G_B12_0);
				InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(24 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSourceDetected(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.IMixedRealityController) */, IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2_il2cpp_TypeInfo_var, G_B12_0, L_46, L_47);
			}

IL_0117_1:
			{
				// controller.TouchData = touch;
				UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* L_48 = V_2;
				Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_49 = ___touch0;
				NullCheck(L_48);
				UnityTouchController_set_TouchData_mB97FBCDCEAA19D2F64B19A6E2335E560A488DCDF_inline(L_48, L_49, NULL);
				// controller.StartTouch();
				UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* L_50 = V_2;
				NullCheck(L_50);
				UnityTouchController_StartTouch_m7B67940DB4A836A22DBA0BFCAB5C8E3718F6FDCB(L_50, NULL);
				goto IL_0138;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0138:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchDeviceManager::UpdateTouchData(UnityEngine.Touch,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTouchDeviceManager_UpdateTouchData_m447C7570CA37EA1F574652A787B6535E22BEDA02 (UnityTouchDeviceManager_t862703BF437FF8A31556F69FBD68FF0248FBF925* __this, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 ___touch0, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD8FB0005B943D09AD2EC4FBA3CBD0CA49CCB7443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSource_t9926A91DEC380AA837347E82976F5A6A9F9226C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityTouchPointer_tE0FE8957BA2D11207816961004C2CA8B81C2F5DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityTouchDeviceManager_t862703BF437FF8A31556F69FBD68FF0248FBF925_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// using (UpdateTouchDataPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(UnityTouchDeviceManager_t862703BF437FF8A31556F69FBD68FF0248FBF925_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((UnityTouchDeviceManager_t862703BF437FF8A31556F69FBD68FF0248FBF925_StaticFields*)il2cpp_codegen_static_fields_for(UnityTouchDeviceManager_t862703BF437FF8A31556F69FBD68FF0248FBF925_il2cpp_TypeInfo_var))->___UpdateTouchDataPerfMarker_25;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0069:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if (!ActiveTouches.TryGetValue(touch.fingerId, out controller))
				Dictionary_2_t7CD1EB186E13B5D76F6E39D033C5A0CD1A2A5659* L_2 = __this->___ActiveTouches_21;
				int32_t L_3;
				L_3 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD((&___touch0), NULL);
				NullCheck(L_2);
				bool L_4;
				L_4 = Dictionary_2_TryGetValue_mD8FB0005B943D09AD2EC4FBA3CBD0CA49CCB7443(L_2, L_3, (&V_2), Dictionary_2_TryGetValue_mD8FB0005B943D09AD2EC4FBA3CBD0CA49CCB7443_RuntimeMethod_var);
				V_4 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
				bool L_5 = V_4;
				if (!L_5)
				{
					goto IL_0030_1;
				}
			}
			{
				// return;
				goto IL_0078;
			}

IL_0030_1:
			{
				// controller.TouchData = touch;
				UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* L_6 = V_2;
				Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_7 = ___touch0;
				NullCheck(L_6);
				UnityTouchController_set_TouchData_mB97FBCDCEAA19D2F64B19A6E2335E560A488DCDF_inline(L_6, L_7, NULL);
				// var pointer = (IMixedRealityTouchPointer)controller.InputSource.Pointers[0];
				UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* L_8 = V_2;
				NullCheck(L_8);
				RuntimeObject* L_9;
				L_9 = BaseController_get_InputSource_m8FE11DBDF7B41338ACF8AFF3A0C8FAD83E5D2870_inline(L_8, NULL);
				NullCheck(L_9);
				IMixedRealityPointerU5BU5D_t122E67DFE2F5B082397D95C08F6AA94DE36F86A4* L_10;
				L_10 = InterfaceFuncInvoker0< IMixedRealityPointerU5BU5D_t122E67DFE2F5B082397D95C08F6AA94DE36F86A4* >::Invoke(0 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource::get_Pointers() */, IMixedRealityInputSource_t9926A91DEC380AA837347E82976F5A6A9F9226C2_il2cpp_TypeInfo_var, L_9);
				NullCheck(L_10);
				int32_t L_11 = 0;
				RuntimeObject* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
				V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_12, IMixedRealityTouchPointer_tE0FE8957BA2D11207816961004C2CA8B81C2F5DF_il2cpp_TypeInfo_var));
				// controller.ScreenPointRay = pointer.TouchRay = ray;
				UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* L_13 = V_2;
				RuntimeObject* L_14 = V_3;
				Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_15 = ___ray1;
				Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_16 = L_15;
				V_5 = L_16;
				NullCheck(L_14);
				InterfaceActionInvoker1< Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 >::Invoke(3 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchPointer::set_TouchRay(UnityEngine.Ray) */, IMixedRealityTouchPointer_tE0FE8957BA2D11207816961004C2CA8B81C2F5DF_il2cpp_TypeInfo_var, L_14, L_16);
				Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_17 = V_5;
				NullCheck(L_13);
				UnityTouchController_set_ScreenPointRay_mE43A0DFD4CBF95BEB09E939DDFFE6DEB55D11DE9_inline(L_13, L_17, NULL);
				// controller.Update();
				UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* L_18 = V_2;
				NullCheck(L_18);
				UnityTouchController_Update_mA0FA63885F5493EB0BE0FFF70D7D5188059F9058(L_18, NULL);
				goto IL_0078;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0078:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchDeviceManager::RemoveTouchController(UnityEngine.Touch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTouchDeviceManager_RemoveTouchController_m94178FFA1C9D9ACDE31C97D6771727BF62D0F3F8 (UnityTouchDeviceManager_t862703BF437FF8A31556F69FBD68FF0248FBF925* __this, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 ___touch0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m76399CAD6C393B8D39ABFC83E392C1047620E4C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD8FB0005B943D09AD2EC4FBA3CBD0CA49CCB7443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m8E4044843BE3B33D0739844AB9ABDC6F372B222D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityTouchDeviceManager_t862703BF437FF8A31556F69FBD68FF0248FBF925_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* V_2 = NULL;
	bool V_3 = false;
	{
		// using (RemoveTouchControllerPerfMarker.Auto())
		il2cpp_codegen_runtime_class_init_inline(UnityTouchDeviceManager_t862703BF437FF8A31556F69FBD68FF0248FBF925_il2cpp_TypeInfo_var);
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0 = ((UnityTouchDeviceManager_t862703BF437FF8A31556F69FBD68FF0248FBF925_StaticFields*)il2cpp_codegen_static_fields_for(UnityTouchDeviceManager_t862703BF437FF8A31556F69FBD68FF0248FBF925_il2cpp_TypeInfo_var))->___RemoveTouchControllerPerfMarker_26;
		V_1 = L_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		L_1 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&V_1), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006d:
			{// begin finally (depth: 1)
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if (!ActiveTouches.TryGetValue(touch.fingerId, out controller))
				Dictionary_2_t7CD1EB186E13B5D76F6E39D033C5A0CD1A2A5659* L_2 = __this->___ActiveTouches_21;
				int32_t L_3;
				L_3 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD((&___touch0), NULL);
				NullCheck(L_2);
				bool L_4;
				L_4 = Dictionary_2_TryGetValue_mD8FB0005B943D09AD2EC4FBA3CBD0CA49CCB7443(L_2, L_3, (&V_2), Dictionary_2_TryGetValue_mD8FB0005B943D09AD2EC4FBA3CBD0CA49CCB7443_RuntimeMethod_var);
				V_3 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
				bool L_5 = V_3;
				if (!L_5)
				{
					goto IL_002e_1;
				}
			}
			{
				// return;
				goto IL_007c;
			}

IL_002e_1:
			{
				// RecyclePointers(controller.InputSource);
				UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* L_6 = V_2;
				NullCheck(L_6);
				RuntimeObject* L_7;
				L_7 = BaseController_get_InputSource_m8FE11DBDF7B41338ACF8AFF3A0C8FAD83E5D2870_inline(L_6, NULL);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(41 /* System.Void Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::RecyclePointers(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource) */, __this, L_7);
				// controller.TouchData = touch;
				UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* L_8 = V_2;
				Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_9 = ___touch0;
				NullCheck(L_8);
				UnityTouchController_set_TouchData_mB97FBCDCEAA19D2F64B19A6E2335E560A488DCDF_inline(L_8, L_9, NULL);
				// controller.EndTouch();
				UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* L_10 = V_2;
				NullCheck(L_10);
				UnityTouchController_EndTouch_mF798FB64B48271C16D4E5FC6F2395C4467C0CFBF(L_10, NULL);
				// touchesToRemove.Add(controller);
				List_1_t9CC4FEF58341CCE10DACB77CEBF836E20E4B3647* L_11 = __this->___touchesToRemove_22;
				UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* L_12 = V_2;
				NullCheck(L_11);
				List_1_Add_m8E4044843BE3B33D0739844AB9ABDC6F372B222D_inline(L_11, L_12, List_1_Add_m8E4044843BE3B33D0739844AB9ABDC6F372B222D_RuntimeMethod_var);
				// ActiveTouches.Remove(touch.fingerId);
				Dictionary_2_t7CD1EB186E13B5D76F6E39D033C5A0CD1A2A5659* L_13 = __this->___ActiveTouches_21;
				int32_t L_14;
				L_14 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD((&___touch0), NULL);
				NullCheck(L_13);
				bool L_15;
				L_15 = Dictionary_2_Remove_m76399CAD6C393B8D39ABFC83E392C1047620E4C7(L_13, L_14, Dictionary_2_Remove_m76399CAD6C393B8D39ABFC83E392C1047620E4C7_RuntimeMethod_var);
				goto IL_007c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.UnityInput.UnityTouchDeviceManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTouchDeviceManager__cctor_m92D1EF5E50EB250012FAD3165222CA9C4356775F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityTouchDeviceManager_t862703BF437FF8A31556F69FBD68FF0248FBF925_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F59A907CA0E469899F0A752CE8865A082A11FCD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF8B574011A5AA65C13AB5BA38E67624D92741B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC527D8933A29287B8D3C1EEF0C895DD35760EE27);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE706F4FB75F94F6CF18BF52AD26A43FD03E6C270);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdatePerfMarker = new ProfilerMarker("[MRTK] UnityTouchDeviceManager.Update");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_0), _stringLiteralBF8B574011A5AA65C13AB5BA38E67624D92741B6, /*hidden argument*/NULL);
		((UnityTouchDeviceManager_t862703BF437FF8A31556F69FBD68FF0248FBF925_StaticFields*)il2cpp_codegen_static_fields_for(UnityTouchDeviceManager_t862703BF437FF8A31556F69FBD68FF0248FBF925_il2cpp_TypeInfo_var))->___UpdatePerfMarker_23 = L_0;
		// private static readonly ProfilerMarker AddTouchControllerPerfMarker = new ProfilerMarker("[MRTK] UnityTouchDeviceManager.AddTouchController");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_1), _stringLiteral4F59A907CA0E469899F0A752CE8865A082A11FCD, /*hidden argument*/NULL);
		((UnityTouchDeviceManager_t862703BF437FF8A31556F69FBD68FF0248FBF925_StaticFields*)il2cpp_codegen_static_fields_for(UnityTouchDeviceManager_t862703BF437FF8A31556F69FBD68FF0248FBF925_il2cpp_TypeInfo_var))->___AddTouchControllerPerfMarker_24 = L_1;
		// private static readonly ProfilerMarker UpdateTouchDataPerfMarker = new ProfilerMarker("[MRTK] UnityTouchDeviceManager.UpdateTouchData");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_2;
		memset((&L_2), 0, sizeof(L_2));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_2), _stringLiteralC527D8933A29287B8D3C1EEF0C895DD35760EE27, /*hidden argument*/NULL);
		((UnityTouchDeviceManager_t862703BF437FF8A31556F69FBD68FF0248FBF925_StaticFields*)il2cpp_codegen_static_fields_for(UnityTouchDeviceManager_t862703BF437FF8A31556F69FBD68FF0248FBF925_il2cpp_TypeInfo_var))->___UpdateTouchDataPerfMarker_25 = L_2;
		// private static readonly ProfilerMarker RemoveTouchControllerPerfMarker = new ProfilerMarker("[MRTK] UnityTouchDeviceManager.RemoveTouchController");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_3;
		memset((&L_3), 0, sizeof(L_3));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_3), _stringLiteralE706F4FB75F94F6CF18BF52AD26A43FD03E6C270, /*hidden argument*/NULL);
		((UnityTouchDeviceManager_t862703BF437FF8A31556F69FBD68FF0248FBF925_StaticFields*)il2cpp_codegen_static_fields_for(UnityTouchDeviceManager_t862703BF437FF8A31556F69FBD68FF0248FBF925_il2cpp_TypeInfo_var))->___RemoveTouchControllerPerfMarker_26 = L_3;
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
// System.Void Microsoft.MixedReality.Toolkit.Input.UnityInput.XboxController::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XboxController__ctor_mE602583EB6A696AA2F65A90389610501779DC03F (XboxController_t48DD56471B2420C49C7E36D67E73D20D8ECC72B1* __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* ___interactions3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericJoystickController_t973A6C1908E4F5C9D15B9448798CFF811C3B9A90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityInteractionMappingLegacyInputU5BU5D_tA5355B0D239C6D459111AC8A8D465B3200F4C3EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XboxControllerDefinition_t25A5573F5D1F3D81A713BF6732C51AC6EEF53851_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CEA6BCEC90EDEFF96BDF8B9DFA3B15F88F92618);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral240F44D464CCC3E12D4D7AFDEC32B325BE29C87E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D899EE9A99EE6B79B8715C4A8A17FC7E4C28DF9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6563818E4ABB744DF1C941B94BBE294F70A47042);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C854BA33FD2DC8ECA4532462C6C3BEBD01C42F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral801EACC9B8E831EA7D1A22ACE229E2222275490E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E719678A0C6088F0DAF18FCE81FA5FB5D8AD4B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1C4A80C90449117887C3EFE0E5C9259A8AB441C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD605EF663B0E805D20EA905924A5BAB1060B65CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override MixedRealityInteractionMappingLegacyInput[] LegacyInputSupport { get; } = new[]
		// {
		//     new MixedRealityInteractionMappingLegacyInput(axisCodeX: ControllerMappingLibrary.AXIS_1, axisCodeY: ControllerMappingLibrary.AXIS_2, invertYAxis: true), // Left Thumbstick
		//     new MixedRealityInteractionMappingLegacyInput(keyCode: KeyCode.JoystickButton8), // Left Thumbstick Click
		//     new MixedRealityInteractionMappingLegacyInput(axisCodeX: ControllerMappingLibrary.AXIS_4, axisCodeY: ControllerMappingLibrary.AXIS_5, invertYAxis: true), // Right Thumbstick
		//     new MixedRealityInteractionMappingLegacyInput(keyCode: KeyCode.JoystickButton9), // Right Thumbstick Click
		//     new MixedRealityInteractionMappingLegacyInput(axisCodeX: ControllerMappingLibrary.AXIS_6, axisCodeY: ControllerMappingLibrary.AXIS_7, invertYAxis: true), // D-Pad
		//     new MixedRealityInteractionMappingLegacyInput(axisCodeX: ControllerMappingLibrary.AXIS_3), // Shared Trigger
		//     new MixedRealityInteractionMappingLegacyInput(axisCodeX: ControllerMappingLibrary.AXIS_9), // Left Trigger
		//     new MixedRealityInteractionMappingLegacyInput(axisCodeX: ControllerMappingLibrary.AXIS_10), // Right Trigger
		//     new MixedRealityInteractionMappingLegacyInput(keyCode: KeyCode.JoystickButton6), // View
		//     new MixedRealityInteractionMappingLegacyInput(keyCode: KeyCode.JoystickButton7), // Menu
		//     new MixedRealityInteractionMappingLegacyInput(keyCode: KeyCode.JoystickButton4), // Left Bumper
		//     new MixedRealityInteractionMappingLegacyInput(keyCode: KeyCode.JoystickButton5), // Right Bumper
		//     new MixedRealityInteractionMappingLegacyInput(keyCode: KeyCode.JoystickButton0), // A
		//     new MixedRealityInteractionMappingLegacyInput(keyCode: KeyCode.JoystickButton1), // B
		//     new MixedRealityInteractionMappingLegacyInput(keyCode: KeyCode.JoystickButton2), // X
		//     new MixedRealityInteractionMappingLegacyInput(keyCode: KeyCode.JoystickButton3), // Y
		// };
		MixedRealityInteractionMappingLegacyInputU5BU5D_tA5355B0D239C6D459111AC8A8D465B3200F4C3EF* L_0 = (MixedRealityInteractionMappingLegacyInputU5BU5D_tA5355B0D239C6D459111AC8A8D465B3200F4C3EF*)(MixedRealityInteractionMappingLegacyInputU5BU5D_tA5355B0D239C6D459111AC8A8D465B3200F4C3EF*)SZArrayNew(MixedRealityInteractionMappingLegacyInputU5BU5D_tA5355B0D239C6D459111AC8A8D465B3200F4C3EF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		MixedRealityInteractionMappingLegacyInputU5BU5D_tA5355B0D239C6D459111AC8A8D465B3200F4C3EF* L_1 = L_0;
		MixedRealityInteractionMappingLegacyInput_tE9D2E40C94F2819FF0AEF36AC79AEA37EEC3E8C6 L_2;
		memset((&L_2), 0, sizeof(L_2));
		MixedRealityInteractionMappingLegacyInput__ctor_m36B9A37A6973FBDD469C5E1C526DE33DDA8DC2B2((&L_2), 0, _stringLiteral4D899EE9A99EE6B79B8715C4A8A17FC7E4C28DF9, _stringLiteral6563818E4ABB744DF1C941B94BBE294F70A47042, (bool)0, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (MixedRealityInteractionMappingLegacyInput_tE9D2E40C94F2819FF0AEF36AC79AEA37EEC3E8C6)L_2);
		MixedRealityInteractionMappingLegacyInputU5BU5D_tA5355B0D239C6D459111AC8A8D465B3200F4C3EF* L_3 = L_1;
		MixedRealityInteractionMappingLegacyInput_tE9D2E40C94F2819FF0AEF36AC79AEA37EEC3E8C6 L_4;
		memset((&L_4), 0, sizeof(L_4));
		MixedRealityInteractionMappingLegacyInput__ctor_m36B9A37A6973FBDD469C5E1C526DE33DDA8DC2B2((&L_4), ((int32_t)338), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (MixedRealityInteractionMappingLegacyInput_tE9D2E40C94F2819FF0AEF36AC79AEA37EEC3E8C6)L_4);
		MixedRealityInteractionMappingLegacyInputU5BU5D_tA5355B0D239C6D459111AC8A8D465B3200F4C3EF* L_5 = L_3;
		MixedRealityInteractionMappingLegacyInput_tE9D2E40C94F2819FF0AEF36AC79AEA37EEC3E8C6 L_6;
		memset((&L_6), 0, sizeof(L_6));
		MixedRealityInteractionMappingLegacyInput__ctor_m36B9A37A6973FBDD469C5E1C526DE33DDA8DC2B2((&L_6), 0, _stringLiteral801EACC9B8E831EA7D1A22ACE229E2222275490E, _stringLiteralD1C4A80C90449117887C3EFE0E5C9259A8AB441C, (bool)0, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (MixedRealityInteractionMappingLegacyInput_tE9D2E40C94F2819FF0AEF36AC79AEA37EEC3E8C6)L_6);
		MixedRealityInteractionMappingLegacyInputU5BU5D_tA5355B0D239C6D459111AC8A8D465B3200F4C3EF* L_7 = L_5;
		MixedRealityInteractionMappingLegacyInput_tE9D2E40C94F2819FF0AEF36AC79AEA37EEC3E8C6 L_8;
		memset((&L_8), 0, sizeof(L_8));
		MixedRealityInteractionMappingLegacyInput__ctor_m36B9A37A6973FBDD469C5E1C526DE33DDA8DC2B2((&L_8), ((int32_t)339), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (MixedRealityInteractionMappingLegacyInput_tE9D2E40C94F2819FF0AEF36AC79AEA37EEC3E8C6)L_8);
		MixedRealityInteractionMappingLegacyInputU5BU5D_tA5355B0D239C6D459111AC8A8D465B3200F4C3EF* L_9 = L_7;
		MixedRealityInteractionMappingLegacyInput_tE9D2E40C94F2819FF0AEF36AC79AEA37EEC3E8C6 L_10;
		memset((&L_10), 0, sizeof(L_10));
		MixedRealityInteractionMappingLegacyInput__ctor_m36B9A37A6973FBDD469C5E1C526DE33DDA8DC2B2((&L_10), 0, _stringLiteral8E719678A0C6088F0DAF18FCE81FA5FB5D8AD4B2, _stringLiteralD605EF663B0E805D20EA905924A5BAB1060B65CE, (bool)0, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (MixedRealityInteractionMappingLegacyInput_tE9D2E40C94F2819FF0AEF36AC79AEA37EEC3E8C6)L_10);
		MixedRealityInteractionMappingLegacyInputU5BU5D_tA5355B0D239C6D459111AC8A8D465B3200F4C3EF* L_11 = L_9;
		MixedRealityInteractionMappingLegacyInput_tE9D2E40C94F2819FF0AEF36AC79AEA37EEC3E8C6 L_12;
		memset((&L_12), 0, sizeof(L_12));
		MixedRealityInteractionMappingLegacyInput__ctor_m36B9A37A6973FBDD469C5E1C526DE33DDA8DC2B2((&L_12), 0, _stringLiteral7C854BA33FD2DC8ECA4532462C6C3BEBD01C42F4, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (MixedRealityInteractionMappingLegacyInput_tE9D2E40C94F2819FF0AEF36AC79AEA37EEC3E8C6)L_12);
		MixedRealityInteractionMappingLegacyInputU5BU5D_tA5355B0D239C6D459111AC8A8D465B3200F4C3EF* L_13 = L_11;
		MixedRealityInteractionMappingLegacyInput_tE9D2E40C94F2819FF0AEF36AC79AEA37EEC3E8C6 L_14;
		memset((&L_14), 0, sizeof(L_14));
		MixedRealityInteractionMappingLegacyInput__ctor_m36B9A37A6973FBDD469C5E1C526DE33DDA8DC2B2((&L_14), 0, _stringLiteral0CEA6BCEC90EDEFF96BDF8B9DFA3B15F88F92618, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (MixedRealityInteractionMappingLegacyInput_tE9D2E40C94F2819FF0AEF36AC79AEA37EEC3E8C6)L_14);
		MixedRealityInteractionMappingLegacyInputU5BU5D_tA5355B0D239C6D459111AC8A8D465B3200F4C3EF* L_15 = L_13;
		MixedRealityInteractionMappingLegacyInput_tE9D2E40C94F2819FF0AEF36AC79AEA37EEC3E8C6 L_16;
		memset((&L_16), 0, sizeof(L_16));
		MixedRealityInteractionMappingLegacyInput__ctor_m36B9A37A6973FBDD469C5E1C526DE33DDA8DC2B2((&L_16), 0, _stringLiteral240F44D464CCC3E12D4D7AFDEC32B325BE29C87E, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (MixedRealityInteractionMappingLegacyInput_tE9D2E40C94F2819FF0AEF36AC79AEA37EEC3E8C6)L_16);
		MixedRealityInteractionMappingLegacyInputU5BU5D_tA5355B0D239C6D459111AC8A8D465B3200F4C3EF* L_17 = L_15;
		MixedRealityInteractionMappingLegacyInput_tE9D2E40C94F2819FF0AEF36AC79AEA37EEC3E8C6 L_18;
		memset((&L_18), 0, sizeof(L_18));
		MixedRealityInteractionMappingLegacyInput__ctor_m36B9A37A6973FBDD469C5E1C526DE33DDA8DC2B2((&L_18), ((int32_t)336), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(8), (MixedRealityInteractionMappingLegacyInput_tE9D2E40C94F2819FF0AEF36AC79AEA37EEC3E8C6)L_18);
		MixedRealityInteractionMappingLegacyInputU5BU5D_tA5355B0D239C6D459111AC8A8D465B3200F4C3EF* L_19 = L_17;
		MixedRealityInteractionMappingLegacyInput_tE9D2E40C94F2819FF0AEF36AC79AEA37EEC3E8C6 L_20;
		memset((&L_20), 0, sizeof(L_20));
		MixedRealityInteractionMappingLegacyInput__ctor_m36B9A37A6973FBDD469C5E1C526DE33DDA8DC2B2((&L_20), ((int32_t)337), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (MixedRealityInteractionMappingLegacyInput_tE9D2E40C94F2819FF0AEF36AC79AEA37EEC3E8C6)L_20);
		MixedRealityInteractionMappingLegacyInputU5BU5D_tA5355B0D239C6D459111AC8A8D465B3200F4C3EF* L_21 = L_19;
		MixedRealityInteractionMappingLegacyInput_tE9D2E40C94F2819FF0AEF36AC79AEA37EEC3E8C6 L_22;
		memset((&L_22), 0, sizeof(L_22));
		MixedRealityInteractionMappingLegacyInput__ctor_m36B9A37A6973FBDD469C5E1C526DE33DDA8DC2B2((&L_22), ((int32_t)334), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (MixedRealityInteractionMappingLegacyInput_tE9D2E40C94F2819FF0AEF36AC79AEA37EEC3E8C6)L_22);
		MixedRealityInteractionMappingLegacyInputU5BU5D_tA5355B0D239C6D459111AC8A8D465B3200F4C3EF* L_23 = L_21;
		MixedRealityInteractionMappingLegacyInput_tE9D2E40C94F2819FF0AEF36AC79AEA37EEC3E8C6 L_24;
		memset((&L_24), 0, sizeof(L_24));
		MixedRealityInteractionMappingLegacyInput__ctor_m36B9A37A6973FBDD469C5E1C526DE33DDA8DC2B2((&L_24), ((int32_t)335), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (MixedRealityInteractionMappingLegacyInput_tE9D2E40C94F2819FF0AEF36AC79AEA37EEC3E8C6)L_24);
		MixedRealityInteractionMappingLegacyInputU5BU5D_tA5355B0D239C6D459111AC8A8D465B3200F4C3EF* L_25 = L_23;
		MixedRealityInteractionMappingLegacyInput_tE9D2E40C94F2819FF0AEF36AC79AEA37EEC3E8C6 L_26;
		memset((&L_26), 0, sizeof(L_26));
		MixedRealityInteractionMappingLegacyInput__ctor_m36B9A37A6973FBDD469C5E1C526DE33DDA8DC2B2((&L_26), ((int32_t)330), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (MixedRealityInteractionMappingLegacyInput_tE9D2E40C94F2819FF0AEF36AC79AEA37EEC3E8C6)L_26);
		MixedRealityInteractionMappingLegacyInputU5BU5D_tA5355B0D239C6D459111AC8A8D465B3200F4C3EF* L_27 = L_25;
		MixedRealityInteractionMappingLegacyInput_tE9D2E40C94F2819FF0AEF36AC79AEA37EEC3E8C6 L_28;
		memset((&L_28), 0, sizeof(L_28));
		MixedRealityInteractionMappingLegacyInput__ctor_m36B9A37A6973FBDD469C5E1C526DE33DDA8DC2B2((&L_28), ((int32_t)331), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (MixedRealityInteractionMappingLegacyInput_tE9D2E40C94F2819FF0AEF36AC79AEA37EEC3E8C6)L_28);
		MixedRealityInteractionMappingLegacyInputU5BU5D_tA5355B0D239C6D459111AC8A8D465B3200F4C3EF* L_29 = L_27;
		MixedRealityInteractionMappingLegacyInput_tE9D2E40C94F2819FF0AEF36AC79AEA37EEC3E8C6 L_30;
		memset((&L_30), 0, sizeof(L_30));
		MixedRealityInteractionMappingLegacyInput__ctor_m36B9A37A6973FBDD469C5E1C526DE33DDA8DC2B2((&L_30), ((int32_t)332), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (MixedRealityInteractionMappingLegacyInput_tE9D2E40C94F2819FF0AEF36AC79AEA37EEC3E8C6)L_30);
		MixedRealityInteractionMappingLegacyInputU5BU5D_tA5355B0D239C6D459111AC8A8D465B3200F4C3EF* L_31 = L_29;
		MixedRealityInteractionMappingLegacyInput_tE9D2E40C94F2819FF0AEF36AC79AEA37EEC3E8C6 L_32;
		memset((&L_32), 0, sizeof(L_32));
		MixedRealityInteractionMappingLegacyInput__ctor_m36B9A37A6973FBDD469C5E1C526DE33DDA8DC2B2((&L_32), ((int32_t)333), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (MixedRealityInteractionMappingLegacyInput_tE9D2E40C94F2819FF0AEF36AC79AEA37EEC3E8C6)L_32);
		__this->___U3CLegacyInputSupportU3Ek__BackingField_27 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLegacyInputSupportU3Ek__BackingField_27), (void*)L_31);
		// : base(trackingState, controllerHandedness, new XboxControllerDefinition(), inputSource, interactions)
		int32_t L_33 = ___trackingState0;
		uint8_t L_34 = ___controllerHandedness1;
		XboxControllerDefinition_t25A5573F5D1F3D81A713BF6732C51AC6EEF53851* L_35 = (XboxControllerDefinition_t25A5573F5D1F3D81A713BF6732C51AC6EEF53851*)il2cpp_codegen_object_new(XboxControllerDefinition_t25A5573F5D1F3D81A713BF6732C51AC6EEF53851_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		XboxControllerDefinition__ctor_mC350675EE8EA7005F1CBD3CE937BF9ABA932080F(L_35, NULL);
		RuntimeObject* L_36 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* L_37 = ___interactions3;
		il2cpp_codegen_runtime_class_init_inline(GenericJoystickController_t973A6C1908E4F5C9D15B9448798CFF811C3B9A90_il2cpp_TypeInfo_var);
		GenericJoystickController__ctor_m2E8C5C397E6189E87DA99B5B36AFE12F91828BC5(__this, L_33, L_34, L_35, L_36, L_37, NULL);
		// { }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMappingLegacyInput[] Microsoft.MixedReality.Toolkit.Input.UnityInput.XboxController::get_LegacyInputSupport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityInteractionMappingLegacyInputU5BU5D_tA5355B0D239C6D459111AC8A8D465B3200F4C3EF* XboxController_get_LegacyInputSupport_m54B6AE4213110760542085735A43946F147F1CB9 (XboxController_t48DD56471B2420C49C7E36D67E73D20D8ECC72B1* __this, const RuntimeMethod* method) 
{
	{
		// protected override MixedRealityInteractionMappingLegacyInput[] LegacyInputSupport { get; } = new[]
		MixedRealityInteractionMappingLegacyInputU5BU5D_tA5355B0D239C6D459111AC8A8D465B3200F4C3EF* L_0 = __this->___U3CLegacyInputSupportU3Ek__BackingField_27;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 MixedRealityPose_get_ZeroIdentity_m5F6C0EE34C84272B653BEF09731AC5E219F51EDD_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MixedRealityPose ZeroIdentity { get; } = new MixedRealityPose(Vector3.zero, Quaternion.identity);
		il2cpp_codegen_runtime_class_init_inline(MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5_il2cpp_TypeInfo_var);
		MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 L_0 = ((MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5_il2cpp_TypeInfo_var))->___U3CZeroIdentityU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityGestureMappingU5BU5D_tB7FAD6CC01C36F0760A6CAB2D7007CDFAF672712* MixedRealityGesturesProfile_get_Gestures_m3F0CA9852A01B08D6AD5D56E6E0CB8207007D4A5_inline (MixedRealityGesturesProfile_t00CFAF0AF21B9B7DE975DB4EDF437FE662907019* __this, const RuntimeMethod* method) 
{
	{
		// public MixedRealityGestureMapping[] Gestures => gestures;
		MixedRealityGestureMappingU5BU5D_tB7FAD6CC01C36F0760A6CAB2D7007CDFAF672712* L_0 = __this->___gestures_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityGestureMapping_get_GestureType_mBF949A7BEC682AF175F9678D9C9B85D2ADEB6778_inline (MixedRealityGestureMapping_t8C36E224B111021D8F4DA1C9B54A2815F28AA22E* __this, const RuntimeMethod* method) 
{
	{
		// public GestureInputType GestureType => gestureType;
		int32_t L_0 = __this->___gestureType_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 MixedRealityGestureMapping_get_Action_mB00395DC4F6907AC86C7318B6C9A561A0C85F9F3_inline (MixedRealityGestureMapping_t8C36E224B111021D8F4DA1C9B54A2815F28AA22E* __this, const RuntimeMethod* method) 
{
	{
		// public MixedRealityInputAction Action => action;
		MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 L_0 = __this->___action_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, const RuntimeMethod* method) 
{
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->___m_Ptr_0;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		memset((&L_1), 0, sizeof(L_1));
		AutoScope__ctor_m7F63A273E382CB6328736B6E7F321DDFA40EA9E3_inline((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline (AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___m_Ptr_0;
		ProfilerUnsafeUtility_EndSample_mFDB4EFB160A9CB817D2F8ED21B88693616B27409(L_0, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseController_get_InputSource_m8FE11DBDF7B41338ACF8AFF3A0C8FAD83E5D2870_inline (BaseController_t1635F01D9B5000C345FAF98BAEEA495E97C32274* __this, const RuntimeMethod* method) 
{
	{
		// public IMixedRealityInputSource InputSource { get; }
		RuntimeObject* L_0 = __this->___U3CInputSourceU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* BaseController_get_Interactions_m0FDC472367761C254E7472EC21FE1251E7FA5A74_inline (BaseController_t1635F01D9B5000C345FAF98BAEEA495E97C32274* __this, const RuntimeMethod* method) 
{
	{
		// public MixedRealityInteractionMapping[] Interactions { get; private set; } = null;
		MixedRealityInteractionMappingU5BU5D_t689ED6694F3B293DEDEA6D5371268D36DC67AACE* L_0 = __this->___U3CInteractionsU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float UnityTouchController_get_Lifetime_mAF81EBCA77CCAFD62C0115A3C26B7D6C0397756F_inline (UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* __this, const RuntimeMethod* method) 
{
	{
		// public float Lifetime { get; private set; } = 0.0f;
		float L_0 = __this->___U3CLifetimeU3Ek__BackingField_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityTouchController_set_Lifetime_m71BDC9BC20D12C141753D28A4965923E6EB8E1D0_inline (UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Lifetime { get; private set; } = 0.0f;
		float L_0 = ___value0;
		__this->___U3CLifetimeU3Ek__BackingField_16 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 UnityTouchController_get_TouchData_mB2FE4439F33547BB4114A75154DF4D9DD0B9DC03_inline (UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* __this, const RuntimeMethod* method) 
{
	{
		// public Touch TouchData { get; internal set; }
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_0 = __this->___U3CTouchDataU3Ek__BackingField_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t BaseController_get_ControllerHandedness_m739908CFF885DB452AD9A115F569C455BA46A3A1_inline (BaseController_t1635F01D9B5000C345FAF98BAEEA495E97C32274* __this, const RuntimeMethod* method) 
{
	{
		// public Handedness ControllerHandedness { get; }
		uint8_t L_0 = __this->___U3CControllerHandednessU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float UnityTouchController_get_ManipulationThreshold_mDDB7BFE9C187A76CC00C3F93E7AAD2221FDD6238_inline (UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* __this, const RuntimeMethod* method) 
{
	{
		// public float ManipulationThreshold { get; set; } = 5f;
		float L_0 = __this->___U3CManipulationThresholdU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float UnityTouchController_get_MaxTapContactTime_m1696100BF2BF6B8569412EBA253470AA0D621C15_inline (UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* __this, const RuntimeMethod* method) 
{
	{
		// public float MaxTapContactTime { get; set; } = 0.5f;
		float L_0 = __this->___U3CMaxTapContactTimeU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___name0;
		intptr_t L_1;
		L_1 = ProfilerUnsafeUtility_CreateMarker_mC5E1AAB8CC1F0342065DF85BA3334445ED754E64(L_0, (uint16_t)1, 0, 0, NULL);
		__this->___m_Ptr_0 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityTouchController_set_TouchData_mB97FBCDCEAA19D2F64B19A6E2335E560A488DCDF_inline (UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* __this, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 ___value0, const RuntimeMethod* method) 
{
	{
		// public Touch TouchData { get; internal set; }
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_0 = ___value0;
		__this->___U3CTouchDataU3Ek__BackingField_14 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityTouchController_set_ScreenPointRay_mE43A0DFD4CBF95BEB09E939DDFFE6DEB55D11DE9_inline (UnityTouchController_tF7951C4CC3E70F902FE39943D0374EE4731BD013* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___value0, const RuntimeMethod* method) 
{
	{
		// public Ray ScreenPointRay { get; internal set; }
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_0 = ___value0;
		__this->___U3CScreenPointRayU3Ek__BackingField_15 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseDataProvider_1_set_Registrar_m1A130D1847D364BF3D65E45B6C85965B0637465F_gshared_inline (BaseDataProvider_1_t8DC280A360428C68343AA5D6B95788F4A050196F* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// protected IMixedRealityServiceRegistrar Registrar { get; set; } = null;
		RuntimeObject* L_0 = ___value0;
		__this->___U3CRegistrarU3Ek__BackingField_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRegistrarU3Ek__BackingField_12), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseDataProvider_1_get_Service_m9D57380441608DEC9ABF2199EA5585FC967E038F_gshared_inline (BaseDataProvider_1_t8DC280A360428C68343AA5D6B95788F4A050196F* __this, const RuntimeMethod* method) 
{
	{
		// protected T Service { get; set; } = default(T);
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CServiceU3Ek__BackingField_13;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
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
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 Enumerator_get_Current_m90160D324DA0D9F5624A345F47D8E226A118911A_gshared_inline (Enumerator_tE92C1AC40A104A179B94F8A013728FD9314CFBD3* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3 L_0 = (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m8508BCECB0654E2E93B1A141382E2688ADE7EE7C_gshared_inline (KeyValuePair_2_tDC26B09C26BA829DDE331BCB6AF7C508C763D7A3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m7F63A273E382CB6328736B6E7F321DDFA40EA9E3_inline (AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139* __this, intptr_t ___markerPtr0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___markerPtr0;
		__this->___m_Ptr_0 = L_0;
		intptr_t L_1 = ___markerPtr0;
		ProfilerUnsafeUtility_BeginSample_mB5106F4E7ECEF54906545665ED23928D14F5FCA7(L_1, NULL);
		return;
	}
}
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
