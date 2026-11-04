#include "pch-cpp.hpp"





struct VirtualActionInvoker0
{
	typedef void (*Action)(void*,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*,T1,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1Invoker;
template <typename T1>
struct VirtualActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4
{
	typedef void (*Action)(void*,T1,T2,T3,T4,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj,p1,p2,p3,p4,invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4Invoker;
template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4Invoker<T1*, T2*, T3, T4>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[4] = { p1, p2, &p3, &p4 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4Invoker<T1*, T2*, T3, T4*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2, T3 p3, T4* p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[4] = { p1, p2, &p3, p4 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[3]);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1Invoker;
template <typename R, typename T1>
struct VirtualFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*,T1,T2,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*,T1,T2,T3,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,p3,invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*,T1,T2,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
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
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3*, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4 p4)
	{
		void* params[4] = { p1, &p2, p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct U3CPlaySequenceU3Ed__16_tD929E6110FE78A4938CC59458DF4E7F1E168BCA8;
struct U3CPlaySequenceU3Ed__16_t6E1C7756370FBAA5707020040BCB462499584560;
struct U3CPlaySequenceU3Ed__16_tE012EC718E27C230237DCC2B98ACC84B3C7F095B;
struct U3CPlaySequenceU3Ed__16_tCA72372FBD9801568210AF34AD05BDBA76A80466;
struct U3CPlaySequenceU3Ed__16_t1C260580ED8FDAD0E72E6BB8297B4F389219A035;
struct U3CPlaySequenceU3Ed__16_t72A400DA1334A84E936DC682068A5FE43D939808;
struct U3CStartU3Ed__2_t9658309751B877709F2F33E5F2E46BE104025E47;
struct U3CStartU3Ed__2_tC9423255CD49C2088D279B9AA846474D4B59D80D;
struct U3CStartU3Ed__2_t623C57A50EEA01089DB79D6F1F1217F89E158FEB;
struct U3CStartAutoTweenU3Ed__15_t964033BA020D9A4F19E6256B7CEB1A24FED19BBC;
struct U3CStartAutoTweenU3Ed__15_t8D4EED35BE1F7508EB210894C5CCDB4B853C0409;
struct U3CStartAutoTweenU3Ed__15_t1B24DDAB48535E27943F0747CE374D9B76ED1755;
struct U3CStartAutoTweenU3Ed__15_tED1E53FE63B5378710F206E83DC5BBE005CC7CBA;
struct U3CStartAutoTweenU3Ed__15_tC1F158DF3449E6CAFD97BDBF1A65431F6DBF8290;
struct U3CStartAutoTweenU3Ed__15_t9A8F92B5B1E5F2AB087F724A900818F3E9D715E2;
struct U3CStartAutoTweenU3Ed__15_t0940E62889D459485D0979635ACD5EC7166F76D7;
struct Action_1_tAAE2A43B6C8B488C8EBD92AF56C2D4329018A227;
struct Action_1_t6F23E949C5B7B23A98CD4EE8560AA8A2266BDC22;
struct Action_1_tD0624B0C9A4314C84D75B0C2A563B322540AB9AE;
struct Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A;
struct Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505;
struct Action_1_tC8822DDEF41267DA3844DAD787ACE63C0C385E89;
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
struct Action_1_t749B858905A97DEFD2420D76CB180A280EBF0BDF;
struct Action_1_t9BCEE3E1405DA67DBE5A4E9F0882507B63BCEC2F;
struct Action_1_tF02934211ED550F683C8605BDFBE58BBBEBAD1B2;
struct BindableVariableBase_1_tB87521E1348B0B8E54F53C1261B839682F8D655F;
struct BindableVariableBase_1_t0B8C3C183E9A64B760FC611EA6858D9BD639E610;
struct BindableVariableBase_1_tB9252B4815AD3E511244D3B578854D3FF333E4BD;
struct BindableVariableBase_1_tF26C7349EBD3DF838D75EBA46B0FA97EFE9E43D4;
struct BindableVariableBase_1_t4142EEA09360420F28B691D2EC2462CA12F8866A;
struct BindableVariableBase_1_t2B7F2DB22F178A593CBE8E2A3E4288B33A6735EF;
struct BindableVariable_1_tB1E8CB1BE6FC0FC0ADBA23B797014B9E0D2BBEDB;
struct BindableVariable_1_t3A66A98B9D01BD0046D7960AEC1E2F23321EFBA9;
struct BindableVariable_1_tAB8C2D23769D801C8E39D4AA927DD23AF0E6816C;
struct BindableVariable_1_t71ED0CC97E302AFB62C164F5DF70E87569239CDE;
struct BindableVariable_1_t2F927DE37EBA52F9977D6399FEE7D5338FFE69DC;
struct BindableVariable_1_t0AD8E7C4D528C426B472321BDF57E14B53A43717;
struct Comparer_1_t0A03F9FBBEA32FB1528366652D3D38513E8B1137;
struct Comparer_1_tB56A5468D831FE137C33D5EF7A7DCE42DEF55024;
struct Dictionary_2_t29FB78C9E5DF443E2A5880E4E9B7C86E516670E0;
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
struct Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC;
struct Dictionary_2_t765BF9715D7FF2AB2C9E5F01142AD0BFDC359E52;
struct Dictionary_2_t09274CBE3EED962B84F3CEEEF6C788C36A4A3618;
struct Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F;
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2;
struct EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081;
struct Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4;
struct Func_1_t8C5E17524CD4BD918CD05D6B159DE24957E6BC57;
struct Func_1_t2EA1BEDF6FC8E793873EC33EEA18917D377563AA;
struct Func_1_t1A2695781E82136CD487B3651F10C39AFFB20160;
struct Func_1_t4E40962A63D4F89E5895ED02E5565769CDAF69F2;
struct Func_1_t7382A5BFAECE2AC31A9BC40C1AD390DEFC04788C;
struct Func_1_t1ACCEB1BA30FC7EFE300C2C364EADE4AC38AC377;
struct Func_1_t80779C57AE159E6046EB1F069BAED1DCF063CB72;
struct Func_1_t8595E9DBFD03EAC6C0432DF9BB6F8D396D962400;
struct Func_1_t7F62161D516367707FC9A813746DA15F0C9F92E3;
struct Func_1_tB8D48550F0C370F5E3AAE4622412E5E5E5C69ECD;
struct Func_1_t939C76786560C28553DF1C31E4C4D15547FD99CF;
struct Func_1_tA9F0E9F0E0602093EB7420D536C9BC37CE96061C;
struct Func_1_t302F655F73122FE6BD75CE4CE4F571B545AAF171;
struct Func_1_t00739CCE4446985105AD10E884B0CC0B0B3F2685;
struct Func_1_t332F5DDA0884E441C5E4FBF8F424A7521A2D91F1;
struct Func_1_t2C7AB8C5D41366DA6920A7F404DFC92A24AFB15E;
struct Func_1_tC281455DA2DAFD6724BA91D2E8CAC67AC8F6DA65;
struct Func_1_t7CF9F5AD2251AF4C37E4EFBC5F79036331D84828;
struct Func_1_t2EBBE229235194C5474E250BDF76625FBE708DD1;
struct Func_1_t1EACF0FF78186D8AAD4E1CE5681EF33515EF5321;
struct Func_1_tB63FA76122F39A8574BBAD9B4AC1A5908CE39FD9;
struct Func_1_tD15BD1BBFCFF947D6A7DEA2673CAB316E1519F44;
struct Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3;
struct Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560;
struct Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C;
struct Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4;
struct Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6;
struct Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB;
struct Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659;
struct Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F;
struct Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6;
struct Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5;
struct Func_1_t566D4A654882E282E54CDC3A001E05486F913903;
struct Func_3_t694ADFBBF2CEA4DEF1F1F1F9B00D5DCAE200F97E;
struct Func_3_tE82E2E9CB095585276C858A2EA8860ACC9745B0C;
struct Func_3_tA9AA477D8A5A68C7DC26AE4792295B80F920E61E;
struct Func_3_t314E07D498E5AF026C603B44D8AC99ED7C005D40;
struct Func_3_t8ABA11B2555ED37315928295E1F5259AD6951D6A;
struct Func_3_t679D611E3FC0D6DC6403103FC27F2989317B18D7;
struct Func_3_tE48C31D7100E33FE059CEE93727D825F38ABBD94;
struct Func_3_t8204F4CEB15630A3F397A0E7FB8F90248872DB09;
struct IConstructor_1_t930621BC4EAA12FEB41FC2B594D13E4343E2618D;
struct IConstructor_1_t2E7DBAABEE66765FCD0D7DFC90C022BAF19F50D4;
struct IConstructor_1_t47BF822E241693DAECC4ECCAE299ADDA44CFC4C0;
struct IConstructor_1_t411A5B8EF19EC461DA4BC7BA6E5079CCEE6D62B2;
struct IConstructor_1_t8EB10577432A770766B16D8B92A40940DFB11E82;
struct IConstructor_1_t54F4F7648838AEA450736B43973635CB75783D91;
struct IConstructor_1_t300FDB711D1BC0C69B0B0E4AAAE0B6A647345B42;
struct IConstructor_1_tCCC70297AF4FE980FDC2AE0B96E147AC14599A3D;
struct IConstructor_1_tB1CEFFAE1CE6022168805E328A5CEABBE836716A;
struct IConstructor_1_tE34B96BC40F13146D7C2438B1CA0E4D1E47B1FED;
struct IConstructor_1_t95AC4FC1EA5E833F6A11E6EB5ADA01811A558279;
struct IConstructor_1_t28A8380765092C5D4291F5EDC06C99342EB825FB;
struct IConstructor_1_tB52973DDA944E82C16EE1B40EE3B0B77C3A1AA4D;
struct IConstructor_1_tDB1CE5779EED69233DDD6868F9CE38E960F8AC94;
struct IConstructor_1_t8524B017A05D85D47528F71F5E85596E7A503F9E;
struct IConstructor_1_t391A251ECF03B0C64D3671C41D00CBDFEC3FA357;
struct IConstructor_1_t0EB4E64ACB720943AF49F451A0D4359D442999FD;
struct IConstructor_1_t4B7C7EA4746B1E5758FDEF9AAE982D0BF8ACD539;
struct IConstructor_1_t1E8D6866DB6F30C638EE8ADE11DA73150187CE44;
struct IConstructor_1_tFA4915349F3839A9891E8602A2ED6786740ECD7D;
struct IConstructor_1_t459295021B8FCB54CA76176BD223C9BA51557E32;
struct IConstructor_1_t9E5C643DA9C5622B68D840EDFF390A70ECF2AEA2;
struct IConstructor_1_tD2F0204B018332308BBFE26F5F8B8042F4D3D059;
struct IConstructor_1_tE51AA760737252530326DC43276D34FA2CEE0F9A;
struct IConstructor_1_t796EE1140793AFF116FA892025F4E9DC1EE01995;
struct IConstructor_1_t6ED67945DAFBA6E7912283FDDA2347783F44FB5D;
struct IConstructor_1_t5F014F2823FA5977FD2248DA641BFA7ACC19B72E;
struct IConstructor_1_t49F74C6B918F55A7E99A10D938EF2B58FFCEDBA1;
struct IConstructor_1_t5AD3C56A5054DF1BFCEA9954D4AB6E6CFB76B7CA;
struct IConstructor_1_t2522DB3785B984B4627CA8176690F60C47D1BAD3;
struct IConstructor_1_t45B3820CA05F1B9B9E49A3CACF573C4E2FB8C199;
struct IConstructor_1_t0BEAEB22F43824D35B4CDE12AAABB4B7FB0FD543;
struct IEqualityComparer_1_tF175EE4608832085A0EE2A97DAE545B83F097888;
struct IPropertyBag_1_tFBCE7A7420E0A61651C8A11A7451DC0876AC3988;
struct IPropertyBag_1_t34647E6DBA2B3FBAF772A30AB58389B957EB2353;
struct IPropertyBag_1_tE29BEC42A2C3E7DF88983A6F59E88D596AEC9E43;
struct IPropertyBag_1_t4503949B37B2AF7B859307C5B9FC0D205FBBB58C;
struct IPropertyBag_1_t0C3656FAD043E643AE0AF2CE556A8B0EFC08BAF0;
struct IPropertyBag_1_t12476CBFA03E553669FC0F78B8B392643D0EA98D;
struct IPropertyBag_1_tC89C7D801308BB118F51FC38D2EDF9150099CD87;
struct IPropertyBag_1_tA5F5E06CD7B6D9DA44B0C96DD751E125A2838965;
struct IPropertyBag_1_tB4F574342A3326282E305E935876E09BA8AC2A2E;
struct IPropertyBag_1_t0F569CB3E3DD679044B9F9E594B94E991D876F55;
struct KeyCollection_tFAD4F134C4BF43E0B9C815CAF6400BC70707FFE6;
struct KeyCollection_t73C0C79A1AE364904271EDF868E84A40E1036C14;
struct List_1_tA19E4BE75B3FB4E7BA86F7274DD3C93E940EBFFC;
struct List_1_tE7FB077B3CEA6371A27F72CC60962491AB71490B;
struct List_1_tBD2E4781BB0BD1FCD30E6D3586CA13AFD0ABE6F7;
struct List_1_tD6F1685FEE5A196B3002ACC649A1DF5C65162268;
struct List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF;
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2;
struct ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3;
struct Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910;
struct Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF;
struct TransitionEventsFrameState_t2BA90E4FA6C6D2E561A72ECDB3706772EDD5D881;
struct TransitionEventsFrameState_tC8FEB488506DC99B874A454BED371793598879E9;
struct TransitionEventsFrameState_tFBFEC4A6BE1900A8D6115CD438F3CCC15A0DBCE9;
struct TransitionEventsFrameState_t79437953855E2A5F706435B92B95B4742EA44B4F;
struct TransitionEventsFrameState_tC00A8234FEB122E10B4F583D3A620DA47BBF5D71;
struct TransitionEventsFrameState_t9DC16C7535A4271EA0FD763A64CD7CF84670EC64;
struct TransitionEventsFrameState_t25D5D3420391A40A0B978B0D5CA13F775283274E;
struct TransitionEventsFrameState_t864A52D0F7726A4F4C2C667BCB56E8A745F7340C;
struct TransitionEventsFrameState_t896507B4A758D8F131A06984765BA0F57C8939A2;
struct TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF;
struct TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC;
struct TransitionEventsFrameState_t99BD53E9FE7D95EEB993EF2BF99CDD1609D6AA7B;
struct TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB;
struct TryGetFromGestures_1_t1F3969F3F7021D89942AAE1EC8011838CB6288FA;
struct TryGetFromGestures_1_tC53E6B0C4112A47BC72476BBEF8A9FD24865FEEC;
struct TryGetFromGestures_1_t91BF865CE2B5D5EEE31F2421F30748B35FC37B87;
struct Tuple_2_tA7C2516BCF161E7460ECB96A4AA0F32EE68F1D32;
struct Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8;
struct Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513;
struct Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB;
struct TweenRunner_1_tF277B20625C8B1939DC85508C4679C690757395E;
struct TweenRunner_1_t506331CFBEF4B7DD78419718F858F743187D08F0;
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
struct TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B;
struct TweenRunner_1_tA3E6EB0834EDD64BCDE6943EAFE03D0522926859;
struct TweenableVariableAsyncBase_1_t84B7FBBAD5BE9B483A1DF99D3C2F93356D430055;
struct TweenableVariableAsyncBase_1_tF183EC63E8112FA406C601A7E49A5AC36036F088;
struct TweenableVariableAsyncBase_1_t7FD0BE25E95FFCEE9DE5FDBE93CBFB450DEBCD76;
struct TweenableVariableAsyncBase_1_t0A92C17D9391783B25BD32E62A3A296324C1A287;
struct TweenableVariableAsyncBase_1_t24C3255684D7C73284B0C5A0EBEEC43C7CE867F3;
struct TweenableVariableAsyncBase_1_tD3FE5A9C4EEE24A00A53CD66FEB12CB408F76FF2;
struct TweenableVariableBase_1_t8364472CCBD4F605378E11C0AC3182CEC3E26736;
struct TweenableVariableBase_1_t894346E06DB112599F8C5FBC5AD5F251F33CFBD9;
struct TweenableVariableBase_1_tE056BE2293DB2624363EEADF82A5A9439C26C35D;
struct TweenableVariableBase_1_tAB0E2A3343CE9D2FA33FB849E99B8DF11F6F55AC;
struct TweenableVariableBase_1_tA9EC62FCEF5FA67F96F841799692ED88299C6DCB;
struct TweenableVariableBase_1_t559E6D69FB65AF8FBCF6044D84C6466C849D826E;
struct TweenableVariableBase_1_t9D1C5D207B9A321B201B828091D3953D761BB265;
struct TweenableVariableSynchronousBase_1_t27C59C64A400660B379C3DC861B0AAFB196D92AA;
struct TweenableVariableSynchronousBase_1_t4C3B9512C9A567578B87241A0C19E00F4BE0B892;
struct TypeConstructor_1_tFF185AD2A1E08A2874947762589A4D832280E8FE;
struct TypeConstructor_1_tE75B89D5AA084F114504AC7D05DD0F8154EF0058;
struct TypeConstructor_1_tF5F8176F6A09CD203432077E7C7B5AABC31327EA;
struct TypeConstructor_1_tD5DA07CE239BB0599B0F321C96FD2BD58C83DF97;
struct TypeConstructor_1_tB7EF02BD3EFCFE0495E9D67B2BCFF3652B6D6C6F;
struct TypeConstructor_1_t4B0BD235497BF51A55673786B4B3FEC08FF7A40A;
struct TypeConstructor_1_t4203D4BA6648D84005F60BA10B9E7FFFD1BD104C;
struct TypeConstructor_1_t1BB003702AC661844ECFE30F83C9FA228250C58F;
struct TypeConstructor_1_tA4FE8677DDBAE558A4A99F5C70DA123D6D746068;
struct TypeConstructor_1_t04F8CEA6E3DA7BFE91DB6C903CB750ECBE264E3F;
struct ValueCollection_t65B544B071475F1D6AA36F54F506E013AC0D137E;
struct ValueCollection_t6A97FB8D601D8DB0AEB18A1FA9C9B42007CB71FC;
struct EntryU5BU5D_t7D88CA28550BAA1CE7717583FAD579BDAFF0EE9D;
struct EntryU5BU5D_t4BFD09382678A7D9BBA8198240AA8E87B652B0F5;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct EventBaseU5BU5D_t1EB0F8CCFFAF0F2BD202BB74153A8BFEFEC8DC45;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB;
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
struct IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
struct String_t;
struct StringBuilder_t;
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
struct Type_t;
struct VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC;
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct ColorTweenCallback_tBE6685495BFEE2763BED5BF7EFC9571F7F1D724E;
struct FloatTweenCallback_t5348AE7D6567149477FA6C0B7A70DBCEA1E73C7E;
struct FloatTweenCallback_tF3159C7BD29B10629506C32DBDC426B076A308CC;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStructuralComparable_tECDA529F783AB28C827B9345B6A008354E596CED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITupleInternal_t44C4B366A2607196290A5ACF23903A91CC8D6F17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96;
IL2CPP_EXTERN_C String_t* _stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4;
IL2CPP_EXTERN_C String_t* _stringLiteralBE4A57F56A51C577CDB9BA98303B39F3486090F7;
IL2CPP_EXTERN_C String_t* _stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m65631FED8A24BDF474F747C679F7AEB4AC878000_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mFA3E89A4BCCE2A0CC4038E1CE71EDC3AAD293D17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1_Release_m8A03719E6A9D2632DFA4DB41D2D2A0085CF2D6E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1__ctor_m3F6706AE99FFF8D495384A6F630A889EC9918060_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CU3EO_t7CCBA094BC61E89AE8824EBE2C208E8301421B2F  : public RuntimeObject
{
};
struct U3CU3EO_tF65737FFA29D453F880A97786FC1135BF1DF4433  : public RuntimeObject
{
};
struct U3CU3EO_tC1F9D0861156D7C559F6EEE36FC95D3ABF3F0025  : public RuntimeObject
{
};
struct U3CU3EO_tB19509DACF6507088BAF9966D572B59E6567F762  : public RuntimeObject
{
};
struct U3CU3EO_tB37F1F5975821568EC9FCF1B098BD4B808DE7992  : public RuntimeObject
{
};
struct U3CU3EO_t8D134FDE8AA025D402BB56321810E7A5002C8021  : public RuntimeObject
{
};
struct U3CU3EO_t7E5104856073A68D0629FC4F5C0F61EBE336C5DE  : public RuntimeObject
{
};
struct U3CU3EO_t327797ABDD0FDED67E617F95EB6916B24E751BF2  : public RuntimeObject
{
};
struct U3CU3EO_tDD9D7685B9E390A6C6CEE6412E3C2B81AB9EB6DC  : public RuntimeObject
{
};
struct U3CU3EO_t3C9D2B01CEA2AC8CA1A4426C4F67FB0FF635919E  : public RuntimeObject
{
};
struct U3CU3Ec_t47C5435573FC26774801CF66233F6FD489A68B88  : public RuntimeObject
{
};
struct U3CU3Ec_tB49B7742FFA15FC3176D4EBF02F5CF3F3615971A  : public RuntimeObject
{
};
struct U3CU3Ec_t693CB4342A2EAB24AFF73D94D9CC66B90E6BC00A  : public RuntimeObject
{
};
struct U3CU3Ec_tFDB718E9F889F46D0872CB24F95B25941CDE4B32  : public RuntimeObject
{
};
struct U3CU3Ec_tCBD2F8AF1FDB9B38F9382C2FF4379AD902996EEF  : public RuntimeObject
{
};
struct U3CU3Ec_t830ABE694C134FC98FDAB5669835E188003F5498  : public RuntimeObject
{
};
struct U3CU3Ec_t64793DE671E73EDC94413D15745654BD15ACF206  : public RuntimeObject
{
};
struct U3CU3Ec_t322D48A1E5BB83885947DEAEB5CDB41F6F85CF0D  : public RuntimeObject
{
};
struct U3CU3Ec_t04BDC2F22EDAD98D065EF20685724506C9415400  : public RuntimeObject
{
};
struct U3CU3Ec_t57AD38BE6C52F4166D7228E63B44510992250E27  : public RuntimeObject
{
};
struct U3CU3Ec_t343A84FA7F733C5EA0C7D99FBBA003DAC613F61F  : public RuntimeObject
{
};
struct U3CU3Ec_t83F75628053C082E4D8ABA9B60CC02B73030C02F  : public RuntimeObject
{
};
struct U3CU3Ec_t73BDFFDC090AF7822A5E862978652BFDE81B12DA  : public RuntimeObject
{
};
struct U3CPlaySequenceU3Ed__16_tE012EC718E27C230237DCC2B98ACC84B3C7F095B  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	TweenableVariableBase_1_tE056BE2293DB2624363EEADF82A5A9439C26C35D* ___U3CU3E4__this;
	float ___duration;
	float ___start;
	float ___finish;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onComplete;
	float ___U3CtimeElapsedU3E5__2;
};
struct U3CPlaySequenceU3Ed__16_t2AE39AD2793C196D4DA67537F7B0D293DBFA5F5D : public RuntimeObject {};
struct U3CStartU3Ed__2_t1568C5BC91DF861B9E8D83BD27BF6FB38F40D685 : public RuntimeObject {};
struct U3CStartU3Ed__2_tBF82820C779B852A606DE0B61E09B9EB4A27F942 : public RuntimeObject {};
struct U3CStartAutoTweenU3Ed__15_t964033BA020D9A4F19E6256B7CEB1A24FED19BBC  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	TweenableVariableBase_1_t8364472CCBD4F605378E11C0AC3182CEC3E26736* ___U3CU3E4__this;
	float ___deltaTimeMultiplier;
};
struct U3CStartAutoTweenU3Ed__15_t8D4EED35BE1F7508EB210894C5CCDB4B853C0409  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	TweenableVariableBase_1_t894346E06DB112599F8C5FBC5AD5F251F33CFBD9* ___U3CU3E4__this;
	float ___deltaTimeMultiplier;
};
struct U3CStartAutoTweenU3Ed__15_t1B24DDAB48535E27943F0747CE374D9B76ED1755  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	TweenableVariableBase_1_tE056BE2293DB2624363EEADF82A5A9439C26C35D* ___U3CU3E4__this;
	float ___deltaTimeMultiplier;
};
struct U3CStartAutoTweenU3Ed__15_tED1E53FE63B5378710F206E83DC5BBE005CC7CBA  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	TweenableVariableBase_1_tAB0E2A3343CE9D2FA33FB849E99B8DF11F6F55AC* ___U3CU3E4__this;
	float ___deltaTimeMultiplier;
};
struct U3CStartAutoTweenU3Ed__15_tC1F158DF3449E6CAFD97BDBF1A65431F6DBF8290  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	TweenableVariableBase_1_tA9EC62FCEF5FA67F96F841799692ED88299C6DCB* ___U3CU3E4__this;
	float ___deltaTimeMultiplier;
};
struct U3CStartAutoTweenU3Ed__15_t9A8F92B5B1E5F2AB087F724A900818F3E9D715E2  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	TweenableVariableBase_1_t559E6D69FB65AF8FBCF6044D84C6466C849D826E* ___U3CU3E4__this;
	float ___deltaTimeMultiplier;
};
struct U3CStartAutoTweenU3Ed__15_t0940E62889D459485D0979635ACD5EC7166F76D7  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	TweenableVariableBase_1_t9D1C5D207B9A321B201B828091D3953D761BB265* ___U3CU3E4__this;
	float ___deltaTimeMultiplier;
};
struct BindableVariableBase_1_tB9252B4815AD3E511244D3B578854D3FF333E4BD  : public RuntimeObject
{
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___valueUpdated;
	float ___m_InternalValue;
	bool ___m_CheckEquality;
	bool ___m_IsInitialized;
	Func_3_tA9AA477D8A5A68C7DC26AE4792295B80F920E61E* ___m_EqualityMethod;
	int32_t ___m_BindingCount;
};
struct BindableVariableBase_1_tB750E2701A13D0FF6D0351CB5CDEF8ED5E414BAE : public RuntimeObject {};
struct BindableVariableBase_1_tF075B55161CD973AA28BB081CC7E13F360F44F90 : public RuntimeObject {};
struct Comparer_1_t0A03F9FBBEA32FB1528366652D3D38513E8B1137  : public RuntimeObject
{
};
struct Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t7D88CA28550BAA1CE7717583FAD579BDAFF0EE9D* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tFAD4F134C4BF43E0B9C815CAF6400BC70707FFE6* ____keys;
	ValueCollection_t65B544B071475F1D6AA36F54F506E013AC0D137E* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t4BFD09382678A7D9BBA8198240AA8E87B652B0F5* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t73C0C79A1AE364904271EDF868E84A40E1036C14* ____keys;
	ValueCollection_t6A97FB8D601D8DB0AEB18A1FA9C9B42007CB71FC* ____values;
	RuntimeObject* ____syncRoot;
};
struct EmptyArray_1_tF2F83411E5DC963DBFFD1F75B10B58A1ED224DD5  : public RuntimeObject
{
};
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2  : public RuntimeObject
{
};
struct EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081  : public RuntimeObject
{
};
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E  : public RuntimeObject
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2  : public RuntimeObject
{
	List_1_tA19E4BE75B3FB4E7BA86F7274DD3C93E940EBFFC* ___m_List;
	Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4* ___m_CreateFunc;
	Action_1_tAAE2A43B6C8B488C8EBD92AF56C2D4329018A227* ___m_ActionOnGet;
	Action_1_tAAE2A43B6C8B488C8EBD92AF56C2D4329018A227* ___m_ActionOnRelease;
	Action_1_tAAE2A43B6C8B488C8EBD92AF56C2D4329018A227* ___m_ActionOnDestroy;
	int32_t ___m_MaxSize;
	bool ___m_CollectionCheck;
	Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* ___m_FreshlyReleased;
	int32_t ___U3CCountAllU3Ek__BackingField;
};
struct ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3  : public RuntimeObject
{
	List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ___m_List;
	Func_1_t566D4A654882E282E54CDC3A001E05486F913903* ___m_CreateFunc;
	Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* ___m_ActionOnGet;
	Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* ___m_ActionOnRelease;
	Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* ___m_ActionOnDestroy;
	int32_t ___m_MaxSize;
	bool ___m_CollectionCheck;
	Il2CppSharedGenericObject* ___m_FreshlyReleased;
	int32_t ___U3CCountAllU3Ek__BackingField;
};
struct Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910  : public RuntimeObject
{
	EventBaseU5BU5D_t1EB0F8CCFFAF0F2BD202BB74153A8BFEFEC8DC45* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct TransitionEventsFrameState_t2BA90E4FA6C6D2E561A72ECDB3706772EDD5D881  : public RuntimeObject
{
	Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* ___elementPropertyStateDelta;
	Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* ___elementPropertyQueuedEvents;
	RuntimeObject* ___panel;
	int32_t ___m_ChangesCount;
};
struct TransitionEventsFrameState_tC8FEB488506DC99B874A454BED371793598879E9  : public RuntimeObject
{
	Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* ___elementPropertyStateDelta;
	Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* ___elementPropertyQueuedEvents;
	RuntimeObject* ___panel;
	int32_t ___m_ChangesCount;
};
struct TransitionEventsFrameState_tFBFEC4A6BE1900A8D6115CD438F3CCC15A0DBCE9  : public RuntimeObject
{
	Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* ___elementPropertyStateDelta;
	Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* ___elementPropertyQueuedEvents;
	RuntimeObject* ___panel;
	int32_t ___m_ChangesCount;
};
struct TransitionEventsFrameState_t79437953855E2A5F706435B92B95B4742EA44B4F  : public RuntimeObject
{
	Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* ___elementPropertyStateDelta;
	Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* ___elementPropertyQueuedEvents;
	RuntimeObject* ___panel;
	int32_t ___m_ChangesCount;
};
struct TransitionEventsFrameState_tC00A8234FEB122E10B4F583D3A620DA47BBF5D71  : public RuntimeObject
{
	Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* ___elementPropertyStateDelta;
	Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* ___elementPropertyQueuedEvents;
	RuntimeObject* ___panel;
	int32_t ___m_ChangesCount;
};
struct TransitionEventsFrameState_t9DC16C7535A4271EA0FD763A64CD7CF84670EC64  : public RuntimeObject
{
	Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* ___elementPropertyStateDelta;
	Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* ___elementPropertyQueuedEvents;
	RuntimeObject* ___panel;
	int32_t ___m_ChangesCount;
};
struct TransitionEventsFrameState_t25D5D3420391A40A0B978B0D5CA13F775283274E  : public RuntimeObject
{
	Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* ___elementPropertyStateDelta;
	Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* ___elementPropertyQueuedEvents;
	RuntimeObject* ___panel;
	int32_t ___m_ChangesCount;
};
struct TransitionEventsFrameState_t864A52D0F7726A4F4C2C667BCB56E8A745F7340C  : public RuntimeObject
{
	Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* ___elementPropertyStateDelta;
	Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* ___elementPropertyQueuedEvents;
	RuntimeObject* ___panel;
	int32_t ___m_ChangesCount;
};
struct TransitionEventsFrameState_t896507B4A758D8F131A06984765BA0F57C8939A2  : public RuntimeObject
{
	Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* ___elementPropertyStateDelta;
	Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* ___elementPropertyQueuedEvents;
	RuntimeObject* ___panel;
	int32_t ___m_ChangesCount;
};
struct TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF  : public RuntimeObject
{
	Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* ___elementPropertyStateDelta;
	Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* ___elementPropertyQueuedEvents;
	RuntimeObject* ___panel;
	int32_t ___m_ChangesCount;
};
struct TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC  : public RuntimeObject
{
	Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* ___elementPropertyStateDelta;
	Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* ___elementPropertyQueuedEvents;
	RuntimeObject* ___panel;
	int32_t ___m_ChangesCount;
};
struct TransitionEventsFrameState_t99BD53E9FE7D95EEB993EF2BF99CDD1609D6AA7B  : public RuntimeObject
{
	Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* ___elementPropertyStateDelta;
	Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* ___elementPropertyQueuedEvents;
	RuntimeObject* ___panel;
	int32_t ___m_ChangesCount;
};
struct TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB  : public RuntimeObject
{
	Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* ___elementPropertyStateDelta;
	Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* ___elementPropertyQueuedEvents;
	RuntimeObject* ___panel;
	int32_t ___m_ChangesCount;
};
struct Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8 : public RuntimeObject {};
struct Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513  : public RuntimeObject
{
	Il2CppSharedGenericObject* ___m_Item1;
	Il2CppSharedGenericObject* ___m_Item2;
	Il2CppSharedGenericObject* ___m_Item3;
};
struct Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB : public RuntimeObject {};
struct TweenRunner_1_tF277B20625C8B1939DC85508C4679C690757395E  : public RuntimeObject
{
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___m_CoroutineContainer;
	RuntimeObject* ___m_Tween;
};
struct TweenRunner_1_t506331CFBEF4B7DD78419718F858F743187D08F0  : public RuntimeObject
{
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___m_CoroutineContainer;
	RuntimeObject* ___m_Tween;
};
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4  : public RuntimeObject
{
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___m_CoroutineContainer;
	RuntimeObject* ___m_Tween;
};
struct TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B  : public RuntimeObject
{
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___m_CoroutineContainer;
	RuntimeObject* ___m_Tween;
};
struct TweenRunner_1_tA3E6EB0834EDD64BCDE6943EAFE03D0522926859  : public RuntimeObject
{
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___m_CoroutineContainer;
	RuntimeObject* ___m_Tween;
};
struct TypeConstructor_1_tD1D466F09E7C13EBC5D186052464A64849D5E745  : public RuntimeObject
{
	Func_1_t8C5E17524CD4BD918CD05D6B159DE24957E6BC57* ___m_ExplicitConstructor;
	Func_1_t8C5E17524CD4BD918CD05D6B159DE24957E6BC57* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tC6BA2C6CAF8E51248438F815D158748A22F35F59  : public RuntimeObject
{
	Func_1_t2EA1BEDF6FC8E793873EC33EEA18917D377563AA* ___m_ExplicitConstructor;
	Func_1_t2EA1BEDF6FC8E793873EC33EEA18917D377563AA* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t22427474AA8A92692B369C6DAE953F4091BDA636  : public RuntimeObject
{
	Func_1_t1A2695781E82136CD487B3651F10C39AFFB20160* ___m_ExplicitConstructor;
	Func_1_t1A2695781E82136CD487B3651F10C39AFFB20160* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tDE37B8BA965DC6EB5E86CEA76AE5030D16DD1A23  : public RuntimeObject
{
	Func_1_t4E40962A63D4F89E5895ED02E5565769CDAF69F2* ___m_ExplicitConstructor;
	Func_1_t4E40962A63D4F89E5895ED02E5565769CDAF69F2* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tB58B048E1D1EAB7AF4D35634637E1273AFD0AC4C  : public RuntimeObject
{
	Func_1_t7382A5BFAECE2AC31A9BC40C1AD390DEFC04788C* ___m_ExplicitConstructor;
	Func_1_t7382A5BFAECE2AC31A9BC40C1AD390DEFC04788C* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t653814B7B545D0AB3126B1EECABF7CEEE2012104  : public RuntimeObject
{
	Func_1_t1ACCEB1BA30FC7EFE300C2C364EADE4AC38AC377* ___m_ExplicitConstructor;
	Func_1_t1ACCEB1BA30FC7EFE300C2C364EADE4AC38AC377* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t7F386E4452494C6A853A99985CA15ADC8395CD4E  : public RuntimeObject
{
	Func_1_t80779C57AE159E6046EB1F069BAED1DCF063CB72* ___m_ExplicitConstructor;
	Func_1_t80779C57AE159E6046EB1F069BAED1DCF063CB72* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t4108DA4A9676E4D26F7CF3673FA36297050C0C7A  : public RuntimeObject
{
	Func_1_t8595E9DBFD03EAC6C0432DF9BB6F8D396D962400* ___m_ExplicitConstructor;
	Func_1_t8595E9DBFD03EAC6C0432DF9BB6F8D396D962400* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t0FFC02AC4715C3F3BE68ABC4C81287D6DEA82F4A  : public RuntimeObject
{
	Func_1_t7F62161D516367707FC9A813746DA15F0C9F92E3* ___m_ExplicitConstructor;
	Func_1_t7F62161D516367707FC9A813746DA15F0C9F92E3* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t0E0CB7D858DB4D18B7C2EC88BDFE37B456E7C861  : public RuntimeObject
{
	Func_1_tB8D48550F0C370F5E3AAE4622412E5E5E5C69ECD* ___m_ExplicitConstructor;
	Func_1_tB8D48550F0C370F5E3AAE4622412E5E5E5C69ECD* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t70A036B1B15B90FBC9F02AF8F6E48E032D5D6540  : public RuntimeObject
{
	Func_1_t939C76786560C28553DF1C31E4C4D15547FD99CF* ___m_ExplicitConstructor;
	Func_1_t939C76786560C28553DF1C31E4C4D15547FD99CF* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tAAE70FE3B0EF5E0FA22EF6FC8FE75F57F18E06BE  : public RuntimeObject
{
	Func_1_tA9F0E9F0E0602093EB7420D536C9BC37CE96061C* ___m_ExplicitConstructor;
	Func_1_tA9F0E9F0E0602093EB7420D536C9BC37CE96061C* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t599F43EE520A42D957067198D3A0718370443163  : public RuntimeObject
{
	Func_1_t302F655F73122FE6BD75CE4CE4F571B545AAF171* ___m_ExplicitConstructor;
	Func_1_t302F655F73122FE6BD75CE4CE4F571B545AAF171* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t94E13CBEFAC3E196D333F68F69C9ABBE4F156800  : public RuntimeObject
{
	Func_1_t00739CCE4446985105AD10E884B0CC0B0B3F2685* ___m_ExplicitConstructor;
	Func_1_t00739CCE4446985105AD10E884B0CC0B0B3F2685* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t588B0FD4F6C65C0F6BB42D167F9B60C2D293B204  : public RuntimeObject
{
	Func_1_t332F5DDA0884E441C5E4FBF8F424A7521A2D91F1* ___m_ExplicitConstructor;
	Func_1_t332F5DDA0884E441C5E4FBF8F424A7521A2D91F1* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tDB18592D861B6EFEAAF1AEEB85C0B25202F67949  : public RuntimeObject
{
	Func_1_t2C7AB8C5D41366DA6920A7F404DFC92A24AFB15E* ___m_ExplicitConstructor;
	Func_1_t2C7AB8C5D41366DA6920A7F404DFC92A24AFB15E* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tDCF155BFEA2707044BB463553DC107540C2A3D5A  : public RuntimeObject
{
	Func_1_tC281455DA2DAFD6724BA91D2E8CAC67AC8F6DA65* ___m_ExplicitConstructor;
	Func_1_tC281455DA2DAFD6724BA91D2E8CAC67AC8F6DA65* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tD167C93E2862C4349CA1F20A32FAA91160F337DA  : public RuntimeObject
{
	Func_1_t7CF9F5AD2251AF4C37E4EFBC5F79036331D84828* ___m_ExplicitConstructor;
	Func_1_t7CF9F5AD2251AF4C37E4EFBC5F79036331D84828* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t081EF6BF602C3F2475067C39C365BF669AB40C3B  : public RuntimeObject
{
	Func_1_t2EBBE229235194C5474E250BDF76625FBE708DD1* ___m_ExplicitConstructor;
	Func_1_t2EBBE229235194C5474E250BDF76625FBE708DD1* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tB5A35333AE4AA1157ADBDB0B4A724C76354C2D8D  : public RuntimeObject
{
	Func_1_t1EACF0FF78186D8AAD4E1CE5681EF33515EF5321* ___m_ExplicitConstructor;
	Func_1_t1EACF0FF78186D8AAD4E1CE5681EF33515EF5321* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tB1CA34A9151868105648EC810DD8EC97702EFDFE  : public RuntimeObject
{
	Func_1_tB63FA76122F39A8574BBAD9B4AC1A5908CE39FD9* ___m_ExplicitConstructor;
	Func_1_tB63FA76122F39A8574BBAD9B4AC1A5908CE39FD9* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t59DD2A4C7ECC1C218E27BFA55E8FEBB72F772E48  : public RuntimeObject
{
	Func_1_tD15BD1BBFCFF947D6A7DEA2673CAB316E1519F44* ___m_ExplicitConstructor;
	Func_1_tD15BD1BBFCFF947D6A7DEA2673CAB316E1519F44* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tFF185AD2A1E08A2874947762589A4D832280E8FE  : public RuntimeObject
{
	Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* ___m_ExplicitConstructor;
	Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tE75B89D5AA084F114504AC7D05DD0F8154EF0058  : public RuntimeObject
{
	Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* ___m_ExplicitConstructor;
	Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tF5F8176F6A09CD203432077E7C7B5AABC31327EA  : public RuntimeObject
{
	Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* ___m_ExplicitConstructor;
	Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tD5DA07CE239BB0599B0F321C96FD2BD58C83DF97  : public RuntimeObject
{
	Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* ___m_ExplicitConstructor;
	Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tB7EF02BD3EFCFE0495E9D67B2BCFF3652B6D6C6F  : public RuntimeObject
{
	Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* ___m_ExplicitConstructor;
	Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t4B0BD235497BF51A55673786B4B3FEC08FF7A40A  : public RuntimeObject
{
	Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* ___m_ExplicitConstructor;
	Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t4203D4BA6648D84005F60BA10B9E7FFFD1BD104C  : public RuntimeObject
{
	Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* ___m_ExplicitConstructor;
	Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t1BB003702AC661844ECFE30F83C9FA228250C58F  : public RuntimeObject
{
	Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* ___m_ExplicitConstructor;
	Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tA4FE8677DDBAE558A4A99F5C70DA123D6D746068  : public RuntimeObject
{
	Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* ___m_ExplicitConstructor;
	Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t04F8CEA6E3DA7BFE91DB6C903CB750ECBE264E3F  : public RuntimeObject
{
	Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* ___m_ExplicitConstructor;
	Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct StringBuilder_t  : public RuntimeObject
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars;
	StringBuilder_t* ___m_ChunkPrevious;
	int32_t ___m_ChunkLength;
	int32_t ___m_ChunkOffset;
	int32_t ___m_MaxCapacity;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};
struct BindableVariable_1_tAB8C2D23769D801C8E39D4AA927DD23AF0E6816C  : public BindableVariableBase_1_tB9252B4815AD3E511244D3B578854D3FF333E4BD
{
};
struct BindableVariable_1_t9FBA3DA545D5DE5BD592DD54DE63796ABDAD0F44 : public RuntimeObject {};
struct BindableVariable_1_tF68814975B820C0866290792123728110FCC67E1 : public RuntimeObject {};
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;
struct Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RenderTexture;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___m_VectorImage;
};
struct Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_pinvoke
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RenderTexture;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___m_VectorImage;
};
struct Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_com
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RenderTexture;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___m_VectorImage;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE 
{
	FloatTweenCallback_t5348AE7D6567149477FA6C0B7A70DBCEA1E73C7E* ___m_Target;
	float ___m_StartValue;
	float ___m_TargetValue;
	float ___m_Duration;
	bool ___m_IgnoreTimeScale;
};
struct FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE_marshaled_pinvoke
{
	FloatTweenCallback_t5348AE7D6567149477FA6C0B7A70DBCEA1E73C7E* ___m_Target;
	float ___m_StartValue;
	float ___m_TargetValue;
	float ___m_Duration;
	int32_t ___m_IgnoreTimeScale;
};
struct FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE_marshaled_com
{
	FloatTweenCallback_t5348AE7D6567149477FA6C0B7A70DBCEA1E73C7E* ___m_Target;
	float ___m_StartValue;
	float ___m_TargetValue;
	float ___m_Duration;
	int32_t ___m_IgnoreTimeScale;
};
struct FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A 
{
	FloatTweenCallback_tF3159C7BD29B10629506C32DBDC426B076A308CC* ___m_Target;
	float ___m_StartValue;
	float ___m_TargetValue;
	float ___m_Duration;
	bool ___m_IgnoreTimeScale;
};
struct FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A_marshaled_pinvoke
{
	FloatTweenCallback_tF3159C7BD29B10629506C32DBDC426B076A308CC* ___m_Target;
	float ___m_StartValue;
	float ___m_TargetValue;
	float ___m_Duration;
	int32_t ___m_IgnoreTimeScale;
};
struct FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A_marshaled_com
{
	FloatTweenCallback_tF3159C7BD29B10629506C32DBDC426B076A308CC* ___m_Target;
	float ___m_StartValue;
	float ___m_TargetValue;
	float ___m_Duration;
	int32_t ___m_IgnoreTimeScale;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 
{
	uint64_t ___jobGroup;
	int32_t ___version;
};
struct MethodBase_t  : public MemberInfo_t
{
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
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
struct float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 
{
	float ___x;
	float ___y;
};
struct float3_t7600B73F092B37F484B12910A5269F30C778D31E 
{
	float ___x;
	float ___y;
	float ___z;
};
struct float4_t545A994996126766890C1F28B43EA823F2410190 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct U3CPlaySequenceU3Ed__16_tD929E6110FE78A4938CC59458DF4E7F1E168BCA8  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	TweenableVariableBase_1_t8364472CCBD4F605378E11C0AC3182CEC3E26736* ___U3CU3E4__this;
	float ___duration;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___start;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___finish;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onComplete;
	float ___U3CtimeElapsedU3E5__2;
};
struct U3CPlaySequenceU3Ed__16_t6E1C7756370FBAA5707020040BCB462499584560  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	TweenableVariableBase_1_t894346E06DB112599F8C5FBC5AD5F251F33CFBD9* ___U3CU3E4__this;
	float ___duration;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___start;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___finish;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onComplete;
	float ___U3CtimeElapsedU3E5__2;
};
struct U3CPlaySequenceU3Ed__16_tCA72372FBD9801568210AF34AD05BDBA76A80466  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	TweenableVariableBase_1_tA9EC62FCEF5FA67F96F841799692ED88299C6DCB* ___U3CU3E4__this;
	float ___duration;
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___start;
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___finish;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onComplete;
	float ___U3CtimeElapsedU3E5__2;
};
struct U3CPlaySequenceU3Ed__16_t1C260580ED8FDAD0E72E6BB8297B4F389219A035  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	TweenableVariableBase_1_t559E6D69FB65AF8FBCF6044D84C6466C849D826E* ___U3CU3E4__this;
	float ___duration;
	float3_t7600B73F092B37F484B12910A5269F30C778D31E ___start;
	float3_t7600B73F092B37F484B12910A5269F30C778D31E ___finish;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onComplete;
	float ___U3CtimeElapsedU3E5__2;
};
struct U3CPlaySequenceU3Ed__16_t72A400DA1334A84E936DC682068A5FE43D939808  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	TweenableVariableBase_1_t9D1C5D207B9A321B201B828091D3953D761BB265* ___U3CU3E4__this;
	float ___duration;
	float4_t545A994996126766890C1F28B43EA823F2410190 ___start;
	float4_t545A994996126766890C1F28B43EA823F2410190 ___finish;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onComplete;
	float ___U3CtimeElapsedU3E5__2;
};
struct U3CStartU3Ed__2_tC9423255CD49C2088D279B9AA846474D4B59D80D  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE ___tweenInfo;
	float ___U3CelapsedTimeU3E5__2;
};
struct U3CStartU3Ed__2_t623C57A50EEA01089DB79D6F1F1217F89E158FEB  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A ___tweenInfo;
	float ___U3CelapsedTimeU3E5__2;
};
struct BindableVariableBase_1_tB87521E1348B0B8E54F53C1261B839682F8D655F  : public RuntimeObject
{
	Action_1_t6F23E949C5B7B23A98CD4EE8560AA8A2266BDC22* ___valueUpdated;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_InternalValue;
	bool ___m_CheckEquality;
	bool ___m_IsInitialized;
	Func_3_t694ADFBBF2CEA4DEF1F1F1F9B00D5DCAE200F97E* ___m_EqualityMethod;
	int32_t ___m_BindingCount;
};
struct BindableVariableBase_1_t0B8C3C183E9A64B760FC611EA6858D9BD639E610  : public RuntimeObject
{
	Action_1_tD0624B0C9A4314C84D75B0C2A563B322540AB9AE* ___valueUpdated;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_InternalValue;
	bool ___m_CheckEquality;
	bool ___m_IsInitialized;
	Func_3_tE82E2E9CB095585276C858A2EA8860ACC9745B0C* ___m_EqualityMethod;
	int32_t ___m_BindingCount;
};
struct BindableVariableBase_1_tF26C7349EBD3DF838D75EBA46B0FA97EFE9E43D4  : public RuntimeObject
{
	Action_1_t749B858905A97DEFD2420D76CB180A280EBF0BDF* ___valueUpdated;
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___m_InternalValue;
	bool ___m_CheckEquality;
	bool ___m_IsInitialized;
	Func_3_t679D611E3FC0D6DC6403103FC27F2989317B18D7* ___m_EqualityMethod;
	int32_t ___m_BindingCount;
};
struct BindableVariableBase_1_t4142EEA09360420F28B691D2EC2462CA12F8866A  : public RuntimeObject
{
	Action_1_t9BCEE3E1405DA67DBE5A4E9F0882507B63BCEC2F* ___valueUpdated;
	float3_t7600B73F092B37F484B12910A5269F30C778D31E ___m_InternalValue;
	bool ___m_CheckEquality;
	bool ___m_IsInitialized;
	Func_3_tE48C31D7100E33FE059CEE93727D825F38ABBD94* ___m_EqualityMethod;
	int32_t ___m_BindingCount;
};
struct BindableVariableBase_1_t2B7F2DB22F178A593CBE8E2A3E4288B33A6735EF  : public RuntimeObject
{
	Action_1_tF02934211ED550F683C8605BDFBE58BBBEBAD1B2* ___valueUpdated;
	float4_t545A994996126766890C1F28B43EA823F2410190 ___m_InternalValue;
	bool ___m_CheckEquality;
	bool ___m_IsInitialized;
	Func_3_t8204F4CEB15630A3F397A0E7FB8F90248872DB09* ___m_EqualityMethod;
	int32_t ___m_BindingCount;
};
typedef Il2CppFullySharedGenericStruct Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1;
struct Tuple_2_tA7C2516BCF161E7460ECB96A4AA0F32EE68F1D32  : public RuntimeObject
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Item1;
	float ___m_Item2;
};
struct TweenableVariableBase_1_tE056BE2293DB2624363EEADF82A5A9439C26C35D  : public BindableVariable_1_tAB8C2D23769D801C8E39D4AA927DD23AF0E6816C
{
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_AnimationCurve;
	float ___m_Target;
	float ___U3CinitialValueU3Ek__BackingField;
};
struct TweenableVariableBase_1_tF83C2E3392A373F7E0B8F6E0ED0DB29FE2634534 : public RuntimeObject {};
struct TweenableVariableBase_1_tAB0E2A3343CE9D2FA33FB849E99B8DF11F6F55AC : public RuntimeObject {};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	intptr_t ___m_Ptr;
	bool ___m_RequiresNativeCleanup;
};
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr;
	int32_t ___m_RequiresNativeCleanup;
};
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr;
	int32_t ___m_RequiresNativeCleanup;
};
struct BackgroundPositionKeyword_tE680A05B983D256AADC8E2CF1CA169D004B8641B 
{
	int32_t ___value__;
};
struct BackgroundSizeType_tD194B20FF5086D494ABF8D799124D2FC4FFCC674 
{
	int32_t ___value__;
};
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB  : public MethodBase_t
{
};
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	intptr_t ___m_Ptr;
};
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr;
};
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Handedness_tC87DA4E9D99745447BF40B631E8B479E32D8E37F 
{
	int32_t ___value__;
};
struct InstantiationKind_t9B77929786BCA193B4A916F2F25793598CF0DF7D 
{
	int32_t ___value__;
};
struct LayoutUnit_tF18EC17FE8588A01C72784546410EA0D9B1D2F22 
{
	int32_t ___value__;
};
struct NativeArrayOptions_t3E979EEF4B4840228A7692A97DA07553C6465F1D 
{
	int32_t ___value__;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
};
struct Repeat_tC0330B75B12D24B063BA5151AF3BB73B85D8B840 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct StyleKeyword_t2812E72266C15CBA8927586972DC2FD27B10E705 
{
	int32_t ___value__;
};
struct StylePropertyId_tA3B8A5213F5BA43F9C5443B27B165D744713BE69 
{
	int32_t ___value__;
};
struct WrapMode_t6C6EABC32662DF078C3C977196618603C2F3A079 
{
	int32_t ___value__;
};
struct XRCommonHandGesturesFlags_tA908D1693832C9EFF38F9C1E2974A43F5A276CC1 
{
	int32_t ___value__;
};
struct Unit_t21DCD5C095F7DC1A0B9A47CAF8CAD3E7776CD3DB 
{
	int32_t ___value__;
};
struct ColorTweenMode_t8A612404D746B1FDD36D22C97D87E7C839C3D7A8 
{
	int32_t ___value__;
};
struct BindableVariable_1_tB1E8CB1BE6FC0FC0ADBA23B797014B9E0D2BBEDB  : public BindableVariableBase_1_tB87521E1348B0B8E54F53C1261B839682F8D655F
{
};
struct BindableVariable_1_t3A66A98B9D01BD0046D7960AEC1E2F23321EFBA9  : public BindableVariableBase_1_t0B8C3C183E9A64B760FC611EA6858D9BD639E610
{
};
struct BindableVariable_1_t71ED0CC97E302AFB62C164F5DF70E87569239CDE  : public BindableVariableBase_1_tF26C7349EBD3DF838D75EBA46B0FA97EFE9E43D4
{
};
struct BindableVariable_1_t2F927DE37EBA52F9977D6399FEE7D5338FFE69DC  : public BindableVariableBase_1_t4142EEA09360420F28B691D2EC2462CA12F8866A
{
};
struct BindableVariable_1_t0AD8E7C4D528C426B472321BDF57E14B53A43717  : public BindableVariableBase_1_t2B7F2DB22F178A593CBE8E2A3E4288B33A6735EF
{
};
struct NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tB2C0A4BD42DDC767D3B622ACDDD0A5E3898E0F9C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t4CB8C2A6DBEDF6C671F933ADC9E21367D90886F3 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t38B974FEBDE9C6BC682E4154FA808DE4F13EF788 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 
{
	int32_t ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F 
{
	int32_t ___m_Keyword;
	List_1_tE7FB077B3CEA6371A27F72CC60962491AB71490B* ___m_Value;
};
struct StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 
{
	int32_t ___m_Keyword;
	List_1_tBD2E4781BB0BD1FCD30E6D3586CA13AFD0ABE6F7* ___m_Value;
};
struct StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C 
{
	int32_t ___m_Keyword;
	List_1_tD6F1685FEE5A196B3002ACC649A1DF5C65162268* ___m_Value;
};
struct StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 
{
	int32_t ___m_Keyword;
	List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF* ___m_Value;
};
struct TweenableVariableSynchronousBase_1_t4C3B9512C9A567578B87241A0C19E00F4BE0B892 : public RuntimeObject {};
struct Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F 
{
	int32_t ___x;
	int32_t ___y;
};
struct ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7 
{
	ColorTweenCallback_tBE6685495BFEE2763BED5BF7EFC9571F7F1D724E* ___m_Target;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_StartColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_TargetColor;
	int32_t ___m_TweenMode;
	float ___m_Duration;
	bool ___m_IgnoreTimeScale;
};
struct ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7_marshaled_pinvoke
{
	ColorTweenCallback_tBE6685495BFEE2763BED5BF7EFC9571F7F1D724E* ___m_Target;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_StartColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_TargetColor;
	int32_t ___m_TweenMode;
	float ___m_Duration;
	int32_t ___m_IgnoreTimeScale;
};
struct ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7_marshaled_com
{
	ColorTweenCallback_tBE6685495BFEE2763BED5BF7EFC9571F7F1D724E* ___m_Target;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_StartColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_TargetColor;
	int32_t ___m_TweenMode;
	float ___m_Duration;
	int32_t ___m_IgnoreTimeScale;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858 
{
	int32_t ___m_Handedness;
	int32_t ___m_CommonGesturesFlags;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_AimPose;
	float ___m_AimActivateValue;
	float ___m_GraspValue;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_GripPose;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_PinchPose;
	float ___m_PinchValue;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_PokePose;
	bool ___m_IsAimActivated;
	bool ___m_IsGraspFirm;
	bool ___m_IsPinchTouched;
};
struct XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858_marshaled_pinvoke
{
	int32_t ___m_Handedness;
	int32_t ___m_CommonGesturesFlags;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_AimPose;
	float ___m_AimActivateValue;
	float ___m_GraspValue;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_GripPose;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_PinchPose;
	float ___m_PinchValue;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_PokePose;
	int32_t ___m_IsAimActivated;
	int32_t ___m_IsGraspFirm;
	int32_t ___m_IsPinchTouched;
};
struct XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858_marshaled_com
{
	int32_t ___m_Handedness;
	int32_t ___m_CommonGesturesFlags;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_AimPose;
	float ___m_AimActivateValue;
	float ___m_GraspValue;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_GripPose;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_PinchPose;
	float ___m_PinchValue;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_PokePose;
	int32_t ___m_IsAimActivated;
	int32_t ___m_IsGraspFirm;
	int32_t ___m_IsPinchTouched;
};
struct ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___element;
	int32_t ___property;
};
struct ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___element;
	int32_t ___property;
};
struct ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___element;
	int32_t ___property;
};
struct U3CStartU3Ed__2_t9658309751B877709F2F33E5F2E46BE104025E47  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7 ___tweenInfo;
	float ___U3CelapsedTimeU3E5__2;
};
struct Action_1_tAAE2A43B6C8B488C8EBD92AF56C2D4329018A227  : public MulticastDelegate_t
{
};
struct Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505  : public MulticastDelegate_t
{
};
struct Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4  : public MulticastDelegate_t
{
};
struct Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3  : public MulticastDelegate_t
{
};
struct Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560  : public MulticastDelegate_t
{
};
struct Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C  : public MulticastDelegate_t
{
};
struct Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4  : public MulticastDelegate_t
{
};
struct Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6  : public MulticastDelegate_t
{
};
struct Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB  : public MulticastDelegate_t
{
};
struct Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659  : public MulticastDelegate_t
{
};
struct Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6  : public MulticastDelegate_t
{
};
struct Func_1_t566D4A654882E282E54CDC3A001E05486F913903  : public MulticastDelegate_t
{
};
struct Func_3_t694ADFBBF2CEA4DEF1F1F1F9B00D5DCAE200F97E  : public MulticastDelegate_t
{
};
struct Func_3_tE82E2E9CB095585276C858A2EA8860ACC9745B0C  : public MulticastDelegate_t
{
};
struct Func_3_tA9AA477D8A5A68C7DC26AE4792295B80F920E61E  : public MulticastDelegate_t
{
};
struct Func_3_t8ABA11B2555ED37315928295E1F5259AD6951D6A  : public MulticastDelegate_t
{
};
struct Func_3_t679D611E3FC0D6DC6403103FC27F2989317B18D7  : public MulticastDelegate_t
{
};
struct Func_3_tE48C31D7100E33FE059CEE93727D825F38ABBD94  : public MulticastDelegate_t
{
};
struct Func_3_t8204F4CEB15630A3F397A0E7FB8F90248872DB09  : public MulticastDelegate_t
{
};
struct KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D 
{
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___key;
	Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* ___value;
};
struct KeyValuePair_2_tE4AF7E149217032C1AFD6D018342D58C2BB94D77 
{
	ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814 ___key;
	Il2CppSharedGenericObject* ___value;
};
struct TryGetFromGestures_1_t1F3969F3F7021D89942AAE1EC8011838CB6288FA  : public MulticastDelegate_t
{
};
struct TryGetFromGestures_1_tC53E6B0C4112A47BC72476BBEF8A9FD24865FEEC  : public MulticastDelegate_t
{
};
struct TryGetFromGestures_1_t91BF865CE2B5D5EEE31F2421F30748B35FC37B87  : public MulticastDelegate_t
{
};
struct TweenableVariableBase_1_t8364472CCBD4F605378E11C0AC3182CEC3E26736  : public BindableVariable_1_tB1E8CB1BE6FC0FC0ADBA23B797014B9E0D2BBEDB
{
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_AnimationCurve;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Target;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___U3CinitialValueU3Ek__BackingField;
};
struct TweenableVariableBase_1_t894346E06DB112599F8C5FBC5AD5F251F33CFBD9  : public BindableVariable_1_t3A66A98B9D01BD0046D7960AEC1E2F23321EFBA9
{
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_AnimationCurve;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_Target;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CinitialValueU3Ek__BackingField;
};
struct TweenableVariableBase_1_tA9EC62FCEF5FA67F96F841799692ED88299C6DCB  : public BindableVariable_1_t71ED0CC97E302AFB62C164F5DF70E87569239CDE
{
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_AnimationCurve;
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___m_Target;
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___U3CinitialValueU3Ek__BackingField;
};
struct TweenableVariableBase_1_t559E6D69FB65AF8FBCF6044D84C6466C849D826E  : public BindableVariable_1_t2F927DE37EBA52F9977D6399FEE7D5338FFE69DC
{
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_AnimationCurve;
	float3_t7600B73F092B37F484B12910A5269F30C778D31E ___m_Target;
	float3_t7600B73F092B37F484B12910A5269F30C778D31E ___U3CinitialValueU3Ek__BackingField;
};
struct TweenableVariableBase_1_t9D1C5D207B9A321B201B828091D3953D761BB265  : public BindableVariable_1_t0AD8E7C4D528C426B472321BDF57E14B53A43717
{
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_AnimationCurve;
	float4_t545A994996126766890C1F28B43EA823F2410190 ___m_Target;
	float4_t545A994996126766890C1F28B43EA823F2410190 ___U3CinitialValueU3Ek__BackingField;
};
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};
struct BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 
{
	int32_t ___keyword;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___offset;
};
struct BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 
{
	int32_t ___m_SizeType;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_X;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Y;
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 
{
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___m_Values;
	int32_t ___m_PreWrapMode;
	int32_t ___m_PostWrapMode;
};
struct Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A 
{
	Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_t58168766D1E54BD4791D0209E876F0E24ACFDF18 
{
	Dictionary_2_t765BF9715D7FF2AB2C9E5F01142AD0BFDC359E52* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_tE4AF7E149217032C1AFD6D018342D58C2BB94D77 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F  : public MulticastDelegate_t
{
};
struct Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5  : public MulticastDelegate_t
{
};
struct TweenJobData_1_t9932452930B7CDE5DC4DA408B50B8E4C7A3AAFB7 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___initialValue;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___stateOriginValue;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___stateTargetValue;
	uint8_t ___stateTransitionIncrement;
	NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 ___nativeCurve;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___tweenStartValue;
	float ___tweenAmount;
	NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D ___outputData;
};
struct TweenJobData_1_t06FAD94FCA49A795B22C7FA2EA018F83E450B97E 
{
	float ___initialValue;
	float ___stateOriginValue;
	float ___stateTargetValue;
	uint8_t ___stateTransitionIncrement;
	NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 ___nativeCurve;
	float ___tweenStartValue;
	float ___tweenAmount;
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___outputData;
};
typedef Il2CppFullySharedGenericStruct TweenJobData_1_t304A968236DFE46B649BFB8929A78966DA601B83;
struct TweenJobData_1_tC12AA11A847D9ABA7DDDBAD9A71E05808BECD131 
{
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___initialValue;
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___stateOriginValue;
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___stateTargetValue;
	uint8_t ___stateTransitionIncrement;
	NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 ___nativeCurve;
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___tweenStartValue;
	float ___tweenAmount;
	NativeArray_1_tB2C0A4BD42DDC767D3B622ACDDD0A5E3898E0F9C ___outputData;
};
struct TweenJobData_1_t934CE1645618038AB80D1E8767C3E96A47371ADC 
{
	float3_t7600B73F092B37F484B12910A5269F30C778D31E ___initialValue;
	float3_t7600B73F092B37F484B12910A5269F30C778D31E ___stateOriginValue;
	float3_t7600B73F092B37F484B12910A5269F30C778D31E ___stateTargetValue;
	uint8_t ___stateTransitionIncrement;
	NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 ___nativeCurve;
	float3_t7600B73F092B37F484B12910A5269F30C778D31E ___tweenStartValue;
	float ___tweenAmount;
	NativeArray_1_t4CB8C2A6DBEDF6C671F933ADC9E21367D90886F3 ___outputData;
};
struct TweenJobData_1_tCBC6BEBC1156C8C2517800A02E82EAD727A83415 
{
	float4_t545A994996126766890C1F28B43EA823F2410190 ___initialValue;
	float4_t545A994996126766890C1F28B43EA823F2410190 ___stateOriginValue;
	float4_t545A994996126766890C1F28B43EA823F2410190 ___stateTargetValue;
	uint8_t ___stateTransitionIncrement;
	NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 ___nativeCurve;
	float4_t545A994996126766890C1F28B43EA823F2410190 ___tweenStartValue;
	float ___tweenAmount;
	NativeArray_1_t38B974FEBDE9C6BC682E4154FA808DE4F13EF788 ___outputData;
};
struct TweenableVariableAsyncBase_1_t84B7FBBAD5BE9B483A1DF99D3C2F93356D430055  : public TweenableVariableBase_1_t8364472CCBD4F605378E11C0AC3182CEC3E26736
{
	bool ___m_OutputInitialized;
	NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D ___m_JobOutputStore;
	bool ___m_CurveDirty;
	NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 ___m_NativeCurve;
	bool ___m_HasJobPending;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___m_LastJobHandle;
};
struct TweenableVariableAsyncBase_1_tF183EC63E8112FA406C601A7E49A5AC36036F088  : public TweenableVariableBase_1_tE056BE2293DB2624363EEADF82A5A9439C26C35D
{
	bool ___m_OutputInitialized;
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___m_JobOutputStore;
	bool ___m_CurveDirty;
	NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 ___m_NativeCurve;
	bool ___m_HasJobPending;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___m_LastJobHandle;
};
struct TweenableVariableAsyncBase_1_t7FD0BE25E95FFCEE9DE5FDBE93CBFB450DEBCD76 : public RuntimeObject {};
struct TweenableVariableAsyncBase_1_t0A92C17D9391783B25BD32E62A3A296324C1A287  : public TweenableVariableBase_1_tA9EC62FCEF5FA67F96F841799692ED88299C6DCB
{
	bool ___m_OutputInitialized;
	NativeArray_1_tB2C0A4BD42DDC767D3B622ACDDD0A5E3898E0F9C ___m_JobOutputStore;
	bool ___m_CurveDirty;
	NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 ___m_NativeCurve;
	bool ___m_HasJobPending;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___m_LastJobHandle;
};
struct TweenableVariableAsyncBase_1_t24C3255684D7C73284B0C5A0EBEEC43C7CE867F3  : public TweenableVariableBase_1_t559E6D69FB65AF8FBCF6044D84C6466C849D826E
{
	bool ___m_OutputInitialized;
	NativeArray_1_t4CB8C2A6DBEDF6C671F933ADC9E21367D90886F3 ___m_JobOutputStore;
	bool ___m_CurveDirty;
	NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 ___m_NativeCurve;
	bool ___m_HasJobPending;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___m_LastJobHandle;
};
struct TweenableVariableAsyncBase_1_tD3FE5A9C4EEE24A00A53CD66FEB12CB408F76FF2  : public TweenableVariableBase_1_t9D1C5D207B9A321B201B828091D3953D761BB265
{
	bool ___m_OutputInitialized;
	NativeArray_1_t38B974FEBDE9C6BC682E4154FA808DE4F13EF788 ___m_JobOutputStore;
	bool ___m_CurveDirty;
	NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 ___m_NativeCurve;
	bool ___m_HasJobPending;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___m_LastJobHandle;
};
struct TweenableVariableSynchronousBase_1_t27C59C64A400660B379C3DC861B0AAFB196D92AA  : public TweenableVariableBase_1_t894346E06DB112599F8C5FBC5AD5F251F33CFBD9
{
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct U3CU3EO_t7CCBA094BC61E89AE8824EBE2C208E8301421B2F_StaticFields
{
	Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* ___U3C0U3E__CreateValueTypeInstance;
	Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* ___U3C1U3E__CreateScriptableObjectInstance;
	Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* ___U3C2U3E__CreateClassInstance;
};
struct U3CU3EO_tF65737FFA29D453F880A97786FC1135BF1DF4433_StaticFields
{
	Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* ___U3C0U3E__CreateValueTypeInstance;
	Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* ___U3C1U3E__CreateScriptableObjectInstance;
	Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* ___U3C2U3E__CreateClassInstance;
};
struct U3CU3EO_tC1F9D0861156D7C559F6EEE36FC95D3ABF3F0025_StaticFields
{
	Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* ___U3C0U3E__CreateValueTypeInstance;
	Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* ___U3C1U3E__CreateScriptableObjectInstance;
	Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* ___U3C2U3E__CreateClassInstance;
};
struct U3CU3EO_tB19509DACF6507088BAF9966D572B59E6567F762_StaticFields
{
	Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* ___U3C0U3E__CreateValueTypeInstance;
	Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* ___U3C1U3E__CreateScriptableObjectInstance;
	Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* ___U3C2U3E__CreateClassInstance;
};
struct U3CU3EO_tB37F1F5975821568EC9FCF1B098BD4B808DE7992_StaticFields
{
	Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* ___U3C0U3E__CreateValueTypeInstance;
	Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* ___U3C1U3E__CreateScriptableObjectInstance;
	Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* ___U3C2U3E__CreateClassInstance;
};
struct U3CU3EO_t8D134FDE8AA025D402BB56321810E7A5002C8021_StaticFields
{
	Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* ___U3C0U3E__CreateValueTypeInstance;
	Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* ___U3C1U3E__CreateScriptableObjectInstance;
	Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* ___U3C2U3E__CreateClassInstance;
};
struct U3CU3EO_t7E5104856073A68D0629FC4F5C0F61EBE336C5DE_StaticFields
{
	Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* ___U3C0U3E__CreateValueTypeInstance;
	Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* ___U3C1U3E__CreateScriptableObjectInstance;
	Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* ___U3C2U3E__CreateClassInstance;
};
struct U3CU3EO_t327797ABDD0FDED67E617F95EB6916B24E751BF2_StaticFields
{
	Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* ___U3C0U3E__CreateValueTypeInstance;
	Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* ___U3C1U3E__CreateScriptableObjectInstance;
	Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* ___U3C2U3E__CreateClassInstance;
};
struct U3CU3EO_tDD9D7685B9E390A6C6CEE6412E3C2B81AB9EB6DC_StaticFields
{
	Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* ___U3C0U3E__CreateValueTypeInstance;
	Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* ___U3C1U3E__CreateScriptableObjectInstance;
	Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* ___U3C2U3E__CreateClassInstance;
};
struct U3CU3EO_t3C9D2B01CEA2AC8CA1A4426C4F67FB0FF635919E_StaticFields
{
	Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* ___U3C0U3E__CreateValueTypeInstance;
	Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* ___U3C1U3E__CreateScriptableObjectInstance;
	Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* ___U3C2U3E__CreateClassInstance;
};
struct U3CU3Ec_t47C5435573FC26774801CF66233F6FD489A68B88_StaticFields
{
	U3CU3Ec_t47C5435573FC26774801CF66233F6FD489A68B88* ___U3CU3E9;
};
struct U3CU3Ec_tB49B7742FFA15FC3176D4EBF02F5CF3F3615971A_StaticFields
{
	U3CU3Ec_tB49B7742FFA15FC3176D4EBF02F5CF3F3615971A* ___U3CU3E9;
};
struct U3CU3Ec_t693CB4342A2EAB24AFF73D94D9CC66B90E6BC00A_StaticFields
{
	U3CU3Ec_t693CB4342A2EAB24AFF73D94D9CC66B90E6BC00A* ___U3CU3E9;
};
struct U3CU3Ec_tFDB718E9F889F46D0872CB24F95B25941CDE4B32_StaticFields
{
	U3CU3Ec_tFDB718E9F889F46D0872CB24F95B25941CDE4B32* ___U3CU3E9;
};
struct U3CU3Ec_tCBD2F8AF1FDB9B38F9382C2FF4379AD902996EEF_StaticFields
{
	U3CU3Ec_tCBD2F8AF1FDB9B38F9382C2FF4379AD902996EEF* ___U3CU3E9;
};
struct U3CU3Ec_t830ABE694C134FC98FDAB5669835E188003F5498_StaticFields
{
	U3CU3Ec_t830ABE694C134FC98FDAB5669835E188003F5498* ___U3CU3E9;
};
struct U3CU3Ec_t64793DE671E73EDC94413D15745654BD15ACF206_StaticFields
{
	U3CU3Ec_t64793DE671E73EDC94413D15745654BD15ACF206* ___U3CU3E9;
};
struct U3CU3Ec_t322D48A1E5BB83885947DEAEB5CDB41F6F85CF0D_StaticFields
{
	U3CU3Ec_t322D48A1E5BB83885947DEAEB5CDB41F6F85CF0D* ___U3CU3E9;
};
struct U3CU3Ec_t04BDC2F22EDAD98D065EF20685724506C9415400_StaticFields
{
	U3CU3Ec_t04BDC2F22EDAD98D065EF20685724506C9415400* ___U3CU3E9;
};
struct U3CU3Ec_t57AD38BE6C52F4166D7228E63B44510992250E27_StaticFields
{
	U3CU3Ec_t57AD38BE6C52F4166D7228E63B44510992250E27* ___U3CU3E9;
};
struct U3CU3Ec_t343A84FA7F733C5EA0C7D99FBBA003DAC613F61F_StaticFields
{
	U3CU3Ec_t343A84FA7F733C5EA0C7D99FBBA003DAC613F61F* ___U3CU3E9;
};
struct U3CU3Ec_t83F75628053C082E4D8ABA9B60CC02B73030C02F_StaticFields
{
	U3CU3Ec_t83F75628053C082E4D8ABA9B60CC02B73030C02F* ___U3CU3E9;
};
struct U3CU3Ec_t73BDFFDC090AF7822A5E862978652BFDE81B12DA_StaticFields
{
	U3CU3Ec_t73BDFFDC090AF7822A5E862978652BFDE81B12DA* ___U3CU3E9;
};
struct Comparer_1_t0A03F9FBBEA32FB1528366652D3D38513E8B1137_StaticFields
{
	Comparer_1_t0A03F9FBBEA32FB1528366652D3D38513E8B1137* ___defaultComparer;
};
struct EmptyArray_1_tF2F83411E5DC963DBFFD1F75B10B58A1ED224DD5_StaticFields
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___Value;
};
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* ___defaultComparer;
};
struct EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields
{
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* ___defaultComparer;
};
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E_StaticFields
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___s_emptyArray;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct TransitionEventsFrameState_t2BA90E4FA6C6D2E561A72ECDB3706772EDD5D881_StaticFields
{
	ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* ___k_EventQueuePool;
};
struct TransitionEventsFrameState_tC8FEB488506DC99B874A454BED371793598879E9_StaticFields
{
	ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* ___k_EventQueuePool;
};
struct TransitionEventsFrameState_tFBFEC4A6BE1900A8D6115CD438F3CCC15A0DBCE9_StaticFields
{
	ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* ___k_EventQueuePool;
};
struct TransitionEventsFrameState_t79437953855E2A5F706435B92B95B4742EA44B4F_StaticFields
{
	ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* ___k_EventQueuePool;
};
struct TransitionEventsFrameState_tC00A8234FEB122E10B4F583D3A620DA47BBF5D71_StaticFields
{
	ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* ___k_EventQueuePool;
};
struct TransitionEventsFrameState_t9DC16C7535A4271EA0FD763A64CD7CF84670EC64_StaticFields
{
	ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* ___k_EventQueuePool;
};
struct TransitionEventsFrameState_t25D5D3420391A40A0B978B0D5CA13F775283274E_StaticFields
{
	ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* ___k_EventQueuePool;
};
struct TransitionEventsFrameState_t864A52D0F7726A4F4C2C667BCB56E8A745F7340C_StaticFields
{
	ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* ___k_EventQueuePool;
};
struct TransitionEventsFrameState_t896507B4A758D8F131A06984765BA0F57C8939A2_StaticFields
{
	ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* ___k_EventQueuePool;
};
struct TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF_StaticFields
{
	ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* ___k_EventQueuePool;
};
struct TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC_StaticFields
{
	ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* ___k_EventQueuePool;
};
struct TransitionEventsFrameState_t99BD53E9FE7D95EEB993EF2BF99CDD1609D6AA7B_StaticFields
{
	ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* ___k_EventQueuePool;
};
struct TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB_StaticFields
{
	ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* ___k_EventQueuePool;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5_StaticFields
{
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___zero;
};
struct float3_t7600B73F092B37F484B12910A5269F30C778D31E_StaticFields
{
	float3_t7600B73F092B37F484B12910A5269F30C778D31E ___zero;
};
struct float4_t545A994996126766890C1F28B43EA823F2410190_StaticFields
{
	float4_t545A994996126766890C1F28B43EA823F2410190 ___zero;
};
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_StaticFields
{
	String_t* ___ConstructorName;
	String_t* ___TypeConstructorName;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity;
};
struct Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_StaticFields
{
	Dictionary_2_t29FB78C9E5DF443E2A5880E4E9B7C86E516670E0* ___s_AngleUnitLookup;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
struct ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_StaticFields
{
	RuntimeObject* ___Comparer;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppSharedGenericObject* m_Items[1];

	inline Il2CppSharedGenericObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Il2CppSharedGenericObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* ObjectPool_1_Get_m6033387D88EF9D1AD81A89F3045733BC4B98073D_gshared_inline (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t58168766D1E54BD4791D0209E876F0E24ACFDF18 Dictionary_2_GetEnumerator_m80B605969DF0E156E39E6AC2A1D646A545E9CD12_gshared (Dictionary_2_t765BF9715D7FF2AB2C9E5F01142AD0BFDC359E52* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3D89F01AE65EC60062FFB578C0E771C098EF2CB7_fshared (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tE4AF7E149217032C1AFD6D018342D58C2BB94D77 Enumerator_get_Current_m91805899B27B40B16B94C0ABBAD00442DC9D1EEF_gshared_inline (Enumerator_t58168766D1E54BD4791D0209E876F0E24ACFDF18* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Value_m3B073AA7B627862C9CF55713EB00EA50B597C40E_gshared_inline (KeyValuePair_2_tE4AF7E149217032C1AFD6D018342D58C2BB94D77* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m7399BCFE5F893D371CC3CDF389727B01EE0421D7_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjectPool_1_Release_m3183E8F3194884123A027D720D37F341AF367E48_gshared_inline (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, Il2CppSharedGenericObject* ___0_element, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mA00621826A711026137A71100A02D160DD7FA118_gshared (Enumerator_t58168766D1E54BD4791D0209E876F0E24ACFDF18* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m935B3F117860376DC854C9E0C80CBD99BE77EEA4_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m5FD0E1320A7A8964A7FCC0D0EA7F809E4E76E0EF_gshared (Func_1_t566D4A654882E282E54CDC3A001E05486F913903* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1__ctor_m3A4B28B9D0DC42C43CF00C078D27C9ADFA00FACC_gshared (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, Func_1_t566D4A654882E282E54CDC3A001E05486F913903* ___0_createFunc, Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* ___1_actionOnGet, Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* ___2_actionOnRelease, Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* ___3_actionOnDestroy, bool ___4_collectionCheck, int32_t ___5_defaultCapacity, int32_t ___6_maxSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6E2DCAC1E4FA853F19326CEC54DE18EB579EF16D_gshared (Dictionary_2_t09274CBE3EED962B84F3CEEEF6C788C36A4A3618* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBFCF70ECC04B9545EFB9056994302B593E628ED7_gshared (Dictionary_2_t765BF9715D7FF2AB2C9E5F01142AD0BFDC359E52* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_tB56A5468D831FE137C33D5EF7A7DCE42DEF55024* Comparer_1_get_Default_m9D7E1E21FFEE2C32B345D0E5C835BA713DA80B2C_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2__ctor_m204C7F34151276EE628D17B5C5DECF463BFE649C (U3CStartU3Ed__2_tC9423255CD49C2088D279B9AA846474D4B59D80D* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StopTween_m782348E0451FB7594F045055A50CDD9DB0C4CE8B_fshared (TweenRunner_1_t506331CFBEF4B7DD78419718F858F743187D08F0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenRunner_1_Start_m8F517B7356D09DB3B885AC627C1B11853F0F4E3B (FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE ___0_tweenInfo, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2__ctor_m0F5A38D7B55D76D7DD1A22C7D2346C87C12C2BC7 (U3CStartU3Ed__2_t9658309751B877709F2F33E5F2E46BE104025E47* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StopTween_m37DB99A9B05E536CF04651C57196ED6049325A1B_fshared (TweenRunner_1_tA3E6EB0834EDD64BCDE6943EAFE03D0522926859* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenRunner_1_Start_mB20C8AE701784E49515475A471050D8440D444CF (ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7 ___0_tweenInfo, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2__ctor_mD1B548DCCF5485603C6FB4E9EB5431232DD5B8D0 (U3CStartU3Ed__2_t623C57A50EEA01089DB79D6F1F1217F89E158FEB* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenRunner_1_Start_m4F400F2F86055B01EF66839CA607B07908E4FC7D (FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A ___0_tweenInfo, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F BindableVariableBase_1_get_Value_m91CB4186D9501A8357D89A87382E0AA9662E151E_inline (BindableVariableBase_1_tB87521E1348B0B8E54F53C1261B839682F8D655F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenableVariableAsyncBase_1_CompleteJob_mBDA4CB462843B515FFFF357F91A6206266EEFEA5 (TweenableVariableAsyncBase_1_t84B7FBBAD5BE9B483A1DF99D3C2F93356D430055* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindableVariableBase_1_set_Value_mFE4F8368B3DD3CFDAF0AC1F22F4E4A6F34E42230 (BindableVariableBase_1_tB87521E1348B0B8E54F53C1261B839682F8D655F* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_UpdateStateFromCompletedJob_m17AEB9CF4F394FCE1A513967FBF06AF33EA21127 (TweenableVariableAsyncBase_1_t84B7FBBAD5BE9B483A1DF99D3C2F93356D430055* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mB472C86D24172D0BAE7EF37E55779C93CE130E8C (NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_RefreshCurve_m675566DCF9937C4F2151C5C150238F555CE587AB (TweenableVariableAsyncBase_1_t84B7FBBAD5BE9B483A1DF99D3C2F93356D430055* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* TweenableVariableBase_1_get_animationCurve_m6EC9A21B3791E6E1974401435B3ABA3E39C864E6_inline (TweenableVariableBase_1_t8364472CCBD4F605378E11C0AC3182CEC3E26736* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1_PreprocessTween_mECB6DF68955E32BBB920DBCB403E07FA4E0D4489_fshared (TweenableVariableBase_1_tAB0E2A3343CE9D2FA33FB849E99B8DF11F6F55AC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_set_Value_mA984A18E47D276CFA7055D0E8E85C4953AC73E81 (TweenableVariableAsyncBase_1_t84B7FBBAD5BE9B483A1DF99D3C2F93356D430055* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TweenableVariableBase_1_get_initialValue_m7F174333E94175EA8B3F25095AA58941D1100ACA_inline (TweenableVariableBase_1_t8364472CCBD4F605378E11C0AC3182CEC3E26736* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 TweenableVariableAsyncBase_1_GetNativeCurve_mA5762CD90494B88DBD282FB9310197DAAD54E4CC (TweenableVariableAsyncBase_1_t84B7FBBAD5BE9B483A1DF99D3C2F93356D430055* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D TweenableVariableAsyncBase_1_GetJobOutputStore_mE4CD397DDEB0E86B92F3F14F26DD95B932F2ED82 (TweenableVariableAsyncBase_1_t84B7FBBAD5BE9B483A1DF99D3C2F93356D430055* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mE3E0CC624396EE2CF282ADD8B942B09323AF30E8 (NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1_OnAnimationCurveChanged_m93BA49D17E83BBECE7326DDA936729FCF9FE1672_fshared (TweenableVariableBase_1_tAB0E2A3343CE9D2FA33FB849E99B8DF11F6F55AC* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1__ctor_mCAEAF8CBEB3AC895E3B9CD683F8C9B7E2D334A72 (TweenableVariableBase_1_t8364472CCBD4F605378E11C0AC3182CEC3E26736* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BindableVariableBase_1_get_Value_m56739E375D26399567FC0F237E68BFA12EAABCA1_inline (BindableVariableBase_1_tB9252B4815AD3E511244D3B578854D3FF333E4BD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenableVariableAsyncBase_1_CompleteJob_mEA72D798E65A8718EE40C02CB71284E20FBECBCA (TweenableVariableAsyncBase_1_tF183EC63E8112FA406C601A7E49A5AC36036F088* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindableVariableBase_1_set_Value_m4AF1F78B7B57E861E68761340D69FC566D0619AC (BindableVariableBase_1_tB9252B4815AD3E511244D3B578854D3FF333E4BD* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_UpdateStateFromCompletedJob_m6FC07A6FA964359EAF1140BD6A3C3DC495D80EA6 (TweenableVariableAsyncBase_1_tF183EC63E8112FA406C601A7E49A5AC36036F088* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mC07280A768D065A052D995F3E6175A27CD62E1F6 (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_RefreshCurve_m625FDE32D1C133D32A91447F79CD1A505695FFF7 (TweenableVariableAsyncBase_1_tF183EC63E8112FA406C601A7E49A5AC36036F088* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* TweenableVariableBase_1_get_animationCurve_m629E6E7B4B5D8981C071EC50A729BAD6E81AE944_inline (TweenableVariableBase_1_tE056BE2293DB2624363EEADF82A5A9439C26C35D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_set_Value_mB830A78DD377C42A7C78E20D2AB4133D52526E3F (TweenableVariableAsyncBase_1_tF183EC63E8112FA406C601A7E49A5AC36036F088* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TweenableVariableBase_1_get_initialValue_m328C6A22EB2CA996E9C8AFDB3D51F98A0CAF2B64_inline (TweenableVariableBase_1_tE056BE2293DB2624363EEADF82A5A9439C26C35D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 TweenableVariableAsyncBase_1_GetNativeCurve_m8EA398243C2E9D46B12395BCA583A652B4F02A51 (TweenableVariableAsyncBase_1_tF183EC63E8112FA406C601A7E49A5AC36036F088* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF TweenableVariableAsyncBase_1_GetJobOutputStore_mD6671CF6A3B2AE5B6F0AA2A7802BD32AD83705A3 (TweenableVariableAsyncBase_1_tF183EC63E8112FA406C601A7E49A5AC36036F088* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m4D540A81E1062EEC2C4B0697A34A4EEFB9BC9004 (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1__ctor_mACF24E12EF5F0EA84906361750928AE170DEB855 (TweenableVariableBase_1_tE056BE2293DB2624363EEADF82A5A9439C26C35D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 BindableVariableBase_1_get_Value_mA3C426A393A0A5AB6EC95606DABB506F20A5AA84_inline (BindableVariableBase_1_tF26C7349EBD3DF838D75EBA46B0FA97EFE9E43D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenableVariableAsyncBase_1_CompleteJob_mC14CC21C2CA294CF963A521E20F927319482B5BC (TweenableVariableAsyncBase_1_t0A92C17D9391783B25BD32E62A3A296324C1A287* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindableVariableBase_1_set_Value_m588EB4AA14624FE8EA988D058D0550FB211038D4 (BindableVariableBase_1_tF26C7349EBD3DF838D75EBA46B0FA97EFE9E43D4* __this, float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_UpdateStateFromCompletedJob_mD25FD8525E63D070F5421EA4FF80A69E53BD51D4 (TweenableVariableAsyncBase_1_t0A92C17D9391783B25BD32E62A3A296324C1A287* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m7980162AEAF54A574BA086A397B2F628A24AA1EA (NativeArray_1_tB2C0A4BD42DDC767D3B622ACDDD0A5E3898E0F9C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_RefreshCurve_m5FE06066BD53F79AA70930D1D2662E2750C39F0D (TweenableVariableAsyncBase_1_t0A92C17D9391783B25BD32E62A3A296324C1A287* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* TweenableVariableBase_1_get_animationCurve_m55397DEBDC220A8C682C16B5C4387DF00B7B4109_inline (TweenableVariableBase_1_tA9EC62FCEF5FA67F96F841799692ED88299C6DCB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_set_Value_m13DFBD337F071EB806AE9D736C384070D3C5B0E4 (TweenableVariableAsyncBase_1_t0A92C17D9391783B25BD32E62A3A296324C1A287* __this, float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 TweenableVariableBase_1_get_initialValue_m1FB1C293F911ECEE83D12AE9369FAA597FFFF807_inline (TweenableVariableBase_1_tA9EC62FCEF5FA67F96F841799692ED88299C6DCB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 TweenableVariableAsyncBase_1_GetNativeCurve_mC738E29622E63BEAEA944BBBB1F36714F666231E (TweenableVariableAsyncBase_1_t0A92C17D9391783B25BD32E62A3A296324C1A287* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB2C0A4BD42DDC767D3B622ACDDD0A5E3898E0F9C TweenableVariableAsyncBase_1_GetJobOutputStore_m6DAC7922AF2D97B06293A8705ACEEF9A75117B16 (TweenableVariableAsyncBase_1_t0A92C17D9391783B25BD32E62A3A296324C1A287* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m3F073274644350A3AB96A6DC9FAEAA1CF55D49ED (NativeArray_1_tB2C0A4BD42DDC767D3B622ACDDD0A5E3898E0F9C* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1__ctor_m8FBC71F49CC1938EDCD56394A23AAC5B82474A9E (TweenableVariableBase_1_tA9EC62FCEF5FA67F96F841799692ED88299C6DCB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t7600B73F092B37F484B12910A5269F30C778D31E BindableVariableBase_1_get_Value_mFB058C8CBBC994AB70F8F17047FA29748DDBDACF_inline (BindableVariableBase_1_t4142EEA09360420F28B691D2EC2462CA12F8866A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenableVariableAsyncBase_1_CompleteJob_m7786DA2D6FA51A529753EC96D4D5B23A3942217C (TweenableVariableAsyncBase_1_t24C3255684D7C73284B0C5A0EBEEC43C7CE867F3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindableVariableBase_1_set_Value_mC146C923C3804A957825DA499821BDF37750F0E7 (BindableVariableBase_1_t4142EEA09360420F28B691D2EC2462CA12F8866A* __this, float3_t7600B73F092B37F484B12910A5269F30C778D31E ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_UpdateStateFromCompletedJob_m95891B7257F1D063A3198DA14097AC3E8625899A (TweenableVariableAsyncBase_1_t24C3255684D7C73284B0C5A0EBEEC43C7CE867F3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m2A637EE3594AFEBB9D4A28FED111DE532EC1E707 (NativeArray_1_t4CB8C2A6DBEDF6C671F933ADC9E21367D90886F3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_RefreshCurve_m4FD03FB681F2D3213411B45ACF9103D0DCC0C8A3 (TweenableVariableAsyncBase_1_t24C3255684D7C73284B0C5A0EBEEC43C7CE867F3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* TweenableVariableBase_1_get_animationCurve_m0D7F0A84FD0FD39DC0E1FFF9E48C67EEC6A6CB4D_inline (TweenableVariableBase_1_t559E6D69FB65AF8FBCF6044D84C6466C849D826E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_set_Value_m8C121C22038B22441250708D8894FC985763F24F (TweenableVariableAsyncBase_1_t24C3255684D7C73284B0C5A0EBEEC43C7CE867F3* __this, float3_t7600B73F092B37F484B12910A5269F30C778D31E ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t7600B73F092B37F484B12910A5269F30C778D31E TweenableVariableBase_1_get_initialValue_m39887A8F0538E4A03F89B90922AC33E782982744_inline (TweenableVariableBase_1_t559E6D69FB65AF8FBCF6044D84C6466C849D826E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 TweenableVariableAsyncBase_1_GetNativeCurve_m400C9310B3F316417BF8175C7E45A79E0A15E42F (TweenableVariableAsyncBase_1_t24C3255684D7C73284B0C5A0EBEEC43C7CE867F3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t4CB8C2A6DBEDF6C671F933ADC9E21367D90886F3 TweenableVariableAsyncBase_1_GetJobOutputStore_mDE98AA9CD1559FA1A4FE67F7F3A4BA0B5881B485 (TweenableVariableAsyncBase_1_t24C3255684D7C73284B0C5A0EBEEC43C7CE867F3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mFDD62CBC272061C359019B1D200640B06FB50703 (NativeArray_1_t4CB8C2A6DBEDF6C671F933ADC9E21367D90886F3* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1__ctor_m7A162ABC9A0A622C107B0C1E69E73241C9E72A13 (TweenableVariableBase_1_t559E6D69FB65AF8FBCF6044D84C6466C849D826E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t545A994996126766890C1F28B43EA823F2410190 BindableVariableBase_1_get_Value_m2079036D42637925E85AB7BDEFE82041D3AD8357_inline (BindableVariableBase_1_t2B7F2DB22F178A593CBE8E2A3E4288B33A6735EF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenableVariableAsyncBase_1_CompleteJob_m26AAE41705C9C7EF8CF748EE597E5A3D6C5BDD31 (TweenableVariableAsyncBase_1_tD3FE5A9C4EEE24A00A53CD66FEB12CB408F76FF2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindableVariableBase_1_set_Value_mBBBC397B7ED528276A0FE1260648A9B3B1711160 (BindableVariableBase_1_t2B7F2DB22F178A593CBE8E2A3E4288B33A6735EF* __this, float4_t545A994996126766890C1F28B43EA823F2410190 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_UpdateStateFromCompletedJob_mB877C881052323083AE7B9FDDA69D66CAD337393 (TweenableVariableAsyncBase_1_tD3FE5A9C4EEE24A00A53CD66FEB12CB408F76FF2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m43802A93D40E3DD4656B3DA9CE648583E632FD69 (NativeArray_1_t38B974FEBDE9C6BC682E4154FA808DE4F13EF788* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_RefreshCurve_mE14F5E6818345E878FDCB0FC9919C3A16EA0DE5B (TweenableVariableAsyncBase_1_tD3FE5A9C4EEE24A00A53CD66FEB12CB408F76FF2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* TweenableVariableBase_1_get_animationCurve_m9E5AF31E43EACFB95A17770928B657FA44E7F699_inline (TweenableVariableBase_1_t9D1C5D207B9A321B201B828091D3953D761BB265* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_set_Value_m09287DBC12CE7BB333CAF20A281910B58ABE2E0C (TweenableVariableAsyncBase_1_tD3FE5A9C4EEE24A00A53CD66FEB12CB408F76FF2* __this, float4_t545A994996126766890C1F28B43EA823F2410190 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t545A994996126766890C1F28B43EA823F2410190 TweenableVariableBase_1_get_initialValue_m4BCD5A8FB7FFEC10F64E2229C79255538745D10E_inline (TweenableVariableBase_1_t9D1C5D207B9A321B201B828091D3953D761BB265* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 TweenableVariableAsyncBase_1_GetNativeCurve_mC3F5BBBF46BC9CF3F1FA1615836393E7C04AA969 (TweenableVariableAsyncBase_1_tD3FE5A9C4EEE24A00A53CD66FEB12CB408F76FF2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t38B974FEBDE9C6BC682E4154FA808DE4F13EF788 TweenableVariableAsyncBase_1_GetJobOutputStore_mF6CE6A2CCF38630441E58A18641E585F69A04D86 (TweenableVariableAsyncBase_1_tD3FE5A9C4EEE24A00A53CD66FEB12CB408F76FF2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mA436E603DA9491DAC49E5C7203B895500F86B034 (NativeArray_1_t38B974FEBDE9C6BC682E4154FA808DE4F13EF788* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1__ctor_m912642E50E0348D02E8EAF1EC7FAFD20732F3D11 (TweenableVariableBase_1_t9D1C5D207B9A321B201B828091D3953D761BB265* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TweenableVariableBase_1_get_target_mE6FD18451F50101EFE64887DD526D68B91E95E28_inline (TweenableVariableBase_1_t8364472CCBD4F605378E11C0AC3182CEC3E26736* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartAutoTweenU3Ed__15__ctor_m308403322749D1DE358BDF0D1F185959AD9DCFCD_fshared (U3CStartAutoTweenU3Ed__15_tED1E53FE63B5378710F206E83DC5BBE005CC7CBA* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlaySequenceU3Ed__16__ctor_mD5239208BA9D14D79B5035D4801DBADB83E20CFA (U3CPlaySequenceU3Ed__16_tD929E6110FE78A4938CC59458DF4E7F1E168BCA8* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindableVariable_1__ctor_m46454FD2616E16C958CBF75FACF06DC26354C3D6 (BindableVariable_1_tB1E8CB1BE6FC0FC0ADBA23B797014B9E0D2BBEDB* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_initialValue, bool ___1_checkEquality, Func_3_t694ADFBBF2CEA4DEF1F1F1F9B00D5DCAE200F97E* ___2_equalityMethod, bool ___3_startInitialized, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TweenableVariableBase_1_get_target_mE8C9B81F32FFE81DDA5373629D88AF18F1B76E87_inline (TweenableVariableBase_1_t894346E06DB112599F8C5FBC5AD5F251F33CFBD9* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 BindableVariableBase_1_get_Value_mDA92236BCE8EC7928399D7271AA97D7B62941EEC_inline (BindableVariableBase_1_t0B8C3C183E9A64B760FC611EA6858D9BD639E610* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlaySequenceU3Ed__16__ctor_mD30D043965C8B426229C7C1EB62FE361A0447792 (U3CPlaySequenceU3Ed__16_t6E1C7756370FBAA5707020040BCB462499584560* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindableVariable_1__ctor_mE0064F585587C1463E0D4AE1EDA3B66C42B2DEF0 (BindableVariable_1_t3A66A98B9D01BD0046D7960AEC1E2F23321EFBA9* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_initialValue, bool ___1_checkEquality, Func_3_tE82E2E9CB095585276C858A2EA8860ACC9745B0C* ___2_equalityMethod, bool ___3_startInitialized, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TweenableVariableBase_1_get_target_mAC0A1CFF253192C4AE820F8EEF2A380F508E99EA_inline (TweenableVariableBase_1_tE056BE2293DB2624363EEADF82A5A9439C26C35D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlaySequenceU3Ed__16__ctor_mF90BCFCB27D576381218D1738E70B36844DA596E (U3CPlaySequenceU3Ed__16_tE012EC718E27C230237DCC2B98ACC84B3C7F095B* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindableVariable_1__ctor_mDC40C552DDD7391A70B329BD063A7C4BBD98E408 (BindableVariable_1_tAB8C2D23769D801C8E39D4AA927DD23AF0E6816C* __this, float ___0_initialValue, bool ___1_checkEquality, Func_3_tA9AA477D8A5A68C7DC26AE4792295B80F920E61E* ___2_equalityMethod, bool ___3_startInitialized, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 TweenableVariableBase_1_get_target_m1A7E3A9D6216D6936EF6041FBD721AC6A6050945_inline (TweenableVariableBase_1_tA9EC62FCEF5FA67F96F841799692ED88299C6DCB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlaySequenceU3Ed__16__ctor_mBED71238022E607B05C425C6883C0385523FE70F (U3CPlaySequenceU3Ed__16_tCA72372FBD9801568210AF34AD05BDBA76A80466* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindableVariable_1__ctor_mE5AFD4A6299A180D32742AE69F14BD70F32A6B63 (BindableVariable_1_t71ED0CC97E302AFB62C164F5DF70E87569239CDE* __this, float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___0_initialValue, bool ___1_checkEquality, Func_3_t679D611E3FC0D6DC6403103FC27F2989317B18D7* ___2_equalityMethod, bool ___3_startInitialized, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t7600B73F092B37F484B12910A5269F30C778D31E TweenableVariableBase_1_get_target_mE63B487CCE2E85D507B2DB414EC01492C3839623_inline (TweenableVariableBase_1_t559E6D69FB65AF8FBCF6044D84C6466C849D826E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlaySequenceU3Ed__16__ctor_m0CEE9278458D7AA90145D65805B59F232A99088B (U3CPlaySequenceU3Ed__16_t1C260580ED8FDAD0E72E6BB8297B4F389219A035* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindableVariable_1__ctor_mC5FD3859C69FD36D84C05294C0A7DCED6C5C2D2A (BindableVariable_1_t2F927DE37EBA52F9977D6399FEE7D5338FFE69DC* __this, float3_t7600B73F092B37F484B12910A5269F30C778D31E ___0_initialValue, bool ___1_checkEquality, Func_3_tE48C31D7100E33FE059CEE93727D825F38ABBD94* ___2_equalityMethod, bool ___3_startInitialized, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t545A994996126766890C1F28B43EA823F2410190 TweenableVariableBase_1_get_target_m2DE9FA2DD2FE238ECDC3FCC00457736DB0A44893_inline (TweenableVariableBase_1_t9D1C5D207B9A321B201B828091D3953D761BB265* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlaySequenceU3Ed__16__ctor_m7A7243D873C9667CA8691C8DD1C47B8B3FAEB16A (U3CPlaySequenceU3Ed__16_t72A400DA1334A84E936DC682068A5FE43D939808* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindableVariable_1__ctor_mBF426439A562766ACAFABC863271D16C5D5D70A4 (BindableVariable_1_t0AD8E7C4D528C426B472321BDF57E14B53A43717* __this, float4_t545A994996126766890C1F28B43EA823F2410190 ___0_initialValue, bool ___1_checkEquality, Func_3_t8204F4CEB15630A3F397A0E7FB8F90248872DB09* ___2_equalityMethod, bool ___3_startInitialized, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindableVariableBase_1_set_Value_m19676F8DE67466CD43313044F2ADBAD0B83D9F0B (BindableVariableBase_1_t0B8C3C183E9A64B760FC611EA6858D9BD639E610* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* TweenableVariableBase_1_get_animationCurve_m21E54689FDC5927A7972A3C3E2DA224B4A76CBAB_inline (TweenableVariableBase_1_t894346E06DB112599F8C5FBC5AD5F251F33CFBD9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1__ctor_m6E06BE86674001DE6ABE6591650908B5292962BB (TweenableVariableBase_1_t894346E06DB112599F8C5FBC5AD5F251F33CFBD9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_m9BDE5E9B9E0EE309570C0E1BEEFF1D970E301057_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m567724D44415F983B593F79A65DF98D0B49A7586_gshared (TypeConstructor_1_tFF185AD2A1E08A2874947762589A4D832280E8FE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m1CF94999885A2AB1DEDC3C4D08360632327809FC_gshared (Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 Activator_CreateInstance_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_mB73A28B81E6D6D5CEA36624398A83B517613B668_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 Func_1_Invoke_mD023E4BE9F2AC4DDAB5BC6865F64444F25EBA15C_gshared_inline (Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m371FB7DB718EACB453900456810E9A5E7C4560FC (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_mB3A3166BECF17AF72ECD9CB45352121E79693D1D (TypeConstructor_1_tE75B89D5AA084F114504AC7D05DD0F8154EF0058* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mA471FC63ABD240998521909693B8E1F0E226F4C7 (Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F Activator_CreateInstance_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_mB01EF8A1953AD6AC7F3EA56DC0CA6C9353BFD778 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F Func_1_Invoke_mEFCC6E276B7F9541F583BF1DD7C2D4B88A5C9CED_inline (Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_m62FD638362BFCB156A7F8AC98F87BB9DA45A686C (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m962EFB2F614BF82E3DFE0A548F875ED7EC21B705 (TypeConstructor_1_tF5F8176F6A09CD203432077E7C7B5AABC31327EA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m39E4205D276C3545517E8CBC0AAA109AED598253 (Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 Activator_CreateInstance_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_mE1EF4F1754910E076C909536D2A4427F01104233 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 Func_1_Invoke_mF38ACE8EE747FDAB603827786CAA57779D125644_inline (Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_m3B7D84997A9B8DF8F81AA85C2C9FA88D48A5399A (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m44F12955763EFCCB75A37E92EC25D46B88D288B8 (TypeConstructor_1_tD5DA07CE239BB0599B0F321C96FD2BD58C83DF97* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m06C3E157C1C7C2FAB7AC8777BB674C9D951702CB (Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C Activator_CreateInstance_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_m873909B6AA229BD59E90731F4D6FBF4CC87F5602 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C Func_1_Invoke_m14C121BADC1DA0C563A54E906949398ADE4E510D_inline (Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m90943EC8A95BEF0B7653A90C89F26FC8ADD09FB8 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m0187BB447B4788E880EAB9921A60ECB42609286C (TypeConstructor_1_tB7EF02BD3EFCFE0495E9D67B2BCFF3652B6D6C6F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mA4955FA382BBC4CBD82690DCA4DBB23EFFB5B379 (Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 Activator_CreateInstance_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_mEE0F7CDAD8C0B99BA86771065E4EE2D71690474C (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 Func_1_Invoke_m3C0C15EA65260B3A2D23C645DE9908F470E1D6EB_inline (Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_m82B5917AD86A0775E7DD8F172FEAE0453CF832CE (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m51B797D10A3B0912B091FA941851F9CA25028CD7 (TypeConstructor_1_t4B0BD235497BF51A55673786B4B3FEC08FF7A40A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mCA44589EC746F7662FC5375FE18EC12DC9E057C5 (Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC Activator_CreateInstance_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_m112E07EE82B221E3263040A368D5DD9FA4581E7A (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC Func_1_Invoke_m72E1B2AB7AB84681AB456966658AB4AA2262172E_inline (Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m12EA9186899E84F2F4C3FC7EE5E9BA1EF4A87CE9 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m2D39DE69B79401A5162CC3AE92B414DA350B427E (TypeConstructor_1_t4203D4BA6648D84005F60BA10B9E7FFFD1BD104C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mBF9DBF4E06C4D61E55687EABBAC4550B432E6D9A (Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 Activator_CreateInstance_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m68F946E397E45AC0C461ABC3CB223C420569B8C5 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 Func_1_Invoke_m431E4DC7CE52538C527FFFA27B672C9172B9FA5D_inline (Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m49C3C2D5C8CE19D771AC6E44664479AB1A300582 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_mC649308AA476E656E8EDFEB064E80C613E329208 (TypeConstructor_1_t1BB003702AC661844ECFE30F83C9FA228250C58F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m7DAE2F89A23101179BB5B56E3773CE03C3287F94 (Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 Activator_CreateInstance_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_mE7341C88FD622F8CC6463B0990DECFDEC77CE513 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 Func_1_Invoke_m22D302915F20EEF62D9C1666172BBE063F7D795A_inline (Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m889D9CDB4925D6CEA1E008BD11C74F4C4B526CD7 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_mF8ACDEC4A418A3DC5EB0F27E4682223125B50B29 (TypeConstructor_1_tA4FE8677DDBAE558A4A99F5C70DA123D6D746068* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m2749E8A77FD25617A4ECDB5CEEEDE39F9D1EE456 (Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F Activator_CreateInstance_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m93B83A4B46F4D2E164D1604B782F208D26E12267 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F Func_1_Invoke_m46E31998378DE2BA4DF293634298EF5AA1E6520B_inline (Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_mA41D4EADD69077FA3D6860DDBF38E73AC193A3C8 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_mA88560F0713BBFA2C37745AF9D6C52629ED1DF7E (TypeConstructor_1_t04F8CEA6E3DA7BFE91DB6C903CB750ECBE264E3F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m5DE18B6F84B0E4095B7DACFC9C7006775018056A (Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 Activator_CreateInstance_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m03ECCA81585078D9FEB71559619D15E1512A86A5 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 Func_1_Invoke_m387E8C6D589CA66F72630F311D4CA283A6771829_inline (Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Func_1_Invoke_m201DDBB72CE38673C89C22034EC8779981D83E6D_gshared_inline (Func_1_t566D4A654882E282E54CDC3A001E05486F913903* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_CountAll_m8372ACA3A976C3FCB45CD77A0AEF0BDA496EBB6D_gshared_inline (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjectPool_1_set_CountAll_m6E7C5E741DCB73BD743FC27BACBE1886F4414440_gshared_inline (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* List_1_get_Item_m02336594E8F76D7313E2BCB7A3ED5ABD13B4D515_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m36F68EA689DB109415094085A496D5EA21E2F23C_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mDB8F7C7381C08B4DCE4E409D2FA4073BC17F90B5_gshared_inline (Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* __this, Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_CountInactive_m40351B6BE62E0944A0813C07869822EC0D1E8D26_gshared (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_gshared_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mCC24A812DFC30C3DE2230E3C8EE705871C1DFF81_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;

inline Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* ObjectPool_1_Get_m8FC799C848E73EBFE4A4F06A1313D377851BA515_inline (ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* __this, const RuntimeMethod* method)
{
	return ((  Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* (*) (ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2*, const RuntimeMethod*))ObjectPool_1_Get_m6033387D88EF9D1AD81A89F3045733BC4B98073D_gshared_inline)(__this, method);
}
inline Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A Dictionary_2_GetEnumerator_m79F6C0EFBDFE88091B6165AE7813EECFDCB9F5CD (Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A (*) (Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m80B605969DF0E156E39E6AC2A1D646A545E9CD12_gshared)(__this, method);
}
inline void Enumerator_Dispose_m3D1FC9044CAA9D8335920EF97BBE267273A0E172 (Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A*, const RuntimeMethod*))Enumerator_Dispose_m3D89F01AE65EC60062FFB578C0E771C098EF2CB7_fshared)(__this, method);
}
inline KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D Enumerator_get_Current_m4686FE5284DF33E6A048D58A52922C41A936E9D2_inline (Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D (*) (Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A*, const RuntimeMethod*))Enumerator_get_Current_m91805899B27B40B16B94C0ABBAD00442DC9D1EEF_gshared_inline)(__this, method);
}
inline Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* KeyValuePair_2_get_Value_m9F58F3918041276FA6F53FEEDC58BB258913E4E6_inline (KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D* __this, const RuntimeMethod* method)
{
	return ((  Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* (*) (KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D*, const RuntimeMethod*))KeyValuePair_2_get_Value_m3B073AA7B627862C9CF55713EB00EA50B597C40E_gshared_inline)(__this, method);
}
inline void Queue_1_Clear_m91EDB8B4094DA2A63959621F635CD41BAC103C76 (Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910*, const RuntimeMethod*))Queue_1_Clear_m7399BCFE5F893D371CC3CDF389727B01EE0421D7_gshared)(__this, method);
}
inline void ObjectPool_1_Release_m8A03719E6A9D2632DFA4DB41D2D2A0085CF2D6E4_inline (ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* __this, Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* ___0_element, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2*, Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910*, const RuntimeMethod*))ObjectPool_1_Release_m3183E8F3194884123A027D720D37F341AF367E48_gshared_inline)(__this, ___0_element, method);
}
inline bool Enumerator_MoveNext_mEAD61EBD23B77C8C9B2585470D577EB39B9C1140 (Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A*, const RuntimeMethod*))Enumerator_MoveNext_mA00621826A711026137A71100A02D160DD7FA118_gshared)(__this, method);
}
inline void Dictionary_2_Clear_mFEDBE051CC2A493449DD5A24C88038EEEF83AB2E (Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC*, const RuntimeMethod*))Dictionary_2_Clear_m935B3F117860376DC854C9E0C80CBD99BE77EEA4_fshared)(__this, method);
}
inline void Dictionary_2_Clear_mE61E2DE75B4B63899E6E442A841A6958B0A7EAE6 (Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F*, const RuntimeMethod*))Dictionary_2_Clear_m935B3F117860376DC854C9E0C80CBD99BE77EEA4_fshared)(__this, method);
}
inline void Func_1__ctor_m6BC48E22E90C329D60F0B200FD9C7B6182B44800 (Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m5FD0E1320A7A8964A7FCC0D0EA7F809E4E76E0EF_gshared)(__this, ___0_object, ___1_method, method);
}
inline void ObjectPool_1__ctor_m3F6706AE99FFF8D495384A6F630A889EC9918060 (ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* __this, Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4* ___0_createFunc, Action_1_tAAE2A43B6C8B488C8EBD92AF56C2D4329018A227* ___1_actionOnGet, Action_1_tAAE2A43B6C8B488C8EBD92AF56C2D4329018A227* ___2_actionOnRelease, Action_1_tAAE2A43B6C8B488C8EBD92AF56C2D4329018A227* ___3_actionOnDestroy, bool ___4_collectionCheck, int32_t ___5_defaultCapacity, int32_t ___6_maxSize, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2*, Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4*, Action_1_tAAE2A43B6C8B488C8EBD92AF56C2D4329018A227*, Action_1_tAAE2A43B6C8B488C8EBD92AF56C2D4329018A227*, Action_1_tAAE2A43B6C8B488C8EBD92AF56C2D4329018A227*, bool, int32_t, int32_t, const RuntimeMethod*))ObjectPool_1__ctor_m3A4B28B9D0DC42C43CF00C078D27C9ADFA00FACC_gshared)(__this, ___0_createFunc, ___1_actionOnGet, ___2_actionOnRelease, ___3_actionOnDestroy, ___4_collectionCheck, ___5_defaultCapacity, ___6_maxSize, method);
}
inline void Dictionary_2__ctor_m65631FED8A24BDF474F747C679F7AEB4AC878000 (Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m6E2DCAC1E4FA853F19326CEC54DE18EB579EF16D_gshared)(__this, ___0_comparer, method);
}
inline void Dictionary_2__ctor_mFA3E89A4BCCE2A0CC4038E1CE71EDC3AAD293D17 (Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mBFCF70ECC04B9545EFB9056994302B593E628ED7_gshared)(__this, ___0_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09 (String_t* ___0_resourceFormat, RuntimeObject* ___1_p1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_CombineHashCodes_m823D7EC829A9D4FE48FA8B40FBFE6F9DC0092F3C (int32_t ___0_h1, int32_t ___1_h2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63 (StringBuilder_t* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_gshared_inline)(method);
}
inline Comparer_1_t0A03F9FBBEA32FB1528366652D3D38513E8B1137* Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F (const RuntimeMethod* method)
{
	return ((  Comparer_1_t0A03F9FBBEA32FB1528366652D3D38513E8B1137* (*) (const RuntimeMethod*))Comparer_1_get_Default_m9D7E1E21FFEE2C32B345D0E5C835BA713DA80B2C_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_CombineHashCodes_mE2699A82EC949B2BDC6E5F34C1B73BAF6C613E50 (int32_t ___0_h1, int32_t ___1_h2, int32_t ___2_h3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2__ctor_m204C7F34151276EE628D17B5C5DECF463BFE649C (U3CStartU3Ed__2_tC9423255CD49C2088D279B9AA846474D4B59D80D* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
inline void TweenRunner_1_StopTween_m6C1159C7A8EDF8A363CD82CBA503E234870826F0 (TweenRunner_1_tF277B20625C8B1939DC85508C4679C690757395E* __this, const RuntimeMethod* method)
{
	((  void (*) (TweenRunner_1_tF277B20625C8B1939DC85508C4679C690757395E*, const RuntimeMethod*))TweenRunner_1_StopTween_m782348E0451FB7594F045055A50CDD9DB0C4CE8B_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatTween_TweenValue_m022D385B013439E2FB8020F6A6BD329CECA81E89 (FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE* __this, float ___0_floatPercentage, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenRunner_1_Start_m8F517B7356D09DB3B885AC627C1B11853F0F4E3B (FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE ___0_tweenInfo, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2__ctor_m0F5A38D7B55D76D7DD1A22C7D2346C87C12C2BC7 (U3CStartU3Ed__2_t9658309751B877709F2F33E5F2E46BE104025E47* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
inline void TweenRunner_1_StopTween_m1807F7EC3FF55749912B8EBE4951AEC367ED799D (TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* __this, const RuntimeMethod* method)
{
	((  void (*) (TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4*, const RuntimeMethod*))TweenRunner_1_StopTween_m37DB99A9B05E536CF04651C57196ED6049325A1B_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorTween_TweenValue_mF5CBA9BDE7F73E47F9CF26DC4EC2419694049860 (ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7* __this, float ___0_floatPercentage, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenRunner_1_Start_mB20C8AE701784E49515475A471050D8440D444CF (ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7 ___0_tweenInfo, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2__ctor_mD1B548DCCF5485603C6FB4E9EB5431232DD5B8D0 (U3CStartU3Ed__2_t623C57A50EEA01089DB79D6F1F1217F89E158FEB* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
inline void TweenRunner_1_StopTween_m013CE2AC05F13597F080CDEA23E87CD3FBE422C9 (TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B* __this, const RuntimeMethod* method)
{
	((  void (*) (TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B*, const RuntimeMethod*))TweenRunner_1_StopTween_m37DB99A9B05E536CF04651C57196ED6049325A1B_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatTween_TweenValue_mE51344369BDDA58E9C3AEC62E1B1C1AC0349278E (FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A* __this, float ___0_floatPercentage, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenRunner_1_Start_m4F400F2F86055B01EF66839CA607B07908E4FC7D (FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A ___0_tweenInfo, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F BindableVariableBase_1_get_Value_m91CB4186D9501A8357D89A87382E0AA9662E151E_inline (BindableVariableBase_1_tB87521E1348B0B8E54F53C1261B839682F8D655F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenableVariableAsyncBase_1_CompleteJob_mBDA4CB462843B515FFFF357F91A6206266EEFEA5 (TweenableVariableAsyncBase_1_t84B7FBBAD5BE9B483A1DF99D3C2F93356D430055* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindableVariableBase_1_set_Value_mFE4F8368B3DD3CFDAF0AC1F22F4E4A6F34E42230 (BindableVariableBase_1_tB87521E1348B0B8E54F53C1261B839682F8D655F* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_UpdateStateFromCompletedJob_m17AEB9CF4F394FCE1A513967FBF06AF33EA21127 (TweenableVariableAsyncBase_1_t84B7FBBAD5BE9B483A1DF99D3C2F93356D430055* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mB472C86D24172D0BAE7EF37E55779C93CE130E8C (NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeCurve_get_isCreated_m862A0992B9257B63F7C2CE460A84C71353A97EEC (NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCurve_Dispose_m257E292B03ABCDD6EDF3BE197652688AE36E6BB7 (NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_RefreshCurve_m675566DCF9937C4F2151C5C150238F555CE587AB (TweenableVariableAsyncBase_1_t84B7FBBAD5BE9B483A1DF99D3C2F93356D430055* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* TweenableVariableBase_1_get_animationCurve_m6EC9A21B3791E6E1974401435B3ABA3E39C864E6_inline (TweenableVariableBase_1_t8364472CCBD4F605378E11C0AC3182CEC3E26736* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCurve_Update_m12958A86045F18C1F2C01315DD112CC1FB5C99F4 (NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___0_curve, int32_t ___1_resolution, const RuntimeMethod* method) ;
inline void TweenableVariableBase_1_PreprocessTween_m1C78D5E568BF1487BA3AF078685AFC689CA392EB (TweenableVariableBase_1_t8364472CCBD4F605378E11C0AC3182CEC3E26736* __this, const RuntimeMethod* method)
{
	((  void (*) (TweenableVariableBase_1_t8364472CCBD4F605378E11C0AC3182CEC3E26736*, const RuntimeMethod*))TweenableVariableBase_1_PreprocessTween_mECB6DF68955E32BBB920DBCB403E07FA4E0D4489_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_set_Value_mA984A18E47D276CFA7055D0E8E85C4953AC73E81 (TweenableVariableAsyncBase_1_t84B7FBBAD5BE9B483A1DF99D3C2F93356D430055* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_ceil_m06DEF6827759F405C10166F2C9E8047AE7C09179_inline (float ___0_x, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TweenableVariableBase_1_get_initialValue_m7F174333E94175EA8B3F25095AA58941D1100ACA_inline (TweenableVariableBase_1_t8364472CCBD4F605378E11C0AC3182CEC3E26736* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 TweenableVariableAsyncBase_1_GetNativeCurve_mA5762CD90494B88DBD282FB9310197DAAD54E4CC (TweenableVariableAsyncBase_1_t84B7FBBAD5BE9B483A1DF99D3C2F93356D430055* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D TweenableVariableAsyncBase_1_GetJobOutputStore_mE4CD397DDEB0E86B92F3F14F26DD95B932F2ED82 (TweenableVariableAsyncBase_1_t84B7FBBAD5BE9B483A1DF99D3C2F93356D430055* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mE3E0CC624396EE2CF282ADD8B942B09323AF30E8 (NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisposableManagerSingleton_RegisterDisposable_m59A00C2005FAFD93DD1CBB3ECBCA76804CD64786 (RuntimeObject* ___0_disposableToRegister, const RuntimeMethod* method) ;
inline void TweenableVariableBase_1_OnAnimationCurveChanged_mCD8760845DC0872325B4C1F504CB21135583FF5E (TweenableVariableBase_1_t8364472CCBD4F605378E11C0AC3182CEC3E26736* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (TweenableVariableBase_1_t8364472CCBD4F605378E11C0AC3182CEC3E26736*, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, const RuntimeMethod*))TweenableVariableBase_1_OnAnimationCurveChanged_m93BA49D17E83BBECE7326DDA936729FCF9FE1672_fshared)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JobHandle_Complete_mDCED35A125AAB37EDDAB2E31C805B4904B614A4A (JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1__ctor_mCAEAF8CBEB3AC895E3B9CD683F8C9B7E2D334A72 (TweenableVariableBase_1_t8364472CCBD4F605378E11C0AC3182CEC3E26736* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BindableVariableBase_1_get_Value_m56739E375D26399567FC0F237E68BFA12EAABCA1_inline (BindableVariableBase_1_tB9252B4815AD3E511244D3B578854D3FF333E4BD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenableVariableAsyncBase_1_CompleteJob_mEA72D798E65A8718EE40C02CB71284E20FBECBCA (TweenableVariableAsyncBase_1_tF183EC63E8112FA406C601A7E49A5AC36036F088* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindableVariableBase_1_set_Value_m4AF1F78B7B57E861E68761340D69FC566D0619AC (BindableVariableBase_1_tB9252B4815AD3E511244D3B578854D3FF333E4BD* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_UpdateStateFromCompletedJob_m6FC07A6FA964359EAF1140BD6A3C3DC495D80EA6 (TweenableVariableAsyncBase_1_tF183EC63E8112FA406C601A7E49A5AC36036F088* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mC07280A768D065A052D995F3E6175A27CD62E1F6 (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_RefreshCurve_m625FDE32D1C133D32A91447F79CD1A505695FFF7 (TweenableVariableAsyncBase_1_tF183EC63E8112FA406C601A7E49A5AC36036F088* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* TweenableVariableBase_1_get_animationCurve_m629E6E7B4B5D8981C071EC50A729BAD6E81AE944_inline (TweenableVariableBase_1_tE056BE2293DB2624363EEADF82A5A9439C26C35D* __this, const RuntimeMethod* method) ;
inline void TweenableVariableBase_1_PreprocessTween_m64A3CB2450518DFFFE14D07E9BFDF63E324B5AE9 (TweenableVariableBase_1_tE056BE2293DB2624363EEADF82A5A9439C26C35D* __this, const RuntimeMethod* method)
{
	((  void (*) (TweenableVariableBase_1_tE056BE2293DB2624363EEADF82A5A9439C26C35D*, const RuntimeMethod*))TweenableVariableBase_1_PreprocessTween_mECB6DF68955E32BBB920DBCB403E07FA4E0D4489_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_set_Value_mB830A78DD377C42A7C78E20D2AB4133D52526E3F (TweenableVariableAsyncBase_1_tF183EC63E8112FA406C601A7E49A5AC36036F088* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TweenableVariableBase_1_get_initialValue_m328C6A22EB2CA996E9C8AFDB3D51F98A0CAF2B64_inline (TweenableVariableBase_1_tE056BE2293DB2624363EEADF82A5A9439C26C35D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 TweenableVariableAsyncBase_1_GetNativeCurve_m8EA398243C2E9D46B12395BCA583A652B4F02A51 (TweenableVariableAsyncBase_1_tF183EC63E8112FA406C601A7E49A5AC36036F088* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF TweenableVariableAsyncBase_1_GetJobOutputStore_mD6671CF6A3B2AE5B6F0AA2A7802BD32AD83705A3 (TweenableVariableAsyncBase_1_tF183EC63E8112FA406C601A7E49A5AC36036F088* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m4D540A81E1062EEC2C4B0697A34A4EEFB9BC9004 (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
inline void TweenableVariableBase_1_OnAnimationCurveChanged_m2C329BCB797EF2DBF83E6B7233B71FC72E3D6317 (TweenableVariableBase_1_tE056BE2293DB2624363EEADF82A5A9439C26C35D* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (TweenableVariableBase_1_tE056BE2293DB2624363EEADF82A5A9439C26C35D*, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, const RuntimeMethod*))TweenableVariableBase_1_OnAnimationCurveChanged_m93BA49D17E83BBECE7326DDA936729FCF9FE1672_fshared)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1__ctor_mACF24E12EF5F0EA84906361750928AE170DEB855 (TweenableVariableBase_1_tE056BE2293DB2624363EEADF82A5A9439C26C35D* __this, const RuntimeMethod* method) ;
inline void NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1_fshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 BindableVariableBase_1_get_Value_mA3C426A393A0A5AB6EC95606DABB506F20A5AA84_inline (BindableVariableBase_1_tF26C7349EBD3DF838D75EBA46B0FA97EFE9E43D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenableVariableAsyncBase_1_CompleteJob_mC14CC21C2CA294CF963A521E20F927319482B5BC (TweenableVariableAsyncBase_1_t0A92C17D9391783B25BD32E62A3A296324C1A287* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindableVariableBase_1_set_Value_m588EB4AA14624FE8EA988D058D0550FB211038D4 (BindableVariableBase_1_tF26C7349EBD3DF838D75EBA46B0FA97EFE9E43D4* __this, float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_UpdateStateFromCompletedJob_mD25FD8525E63D070F5421EA4FF80A69E53BD51D4 (TweenableVariableAsyncBase_1_t0A92C17D9391783B25BD32E62A3A296324C1A287* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m7980162AEAF54A574BA086A397B2F628A24AA1EA (NativeArray_1_tB2C0A4BD42DDC767D3B622ACDDD0A5E3898E0F9C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_RefreshCurve_m5FE06066BD53F79AA70930D1D2662E2750C39F0D (TweenableVariableAsyncBase_1_t0A92C17D9391783B25BD32E62A3A296324C1A287* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* TweenableVariableBase_1_get_animationCurve_m55397DEBDC220A8C682C16B5C4387DF00B7B4109_inline (TweenableVariableBase_1_tA9EC62FCEF5FA67F96F841799692ED88299C6DCB* __this, const RuntimeMethod* method) ;
inline void TweenableVariableBase_1_PreprocessTween_mF9B80F1F874EE88A2D320171A4803CCCCEA4B6AF (TweenableVariableBase_1_tA9EC62FCEF5FA67F96F841799692ED88299C6DCB* __this, const RuntimeMethod* method)
{
	((  void (*) (TweenableVariableBase_1_tA9EC62FCEF5FA67F96F841799692ED88299C6DCB*, const RuntimeMethod*))TweenableVariableBase_1_PreprocessTween_mECB6DF68955E32BBB920DBCB403E07FA4E0D4489_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_set_Value_m13DFBD337F071EB806AE9D736C384070D3C5B0E4 (TweenableVariableAsyncBase_1_t0A92C17D9391783B25BD32E62A3A296324C1A287* __this, float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 TweenableVariableBase_1_get_initialValue_m1FB1C293F911ECEE83D12AE9369FAA597FFFF807_inline (TweenableVariableBase_1_tA9EC62FCEF5FA67F96F841799692ED88299C6DCB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 TweenableVariableAsyncBase_1_GetNativeCurve_mC738E29622E63BEAEA944BBBB1F36714F666231E (TweenableVariableAsyncBase_1_t0A92C17D9391783B25BD32E62A3A296324C1A287* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB2C0A4BD42DDC767D3B622ACDDD0A5E3898E0F9C TweenableVariableAsyncBase_1_GetJobOutputStore_m6DAC7922AF2D97B06293A8705ACEEF9A75117B16 (TweenableVariableAsyncBase_1_t0A92C17D9391783B25BD32E62A3A296324C1A287* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m3F073274644350A3AB96A6DC9FAEAA1CF55D49ED (NativeArray_1_tB2C0A4BD42DDC767D3B622ACDDD0A5E3898E0F9C* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
inline void TweenableVariableBase_1_OnAnimationCurveChanged_m615D1BACB33B9FE12C448973E7F39FD3797ED37B (TweenableVariableBase_1_tA9EC62FCEF5FA67F96F841799692ED88299C6DCB* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (TweenableVariableBase_1_tA9EC62FCEF5FA67F96F841799692ED88299C6DCB*, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, const RuntimeMethod*))TweenableVariableBase_1_OnAnimationCurveChanged_m93BA49D17E83BBECE7326DDA936729FCF9FE1672_fshared)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1__ctor_m8FBC71F49CC1938EDCD56394A23AAC5B82474A9E (TweenableVariableBase_1_tA9EC62FCEF5FA67F96F841799692ED88299C6DCB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t7600B73F092B37F484B12910A5269F30C778D31E BindableVariableBase_1_get_Value_mFB058C8CBBC994AB70F8F17047FA29748DDBDACF_inline (BindableVariableBase_1_t4142EEA09360420F28B691D2EC2462CA12F8866A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenableVariableAsyncBase_1_CompleteJob_m7786DA2D6FA51A529753EC96D4D5B23A3942217C (TweenableVariableAsyncBase_1_t24C3255684D7C73284B0C5A0EBEEC43C7CE867F3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindableVariableBase_1_set_Value_mC146C923C3804A957825DA499821BDF37750F0E7 (BindableVariableBase_1_t4142EEA09360420F28B691D2EC2462CA12F8866A* __this, float3_t7600B73F092B37F484B12910A5269F30C778D31E ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_UpdateStateFromCompletedJob_m95891B7257F1D063A3198DA14097AC3E8625899A (TweenableVariableAsyncBase_1_t24C3255684D7C73284B0C5A0EBEEC43C7CE867F3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m2A637EE3594AFEBB9D4A28FED111DE532EC1E707 (NativeArray_1_t4CB8C2A6DBEDF6C671F933ADC9E21367D90886F3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_RefreshCurve_m4FD03FB681F2D3213411B45ACF9103D0DCC0C8A3 (TweenableVariableAsyncBase_1_t24C3255684D7C73284B0C5A0EBEEC43C7CE867F3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* TweenableVariableBase_1_get_animationCurve_m0D7F0A84FD0FD39DC0E1FFF9E48C67EEC6A6CB4D_inline (TweenableVariableBase_1_t559E6D69FB65AF8FBCF6044D84C6466C849D826E* __this, const RuntimeMethod* method) ;
inline void TweenableVariableBase_1_PreprocessTween_m58944555DA2A8F100781DB5E5E8224F80B068FCE (TweenableVariableBase_1_t559E6D69FB65AF8FBCF6044D84C6466C849D826E* __this, const RuntimeMethod* method)
{
	((  void (*) (TweenableVariableBase_1_t559E6D69FB65AF8FBCF6044D84C6466C849D826E*, const RuntimeMethod*))TweenableVariableBase_1_PreprocessTween_mECB6DF68955E32BBB920DBCB403E07FA4E0D4489_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_set_Value_m8C121C22038B22441250708D8894FC985763F24F (TweenableVariableAsyncBase_1_t24C3255684D7C73284B0C5A0EBEEC43C7CE867F3* __this, float3_t7600B73F092B37F484B12910A5269F30C778D31E ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t7600B73F092B37F484B12910A5269F30C778D31E TweenableVariableBase_1_get_initialValue_m39887A8F0538E4A03F89B90922AC33E782982744_inline (TweenableVariableBase_1_t559E6D69FB65AF8FBCF6044D84C6466C849D826E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 TweenableVariableAsyncBase_1_GetNativeCurve_m400C9310B3F316417BF8175C7E45A79E0A15E42F (TweenableVariableAsyncBase_1_t24C3255684D7C73284B0C5A0EBEEC43C7CE867F3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t4CB8C2A6DBEDF6C671F933ADC9E21367D90886F3 TweenableVariableAsyncBase_1_GetJobOutputStore_mDE98AA9CD1559FA1A4FE67F7F3A4BA0B5881B485 (TweenableVariableAsyncBase_1_t24C3255684D7C73284B0C5A0EBEEC43C7CE867F3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mFDD62CBC272061C359019B1D200640B06FB50703 (NativeArray_1_t4CB8C2A6DBEDF6C671F933ADC9E21367D90886F3* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
inline void TweenableVariableBase_1_OnAnimationCurveChanged_mF940DBEAE0B766E5C1CA8BFB4720495F3E30BF5A (TweenableVariableBase_1_t559E6D69FB65AF8FBCF6044D84C6466C849D826E* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (TweenableVariableBase_1_t559E6D69FB65AF8FBCF6044D84C6466C849D826E*, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, const RuntimeMethod*))TweenableVariableBase_1_OnAnimationCurveChanged_m93BA49D17E83BBECE7326DDA936729FCF9FE1672_fshared)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1__ctor_m7A162ABC9A0A622C107B0C1E69E73241C9E72A13 (TweenableVariableBase_1_t559E6D69FB65AF8FBCF6044D84C6466C849D826E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t545A994996126766890C1F28B43EA823F2410190 BindableVariableBase_1_get_Value_m2079036D42637925E85AB7BDEFE82041D3AD8357_inline (BindableVariableBase_1_t2B7F2DB22F178A593CBE8E2A3E4288B33A6735EF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenableVariableAsyncBase_1_CompleteJob_m26AAE41705C9C7EF8CF748EE597E5A3D6C5BDD31 (TweenableVariableAsyncBase_1_tD3FE5A9C4EEE24A00A53CD66FEB12CB408F76FF2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindableVariableBase_1_set_Value_mBBBC397B7ED528276A0FE1260648A9B3B1711160 (BindableVariableBase_1_t2B7F2DB22F178A593CBE8E2A3E4288B33A6735EF* __this, float4_t545A994996126766890C1F28B43EA823F2410190 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_UpdateStateFromCompletedJob_mB877C881052323083AE7B9FDDA69D66CAD337393 (TweenableVariableAsyncBase_1_tD3FE5A9C4EEE24A00A53CD66FEB12CB408F76FF2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m43802A93D40E3DD4656B3DA9CE648583E632FD69 (NativeArray_1_t38B974FEBDE9C6BC682E4154FA808DE4F13EF788* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_RefreshCurve_mE14F5E6818345E878FDCB0FC9919C3A16EA0DE5B (TweenableVariableAsyncBase_1_tD3FE5A9C4EEE24A00A53CD66FEB12CB408F76FF2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* TweenableVariableBase_1_get_animationCurve_m9E5AF31E43EACFB95A17770928B657FA44E7F699_inline (TweenableVariableBase_1_t9D1C5D207B9A321B201B828091D3953D761BB265* __this, const RuntimeMethod* method) ;
inline void TweenableVariableBase_1_PreprocessTween_m0FFE1F9C326282BAAC3552002477046687CF5861 (TweenableVariableBase_1_t9D1C5D207B9A321B201B828091D3953D761BB265* __this, const RuntimeMethod* method)
{
	((  void (*) (TweenableVariableBase_1_t9D1C5D207B9A321B201B828091D3953D761BB265*, const RuntimeMethod*))TweenableVariableBase_1_PreprocessTween_mECB6DF68955E32BBB920DBCB403E07FA4E0D4489_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_set_Value_m09287DBC12CE7BB333CAF20A281910B58ABE2E0C (TweenableVariableAsyncBase_1_tD3FE5A9C4EEE24A00A53CD66FEB12CB408F76FF2* __this, float4_t545A994996126766890C1F28B43EA823F2410190 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t545A994996126766890C1F28B43EA823F2410190 TweenableVariableBase_1_get_initialValue_m4BCD5A8FB7FFEC10F64E2229C79255538745D10E_inline (TweenableVariableBase_1_t9D1C5D207B9A321B201B828091D3953D761BB265* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 TweenableVariableAsyncBase_1_GetNativeCurve_mC3F5BBBF46BC9CF3F1FA1615836393E7C04AA969 (TweenableVariableAsyncBase_1_tD3FE5A9C4EEE24A00A53CD66FEB12CB408F76FF2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t38B974FEBDE9C6BC682E4154FA808DE4F13EF788 TweenableVariableAsyncBase_1_GetJobOutputStore_mF6CE6A2CCF38630441E58A18641E585F69A04D86 (TweenableVariableAsyncBase_1_tD3FE5A9C4EEE24A00A53CD66FEB12CB408F76FF2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mA436E603DA9491DAC49E5C7203B895500F86B034 (NativeArray_1_t38B974FEBDE9C6BC682E4154FA808DE4F13EF788* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
inline void TweenableVariableBase_1_OnAnimationCurveChanged_mFA5416E2B47F19B0ACC3135EB90904F461F2B4A2 (TweenableVariableBase_1_t9D1C5D207B9A321B201B828091D3953D761BB265* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (TweenableVariableBase_1_t9D1C5D207B9A321B201B828091D3953D761BB265*, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, const RuntimeMethod*))TweenableVariableBase_1_OnAnimationCurveChanged_m93BA49D17E83BBECE7326DDA936729FCF9FE1672_fshared)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1__ctor_m912642E50E0348D02E8EAF1EC7FAFD20732F3D11 (TweenableVariableBase_1_t9D1C5D207B9A321B201B828091D3953D761BB265* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_Equals_mD297CAFFEBE9352C940873862FDF9A28F1F02435_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TweenableVariableBase_1_get_target_mE6FD18451F50101EFE64887DD526D68B91E95E28_inline (TweenableVariableBase_1_t8364472CCBD4F605378E11C0AC3182CEC3E26736* __this, const RuntimeMethod* method) ;
inline void U3CStartAutoTweenU3Ed__15__ctor_mC8B2A96752F231F0A1D160AF85E8B6D096E52655 (U3CStartAutoTweenU3Ed__15_t964033BA020D9A4F19E6256B7CEB1A24FED19BBC* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CStartAutoTweenU3Ed__15_t964033BA020D9A4F19E6256B7CEB1A24FED19BBC*, int32_t, const RuntimeMethod*))U3CStartAutoTweenU3Ed__15__ctor_m308403322749D1DE358BDF0D1F185959AD9DCFCD_fshared)(__this, ___0_U3CU3E1__state, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlaySequenceU3Ed__16__ctor_mD5239208BA9D14D79B5035D4801DBADB83E20CFA (U3CPlaySequenceU3Ed__16_tD929E6110FE78A4938CC59458DF4E7F1E168BCA8* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* AnimationCurve_EaseInOut_m01DD06E6C8962F8F62F293C9EAE491C3D3F2CAF3 (float ___0_timeStart, float ___1_valueStart, float ___2_timeEnd, float ___3_valueEnd, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindableVariable_1__ctor_m46454FD2616E16C958CBF75FACF06DC26354C3D6 (BindableVariable_1_tB1E8CB1BE6FC0FC0ADBA23B797014B9E0D2BBEDB* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_initialValue, bool ___1_checkEquality, Func_3_t694ADFBBF2CEA4DEF1F1F1F9B00D5DCAE200F97E* ___2_equalityMethod, bool ___3_startInitialized, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_Equals_m25B95D8412B79CC7F8B34062BFAE662BD99578BE_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TweenableVariableBase_1_get_target_mE8C9B81F32FFE81DDA5373629D88AF18F1B76E87_inline (TweenableVariableBase_1_t894346E06DB112599F8C5FBC5AD5F251F33CFBD9* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 BindableVariableBase_1_get_Value_mDA92236BCE8EC7928399D7271AA97D7B62941EEC_inline (BindableVariableBase_1_t0B8C3C183E9A64B760FC611EA6858D9BD639E610* __this, const RuntimeMethod* method) ;
inline void U3CStartAutoTweenU3Ed__15__ctor_mD806DE58EC9FDDB99D70D834D484788C5A0F944F (U3CStartAutoTweenU3Ed__15_t8D4EED35BE1F7508EB210894C5CCDB4B853C0409* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CStartAutoTweenU3Ed__15_t8D4EED35BE1F7508EB210894C5CCDB4B853C0409*, int32_t, const RuntimeMethod*))U3CStartAutoTweenU3Ed__15__ctor_m308403322749D1DE358BDF0D1F185959AD9DCFCD_fshared)(__this, ___0_U3CU3E1__state, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlaySequenceU3Ed__16__ctor_mD30D043965C8B426229C7C1EB62FE361A0447792 (U3CPlaySequenceU3Ed__16_t6E1C7756370FBAA5707020040BCB462499584560* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindableVariable_1__ctor_mE0064F585587C1463E0D4AE1EDA3B66C42B2DEF0 (BindableVariable_1_t3A66A98B9D01BD0046D7960AEC1E2F23321EFBA9* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_initialValue, bool ___1_checkEquality, Func_3_tE82E2E9CB095585276C858A2EA8860ACC9745B0C* ___2_equalityMethod, bool ___3_startInitialized, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9 (float* __this, float ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TweenableVariableBase_1_get_target_mAC0A1CFF253192C4AE820F8EEF2A380F508E99EA_inline (TweenableVariableBase_1_tE056BE2293DB2624363EEADF82A5A9439C26C35D* __this, const RuntimeMethod* method) ;
inline void U3CStartAutoTweenU3Ed__15__ctor_m532C16799F55E4F6596BDFC6B96698298F673639 (U3CStartAutoTweenU3Ed__15_t1B24DDAB48535E27943F0747CE374D9B76ED1755* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CStartAutoTweenU3Ed__15_t1B24DDAB48535E27943F0747CE374D9B76ED1755*, int32_t, const RuntimeMethod*))U3CStartAutoTweenU3Ed__15__ctor_m308403322749D1DE358BDF0D1F185959AD9DCFCD_fshared)(__this, ___0_U3CU3E1__state, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlaySequenceU3Ed__16__ctor_mF90BCFCB27D576381218D1738E70B36844DA596E (U3CPlaySequenceU3Ed__16_tE012EC718E27C230237DCC2B98ACC84B3C7F095B* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindableVariable_1__ctor_mDC40C552DDD7391A70B329BD063A7C4BBD98E408 (BindableVariable_1_tAB8C2D23769D801C8E39D4AA927DD23AF0E6816C* __this, float ___0_initialValue, bool ___1_checkEquality, Func_3_tA9AA477D8A5A68C7DC26AE4792295B80F920E61E* ___2_equalityMethod, bool ___3_startInitialized, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool float2_Equals_mEC26CC3305FBABDA61A8A5FD2D0EFA6A33F4DC26_inline (float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5* __this, float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___0_rhs, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 TweenableVariableBase_1_get_target_m1A7E3A9D6216D6936EF6041FBD721AC6A6050945_inline (TweenableVariableBase_1_tA9EC62FCEF5FA67F96F841799692ED88299C6DCB* __this, const RuntimeMethod* method) ;
inline void U3CStartAutoTweenU3Ed__15__ctor_mC4850279D16A0141777E5BE32DCF4CC1EDB1CF3B (U3CStartAutoTweenU3Ed__15_tC1F158DF3449E6CAFD97BDBF1A65431F6DBF8290* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CStartAutoTweenU3Ed__15_tC1F158DF3449E6CAFD97BDBF1A65431F6DBF8290*, int32_t, const RuntimeMethod*))U3CStartAutoTweenU3Ed__15__ctor_m308403322749D1DE358BDF0D1F185959AD9DCFCD_fshared)(__this, ___0_U3CU3E1__state, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlaySequenceU3Ed__16__ctor_mBED71238022E607B05C425C6883C0385523FE70F (U3CPlaySequenceU3Ed__16_tCA72372FBD9801568210AF34AD05BDBA76A80466* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindableVariable_1__ctor_mE5AFD4A6299A180D32742AE69F14BD70F32A6B63 (BindableVariable_1_t71ED0CC97E302AFB62C164F5DF70E87569239CDE* __this, float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___0_initialValue, bool ___1_checkEquality, Func_3_t679D611E3FC0D6DC6403103FC27F2989317B18D7* ___2_equalityMethod, bool ___3_startInitialized, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool float3_Equals_m53E5496F35693B0B1082AF2D1C2A98629A743DF2_inline (float3_t7600B73F092B37F484B12910A5269F30C778D31E* __this, float3_t7600B73F092B37F484B12910A5269F30C778D31E ___0_rhs, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t7600B73F092B37F484B12910A5269F30C778D31E TweenableVariableBase_1_get_target_mE63B487CCE2E85D507B2DB414EC01492C3839623_inline (TweenableVariableBase_1_t559E6D69FB65AF8FBCF6044D84C6466C849D826E* __this, const RuntimeMethod* method) ;
inline void U3CStartAutoTweenU3Ed__15__ctor_mFD10B34827204EDB1B68956569998B8325D354A9 (U3CStartAutoTweenU3Ed__15_t9A8F92B5B1E5F2AB087F724A900818F3E9D715E2* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CStartAutoTweenU3Ed__15_t9A8F92B5B1E5F2AB087F724A900818F3E9D715E2*, int32_t, const RuntimeMethod*))U3CStartAutoTweenU3Ed__15__ctor_m308403322749D1DE358BDF0D1F185959AD9DCFCD_fshared)(__this, ___0_U3CU3E1__state, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlaySequenceU3Ed__16__ctor_m0CEE9278458D7AA90145D65805B59F232A99088B (U3CPlaySequenceU3Ed__16_t1C260580ED8FDAD0E72E6BB8297B4F389219A035* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindableVariable_1__ctor_mC5FD3859C69FD36D84C05294C0A7DCED6C5C2D2A (BindableVariable_1_t2F927DE37EBA52F9977D6399FEE7D5338FFE69DC* __this, float3_t7600B73F092B37F484B12910A5269F30C778D31E ___0_initialValue, bool ___1_checkEquality, Func_3_tE48C31D7100E33FE059CEE93727D825F38ABBD94* ___2_equalityMethod, bool ___3_startInitialized, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool float4_Equals_m1567E11F547B2FED9A8F0A0BF4BE06C2469E6799_inline (float4_t545A994996126766890C1F28B43EA823F2410190* __this, float4_t545A994996126766890C1F28B43EA823F2410190 ___0_rhs, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t545A994996126766890C1F28B43EA823F2410190 TweenableVariableBase_1_get_target_m2DE9FA2DD2FE238ECDC3FCC00457736DB0A44893_inline (TweenableVariableBase_1_t9D1C5D207B9A321B201B828091D3953D761BB265* __this, const RuntimeMethod* method) ;
inline void U3CStartAutoTweenU3Ed__15__ctor_mF0E147CE1429D6EA02FBBD204909486970A48D69 (U3CStartAutoTweenU3Ed__15_t0940E62889D459485D0979635ACD5EC7166F76D7* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CStartAutoTweenU3Ed__15_t0940E62889D459485D0979635ACD5EC7166F76D7*, int32_t, const RuntimeMethod*))U3CStartAutoTweenU3Ed__15__ctor_m308403322749D1DE358BDF0D1F185959AD9DCFCD_fshared)(__this, ___0_U3CU3E1__state, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlaySequenceU3Ed__16__ctor_m7A7243D873C9667CA8691C8DD1C47B8B3FAEB16A (U3CPlaySequenceU3Ed__16_t72A400DA1334A84E936DC682068A5FE43D939808* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindableVariable_1__ctor_mBF426439A562766ACAFABC863271D16C5D5D70A4 (BindableVariable_1_t0AD8E7C4D528C426B472321BDF57E14B53A43717* __this, float4_t545A994996126766890C1F28B43EA823F2410190 ___0_initialValue, bool ___1_checkEquality, Func_3_t8204F4CEB15630A3F397A0E7FB8F90248872DB09* ___2_equalityMethod, bool ___3_startInitialized, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BindableVariableBase_1_set_Value_m19676F8DE67466CD43313044F2ADBAD0B83D9F0B (BindableVariableBase_1_t0B8C3C183E9A64B760FC611EA6858D9BD639E610* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* TweenableVariableBase_1_get_animationCurve_m21E54689FDC5927A7972A3C3E2DA224B4A76CBAB_inline (TweenableVariableBase_1_t894346E06DB112599F8C5FBC5AD5F251F33CFBD9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, float ___0_time, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1__ctor_m6E06BE86674001DE6ABE6591650908B5292962BB (TweenableVariableBase_1_t894346E06DB112599F8C5FBC5AD5F251F33CFBD9* __this, const RuntimeMethod* method) ;
inline RuntimeObject* PropertyBagStore_GetPropertyBag_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_m9BDE5E9B9E0EE309570C0E1BEEFF1D970E301057 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))PropertyBagStore_GetPropertyBag_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_m9BDE5E9B9E0EE309570C0E1BEEFF1D970E301057_gshared)(method);
}
inline void TypeConstructor_1_SetImplicitConstructor_m567724D44415F983B593F79A65DF98D0B49A7586 (TypeConstructor_1_tFF185AD2A1E08A2874947762589A4D832280E8FE* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_tFF185AD2A1E08A2874947762589A4D832280E8FE*, const RuntimeMethod*))TypeConstructor_1_SetImplicitConstructor_m567724D44415F983B593F79A65DF98D0B49A7586_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318 (Type_t* __this, const RuntimeMethod* method) ;
inline void Func_1__ctor_m1CF94999885A2AB1DEDC3C4D08360632327809FC (Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m1CF94999885A2AB1DEDC3C4D08360632327809FC_gshared)(__this, ___0_object, ___1_method, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5 (Type_t* __this, const RuntimeMethod* method) ;
inline TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_inline (const RuntimeMethod* method)
{
	return ((  TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* (*) (const RuntimeMethod*))Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554 (Type_t* __this, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___0_types, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4 (ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* ___0_left, ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24 (Type_t* ___0_type, const RuntimeMethod* method) ;
inline StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 Activator_CreateInstance_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_mB73A28B81E6D6D5CEA36624398A83B517613B668 (const RuntimeMethod* method)
{
	return ((  StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 (*) (const RuntimeMethod*))Activator_CreateInstance_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_mB73A28B81E6D6D5CEA36624398A83B517613B668_gshared)(method);
}
inline StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 Func_1_Invoke_mD023E4BE9F2AC4DDAB5BC6865F64444F25EBA15C_inline (Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* __this, const RuntimeMethod* method)
{
	return ((  StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 (*) (Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3*, const RuntimeMethod*))Func_1_Invoke_mD023E4BE9F2AC4DDAB5BC6865F64444F25EBA15C_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m371FB7DB718EACB453900456810E9A5E7C4560FC (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_mB3A3166BECF17AF72ECD9CB45352121E79693D1D (TypeConstructor_1_tE75B89D5AA084F114504AC7D05DD0F8154EF0058* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mA471FC63ABD240998521909693B8E1F0E226F4C7 (Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F Activator_CreateInstance_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_mB01EF8A1953AD6AC7F3EA56DC0CA6C9353BFD778 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F Func_1_Invoke_mEFCC6E276B7F9541F583BF1DD7C2D4B88A5C9CED_inline (Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_m62FD638362BFCB156A7F8AC98F87BB9DA45A686C (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m962EFB2F614BF82E3DFE0A548F875ED7EC21B705 (TypeConstructor_1_tF5F8176F6A09CD203432077E7C7B5AABC31327EA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m39E4205D276C3545517E8CBC0AAA109AED598253 (Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 Activator_CreateInstance_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_mE1EF4F1754910E076C909536D2A4427F01104233 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 Func_1_Invoke_mF38ACE8EE747FDAB603827786CAA57779D125644_inline (Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_m3B7D84997A9B8DF8F81AA85C2C9FA88D48A5399A (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m44F12955763EFCCB75A37E92EC25D46B88D288B8 (TypeConstructor_1_tD5DA07CE239BB0599B0F321C96FD2BD58C83DF97* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m06C3E157C1C7C2FAB7AC8777BB674C9D951702CB (Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C Activator_CreateInstance_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_m873909B6AA229BD59E90731F4D6FBF4CC87F5602 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C Func_1_Invoke_m14C121BADC1DA0C563A54E906949398ADE4E510D_inline (Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m90943EC8A95BEF0B7653A90C89F26FC8ADD09FB8 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m0187BB447B4788E880EAB9921A60ECB42609286C (TypeConstructor_1_tB7EF02BD3EFCFE0495E9D67B2BCFF3652B6D6C6F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mA4955FA382BBC4CBD82690DCA4DBB23EFFB5B379 (Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 Activator_CreateInstance_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_mEE0F7CDAD8C0B99BA86771065E4EE2D71690474C (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 Func_1_Invoke_m3C0C15EA65260B3A2D23C645DE9908F470E1D6EB_inline (Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_m82B5917AD86A0775E7DD8F172FEAE0453CF832CE (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m51B797D10A3B0912B091FA941851F9CA25028CD7 (TypeConstructor_1_t4B0BD235497BF51A55673786B4B3FEC08FF7A40A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mCA44589EC746F7662FC5375FE18EC12DC9E057C5 (Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC Activator_CreateInstance_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_m112E07EE82B221E3263040A368D5DD9FA4581E7A (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC Func_1_Invoke_m72E1B2AB7AB84681AB456966658AB4AA2262172E_inline (Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m12EA9186899E84F2F4C3FC7EE5E9BA1EF4A87CE9 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m2D39DE69B79401A5162CC3AE92B414DA350B427E (TypeConstructor_1_t4203D4BA6648D84005F60BA10B9E7FFFD1BD104C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mBF9DBF4E06C4D61E55687EABBAC4550B432E6D9A (Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 Activator_CreateInstance_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m68F946E397E45AC0C461ABC3CB223C420569B8C5 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 Func_1_Invoke_m431E4DC7CE52538C527FFFA27B672C9172B9FA5D_inline (Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m49C3C2D5C8CE19D771AC6E44664479AB1A300582 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_mC649308AA476E656E8EDFEB064E80C613E329208 (TypeConstructor_1_t1BB003702AC661844ECFE30F83C9FA228250C58F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m7DAE2F89A23101179BB5B56E3773CE03C3287F94 (Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 Activator_CreateInstance_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_mE7341C88FD622F8CC6463B0990DECFDEC77CE513 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 Func_1_Invoke_m22D302915F20EEF62D9C1666172BBE063F7D795A_inline (Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m889D9CDB4925D6CEA1E008BD11C74F4C4B526CD7 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_mF8ACDEC4A418A3DC5EB0F27E4682223125B50B29 (TypeConstructor_1_tA4FE8677DDBAE558A4A99F5C70DA123D6D746068* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m2749E8A77FD25617A4ECDB5CEEEDE39F9D1EE456 (Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F Activator_CreateInstance_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m93B83A4B46F4D2E164D1604B782F208D26E12267 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F Func_1_Invoke_m46E31998378DE2BA4DF293634298EF5AA1E6520B_inline (Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_mA41D4EADD69077FA3D6860DDBF38E73AC193A3C8 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_mA88560F0713BBFA2C37745AF9D6C52629ED1DF7E (TypeConstructor_1_t04F8CEA6E3DA7BFE91DB6C903CB750ECBE264E3F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m5DE18B6F84B0E4095B7DACFC9C7006775018056A (Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 Activator_CreateInstance_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m03ECCA81585078D9FEB71559619D15E1512A86A5 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 Func_1_Invoke_m387E8C6D589CA66F72630F311D4CA283A6771829_inline (Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* __this, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_m9832942FE310479E64D9D0D23F29C65305BE1622_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
inline Il2CppSharedGenericObject* Func_1_Invoke_m201DDBB72CE38673C89C22034EC8779981D83E6D_inline (Func_1_t566D4A654882E282E54CDC3A001E05486F913903* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (Func_1_t566D4A654882E282E54CDC3A001E05486F913903*, const RuntimeMethod*))Func_1_Invoke_m201DDBB72CE38673C89C22034EC8779981D83E6D_gshared_inline)(__this, method);
}
inline int32_t ObjectPool_1_get_CountAll_m8372ACA3A976C3FCB45CD77A0AEF0BDA496EBB6D_inline (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3*, const RuntimeMethod*))ObjectPool_1_get_CountAll_m8372ACA3A976C3FCB45CD77A0AEF0BDA496EBB6D_gshared_inline)(__this, method);
}
inline void ObjectPool_1_set_CountAll_m6E7C5E741DCB73BD743FC27BACBE1886F4414440_inline (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3*, int32_t, const RuntimeMethod*))ObjectPool_1_set_CountAll_m6E7C5E741DCB73BD743FC27BACBE1886F4414440_gshared_inline)(__this, ___0_value, method);
}
inline Il2CppSharedGenericObject* List_1_get_Item_m02336594E8F76D7313E2BCB7A3ED5ABD13B4D515 (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, int32_t, const RuntimeMethod*))List_1_get_Item_m02336594E8F76D7313E2BCB7A3ED5ABD13B4D515_gshared)(__this, ___0_index, method);
}
inline void List_1_RemoveAt_m36F68EA689DB109415094085A496D5EA21E2F23C (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m36F68EA689DB109415094085A496D5EA21E2F23C_gshared)(__this, ___0_index, method);
}
inline void Action_1_Invoke_mDB8F7C7381C08B4DCE4E409D2FA4073BC17F90B5_inline (Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* __this, Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505*, Il2CppSharedGenericObject*, const RuntimeMethod*))Action_1_Invoke_mDB8F7C7381C08B4DCE4E409D2FA4073BC17F90B5_gshared_inline)(__this, ___0_obj, method);
}
inline int32_t ObjectPool_1_get_CountInactive_m40351B6BE62E0944A0813C07869822EC0D1E8D26 (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3*, const RuntimeMethod*))ObjectPool_1_get_CountInactive_m40351B6BE62E0944A0813C07869822EC0D1E8D26_gshared)(__this, method);
}
inline void List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, Il2CppSharedGenericObject*, const RuntimeMethod*))List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_gshared_inline)(__this, ___0_item, method);
}
inline EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530_gshared)(method);
}
inline void List_1_AddWithResize_mCC24A812DFC30C3DE2230E3C8EE705871C1DFF81 (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, Il2CppSharedGenericObject*, const RuntimeMethod*))List_1_AddWithResize_mCC24A812DFC30C3DE2230E3C8EE705871C1DFF81_gshared)(__this, ___0_item, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 17619
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* TransitionEventsFrameState_GetPooledQueue_m44FC0CE800C800CA3C547D00A6ED8A285A41DEDF (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TransitionEventsFrameState_t757425A175981031151B423E79515EC0BC00EFF7_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TransitionEventsFrameState_t757425A175981031151B423E79515EC0BC00EFF7_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* L_0 = ((TransitionEventsFrameState_t2BA90E4FA6C6D2E561A72ECDB3706772EDD5D881_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___k_EventQueuePool;
		NullCheck(L_0);
		Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_1;
		L_1 = ObjectPool_1_Get_m8FC799C848E73EBFE4A4F06A1313D377851BA515_inline(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 17620
// Method Definition Index: 17621
// Method Definition Index: 17622
// Method Definition Index: 17623
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEventsFrameState_Clear_m5FDF4C5F3F9A04741A2C56EB09D7AAC7260B498F (TransitionEventsFrameState_t2BA90E4FA6C6D2E561A72ECDB3706772EDD5D881* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_Release_m8A03719E6A9D2632DFA4DB41D2D2A0085CF2D6E4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(TransitionEventsFrameState_t757425A175981031151B423E79515EC0BC00EFF7_StaticInit);
	//<source_info:<no-source>:1>
	Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* L_0 = __this->___elementPropertyQueuedEvents;
		NullCheck(L_0);
		Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A L_1;
		L_1 = Dictionary_2_GetEnumerator_m79F6C0EFBDFE88091B6165AE7813EECFDCB9F5CD(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003e:
			{
				Enumerator_Dispose_m3D1FC9044CAA9D8335920EF97BBE267273A0E172((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				goto IL_0033_1;
			}

IL_000e_1:
			{
				KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D L_2;
				L_2 = Enumerator_get_Current_m4686FE5284DF33E6A048D58A52922C41A936E9D2_inline((&V_0), NULL);
				V_1 = L_2;
				Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_3;
				L_3 = KeyValuePair_2_get_Value_m9F58F3918041276FA6F53FEEDC58BB258913E4E6_inline((&V_1), NULL);
				NullCheck(L_3);
				Queue_1_Clear_m91EDB8B4094DA2A63959621F635CD41BAC103C76(L_3, NULL);
				CHECKED_LOCAL_INIT(TransitionEventsFrameState_t757425A175981031151B423E79515EC0BC00EFF7_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
				ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* L_4 = ((TransitionEventsFrameState_t2BA90E4FA6C6D2E561A72ECDB3706772EDD5D881_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___k_EventQueuePool;
				Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_5;
				L_5 = KeyValuePair_2_get_Value_m9F58F3918041276FA6F53FEEDC58BB258913E4E6_inline((&V_1), NULL);
				NullCheck(L_4);
				ObjectPool_1_Release_m8A03719E6A9D2632DFA4DB41D2D2A0085CF2D6E4_inline(L_4, L_5, ObjectPool_1_Release_m8A03719E6A9D2632DFA4DB41D2D2A0085CF2D6E4_RuntimeMethod_var);
			}

IL_0033_1:
			{
				bool L_6;
				L_6 = Enumerator_MoveNext_mEAD61EBD23B77C8C9B2585470D577EB39B9C1140((&V_0), NULL);
				if (L_6)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_004c;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004c:
	{
		Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* L_7 = __this->___elementPropertyQueuedEvents;
		NullCheck(L_7);
		Dictionary_2_Clear_mFEDBE051CC2A493449DD5A24C88038EEEF83AB2E(L_7, NULL);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_8 = __this->___elementPropertyStateDelta;
		NullCheck(L_8);
		Dictionary_2_Clear_mE61E2DE75B4B63899E6E442A841A6958B0A7EAE6(L_8, NULL);
		__this->___panel = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___panel), (void*)(RuntimeObject*)NULL);
		__this->___m_ChangesCount = 0;
		return;
	}
}
// Method Definition Index: 17624
// Method Definition Index: 17625
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEventsFrameState__cctor_mCE344AC8E9B3444D85FA9010D58FC6A36F0FD44E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1__ctor_m3F6706AE99FFF8D495384A6F630A889EC9918060_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_t214A43CC1DE7F5DA69339B1C636F5EBF45EECB33_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_t214A43CC1DE7F5DA69339B1C636F5EBF45EECB33_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t47C5435573FC26774801CF66233F6FD489A68B88* L_0 = ((U3CU3Ec_t47C5435573FC26774801CF66233F6FD489A68B88_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___U3CU3E9;
		Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4* L_1 = (Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4*)il2cpp_codegen_object_new(Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4_il2cpp_TypeInfo_var);
		Func_1__ctor_m6BC48E22E90C329D60F0B200FD9C7B6182B44800(L_1, L_0, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), NULL);
		ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* L_2 = (ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2*)il2cpp_codegen_object_new(ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2_il2cpp_TypeInfo_var);
		ObjectPool_1__ctor_m3F6706AE99FFF8D495384A6F630A889EC9918060(L_2, L_1, (Action_1_tAAE2A43B6C8B488C8EBD92AF56C2D4329018A227*)NULL, (Action_1_tAAE2A43B6C8B488C8EBD92AF56C2D4329018A227*)NULL, (Action_1_tAAE2A43B6C8B488C8EBD92AF56C2D4329018A227*)NULL, (bool)1, ((int32_t)10), ((int32_t)10000), ObjectPool_1__ctor_m3F6706AE99FFF8D495384A6F630A889EC9918060_RuntimeMethod_var);
		((TransitionEventsFrameState_t2BA90E4FA6C6D2E561A72ECDB3706772EDD5D881_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___k_EventQueuePool = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((TransitionEventsFrameState_t2BA90E4FA6C6D2E561A72ECDB3706772EDD5D881_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___k_EventQueuePool), (void*)L_2);
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
// Method Definition Index: 17619
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* TransitionEventsFrameState_GetPooledQueue_mDD58BDF8A904240C65B20F85CA19D541A4959E5F (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TransitionEventsFrameState_t757425A175981031151B423E79515EC0BC00EFF7_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TransitionEventsFrameState_t757425A175981031151B423E79515EC0BC00EFF7_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* L_0 = ((TransitionEventsFrameState_tC8FEB488506DC99B874A454BED371793598879E9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___k_EventQueuePool;
		NullCheck(L_0);
		Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_1;
		L_1 = ObjectPool_1_Get_m8FC799C848E73EBFE4A4F06A1313D377851BA515_inline(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 17620
// Method Definition Index: 17621
// Method Definition Index: 17622
// Method Definition Index: 17623
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEventsFrameState_Clear_m653A569BA043249D7FD13944E49779309A2BB17B (TransitionEventsFrameState_tC8FEB488506DC99B874A454BED371793598879E9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_Release_m8A03719E6A9D2632DFA4DB41D2D2A0085CF2D6E4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(TransitionEventsFrameState_t757425A175981031151B423E79515EC0BC00EFF7_StaticInit);
	//<source_info:<no-source>:1>
	Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* L_0 = __this->___elementPropertyQueuedEvents;
		NullCheck(L_0);
		Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A L_1;
		L_1 = Dictionary_2_GetEnumerator_m79F6C0EFBDFE88091B6165AE7813EECFDCB9F5CD(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003e:
			{
				Enumerator_Dispose_m3D1FC9044CAA9D8335920EF97BBE267273A0E172((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				goto IL_0033_1;
			}

IL_000e_1:
			{
				KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D L_2;
				L_2 = Enumerator_get_Current_m4686FE5284DF33E6A048D58A52922C41A936E9D2_inline((&V_0), NULL);
				V_1 = L_2;
				Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_3;
				L_3 = KeyValuePair_2_get_Value_m9F58F3918041276FA6F53FEEDC58BB258913E4E6_inline((&V_1), NULL);
				NullCheck(L_3);
				Queue_1_Clear_m91EDB8B4094DA2A63959621F635CD41BAC103C76(L_3, NULL);
				CHECKED_LOCAL_INIT(TransitionEventsFrameState_t757425A175981031151B423E79515EC0BC00EFF7_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
				ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* L_4 = ((TransitionEventsFrameState_tC8FEB488506DC99B874A454BED371793598879E9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___k_EventQueuePool;
				Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_5;
				L_5 = KeyValuePair_2_get_Value_m9F58F3918041276FA6F53FEEDC58BB258913E4E6_inline((&V_1), NULL);
				NullCheck(L_4);
				ObjectPool_1_Release_m8A03719E6A9D2632DFA4DB41D2D2A0085CF2D6E4_inline(L_4, L_5, ObjectPool_1_Release_m8A03719E6A9D2632DFA4DB41D2D2A0085CF2D6E4_RuntimeMethod_var);
			}

IL_0033_1:
			{
				bool L_6;
				L_6 = Enumerator_MoveNext_mEAD61EBD23B77C8C9B2585470D577EB39B9C1140((&V_0), NULL);
				if (L_6)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_004c;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004c:
	{
		Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* L_7 = __this->___elementPropertyQueuedEvents;
		NullCheck(L_7);
		Dictionary_2_Clear_mFEDBE051CC2A493449DD5A24C88038EEEF83AB2E(L_7, NULL);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_8 = __this->___elementPropertyStateDelta;
		NullCheck(L_8);
		Dictionary_2_Clear_mE61E2DE75B4B63899E6E442A841A6958B0A7EAE6(L_8, NULL);
		__this->___panel = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___panel), (void*)(RuntimeObject*)NULL);
		__this->___m_ChangesCount = 0;
		return;
	}
}
// Method Definition Index: 17624
// Method Definition Index: 17625
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEventsFrameState__cctor_m1C3D121E65CFC4D59B647CC9E90503FBA5E4D108 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1__ctor_m3F6706AE99FFF8D495384A6F630A889EC9918060_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_t214A43CC1DE7F5DA69339B1C636F5EBF45EECB33_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_t214A43CC1DE7F5DA69339B1C636F5EBF45EECB33_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_tB49B7742FFA15FC3176D4EBF02F5CF3F3615971A* L_0 = ((U3CU3Ec_tB49B7742FFA15FC3176D4EBF02F5CF3F3615971A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___U3CU3E9;
		Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4* L_1 = (Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4*)il2cpp_codegen_object_new(Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4_il2cpp_TypeInfo_var);
		Func_1__ctor_m6BC48E22E90C329D60F0B200FD9C7B6182B44800(L_1, L_0, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), NULL);
		ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* L_2 = (ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2*)il2cpp_codegen_object_new(ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2_il2cpp_TypeInfo_var);
		ObjectPool_1__ctor_m3F6706AE99FFF8D495384A6F630A889EC9918060(L_2, L_1, (Action_1_tAAE2A43B6C8B488C8EBD92AF56C2D4329018A227*)NULL, (Action_1_tAAE2A43B6C8B488C8EBD92AF56C2D4329018A227*)NULL, (Action_1_tAAE2A43B6C8B488C8EBD92AF56C2D4329018A227*)NULL, (bool)1, ((int32_t)10), ((int32_t)10000), ObjectPool_1__ctor_m3F6706AE99FFF8D495384A6F630A889EC9918060_RuntimeMethod_var);
		((TransitionEventsFrameState_tC8FEB488506DC99B874A454BED371793598879E9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___k_EventQueuePool = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((TransitionEventsFrameState_tC8FEB488506DC99B874A454BED371793598879E9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___k_EventQueuePool), (void*)L_2);
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
// Method Definition Index: 17619
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* TransitionEventsFrameState_GetPooledQueue_mD022060536B79BB579E5F9B0F4E9D19489897A23 (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TransitionEventsFrameState_t757425A175981031151B423E79515EC0BC00EFF7_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TransitionEventsFrameState_t757425A175981031151B423E79515EC0BC00EFF7_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* L_0 = ((TransitionEventsFrameState_tFBFEC4A6BE1900A8D6115CD438F3CCC15A0DBCE9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___k_EventQueuePool;
		NullCheck(L_0);
		Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_1;
		L_1 = ObjectPool_1_Get_m8FC799C848E73EBFE4A4F06A1313D377851BA515_inline(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 17620
// Method Definition Index: 17621
// Method Definition Index: 17622
// Method Definition Index: 17623
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEventsFrameState_Clear_m55F6B1DFD6584E3C57CFF26F62748D61482C2E6E (TransitionEventsFrameState_tFBFEC4A6BE1900A8D6115CD438F3CCC15A0DBCE9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_Release_m8A03719E6A9D2632DFA4DB41D2D2A0085CF2D6E4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(TransitionEventsFrameState_t757425A175981031151B423E79515EC0BC00EFF7_StaticInit);
	//<source_info:<no-source>:1>
	Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* L_0 = __this->___elementPropertyQueuedEvents;
		NullCheck(L_0);
		Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A L_1;
		L_1 = Dictionary_2_GetEnumerator_m79F6C0EFBDFE88091B6165AE7813EECFDCB9F5CD(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003e:
			{
				Enumerator_Dispose_m3D1FC9044CAA9D8335920EF97BBE267273A0E172((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				goto IL_0033_1;
			}

IL_000e_1:
			{
				KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D L_2;
				L_2 = Enumerator_get_Current_m4686FE5284DF33E6A048D58A52922C41A936E9D2_inline((&V_0), NULL);
				V_1 = L_2;
				Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_3;
				L_3 = KeyValuePair_2_get_Value_m9F58F3918041276FA6F53FEEDC58BB258913E4E6_inline((&V_1), NULL);
				NullCheck(L_3);
				Queue_1_Clear_m91EDB8B4094DA2A63959621F635CD41BAC103C76(L_3, NULL);
				CHECKED_LOCAL_INIT(TransitionEventsFrameState_t757425A175981031151B423E79515EC0BC00EFF7_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
				ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* L_4 = ((TransitionEventsFrameState_tFBFEC4A6BE1900A8D6115CD438F3CCC15A0DBCE9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___k_EventQueuePool;
				Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_5;
				L_5 = KeyValuePair_2_get_Value_m9F58F3918041276FA6F53FEEDC58BB258913E4E6_inline((&V_1), NULL);
				NullCheck(L_4);
				ObjectPool_1_Release_m8A03719E6A9D2632DFA4DB41D2D2A0085CF2D6E4_inline(L_4, L_5, ObjectPool_1_Release_m8A03719E6A9D2632DFA4DB41D2D2A0085CF2D6E4_RuntimeMethod_var);
			}

IL_0033_1:
			{
				bool L_6;
				L_6 = Enumerator_MoveNext_mEAD61EBD23B77C8C9B2585470D577EB39B9C1140((&V_0), NULL);
				if (L_6)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_004c;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004c:
	{
		Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* L_7 = __this->___elementPropertyQueuedEvents;
		NullCheck(L_7);
		Dictionary_2_Clear_mFEDBE051CC2A493449DD5A24C88038EEEF83AB2E(L_7, NULL);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_8 = __this->___elementPropertyStateDelta;
		NullCheck(L_8);
		Dictionary_2_Clear_mE61E2DE75B4B63899E6E442A841A6958B0A7EAE6(L_8, NULL);
		__this->___panel = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___panel), (void*)(RuntimeObject*)NULL);
		__this->___m_ChangesCount = 0;
		return;
	}
}
// Method Definition Index: 17624
// Method Definition Index: 17625
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEventsFrameState__cctor_m8C1937BB7CAAF0E0EC833BE31715A8F9908FFE61 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1__ctor_m3F6706AE99FFF8D495384A6F630A889EC9918060_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_t214A43CC1DE7F5DA69339B1C636F5EBF45EECB33_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_t214A43CC1DE7F5DA69339B1C636F5EBF45EECB33_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t693CB4342A2EAB24AFF73D94D9CC66B90E6BC00A* L_0 = ((U3CU3Ec_t693CB4342A2EAB24AFF73D94D9CC66B90E6BC00A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___U3CU3E9;
		Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4* L_1 = (Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4*)il2cpp_codegen_object_new(Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4_il2cpp_TypeInfo_var);
		Func_1__ctor_m6BC48E22E90C329D60F0B200FD9C7B6182B44800(L_1, L_0, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), NULL);
		ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* L_2 = (ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2*)il2cpp_codegen_object_new(ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2_il2cpp_TypeInfo_var);
		ObjectPool_1__ctor_m3F6706AE99FFF8D495384A6F630A889EC9918060(L_2, L_1, (Action_1_tAAE2A43B6C8B488C8EBD92AF56C2D4329018A227*)NULL, (Action_1_tAAE2A43B6C8B488C8EBD92AF56C2D4329018A227*)NULL, (Action_1_tAAE2A43B6C8B488C8EBD92AF56C2D4329018A227*)NULL, (bool)1, ((int32_t)10), ((int32_t)10000), ObjectPool_1__ctor_m3F6706AE99FFF8D495384A6F630A889EC9918060_RuntimeMethod_var);
		((TransitionEventsFrameState_tFBFEC4A6BE1900A8D6115CD438F3CCC15A0DBCE9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___k_EventQueuePool = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((TransitionEventsFrameState_tFBFEC4A6BE1900A8D6115CD438F3CCC15A0DBCE9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___k_EventQueuePool), (void*)L_2);
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
// Method Definition Index: 17619
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* TransitionEventsFrameState_GetPooledQueue_mC9715E89ED37C4F84AF00D42C419851440C0357A (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TransitionEventsFrameState_t757425A175981031151B423E79515EC0BC00EFF7_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TransitionEventsFrameState_t757425A175981031151B423E79515EC0BC00EFF7_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* L_0 = ((TransitionEventsFrameState_t79437953855E2A5F706435B92B95B4742EA44B4F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___k_EventQueuePool;
		NullCheck(L_0);
		Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_1;
		L_1 = ObjectPool_1_Get_m8FC799C848E73EBFE4A4F06A1313D377851BA515_inline(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 17620
// Method Definition Index: 17621
// Method Definition Index: 17622
// Method Definition Index: 17623
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEventsFrameState_Clear_m8284C51C347678837DCECD85608CE3E9CAA43C21 (TransitionEventsFrameState_t79437953855E2A5F706435B92B95B4742EA44B4F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_Release_m8A03719E6A9D2632DFA4DB41D2D2A0085CF2D6E4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(TransitionEventsFrameState_t757425A175981031151B423E79515EC0BC00EFF7_StaticInit);
	//<source_info:<no-source>:1>
	Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* L_0 = __this->___elementPropertyQueuedEvents;
		NullCheck(L_0);
		Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A L_1;
		L_1 = Dictionary_2_GetEnumerator_m79F6C0EFBDFE88091B6165AE7813EECFDCB9F5CD(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003e:
			{
				Enumerator_Dispose_m3D1FC9044CAA9D8335920EF97BBE267273A0E172((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				goto IL_0033_1;
			}

IL_000e_1:
			{
				KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D L_2;
				L_2 = Enumerator_get_Current_m4686FE5284DF33E6A048D58A52922C41A936E9D2_inline((&V_0), NULL);
				V_1 = L_2;
				Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_3;
				L_3 = KeyValuePair_2_get_Value_m9F58F3918041276FA6F53FEEDC58BB258913E4E6_inline((&V_1), NULL);
				NullCheck(L_3);
				Queue_1_Clear_m91EDB8B4094DA2A63959621F635CD41BAC103C76(L_3, NULL);
				CHECKED_LOCAL_INIT(TransitionEventsFrameState_t757425A175981031151B423E79515EC0BC00EFF7_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
				ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* L_4 = ((TransitionEventsFrameState_t79437953855E2A5F706435B92B95B4742EA44B4F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___k_EventQueuePool;
				Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_5;
				L_5 = KeyValuePair_2_get_Value_m9F58F3918041276FA6F53FEEDC58BB258913E4E6_inline((&V_1), NULL);
				NullCheck(L_4);
				ObjectPool_1_Release_m8A03719E6A9D2632DFA4DB41D2D2A0085CF2D6E4_inline(L_4, L_5, ObjectPool_1_Release_m8A03719E6A9D2632DFA4DB41D2D2A0085CF2D6E4_RuntimeMethod_var);
			}

IL_0033_1:
			{
				bool L_6;
				L_6 = Enumerator_MoveNext_mEAD61EBD23B77C8C9B2585470D577EB39B9C1140((&V_0), NULL);
				if (L_6)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_004c;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004c:
	{
		Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* L_7 = __this->___elementPropertyQueuedEvents;
		NullCheck(L_7);
		Dictionary_2_Clear_mFEDBE051CC2A493449DD5A24C88038EEEF83AB2E(L_7, NULL);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_8 = __this->___elementPropertyStateDelta;
		NullCheck(L_8);
		Dictionary_2_Clear_mE61E2DE75B4B63899E6E442A841A6958B0A7EAE6(L_8, NULL);
		__this->___panel = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___panel), (void*)(RuntimeObject*)NULL);
		__this->___m_ChangesCount = 0;
		return;
	}
}
// Method Definition Index: 17624
// Method Definition Index: 17625
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEventsFrameState__cctor_m230BE285B4C8EFE43BA5C2FF2EC8C9DF12E1FB9F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1__ctor_m3F6706AE99FFF8D495384A6F630A889EC9918060_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_t214A43CC1DE7F5DA69339B1C636F5EBF45EECB33_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_t214A43CC1DE7F5DA69339B1C636F5EBF45EECB33_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_tFDB718E9F889F46D0872CB24F95B25941CDE4B32* L_0 = ((U3CU3Ec_tFDB718E9F889F46D0872CB24F95B25941CDE4B32_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___U3CU3E9;
		Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4* L_1 = (Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4*)il2cpp_codegen_object_new(Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4_il2cpp_TypeInfo_var);
		Func_1__ctor_m6BC48E22E90C329D60F0B200FD9C7B6182B44800(L_1, L_0, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), NULL);
		ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* L_2 = (ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2*)il2cpp_codegen_object_new(ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2_il2cpp_TypeInfo_var);
		ObjectPool_1__ctor_m3F6706AE99FFF8D495384A6F630A889EC9918060(L_2, L_1, (Action_1_tAAE2A43B6C8B488C8EBD92AF56C2D4329018A227*)NULL, (Action_1_tAAE2A43B6C8B488C8EBD92AF56C2D4329018A227*)NULL, (Action_1_tAAE2A43B6C8B488C8EBD92AF56C2D4329018A227*)NULL, (bool)1, ((int32_t)10), ((int32_t)10000), ObjectPool_1__ctor_m3F6706AE99FFF8D495384A6F630A889EC9918060_RuntimeMethod_var);
		((TransitionEventsFrameState_t79437953855E2A5F706435B92B95B4742EA44B4F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___k_EventQueuePool = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((TransitionEventsFrameState_t79437953855E2A5F706435B92B95B4742EA44B4F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___k_EventQueuePool), (void*)L_2);
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
// Method Definition Index: 17619
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* TransitionEventsFrameState_GetPooledQueue_m9F74C2E0F15E2D05940DB3F705EC881074D8CC3F (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TransitionEventsFrameState_t757425A175981031151B423E79515EC0BC00EFF7_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TransitionEventsFrameState_t757425A175981031151B423E79515EC0BC00EFF7_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* L_0 = ((TransitionEventsFrameState_tC00A8234FEB122E10B4F583D3A620DA47BBF5D71_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___k_EventQueuePool;
		NullCheck(L_0);
		Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_1;
		L_1 = ObjectPool_1_Get_m8FC799C848E73EBFE4A4F06A1313D377851BA515_inline(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 17620
// Method Definition Index: 17621
// Method Definition Index: 17622
// Method Definition Index: 17623
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEventsFrameState_Clear_m5EF2170421E1738330F06991F7D64C049C8F8153 (TransitionEventsFrameState_tC00A8234FEB122E10B4F583D3A620DA47BBF5D71* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_Release_m8A03719E6A9D2632DFA4DB41D2D2A0085CF2D6E4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(TransitionEventsFrameState_t757425A175981031151B423E79515EC0BC00EFF7_StaticInit);
	//<source_info:<no-source>:1>
	Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* L_0 = __this->___elementPropertyQueuedEvents;
		NullCheck(L_0);
		Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A L_1;
		L_1 = Dictionary_2_GetEnumerator_m79F6C0EFBDFE88091B6165AE7813EECFDCB9F5CD(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003e:
			{
				Enumerator_Dispose_m3D1FC9044CAA9D8335920EF97BBE267273A0E172((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				goto IL_0033_1;
			}

IL_000e_1:
			{
				KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D L_2;
				L_2 = Enumerator_get_Current_m4686FE5284DF33E6A048D58A52922C41A936E9D2_inline((&V_0), NULL);
				V_1 = L_2;
				Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_3;
				L_3 = KeyValuePair_2_get_Value_m9F58F3918041276FA6F53FEEDC58BB258913E4E6_inline((&V_1), NULL);
				NullCheck(L_3);
				Queue_1_Clear_m91EDB8B4094DA2A63959621F635CD41BAC103C76(L_3, NULL);
				CHECKED_LOCAL_INIT(TransitionEventsFrameState_t757425A175981031151B423E79515EC0BC00EFF7_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
				ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* L_4 = ((TransitionEventsFrameState_tC00A8234FEB122E10B4F583D3A620DA47BBF5D71_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___k_EventQueuePool;
				Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_5;
				L_5 = KeyValuePair_2_get_Value_m9F58F3918041276FA6F53FEEDC58BB258913E4E6_inline((&V_1), NULL);
				NullCheck(L_4);
				ObjectPool_1_Release_m8A03719E6A9D2632DFA4DB41D2D2A0085CF2D6E4_inline(L_4, L_5, ObjectPool_1_Release_m8A03719E6A9D2632DFA4DB41D2D2A0085CF2D6E4_RuntimeMethod_var);
			}

IL_0033_1:
			{
				bool L_6;
				L_6 = Enumerator_MoveNext_mEAD61EBD23B77C8C9B2585470D577EB39B9C1140((&V_0), NULL);
				if (L_6)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_004c;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004c:
	{
		Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* L_7 = __this->___elementPropertyQueuedEvents;
		NullCheck(L_7);
		Dictionary_2_Clear_mFEDBE051CC2A493449DD5A24C88038EEEF83AB2E(L_7, NULL);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_8 = __this->___elementPropertyStateDelta;
		NullCheck(L_8);
		Dictionary_2_Clear_mE61E2DE75B4B63899E6E442A841A6958B0A7EAE6(L_8, NULL);
		__this->___panel = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___panel), (void*)(RuntimeObject*)NULL);
		__this->___m_ChangesCount = 0;
		return;
	}
}
// Method Definition Index: 17624
// Method Definition Index: 17625
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEventsFrameState__cctor_m2B3299CA3F46CCE9FAFE8F093E77F0162318D0B4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1__ctor_m3F6706AE99FFF8D495384A6F630A889EC9918060_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_t214A43CC1DE7F5DA69339B1C636F5EBF45EECB33_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_t214A43CC1DE7F5DA69339B1C636F5EBF45EECB33_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_tCBD2F8AF1FDB9B38F9382C2FF4379AD902996EEF* L_0 = ((U3CU3Ec_tCBD2F8AF1FDB9B38F9382C2FF4379AD902996EEF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___U3CU3E9;
		Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4* L_1 = (Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4*)il2cpp_codegen_object_new(Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4_il2cpp_TypeInfo_var);
		Func_1__ctor_m6BC48E22E90C329D60F0B200FD9C7B6182B44800(L_1, L_0, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), NULL);
		ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* L_2 = (ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2*)il2cpp_codegen_object_new(ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2_il2cpp_TypeInfo_var);
		ObjectPool_1__ctor_m3F6706AE99FFF8D495384A6F630A889EC9918060(L_2, L_1, (Action_1_tAAE2A43B6C8B488C8EBD92AF56C2D4329018A227*)NULL, (Action_1_tAAE2A43B6C8B488C8EBD92AF56C2D4329018A227*)NULL, (Action_1_tAAE2A43B6C8B488C8EBD92AF56C2D4329018A227*)NULL, (bool)1, ((int32_t)10), ((int32_t)10000), ObjectPool_1__ctor_m3F6706AE99FFF8D495384A6F630A889EC9918060_RuntimeMethod_var);
		((TransitionEventsFrameState_tC00A8234FEB122E10B4F583D3A620DA47BBF5D71_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___k_EventQueuePool = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((TransitionEventsFrameState_tC00A8234FEB122E10B4F583D3A620DA47BBF5D71_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___k_EventQueuePool), (void*)L_2);
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
// Method Definition Index: 17619
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* TransitionEventsFrameState_GetPooledQueue_m62C90E8C750769A827CC6378ACDBB0E6C2D28430 (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TransitionEventsFrameState_t757425A175981031151B423E79515EC0BC00EFF7_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TransitionEventsFrameState_t757425A175981031151B423E79515EC0BC00EFF7_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* L_0 = ((TransitionEventsFrameState_t9DC16C7535A4271EA0FD763A64CD7CF84670EC64_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___k_EventQueuePool;
		NullCheck(L_0);
		Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_1;
		L_1 = ObjectPool_1_Get_m8FC799C848E73EBFE4A4F06A1313D377851BA515_inline(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 17620
// Method Definition Index: 17621
// Method Definition Index: 17622
// Method Definition Index: 17623
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEventsFrameState_Clear_m3E9BBD967C0868426FA59D821D140AF4CE76CC1B (TransitionEventsFrameState_t9DC16C7535A4271EA0FD763A64CD7CF84670EC64* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_Release_m8A03719E6A9D2632DFA4DB41D2D2A0085CF2D6E4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(TransitionEventsFrameState_t757425A175981031151B423E79515EC0BC00EFF7_StaticInit);
	//<source_info:<no-source>:1>
	Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* L_0 = __this->___elementPropertyQueuedEvents;
		NullCheck(L_0);
		Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A L_1;
		L_1 = Dictionary_2_GetEnumerator_m79F6C0EFBDFE88091B6165AE7813EECFDCB9F5CD(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003e:
			{
				Enumerator_Dispose_m3D1FC9044CAA9D8335920EF97BBE267273A0E172((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				goto IL_0033_1;
			}

IL_000e_1:
			{
				KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D L_2;
				L_2 = Enumerator_get_Current_m4686FE5284DF33E6A048D58A52922C41A936E9D2_inline((&V_0), NULL);
				V_1 = L_2;
				Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_3;
				L_3 = KeyValuePair_2_get_Value_m9F58F3918041276FA6F53FEEDC58BB258913E4E6_inline((&V_1), NULL);
				NullCheck(L_3);
				Queue_1_Clear_m91EDB8B4094DA2A63959621F635CD41BAC103C76(L_3, NULL);
				CHECKED_LOCAL_INIT(TransitionEventsFrameState_t757425A175981031151B423E79515EC0BC00EFF7_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
				ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* L_4 = ((TransitionEventsFrameState_t9DC16C7535A4271EA0FD763A64CD7CF84670EC64_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___k_EventQueuePool;
				Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_5;
				L_5 = KeyValuePair_2_get_Value_m9F58F3918041276FA6F53FEEDC58BB258913E4E6_inline((&V_1), NULL);
				NullCheck(L_4);
				ObjectPool_1_Release_m8A03719E6A9D2632DFA4DB41D2D2A0085CF2D6E4_inline(L_4, L_5, ObjectPool_1_Release_m8A03719E6A9D2632DFA4DB41D2D2A0085CF2D6E4_RuntimeMethod_var);
			}

IL_0033_1:
			{
				bool L_6;
				L_6 = Enumerator_MoveNext_mEAD61EBD23B77C8C9B2585470D577EB39B9C1140((&V_0), NULL);
				if (L_6)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_004c;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004c:
	{
		Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* L_7 = __this->___elementPropertyQueuedEvents;
		NullCheck(L_7);
		Dictionary_2_Clear_mFEDBE051CC2A493449DD5A24C88038EEEF83AB2E(L_7, NULL);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_8 = __this->___elementPropertyStateDelta;
		NullCheck(L_8);
		Dictionary_2_Clear_mE61E2DE75B4B63899E6E442A841A6958B0A7EAE6(L_8, NULL);
		__this->___panel = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___panel), (void*)(RuntimeObject*)NULL);
		__this->___m_ChangesCount = 0;
		return;
	}
}
// Method Definition Index: 17624
// Method Definition Index: 17625
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEventsFrameState__cctor_m5776A5D7E78FEF2103F6DCE21F609AB231ED2C4A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1__ctor_m3F6706AE99FFF8D495384A6F630A889EC9918060_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_t214A43CC1DE7F5DA69339B1C636F5EBF45EECB33_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_t214A43CC1DE7F5DA69339B1C636F5EBF45EECB33_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t830ABE694C134FC98FDAB5669835E188003F5498* L_0 = ((U3CU3Ec_t830ABE694C134FC98FDAB5669835E188003F5498_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___U3CU3E9;
		Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4* L_1 = (Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4*)il2cpp_codegen_object_new(Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4_il2cpp_TypeInfo_var);
		Func_1__ctor_m6BC48E22E90C329D60F0B200FD9C7B6182B44800(L_1, L_0, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), NULL);
		ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* L_2 = (ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2*)il2cpp_codegen_object_new(ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2_il2cpp_TypeInfo_var);
		ObjectPool_1__ctor_m3F6706AE99FFF8D495384A6F630A889EC9918060(L_2, L_1, (Action_1_tAAE2A43B6C8B488C8EBD92AF56C2D4329018A227*)NULL, (Action_1_tAAE2A43B6C8B488C8EBD92AF56C2D4329018A227*)NULL, (Action_1_tAAE2A43B6C8B488C8EBD92AF56C2D4329018A227*)NULL, (bool)1, ((int32_t)10), ((int32_t)10000), ObjectPool_1__ctor_m3F6706AE99FFF8D495384A6F630A889EC9918060_RuntimeMethod_var);
		((TransitionEventsFrameState_t9DC16C7535A4271EA0FD763A64CD7CF84670EC64_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___k_EventQueuePool = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((TransitionEventsFrameState_t9DC16C7535A4271EA0FD763A64CD7CF84670EC64_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___k_EventQueuePool), (void*)L_2);
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
// Method Definition Index: 17619
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* TransitionEventsFrameState_GetPooledQueue_mEC778ED7070AF43C99953834EB538DD15D61E0DB (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TransitionEventsFrameState_t757425A175981031151B423E79515EC0BC00EFF7_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TransitionEventsFrameState_t757425A175981031151B423E79515EC0BC00EFF7_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* L_0 = ((TransitionEventsFrameState_t25D5D3420391A40A0B978B0D5CA13F775283274E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___k_EventQueuePool;
		NullCheck(L_0);
		Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_1;
		L_1 = ObjectPool_1_Get_m8FC799C848E73EBFE4A4F06A1313D377851BA515_inline(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 17620
// Method Definition Index: 17621
// Method Definition Index: 17622
// Method Definition Index: 17623
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEventsFrameState_Clear_mC878BB5FB8D8139DFAC1C80CA1328C20E5BAC5C7 (TransitionEventsFrameState_t25D5D3420391A40A0B978B0D5CA13F775283274E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_Release_m8A03719E6A9D2632DFA4DB41D2D2A0085CF2D6E4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(TransitionEventsFrameState_t757425A175981031151B423E79515EC0BC00EFF7_StaticInit);
	//<source_info:<no-source>:1>
	Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* L_0 = __this->___elementPropertyQueuedEvents;
		NullCheck(L_0);
		Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A L_1;
		L_1 = Dictionary_2_GetEnumerator_m79F6C0EFBDFE88091B6165AE7813EECFDCB9F5CD(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003e:
			{
				Enumerator_Dispose_m3D1FC9044CAA9D8335920EF97BBE267273A0E172((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				goto IL_0033_1;
			}

IL_000e_1:
			{
				KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D L_2;
				L_2 = Enumerator_get_Current_m4686FE5284DF33E6A048D58A52922C41A936E9D2_inline((&V_0), NULL);
				V_1 = L_2;
				Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_3;
				L_3 = KeyValuePair_2_get_Value_m9F58F3918041276FA6F53FEEDC58BB258913E4E6_inline((&V_1), NULL);
				NullCheck(L_3);
				Queue_1_Clear_m91EDB8B4094DA2A63959621F635CD41BAC103C76(L_3, NULL);
				CHECKED_LOCAL_INIT(TransitionEventsFrameState_t757425A175981031151B423E79515EC0BC00EFF7_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
				ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* L_4 = ((TransitionEventsFrameState_t25D5D3420391A40A0B978B0D5CA13F775283274E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___k_EventQueuePool;
				Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_5;
				L_5 = KeyValuePair_2_get_Value_m9F58F3918041276FA6F53FEEDC58BB258913E4E6_inline((&V_1), NULL);
				NullCheck(L_4);
				ObjectPool_1_Release_m8A03719E6A9D2632DFA4DB41D2D2A0085CF2D6E4_inline(L_4, L_5, ObjectPool_1_Release_m8A03719E6A9D2632DFA4DB41D2D2A0085CF2D6E4_RuntimeMethod_var);
			}

IL_0033_1:
			{
				bool L_6;
				L_6 = Enumerator_MoveNext_mEAD61EBD23B77C8C9B2585470D577EB39B9C1140((&V_0), NULL);
				if (L_6)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_004c;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004c:
	{
		Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* L_7 = __this->___elementPropertyQueuedEvents;
		NullCheck(L_7);
		Dictionary_2_Clear_mFEDBE051CC2A493449DD5A24C88038EEEF83AB2E(L_7, NULL);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_8 = __this->___elementPropertyStateDelta;
		NullCheck(L_8);
		Dictionary_2_Clear_mE61E2DE75B4B63899E6E442A841A6958B0A7EAE6(L_8, NULL);
		__this->___panel = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___panel), (void*)(RuntimeObject*)NULL);
		__this->___m_ChangesCount = 0;
		return;
	}
}
// Method Definition Index: 17624
// Method Definition Index: 17625
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEventsFrameState__cctor_m00B41763268C66CB2D3495FD272DE14554C55CC4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1__ctor_m3F6706AE99FFF8D495384A6F630A889EC9918060_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_t214A43CC1DE7F5DA69339B1C636F5EBF45EECB33_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_t214A43CC1DE7F5DA69339B1C636F5EBF45EECB33_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t64793DE671E73EDC94413D15745654BD15ACF206* L_0 = ((U3CU3Ec_t64793DE671E73EDC94413D15745654BD15ACF206_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___U3CU3E9;
		Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4* L_1 = (Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4*)il2cpp_codegen_object_new(Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4_il2cpp_TypeInfo_var);
		Func_1__ctor_m6BC48E22E90C329D60F0B200FD9C7B6182B44800(L_1, L_0, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), NULL);
		ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* L_2 = (ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2*)il2cpp_codegen_object_new(ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2_il2cpp_TypeInfo_var);
		ObjectPool_1__ctor_m3F6706AE99FFF8D495384A6F630A889EC9918060(L_2, L_1, (Action_1_tAAE2A43B6C8B488C8EBD92AF56C2D4329018A227*)NULL, (Action_1_tAAE2A43B6C8B488C8EBD92AF56C2D4329018A227*)NULL, (Action_1_tAAE2A43B6C8B488C8EBD92AF56C2D4329018A227*)NULL, (bool)1, ((int32_t)10), ((int32_t)10000), ObjectPool_1__ctor_m3F6706AE99FFF8D495384A6F630A889EC9918060_RuntimeMethod_var);
		((TransitionEventsFrameState_t25D5D3420391A40A0B978B0D5CA13F775283274E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___k_EventQueuePool = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((TransitionEventsFrameState_t25D5D3420391A40A0B978B0D5CA13F775283274E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___k_EventQueuePool), (void*)L_2);
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
// Method Definition Index: 17619
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* TransitionEventsFrameState_GetPooledQueue_m2E7F78962B72CB514D699B0AE375F3C3B94298F8 (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TransitionEventsFrameState_t757425A175981031151B423E79515EC0BC00EFF7_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TransitionEventsFrameState_t757425A175981031151B423E79515EC0BC00EFF7_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* L_0 = ((TransitionEventsFrameState_t864A52D0F7726A4F4C2C667BCB56E8A745F7340C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___k_EventQueuePool;
		NullCheck(L_0);
		Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_1;
		L_1 = ObjectPool_1_Get_m8FC799C848E73EBFE4A4F06A1313D377851BA515_inline(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 17620
// Method Definition Index: 17621
// Method Definition Index: 17622
// Method Definition Index: 17623
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEventsFrameState_Clear_mE0F1125E512E554B47F68E2A6951E3E0A6E7FD83 (TransitionEventsFrameState_t864A52D0F7726A4F4C2C667BCB56E8A745F7340C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_Release_m8A03719E6A9D2632DFA4DB41D2D2A0085CF2D6E4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(TransitionEventsFrameState_t757425A175981031151B423E79515EC0BC00EFF7_StaticInit);
	//<source_info:<no-source>:1>
	Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* L_0 = __this->___elementPropertyQueuedEvents;
		NullCheck(L_0);
		Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A L_1;
		L_1 = Dictionary_2_GetEnumerator_m79F6C0EFBDFE88091B6165AE7813EECFDCB9F5CD(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003e:
			{
				Enumerator_Dispose_m3D1FC9044CAA9D8335920EF97BBE267273A0E172((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				goto IL_0033_1;
			}

IL_000e_1:
			{
				KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D L_2;
				L_2 = Enumerator_get_Current_m4686FE5284DF33E6A048D58A52922C41A936E9D2_inline((&V_0), NULL);
				V_1 = L_2;
				Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_3;
				L_3 = KeyValuePair_2_get_Value_m9F58F3918041276FA6F53FEEDC58BB258913E4E6_inline((&V_1), NULL);
				NullCheck(L_3);
				Queue_1_Clear_m91EDB8B4094DA2A63959621F635CD41BAC103C76(L_3, NULL);
				CHECKED_LOCAL_INIT(TransitionEventsFrameState_t757425A175981031151B423E79515EC0BC00EFF7_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
				ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* L_4 = ((TransitionEventsFrameState_t864A52D0F7726A4F4C2C667BCB56E8A745F7340C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___k_EventQueuePool;
				Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_5;
				L_5 = KeyValuePair_2_get_Value_m9F58F3918041276FA6F53FEEDC58BB258913E4E6_inline((&V_1), NULL);
				NullCheck(L_4);
				ObjectPool_1_Release_m8A03719E6A9D2632DFA4DB41D2D2A0085CF2D6E4_inline(L_4, L_5, ObjectPool_1_Release_m8A03719E6A9D2632DFA4DB41D2D2A0085CF2D6E4_RuntimeMethod_var);
			}

IL_0033_1:
			{
				bool L_6;
				L_6 = Enumerator_MoveNext_mEAD61EBD23B77C8C9B2585470D577EB39B9C1140((&V_0), NULL);
				if (L_6)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_004c;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004c:
	{
		Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* L_7 = __this->___elementPropertyQueuedEvents;
		NullCheck(L_7);
		Dictionary_2_Clear_mFEDBE051CC2A493449DD5A24C88038EEEF83AB2E(L_7, NULL);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_8 = __this->___elementPropertyStateDelta;
		NullCheck(L_8);
		Dictionary_2_Clear_mE61E2DE75B4B63899E6E442A841A6958B0A7EAE6(L_8, NULL);
		__this->___panel = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___panel), (void*)(RuntimeObject*)NULL);
		__this->___m_ChangesCount = 0;
		return;
	}
}
// Method Definition Index: 17624
// Method Definition Index: 17625
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEventsFrameState__cctor_m340B3A0AA3EF02B8E428338530F9EED225C2F6CD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1__ctor_m3F6706AE99FFF8D495384A6F630A889EC9918060_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_t214A43CC1DE7F5DA69339B1C636F5EBF45EECB33_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_t214A43CC1DE7F5DA69339B1C636F5EBF45EECB33_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t322D48A1E5BB83885947DEAEB5CDB41F6F85CF0D* L_0 = ((U3CU3Ec_t322D48A1E5BB83885947DEAEB5CDB41F6F85CF0D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___U3CU3E9;
		Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4* L_1 = (Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4*)il2cpp_codegen_object_new(Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4_il2cpp_TypeInfo_var);
		Func_1__ctor_m6BC48E22E90C329D60F0B200FD9C7B6182B44800(L_1, L_0, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), NULL);
		ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* L_2 = (ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2*)il2cpp_codegen_object_new(ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2_il2cpp_TypeInfo_var);
		ObjectPool_1__ctor_m3F6706AE99FFF8D495384A6F630A889EC9918060(L_2, L_1, (Action_1_tAAE2A43B6C8B488C8EBD92AF56C2D4329018A227*)NULL, (Action_1_tAAE2A43B6C8B488C8EBD92AF56C2D4329018A227*)NULL, (Action_1_tAAE2A43B6C8B488C8EBD92AF56C2D4329018A227*)NULL, (bool)1, ((int32_t)10), ((int32_t)10000), ObjectPool_1__ctor_m3F6706AE99FFF8D495384A6F630A889EC9918060_RuntimeMethod_var);
		((TransitionEventsFrameState_t864A52D0F7726A4F4C2C667BCB56E8A745F7340C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___k_EventQueuePool = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((TransitionEventsFrameState_t864A52D0F7726A4F4C2C667BCB56E8A745F7340C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___k_EventQueuePool), (void*)L_2);
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
// Method Definition Index: 17619
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* TransitionEventsFrameState_GetPooledQueue_mDD2A904BC261A94AC795CF75CD252C4A84857EDC (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TransitionEventsFrameState_t757425A175981031151B423E79515EC0BC00EFF7_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TransitionEventsFrameState_t757425A175981031151B423E79515EC0BC00EFF7_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* L_0 = ((TransitionEventsFrameState_t896507B4A758D8F131A06984765BA0F57C8939A2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___k_EventQueuePool;
		NullCheck(L_0);
		Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_1;
		L_1 = ObjectPool_1_Get_m8FC799C848E73EBFE4A4F06A1313D377851BA515_inline(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 17620
// Method Definition Index: 17621
// Method Definition Index: 17622
// Method Definition Index: 17623
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEventsFrameState_Clear_m4C870FB7485EC585A4106A1B9D4102B0C6528A5D (TransitionEventsFrameState_t896507B4A758D8F131A06984765BA0F57C8939A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_Release_m8A03719E6A9D2632DFA4DB41D2D2A0085CF2D6E4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(TransitionEventsFrameState_t757425A175981031151B423E79515EC0BC00EFF7_StaticInit);
	//<source_info:<no-source>:1>
	Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* L_0 = __this->___elementPropertyQueuedEvents;
		NullCheck(L_0);
		Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A L_1;
		L_1 = Dictionary_2_GetEnumerator_m79F6C0EFBDFE88091B6165AE7813EECFDCB9F5CD(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003e:
			{
				Enumerator_Dispose_m3D1FC9044CAA9D8335920EF97BBE267273A0E172((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				goto IL_0033_1;
			}

IL_000e_1:
			{
				KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D L_2;
				L_2 = Enumerator_get_Current_m4686FE5284DF33E6A048D58A52922C41A936E9D2_inline((&V_0), NULL);
				V_1 = L_2;
				Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_3;
				L_3 = KeyValuePair_2_get_Value_m9F58F3918041276FA6F53FEEDC58BB258913E4E6_inline((&V_1), NULL);
				NullCheck(L_3);
				Queue_1_Clear_m91EDB8B4094DA2A63959621F635CD41BAC103C76(L_3, NULL);
				CHECKED_LOCAL_INIT(TransitionEventsFrameState_t757425A175981031151B423E79515EC0BC00EFF7_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
				ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* L_4 = ((TransitionEventsFrameState_t896507B4A758D8F131A06984765BA0F57C8939A2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___k_EventQueuePool;
				Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_5;
				L_5 = KeyValuePair_2_get_Value_m9F58F3918041276FA6F53FEEDC58BB258913E4E6_inline((&V_1), NULL);
				NullCheck(L_4);
				ObjectPool_1_Release_m8A03719E6A9D2632DFA4DB41D2D2A0085CF2D6E4_inline(L_4, L_5, ObjectPool_1_Release_m8A03719E6A9D2632DFA4DB41D2D2A0085CF2D6E4_RuntimeMethod_var);
			}

IL_0033_1:
			{
				bool L_6;
				L_6 = Enumerator_MoveNext_mEAD61EBD23B77C8C9B2585470D577EB39B9C1140((&V_0), NULL);
				if (L_6)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_004c;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004c:
	{
		Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* L_7 = __this->___elementPropertyQueuedEvents;
		NullCheck(L_7);
		Dictionary_2_Clear_mFEDBE051CC2A493449DD5A24C88038EEEF83AB2E(L_7, NULL);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_8 = __this->___elementPropertyStateDelta;
		NullCheck(L_8);
		Dictionary_2_Clear_mE61E2DE75B4B63899E6E442A841A6958B0A7EAE6(L_8, NULL);
		__this->___panel = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___panel), (void*)(RuntimeObject*)NULL);
		__this->___m_ChangesCount = 0;
		return;
	}
}
// Method Definition Index: 17624
// Method Definition Index: 17625
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEventsFrameState__cctor_m77F16E758466F0F1E9AFC3B67DB6B72D7D7FAE1B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1__ctor_m3F6706AE99FFF8D495384A6F630A889EC9918060_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_t214A43CC1DE7F5DA69339B1C636F5EBF45EECB33_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_t214A43CC1DE7F5DA69339B1C636F5EBF45EECB33_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t04BDC2F22EDAD98D065EF20685724506C9415400* L_0 = ((U3CU3Ec_t04BDC2F22EDAD98D065EF20685724506C9415400_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___U3CU3E9;
		Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4* L_1 = (Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4*)il2cpp_codegen_object_new(Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4_il2cpp_TypeInfo_var);
		Func_1__ctor_m6BC48E22E90C329D60F0B200FD9C7B6182B44800(L_1, L_0, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), NULL);
		ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* L_2 = (ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2*)il2cpp_codegen_object_new(ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2_il2cpp_TypeInfo_var);
		ObjectPool_1__ctor_m3F6706AE99FFF8D495384A6F630A889EC9918060(L_2, L_1, (Action_1_tAAE2A43B6C8B488C8EBD92AF56C2D4329018A227*)NULL, (Action_1_tAAE2A43B6C8B488C8EBD92AF56C2D4329018A227*)NULL, (Action_1_tAAE2A43B6C8B488C8EBD92AF56C2D4329018A227*)NULL, (bool)1, ((int32_t)10), ((int32_t)10000), ObjectPool_1__ctor_m3F6706AE99FFF8D495384A6F630A889EC9918060_RuntimeMethod_var);
		((TransitionEventsFrameState_t896507B4A758D8F131A06984765BA0F57C8939A2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___k_EventQueuePool = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((TransitionEventsFrameState_t896507B4A758D8F131A06984765BA0F57C8939A2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___k_EventQueuePool), (void*)L_2);
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
// Method Definition Index: 17619
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* TransitionEventsFrameState_GetPooledQueue_m2E8C73364A926C8DE4FB172D73F33273670143A3 (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TransitionEventsFrameState_t757425A175981031151B423E79515EC0BC00EFF7_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TransitionEventsFrameState_t757425A175981031151B423E79515EC0BC00EFF7_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* L_0 = ((TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___k_EventQueuePool;
		NullCheck(L_0);
		Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_1;
		L_1 = ObjectPool_1_Get_m8FC799C848E73EBFE4A4F06A1313D377851BA515_inline(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 17620
// Method Definition Index: 17621
// Method Definition Index: 17622
// Method Definition Index: 17623
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEventsFrameState_Clear_m12AEC2E7B5C46F6455AB138C95C24887DA603CD6 (TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_Release_m8A03719E6A9D2632DFA4DB41D2D2A0085CF2D6E4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(TransitionEventsFrameState_t757425A175981031151B423E79515EC0BC00EFF7_StaticInit);
	//<source_info:<no-source>:1>
	Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* L_0 = __this->___elementPropertyQueuedEvents;
		NullCheck(L_0);
		Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A L_1;
		L_1 = Dictionary_2_GetEnumerator_m79F6C0EFBDFE88091B6165AE7813EECFDCB9F5CD(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003e:
			{
				Enumerator_Dispose_m3D1FC9044CAA9D8335920EF97BBE267273A0E172((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				goto IL_0033_1;
			}

IL_000e_1:
			{
				KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D L_2;
				L_2 = Enumerator_get_Current_m4686FE5284DF33E6A048D58A52922C41A936E9D2_inline((&V_0), NULL);
				V_1 = L_2;
				Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_3;
				L_3 = KeyValuePair_2_get_Value_m9F58F3918041276FA6F53FEEDC58BB258913E4E6_inline((&V_1), NULL);
				NullCheck(L_3);
				Queue_1_Clear_m91EDB8B4094DA2A63959621F635CD41BAC103C76(L_3, NULL);
				CHECKED_LOCAL_INIT(TransitionEventsFrameState_t757425A175981031151B423E79515EC0BC00EFF7_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
				ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* L_4 = ((TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___k_EventQueuePool;
				Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_5;
				L_5 = KeyValuePair_2_get_Value_m9F58F3918041276FA6F53FEEDC58BB258913E4E6_inline((&V_1), NULL);
				NullCheck(L_4);
				ObjectPool_1_Release_m8A03719E6A9D2632DFA4DB41D2D2A0085CF2D6E4_inline(L_4, L_5, ObjectPool_1_Release_m8A03719E6A9D2632DFA4DB41D2D2A0085CF2D6E4_RuntimeMethod_var);
			}

IL_0033_1:
			{
				bool L_6;
				L_6 = Enumerator_MoveNext_mEAD61EBD23B77C8C9B2585470D577EB39B9C1140((&V_0), NULL);
				if (L_6)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_004c;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004c:
	{
		Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* L_7 = __this->___elementPropertyQueuedEvents;
		NullCheck(L_7);
		Dictionary_2_Clear_mFEDBE051CC2A493449DD5A24C88038EEEF83AB2E(L_7, NULL);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_8 = __this->___elementPropertyStateDelta;
		NullCheck(L_8);
		Dictionary_2_Clear_mE61E2DE75B4B63899E6E442A841A6958B0A7EAE6(L_8, NULL);
		__this->___panel = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___panel), (void*)(RuntimeObject*)NULL);
		__this->___m_ChangesCount = 0;
		return;
	}
}
// Method Definition Index: 17624
// Method Definition Index: 17625
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEventsFrameState__cctor_mFC7CA46CD03E685A32405CF24870F94EF1DA9AE6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1__ctor_m3F6706AE99FFF8D495384A6F630A889EC9918060_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_t214A43CC1DE7F5DA69339B1C636F5EBF45EECB33_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_t214A43CC1DE7F5DA69339B1C636F5EBF45EECB33_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t57AD38BE6C52F4166D7228E63B44510992250E27* L_0 = ((U3CU3Ec_t57AD38BE6C52F4166D7228E63B44510992250E27_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___U3CU3E9;
		Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4* L_1 = (Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4*)il2cpp_codegen_object_new(Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4_il2cpp_TypeInfo_var);
		Func_1__ctor_m6BC48E22E90C329D60F0B200FD9C7B6182B44800(L_1, L_0, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), NULL);
		ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* L_2 = (ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2*)il2cpp_codegen_object_new(ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2_il2cpp_TypeInfo_var);
		ObjectPool_1__ctor_m3F6706AE99FFF8D495384A6F630A889EC9918060(L_2, L_1, (Action_1_tAAE2A43B6C8B488C8EBD92AF56C2D4329018A227*)NULL, (Action_1_tAAE2A43B6C8B488C8EBD92AF56C2D4329018A227*)NULL, (Action_1_tAAE2A43B6C8B488C8EBD92AF56C2D4329018A227*)NULL, (bool)1, ((int32_t)10), ((int32_t)10000), ObjectPool_1__ctor_m3F6706AE99FFF8D495384A6F630A889EC9918060_RuntimeMethod_var);
		((TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___k_EventQueuePool = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((TransitionEventsFrameState_t7FB3FD474018D429F5F1EE705EF9ADA6F197EDEF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___k_EventQueuePool), (void*)L_2);
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
// Method Definition Index: 17619
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* TransitionEventsFrameState_GetPooledQueue_mAE967F05DE13B2E3A1BACAA15AF68BB66A259EA2 (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TransitionEventsFrameState_t757425A175981031151B423E79515EC0BC00EFF7_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TransitionEventsFrameState_t757425A175981031151B423E79515EC0BC00EFF7_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* L_0 = ((TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___k_EventQueuePool;
		NullCheck(L_0);
		Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_1;
		L_1 = ObjectPool_1_Get_m8FC799C848E73EBFE4A4F06A1313D377851BA515_inline(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 17620
// Method Definition Index: 17621
// Method Definition Index: 17622
// Method Definition Index: 17623
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEventsFrameState_Clear_m7D00CB267A08EEBB5F8F5AAB978BA76AE7B4B71C (TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_Release_m8A03719E6A9D2632DFA4DB41D2D2A0085CF2D6E4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(TransitionEventsFrameState_t757425A175981031151B423E79515EC0BC00EFF7_StaticInit);
	//<source_info:<no-source>:1>
	Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* L_0 = __this->___elementPropertyQueuedEvents;
		NullCheck(L_0);
		Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A L_1;
		L_1 = Dictionary_2_GetEnumerator_m79F6C0EFBDFE88091B6165AE7813EECFDCB9F5CD(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003e:
			{
				Enumerator_Dispose_m3D1FC9044CAA9D8335920EF97BBE267273A0E172((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				goto IL_0033_1;
			}

IL_000e_1:
			{
				KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D L_2;
				L_2 = Enumerator_get_Current_m4686FE5284DF33E6A048D58A52922C41A936E9D2_inline((&V_0), NULL);
				V_1 = L_2;
				Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_3;
				L_3 = KeyValuePair_2_get_Value_m9F58F3918041276FA6F53FEEDC58BB258913E4E6_inline((&V_1), NULL);
				NullCheck(L_3);
				Queue_1_Clear_m91EDB8B4094DA2A63959621F635CD41BAC103C76(L_3, NULL);
				CHECKED_LOCAL_INIT(TransitionEventsFrameState_t757425A175981031151B423E79515EC0BC00EFF7_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
				ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* L_4 = ((TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___k_EventQueuePool;
				Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_5;
				L_5 = KeyValuePair_2_get_Value_m9F58F3918041276FA6F53FEEDC58BB258913E4E6_inline((&V_1), NULL);
				NullCheck(L_4);
				ObjectPool_1_Release_m8A03719E6A9D2632DFA4DB41D2D2A0085CF2D6E4_inline(L_4, L_5, ObjectPool_1_Release_m8A03719E6A9D2632DFA4DB41D2D2A0085CF2D6E4_RuntimeMethod_var);
			}

IL_0033_1:
			{
				bool L_6;
				L_6 = Enumerator_MoveNext_mEAD61EBD23B77C8C9B2585470D577EB39B9C1140((&V_0), NULL);
				if (L_6)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_004c;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004c:
	{
		Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* L_7 = __this->___elementPropertyQueuedEvents;
		NullCheck(L_7);
		Dictionary_2_Clear_mFEDBE051CC2A493449DD5A24C88038EEEF83AB2E(L_7, NULL);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_8 = __this->___elementPropertyStateDelta;
		NullCheck(L_8);
		Dictionary_2_Clear_mE61E2DE75B4B63899E6E442A841A6958B0A7EAE6(L_8, NULL);
		__this->___panel = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___panel), (void*)(RuntimeObject*)NULL);
		__this->___m_ChangesCount = 0;
		return;
	}
}
// Method Definition Index: 17624
// Method Definition Index: 17625
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEventsFrameState__cctor_mBA64296EE2C22241E2207F57FF0A16280C2B300D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1__ctor_m3F6706AE99FFF8D495384A6F630A889EC9918060_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_t214A43CC1DE7F5DA69339B1C636F5EBF45EECB33_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_t214A43CC1DE7F5DA69339B1C636F5EBF45EECB33_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t343A84FA7F733C5EA0C7D99FBBA003DAC613F61F* L_0 = ((U3CU3Ec_t343A84FA7F733C5EA0C7D99FBBA003DAC613F61F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___U3CU3E9;
		Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4* L_1 = (Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4*)il2cpp_codegen_object_new(Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4_il2cpp_TypeInfo_var);
		Func_1__ctor_m6BC48E22E90C329D60F0B200FD9C7B6182B44800(L_1, L_0, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), NULL);
		ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* L_2 = (ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2*)il2cpp_codegen_object_new(ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2_il2cpp_TypeInfo_var);
		ObjectPool_1__ctor_m3F6706AE99FFF8D495384A6F630A889EC9918060(L_2, L_1, (Action_1_tAAE2A43B6C8B488C8EBD92AF56C2D4329018A227*)NULL, (Action_1_tAAE2A43B6C8B488C8EBD92AF56C2D4329018A227*)NULL, (Action_1_tAAE2A43B6C8B488C8EBD92AF56C2D4329018A227*)NULL, (bool)1, ((int32_t)10), ((int32_t)10000), ObjectPool_1__ctor_m3F6706AE99FFF8D495384A6F630A889EC9918060_RuntimeMethod_var);
		((TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___k_EventQueuePool = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((TransitionEventsFrameState_t3F9A8EB2B33780D3F2037BFEED0A3C6A03B03FEC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___k_EventQueuePool), (void*)L_2);
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
// Method Definition Index: 17619
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* TransitionEventsFrameState_GetPooledQueue_m937C2DD3CE11410A8BD57AD9F9F0EF9A6575EBD6_gshared (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TransitionEventsFrameState_t757425A175981031151B423E79515EC0BC00EFF7_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TransitionEventsFrameState_t757425A175981031151B423E79515EC0BC00EFF7_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* L_0 = ((TransitionEventsFrameState_t99BD53E9FE7D95EEB993EF2BF99CDD1609D6AA7B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___k_EventQueuePool;
		NullCheck(L_0);
		Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_1;
		L_1 = ObjectPool_1_Get_m8FC799C848E73EBFE4A4F06A1313D377851BA515_inline(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 17620
// Method Definition Index: 17621
// Method Definition Index: 17622
// Method Definition Index: 17623
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEventsFrameState_Clear_m2AB9551867D394B4143C9D17F0402E033865A26D_gshared (TransitionEventsFrameState_t99BD53E9FE7D95EEB993EF2BF99CDD1609D6AA7B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_Release_m8A03719E6A9D2632DFA4DB41D2D2A0085CF2D6E4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(TransitionEventsFrameState_t757425A175981031151B423E79515EC0BC00EFF7_StaticInit);
	//<source_info:<no-source>:1>
	Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* L_0 = __this->___elementPropertyQueuedEvents;
		NullCheck(L_0);
		Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A L_1;
		L_1 = Dictionary_2_GetEnumerator_m79F6C0EFBDFE88091B6165AE7813EECFDCB9F5CD(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003e:
			{
				Enumerator_Dispose_m3D1FC9044CAA9D8335920EF97BBE267273A0E172((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				goto IL_0033_1;
			}

IL_000e_1:
			{
				KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D L_2;
				L_2 = Enumerator_get_Current_m4686FE5284DF33E6A048D58A52922C41A936E9D2_inline((&V_0), NULL);
				V_1 = L_2;
				Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_3;
				L_3 = KeyValuePair_2_get_Value_m9F58F3918041276FA6F53FEEDC58BB258913E4E6_inline((&V_1), NULL);
				NullCheck(L_3);
				Queue_1_Clear_m91EDB8B4094DA2A63959621F635CD41BAC103C76(L_3, NULL);
				CHECKED_LOCAL_INIT(TransitionEventsFrameState_t757425A175981031151B423E79515EC0BC00EFF7_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
				ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* L_4 = ((TransitionEventsFrameState_t99BD53E9FE7D95EEB993EF2BF99CDD1609D6AA7B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___k_EventQueuePool;
				Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_5;
				L_5 = KeyValuePair_2_get_Value_m9F58F3918041276FA6F53FEEDC58BB258913E4E6_inline((&V_1), NULL);
				NullCheck(L_4);
				ObjectPool_1_Release_m8A03719E6A9D2632DFA4DB41D2D2A0085CF2D6E4_inline(L_4, L_5, ObjectPool_1_Release_m8A03719E6A9D2632DFA4DB41D2D2A0085CF2D6E4_RuntimeMethod_var);
			}

IL_0033_1:
			{
				bool L_6;
				L_6 = Enumerator_MoveNext_mEAD61EBD23B77C8C9B2585470D577EB39B9C1140((&V_0), NULL);
				if (L_6)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_004c;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004c:
	{
		Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* L_7 = __this->___elementPropertyQueuedEvents;
		NullCheck(L_7);
		Dictionary_2_Clear_mFEDBE051CC2A493449DD5A24C88038EEEF83AB2E(L_7, NULL);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_8 = __this->___elementPropertyStateDelta;
		NullCheck(L_8);
		Dictionary_2_Clear_mE61E2DE75B4B63899E6E442A841A6958B0A7EAE6(L_8, NULL);
		__this->___panel = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___panel), (void*)(RuntimeObject*)NULL);
		__this->___m_ChangesCount = 0;
		return;
	}
}
// Method Definition Index: 17624
// Method Definition Index: 17625
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEventsFrameState__cctor_m032E80DE4CF4242FF7C4225EE533DC9306F9CF94_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1__ctor_m3F6706AE99FFF8D495384A6F630A889EC9918060_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_t214A43CC1DE7F5DA69339B1C636F5EBF45EECB33_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_t214A43CC1DE7F5DA69339B1C636F5EBF45EECB33_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t83F75628053C082E4D8ABA9B60CC02B73030C02F* L_0 = ((U3CU3Ec_t83F75628053C082E4D8ABA9B60CC02B73030C02F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___U3CU3E9;
		Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4* L_1 = (Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4*)il2cpp_codegen_object_new(Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4_il2cpp_TypeInfo_var);
		Func_1__ctor_m6BC48E22E90C329D60F0B200FD9C7B6182B44800(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), NULL);
		ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* L_2 = (ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2*)il2cpp_codegen_object_new(ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2_il2cpp_TypeInfo_var);
		ObjectPool_1__ctor_m3F6706AE99FFF8D495384A6F630A889EC9918060(L_2, L_1, (Action_1_tAAE2A43B6C8B488C8EBD92AF56C2D4329018A227*)NULL, (Action_1_tAAE2A43B6C8B488C8EBD92AF56C2D4329018A227*)NULL, (Action_1_tAAE2A43B6C8B488C8EBD92AF56C2D4329018A227*)NULL, (bool)1, ((int32_t)10), ((int32_t)10000), ObjectPool_1__ctor_m3F6706AE99FFF8D495384A6F630A889EC9918060_RuntimeMethod_var);
		((TransitionEventsFrameState_t99BD53E9FE7D95EEB993EF2BF99CDD1609D6AA7B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___k_EventQueuePool = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((TransitionEventsFrameState_t99BD53E9FE7D95EEB993EF2BF99CDD1609D6AA7B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___k_EventQueuePool), (void*)L_2);
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
// Method Definition Index: 17619
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* TransitionEventsFrameState_GetPooledQueue_m8532F0D4146732BF34713D52E2A2B4D27A298C7E_fshared (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TransitionEventsFrameState_t757425A175981031151B423E79515EC0BC00EFF7_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TransitionEventsFrameState_t757425A175981031151B423E79515EC0BC00EFF7_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* L_0 = ((TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___k_EventQueuePool;
		NullCheck(L_0);
		Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_1;
		L_1 = ObjectPool_1_Get_m8FC799C848E73EBFE4A4F06A1313D377851BA515_inline(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 17620
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEventsFrameState_RegisterChange_mEABB5D4C10E575520EAA056A082AFCDD5341D837_fshared (TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_ChangesCount;
		__this->___m_ChangesCount = ((int32_t)il2cpp_codegen_add(L_0, 1));
		return;
	}
}
// Method Definition Index: 17621
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEventsFrameState_UnregisterChange_m41DBE132FF16D7B667B0495BDC2689AEFCCBB2B3_fshared (TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_ChangesCount;
		__this->___m_ChangesCount = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		return;
	}
}
// Method Definition Index: 17622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransitionEventsFrameState_StateChanged_m38F0FF4E9A4F9284B6CA6FDB7049217B9E8DC810_fshared (TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_ChangesCount;
		return (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 17623
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEventsFrameState_Clear_mAF127691FFE265F2B829E5177F6260C419917792_fshared (TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_Release_m8A03719E6A9D2632DFA4DB41D2D2A0085CF2D6E4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(TransitionEventsFrameState_t757425A175981031151B423E79515EC0BC00EFF7_StaticInit);
	//<source_info:<no-source>:1>
	Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* L_0 = __this->___elementPropertyQueuedEvents;
		NullCheck(L_0);
		Enumerator_tF4EF35C56109CA74211BE62C520550AE12C8D17A L_1;
		L_1 = Dictionary_2_GetEnumerator_m79F6C0EFBDFE88091B6165AE7813EECFDCB9F5CD(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003e:
			{
				Enumerator_Dispose_m3D1FC9044CAA9D8335920EF97BBE267273A0E172((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				goto IL_0033_1;
			}

IL_000e_1:
			{
				KeyValuePair_2_t7321063C9B140D881C22E7D562108D390834AD6D L_2;
				L_2 = Enumerator_get_Current_m4686FE5284DF33E6A048D58A52922C41A936E9D2_inline((&V_0), NULL);
				V_1 = L_2;
				Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_3;
				L_3 = KeyValuePair_2_get_Value_m9F58F3918041276FA6F53FEEDC58BB258913E4E6_inline((&V_1), NULL);
				NullCheck(L_3);
				Queue_1_Clear_m91EDB8B4094DA2A63959621F635CD41BAC103C76(L_3, NULL);
				CHECKED_LOCAL_INIT(TransitionEventsFrameState_t757425A175981031151B423E79515EC0BC00EFF7_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
				ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* L_4 = ((TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___k_EventQueuePool;
				Queue_1_tBF8103756AAB084350499FF2F31BF5D872AD7910* L_5;
				L_5 = KeyValuePair_2_get_Value_m9F58F3918041276FA6F53FEEDC58BB258913E4E6_inline((&V_1), NULL);
				NullCheck(L_4);
				ObjectPool_1_Release_m8A03719E6A9D2632DFA4DB41D2D2A0085CF2D6E4_inline(L_4, L_5, ObjectPool_1_Release_m8A03719E6A9D2632DFA4DB41D2D2A0085CF2D6E4_RuntimeMethod_var);
			}

IL_0033_1:
			{
				bool L_6;
				L_6 = Enumerator_MoveNext_mEAD61EBD23B77C8C9B2585470D577EB39B9C1140((&V_0), NULL);
				if (L_6)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_004c;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004c:
	{
		Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* L_7 = __this->___elementPropertyQueuedEvents;
		NullCheck(L_7);
		Dictionary_2_Clear_mFEDBE051CC2A493449DD5A24C88038EEEF83AB2E(L_7, NULL);
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_8 = __this->___elementPropertyStateDelta;
		NullCheck(L_8);
		Dictionary_2_Clear_mE61E2DE75B4B63899E6E442A841A6958B0A7EAE6(L_8, NULL);
		__this->___panel = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___panel), (void*)(RuntimeObject*)NULL);
		__this->___m_ChangesCount = 0;
		return;
	}
}
// Method Definition Index: 17624
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEventsFrameState__ctor_m942A14500CF3DA6B1184691E8B8661CBF20F5195_fshared (TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m65631FED8A24BDF474F747C679F7AEB4AC878000_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mFA3E89A4BCCE2A0CC4038E1CE71EDC3AAD293D17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_StaticInit,(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		RuntimeObject* L_0 = ((ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_StaticFields*)il2cpp_codegen_static_fields_for(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_il2cpp_TypeInfo_var))->___Comparer;
		Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* L_1 = (Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F*)il2cpp_codegen_object_new(Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m65631FED8A24BDF474F747C679F7AEB4AC878000(L_1, L_0, Dictionary_2__ctor_m65631FED8A24BDF474F747C679F7AEB4AC878000_RuntimeMethod_var);
		__this->___elementPropertyStateDelta = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___elementPropertyStateDelta), (void*)L_1);
		RuntimeObject* L_2 = ((ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_StaticFields*)il2cpp_codegen_static_fields_for(ElementPropertyPair_t4CBC92D2F951A9EB378EBFB6713B7566B0FA6814_il2cpp_TypeInfo_var))->___Comparer;
		Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* L_3 = (Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC*)il2cpp_codegen_object_new(Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mFA3E89A4BCCE2A0CC4038E1CE71EDC3AAD293D17(L_3, L_2, Dictionary_2__ctor_mFA3E89A4BCCE2A0CC4038E1CE71EDC3AAD293D17_RuntimeMethod_var);
		__this->___elementPropertyQueuedEvents = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___elementPropertyQueuedEvents), (void*)L_3);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
// Method Definition Index: 17625
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEventsFrameState__cctor_mE544D5450E367C6FF3EE0F0040A9DA1BE9BF7FA9_fshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1__ctor_m3F6706AE99FFF8D495384A6F630A889EC9918060_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_t214A43CC1DE7F5DA69339B1C636F5EBF45EECB33_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_t214A43CC1DE7F5DA69339B1C636F5EBF45EECB33_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t73BDFFDC090AF7822A5E862978652BFDE81B12DA* L_0 = ((U3CU3Ec_t73BDFFDC090AF7822A5E862978652BFDE81B12DA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___U3CU3E9;
		Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4* L_1 = (Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4*)il2cpp_codegen_object_new(Func_1_t7AC58D683918C632A1D195D14F02558F5AFDE8A4_il2cpp_TypeInfo_var);
		Func_1__ctor_m6BC48E22E90C329D60F0B200FD9C7B6182B44800(L_1, (RuntimeObject*)L_0, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), NULL);
		ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2* L_2 = (ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2*)il2cpp_codegen_object_new(ObjectPool_1_tD54A1168BBCDDB2026E6BAFF8969C15F616818E2_il2cpp_TypeInfo_var);
		ObjectPool_1__ctor_m3F6706AE99FFF8D495384A6F630A889EC9918060(L_2, L_1, (Action_1_tAAE2A43B6C8B488C8EBD92AF56C2D4329018A227*)NULL, (Action_1_tAAE2A43B6C8B488C8EBD92AF56C2D4329018A227*)NULL, (Action_1_tAAE2A43B6C8B488C8EBD92AF56C2D4329018A227*)NULL, (bool)1, ((int32_t)10), ((int32_t)10000), ObjectPool_1__ctor_m3F6706AE99FFF8D495384A6F630A889EC9918060_RuntimeMethod_var);
		((TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___k_EventQueuePool = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___k_EventQueuePool), (void*)L_2);
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
bool TryGetFromGestures_1_Invoke_m744E55392202E4BC6429681E8F4A281C5AD8ACAB_Multicast(TryGetFromGestures_1_t1F3969F3F7021D89942AAE1EC8011838CB6288FA* __this, XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858 ___0_gestures, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		TryGetFromGestures_1_t1F3969F3F7021D89942AAE1EC8011838CB6288FA* currentDelegate = reinterpret_cast<TryGetFromGestures_1_t1F3969F3F7021D89942AAE1EC8011838CB6288FA*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_gestures, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
bool TryGetFromGestures_1_Invoke_m744E55392202E4BC6429681E8F4A281C5AD8ACAB_OpenStatic(TryGetFromGestures_1_t1F3969F3F7021D89942AAE1EC8011838CB6288FA* __this, XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858 ___0_gestures, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_value, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_gestures, ___1_value, method);
}
// Method Definition Index: 63979
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TryGetFromGestures_1__ctor_mA9304F35D96E0C430EE57BD9C9AB8F54FEF7842F (TryGetFromGestures_1_t1F3969F3F7021D89942AAE1EC8011838CB6288FA* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_direct_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)TryGetFromGestures_1_Invoke_m744E55392202E4BC6429681E8F4A281C5AD8ACAB_OpenStatic;
		}
		else
		{
			__this->___method_code = (intptr_t)__this->___m_target;
			__this->___invoke_impl = (intptr_t)__this->___method_ptr;
		}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		if (il2cpp_codegen_class_is_value_type(il2cpp_codegen_object_get_class(__this->___m_target)))
			__this->___method_code = (intptr_t)il2cpp_codegen_get_raw_data<void*>(__this->___m_target);
		else
			__this->___method_code = (intptr_t)__this->___m_target;
		__this->___invoke_impl = (intptr_t)__this->___method_ptr;
	}
	__this->___extra_arg = (intptr_t)TryGetFromGestures_1_Invoke_m744E55392202E4BC6429681E8F4A281C5AD8ACAB_Multicast;
}
// Method Definition Index: 63980
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TryGetFromGestures_1_Invoke_m744E55392202E4BC6429681E8F4A281C5AD8ACAB (TryGetFromGestures_1_t1F3969F3F7021D89942AAE1EC8011838CB6288FA* __this, XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858 ___0_gestures, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef bool (*FunctionPointerType) (RuntimeObject*, XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_gestures, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 63981
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TryGetFromGestures_1_BeginInvoke_m69FCA577C5E152CA4134D184FA1718E0F38ED62E (TryGetFromGestures_1_t1F3969F3F7021D89942AAE1EC8011838CB6288FA* __this, XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858 ___0_gestures, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___1_value, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	void *__d_args[3] = {0};
	__d_args[0] = Box(XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858_il2cpp_TypeInfo_var, &___0_gestures);
	__d_args[1] = Box(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var, &*___1_value);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// Method Definition Index: 63982
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TryGetFromGestures_1_EndInvoke_mB9BCCA0C592CAEA9DBE12392AFF18EB6AAE2E8E6 (TryGetFromGestures_1_t1F3969F3F7021D89942AAE1EC8011838CB6288FA* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___0_value, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	void* ___out_args[] = {
	___0_value,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
bool TryGetFromGestures_1_Invoke_mC7A0E7B79A4480993DD15F850FD0C6A7F84D4BC1_Multicast(TryGetFromGestures_1_tC53E6B0C4112A47BC72476BBEF8A9FD24865FEEC* __this, XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858 ___0_gestures, float* ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		TryGetFromGestures_1_tC53E6B0C4112A47BC72476BBEF8A9FD24865FEEC* currentDelegate = reinterpret_cast<TryGetFromGestures_1_tC53E6B0C4112A47BC72476BBEF8A9FD24865FEEC*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858, float*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_gestures, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
bool TryGetFromGestures_1_Invoke_mC7A0E7B79A4480993DD15F850FD0C6A7F84D4BC1_OpenStatic(TryGetFromGestures_1_tC53E6B0C4112A47BC72476BBEF8A9FD24865FEEC* __this, XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858 ___0_gestures, float* ___1_value, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858, float*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_gestures, ___1_value, method);
}
// Method Definition Index: 63979
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TryGetFromGestures_1__ctor_mBE214428A9D6D9B91CE3E0DF2BC94DB289D9ACB2 (TryGetFromGestures_1_tC53E6B0C4112A47BC72476BBEF8A9FD24865FEEC* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_direct_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)TryGetFromGestures_1_Invoke_mC7A0E7B79A4480993DD15F850FD0C6A7F84D4BC1_OpenStatic;
		}
		else
		{
			__this->___method_code = (intptr_t)__this->___m_target;
			__this->___invoke_impl = (intptr_t)__this->___method_ptr;
		}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		if (il2cpp_codegen_class_is_value_type(il2cpp_codegen_object_get_class(__this->___m_target)))
			__this->___method_code = (intptr_t)il2cpp_codegen_get_raw_data<void*>(__this->___m_target);
		else
			__this->___method_code = (intptr_t)__this->___m_target;
		__this->___invoke_impl = (intptr_t)__this->___method_ptr;
	}
	__this->___extra_arg = (intptr_t)TryGetFromGestures_1_Invoke_mC7A0E7B79A4480993DD15F850FD0C6A7F84D4BC1_Multicast;
}
// Method Definition Index: 63980
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TryGetFromGestures_1_Invoke_mC7A0E7B79A4480993DD15F850FD0C6A7F84D4BC1 (TryGetFromGestures_1_tC53E6B0C4112A47BC72476BBEF8A9FD24865FEEC* __this, XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858 ___0_gestures, float* ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef bool (*FunctionPointerType) (RuntimeObject*, XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858, float*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_gestures, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 63981
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TryGetFromGestures_1_BeginInvoke_m75A10440DFF6098049736A4C187E7E924633727A (TryGetFromGestures_1_tC53E6B0C4112A47BC72476BBEF8A9FD24865FEEC* __this, XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858 ___0_gestures, float* ___1_value, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	void *__d_args[3] = {0};
	__d_args[0] = Box(XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858_il2cpp_TypeInfo_var, &___0_gestures);
	__d_args[1] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &*___1_value);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// Method Definition Index: 63982
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TryGetFromGestures_1_EndInvoke_m7C2B7682CFB39FE0F0BF72204A3DD5971E124986 (TryGetFromGestures_1_tC53E6B0C4112A47BC72476BBEF8A9FD24865FEEC* __this, float* ___0_value, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	void* ___out_args[] = {
	___0_value,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
bool TryGetFromGestures_1_Invoke_m75150D6746582A61648FEE0E2F92343DDDE969C0_Multicast(TryGetFromGestures_1_t91BF865CE2B5D5EEE31F2421F30748B35FC37B87* __this, XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858 ___0_gestures, Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		TryGetFromGestures_1_t91BF865CE2B5D5EEE31F2421F30748B35FC37B87* currentDelegate = reinterpret_cast<TryGetFromGestures_1_t91BF865CE2B5D5EEE31F2421F30748B35FC37B87*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_gestures, ___1_value, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
bool TryGetFromGestures_1_Invoke_m75150D6746582A61648FEE0E2F92343DDDE969C0_OpenStatic(TryGetFromGestures_1_t91BF865CE2B5D5EEE31F2421F30748B35FC37B87* __this, XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858 ___0_gestures, Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_gestures, ___1_value, method);
}
// Method Definition Index: 63979
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TryGetFromGestures_1__ctor_m5A30D34C6DF924688963F9D7D2515F647D0BEA7E_fshared (TryGetFromGestures_1_t91BF865CE2B5D5EEE31F2421F30748B35FC37B87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_direct_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)TryGetFromGestures_1_Invoke_m75150D6746582A61648FEE0E2F92343DDDE969C0_OpenStatic;
		}
		else
		{
			__this->___method_code = (intptr_t)__this->___m_target;
			__this->___invoke_impl = (intptr_t)__this->___method_ptr;
		}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		if (il2cpp_codegen_class_is_value_type(il2cpp_codegen_object_get_class(__this->___m_target)))
			__this->___method_code = (intptr_t)il2cpp_codegen_get_raw_data<void*>(__this->___m_target);
		else
			__this->___method_code = (intptr_t)__this->___m_target;
		__this->___invoke_impl = (intptr_t)__this->___method_ptr;
	}
	__this->___extra_arg = (intptr_t)TryGetFromGestures_1_Invoke_m75150D6746582A61648FEE0E2F92343DDDE969C0_Multicast;
}
// Method Definition Index: 63980
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TryGetFromGestures_1_Invoke_m75150D6746582A61648FEE0E2F92343DDDE969C0_fshared (TryGetFromGestures_1_t91BF865CE2B5D5EEE31F2421F30748B35FC37B87* __this, XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858 ___0_gestures, Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef bool (*FunctionPointerType) (RuntimeObject*, XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_gestures, ___1_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 63981
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TryGetFromGestures_1_BeginInvoke_mF240AD2C340777B7C98BA5F66A6259902DBAABD6_fshared (TryGetFromGestures_1_t91BF865CE2B5D5EEE31F2421F30748B35FC37B87* __this, XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858 ___0_gestures, Il2CppFullySharedGenericAny* ___1_value, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	void *__d_args[3] = {0};
	__d_args[0] = Box(XRCommonHandGesturesState_t18CE495C531D06CFA5E2FB753CB9DC9813F9D858_il2cpp_TypeInfo_var, &___0_gestures);
	RuntimeClass* ___1_value_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method, 1));
	__d_args[1] = (il2cpp_codegen_class_is_value_type(___1_value_klass) ? Box(___1_value_klass, ___1_value) : (void*)*___1_value);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// Method Definition Index: 63982
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TryGetFromGestures_1_EndInvoke_mC77C792A49D114667665167DE05EACF511948E83_fshared (TryGetFromGestures_1_t91BF865CE2B5D5EEE31F2421F30748B35FC37B87* __this, Il2CppFullySharedGenericAny* ___0_value, RuntimeObject* ___1_result, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	void* ___out_args[] = {
	___0_value,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___1_result, ___out_args);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2085
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Tuple_2_get_Item1_m34FAB77702E3F2E8CAAC6C04C0E5C1FCCA2C661F (Tuple_2_tA7C2516BCF161E7460ECB96A4AA0F32EE68F1D32* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_Item1;
		return L_0;
	}
}
// Method Definition Index: 2086
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tuple_2_get_Item2_m7B46B78BACEC06553F2CA1626EE0DDCE7ACF97E8 (Tuple_2_tA7C2516BCF161E7460ECB96A4AA0F32EE68F1D32* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float L_0 = __this->___m_Item2;
		return L_0;
	}
}
// Method Definition Index: 2087
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_2__ctor_mB4C3903C62BA9208B280300A675CD7AFA26F6A73 (Tuple_2_tA7C2516BCF161E7460ECB96A4AA0F32EE68F1D32* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item1, float ___1_item2, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_item1;
		__this->___m_Item1 = L_0;
		float L_1 = ___1_item2;
		__this->___m_Item2 = L_1;
		return;
	}
}
// Method Definition Index: 2088
// Method Definition Index: 2089
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_2_System_Collections_IStructuralEquatable_Equals_mA8A78F68ACC45F7AC3E5346EE356ED43D72FC0B8 (Tuple_2_tA7C2516BCF161E7460ECB96A4AA0F32EE68F1D32* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Tuple_2_tA7C2516BCF161E7460ECB96A4AA0F32EE68F1D32* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		V_0 = ((Tuple_2_tA7C2516BCF161E7460ECB96A4AA0F32EE68F1D32*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)));
		Tuple_2_tA7C2516BCF161E7460ECB96A4AA0F32EE68F1D32* L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___m_Item1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), &L_5);
		Tuple_2_tA7C2516BCF161E7460ECB96A4AA0F32EE68F1D32* L_7 = V_0;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = L_7->___m_Item1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), &L_9);
		NullCheck(L_3);
		bool L_11;
		L_11 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, L_6, L_10);
		if (!L_11)
		{
			goto IL_004c;
		}
	}
	{
		RuntimeObject* L_12 = ___1_comparer;
		float L_13 = __this->___m_Item2;
		float L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3), &L_14);
		Tuple_2_tA7C2516BCF161E7460ECB96A4AA0F32EE68F1D32* L_16 = V_0;
		NullCheck(L_16);
		float L_17 = L_16->___m_Item2;
		float L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3), &L_18);
		NullCheck(L_12);
		bool L_20;
		L_20 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_12, L_15, L_19);
		return L_20;
	}

IL_004c:
	{
		return (bool)0;
	}
}
// Method Definition Index: 2090
// Method Definition Index: 2091
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_System_Collections_IStructuralComparable_CompareTo_m44C745045F63BE055968F97BC671DF336933EE55 (Tuple_2_tA7C2516BCF161E7460ECB96A4AA0F32EE68F1D32* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Tuple_2_tA7C2516BCF161E7460ECB96A4AA0F32EE68F1D32* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		V_0 = ((Tuple_2_tA7C2516BCF161E7460ECB96A4AA0F32EE68F1D32*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)));
		Tuple_2_tA7C2516BCF161E7460ECB96A4AA0F32EE68F1D32* L_2 = V_0;
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type(__this);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_3);
		String_t* L_5;
		L_5 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_002f:
	{
		V_1 = 0;
		RuntimeObject* L_7 = ___1_comparer;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___m_Item1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), &L_9);
		Tuple_2_tA7C2516BCF161E7460ECB96A4AA0F32EE68F1D32* L_11 = V_0;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = L_11->___m_Item1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), &L_13);
		NullCheck(L_7);
		int32_t L_15;
		L_15 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_7, L_10, L_14);
		V_1 = L_15;
		int32_t L_16 = V_1;
		if (!L_16)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_17 = V_1;
		return L_17;
	}

IL_0053:
	{
		RuntimeObject* L_18 = ___1_comparer;
		float L_19 = __this->___m_Item2;
		float L_20 = L_19;
		RuntimeObject* L_21 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3), &L_20);
		Tuple_2_tA7C2516BCF161E7460ECB96A4AA0F32EE68F1D32* L_22 = V_0;
		NullCheck(L_22);
		float L_23 = L_22->___m_Item2;
		float L_24 = L_23;
		RuntimeObject* L_25 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3), &L_24);
		NullCheck(L_18);
		int32_t L_26;
		L_26 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_18, L_21, L_25);
		return L_26;
	}
}
// Method Definition Index: 2092
// Method Definition Index: 2093
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_System_Collections_IStructuralEquatable_GetHashCode_m8366F26C8BC2A096EA058601A9F98785DB42C7AC (Tuple_2_tA7C2516BCF161E7460ECB96A4AA0F32EE68F1D32* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_comparer;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___m_Item1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), &L_2);
		NullCheck(L_0);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_0, L_3);
		RuntimeObject* L_5 = ___0_comparer;
		float L_6 = __this->___m_Item2;
		float L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3), &L_7);
		NullCheck(L_5);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_5, L_8);
		int32_t L_10;
		L_10 = Tuple_CombineHashCodes_m823D7EC829A9D4FE48FA8B40FBFE6F9DC0092F3C(L_4, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 2094
// Method Definition Index: 2095
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_2_System_ITupleInternal_ToString_m653DFD78E8D5845DF039F5B1D36977B0C31BAFA3 (Tuple_2_tA7C2516BCF161E7460ECB96A4AA0F32EE68F1D32* __this, StringBuilder_t* ___0_sb, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		StringBuilder_t* L_0 = ___0_sb;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___m_Item1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), &L_2);
		NullCheck(L_0);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_0, L_3, NULL);
		StringBuilder_t* L_5 = ___0_sb;
		NullCheck(L_5);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_5, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		StringBuilder_t* L_7 = ___0_sb;
		float L_8 = __this->___m_Item2;
		float L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3), &L_9);
		NullCheck(L_7);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_7, L_10, NULL);
		StringBuilder_t* L_12 = ___0_sb;
		NullCheck(L_12);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_12, ((int32_t)41), NULL);
		StringBuilder_t* L_14 = ___0_sb;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_14);
		return L_15;
	}
}
// Method Definition Index: 2096
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2085
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_2_get_Item1_mC87072BD14E3669527D96A8739B3E5CA83FCFBD0_fshared (Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T1_t438E68562562A80BDFA84F696160C82DC56D8FD5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_t438E68562562A80BDFA84F696160C82DC56D8FD5);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2)), SizeOf_T1_t438E68562562A80BDFA84F696160C82DC56D8FD5);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T1_t438E68562562A80BDFA84F696160C82DC56D8FD5);
		return;
	}
}
// Method Definition Index: 2086
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_2_get_Item2_m7398C77129F66B0CE22A8E95CF2DD790CC693C9B_fshared (Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T2_tCB2606A95166CC5D34D54904D606F5CA9504DD44 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T2_tCB2606A95166CC5D34D54904D606F5CA9504DD44);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4)), SizeOf_T2_tCB2606A95166CC5D34D54904D606F5CA9504DD44);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T2_tCB2606A95166CC5D34D54904D606F5CA9504DD44);
		return;
	}
}
// Method Definition Index: 2087
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_2__ctor_mE6FEB2739A30DACC4CFCC8E1207E418437B3CCC1_fshared (Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* __this, Il2CppFullySharedGenericAny ___0_item1, Il2CppFullySharedGenericAny ___1_item2, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T1_t438E68562562A80BDFA84F696160C82DC56D8FD5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const uint32_t SizeOf_T2_tCB2606A95166CC5D34D54904D606F5CA9504DD44 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_t438E68562562A80BDFA84F696160C82DC56D8FD5);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T2_tCB2606A95166CC5D34D54904D606F5CA9504DD44);
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? ___0_item1 : &___0_item1), SizeOf_T1_t438E68562562A80BDFA84F696160C82DC56D8FD5);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2), L_0, SizeOf_T1_t438E68562562A80BDFA84F696160C82DC56D8FD5);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)) ? ___1_item2 : &___1_item2), SizeOf_T2_tCB2606A95166CC5D34D54904D606F5CA9504DD44);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4), L_1, SizeOf_T2_tCB2606A95166CC5D34D54904D606F5CA9504DD44);
		return;
	}
}
// Method Definition Index: 2088
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_2_Equals_m0D315E199012501CFEE5F0FAABE0DE9CCF1C0082_fshared (Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_obj;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_1;
		L_1 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 2089
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_2_System_Collections_IStructuralEquatable_Equals_m4278C8C38D35221DEA46EF833706A6010BAE92A1_fshared (Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T1_t438E68562562A80BDFA84F696160C82DC56D8FD5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const uint32_t SizeOf_T2_tCB2606A95166CC5D34D54904D606F5CA9504DD44 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T1_t438E68562562A80BDFA84F696160C82DC56D8FD5);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T1_t438E68562562A80BDFA84F696160C82DC56D8FD5);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T2_tCB2606A95166CC5D34D54904D606F5CA9504DD44);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T2_tCB2606A95166CC5D34D54904D606F5CA9504DD44);
	//<source_info:<no-source>:1>
	Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		V_0 = ((Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)));
		Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		RuntimeObject* L_3 = ___1_comparer;
		il2cpp_codegen_memcpy(L_4, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2)), SizeOf_T1_t438E68562562A80BDFA84F696160C82DC56D8FD5);
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), L_4);
		Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* L_6 = V_0;
		il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_field_data_pointer(L_6, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2)), SizeOf_T1_t438E68562562A80BDFA84F696160C82DC56D8FD5);
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), L_7);
		NullCheck(L_3);
		bool L_9;
		L_9 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, L_5, L_8);
		if (!L_9)
		{
			goto IL_004c;
		}
	}
	{
		RuntimeObject* L_10 = ___1_comparer;
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4)), SizeOf_T2_tCB2606A95166CC5D34D54904D606F5CA9504DD44);
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3), L_11);
		Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* L_13 = V_0;
		il2cpp_codegen_memcpy(L_14, il2cpp_codegen_get_field_data_pointer(L_13, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4)), SizeOf_T2_tCB2606A95166CC5D34D54904D606F5CA9504DD44);
		RuntimeObject* L_15 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3), L_14);
		NullCheck(L_10);
		bool L_16;
		L_16 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_10, L_12, L_15);
		return L_16;
	}

IL_004c:
	{
		return (bool)0;
	}
}
// Method Definition Index: 2090
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_System_IComparable_CompareTo_mABED391687D5954EA9A53C5D42D92ACA380C0F99_fshared (Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralComparable_tECDA529F783AB28C827B9345B6A008354E596CED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_obj;
		Comparer_1_t0A03F9FBBEA32FB1528366652D3D38513E8B1137* L_1;
		L_1 = Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F(Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IStructuralComparable_tECDA529F783AB28C827B9345B6A008354E596CED_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 2091
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_System_Collections_IStructuralComparable_CompareTo_m7A8E8C68D22FF305F22F22C36E009489331A8E2F_fshared (Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T1_t438E68562562A80BDFA84F696160C82DC56D8FD5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const uint32_t SizeOf_T2_tCB2606A95166CC5D34D54904D606F5CA9504DD44 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T1_t438E68562562A80BDFA84F696160C82DC56D8FD5);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T1_t438E68562562A80BDFA84F696160C82DC56D8FD5);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T2_tCB2606A95166CC5D34D54904D606F5CA9504DD44);
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_T2_tCB2606A95166CC5D34D54904D606F5CA9504DD44);
	//<source_info:<no-source>:1>
	Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		V_0 = ((Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)));
		Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* L_2 = V_0;
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		NullCheck((RuntimeObject*)__this);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((RuntimeObject*)__this);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_3);
		String_t* L_5;
		L_5 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_002f:
	{
		V_1 = 0;
		RuntimeObject* L_7 = ___1_comparer;
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2)), SizeOf_T1_t438E68562562A80BDFA84F696160C82DC56D8FD5);
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), L_8);
		Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* L_10 = V_0;
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_field_data_pointer(L_10, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2)), SizeOf_T1_t438E68562562A80BDFA84F696160C82DC56D8FD5);
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), L_11);
		NullCheck(L_7);
		int32_t L_13;
		L_13 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_7, L_9, L_12);
		V_1 = L_13;
		int32_t L_14 = V_1;
		if (!L_14)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_15 = V_1;
		return L_15;
	}

IL_0053:
	{
		RuntimeObject* L_16 = ___1_comparer;
		il2cpp_codegen_memcpy(L_17, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4)), SizeOf_T2_tCB2606A95166CC5D34D54904D606F5CA9504DD44);
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3), L_17);
		Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* L_19 = V_0;
		il2cpp_codegen_memcpy(L_20, il2cpp_codegen_get_field_data_pointer(L_19, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4)), SizeOf_T2_tCB2606A95166CC5D34D54904D606F5CA9504DD44);
		RuntimeObject* L_21 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3), L_20);
		NullCheck(L_16);
		int32_t L_22;
		L_22 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_16, L_18, L_21);
		return L_22;
	}
}
// Method Definition Index: 2092
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_GetHashCode_m66044BD161F74E7984107A237781B1B289ADBED4_fshared (Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_0;
		L_0 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0);
		return L_1;
	}
}
// Method Definition Index: 2093
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_System_Collections_IStructuralEquatable_GetHashCode_mF54916BEFDCDE920545FAD9EBE92E040AE962EFA_fshared (Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T1_t438E68562562A80BDFA84F696160C82DC56D8FD5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const uint32_t SizeOf_T2_tCB2606A95166CC5D34D54904D606F5CA9504DD44 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_t438E68562562A80BDFA84F696160C82DC56D8FD5);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T2_tCB2606A95166CC5D34D54904D606F5CA9504DD44);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_comparer;
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2)), SizeOf_T1_t438E68562562A80BDFA84F696160C82DC56D8FD5);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), L_1);
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_0, L_2);
		RuntimeObject* L_4 = ___0_comparer;
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4)), SizeOf_T2_tCB2606A95166CC5D34D54904D606F5CA9504DD44);
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3), L_5);
		NullCheck(L_4);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_4, L_6);
		int32_t L_8;
		L_8 = Tuple_CombineHashCodes_m823D7EC829A9D4FE48FA8B40FBFE6F9DC0092F3C(L_3, L_7, NULL);
		return L_8;
	}
}
// Method Definition Index: 2094
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_2_ToString_m788B9A0A488C9938C7A2051E172223EE47F4DD11_fshared (Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITupleInternal_t44C4B366A2607196290A5ACF23903A91CC8D6F17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	StringBuilder_t* V_0 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, ((int32_t)40), NULL);
		StringBuilder_t* L_3 = V_0;
		NullCheck((RuntimeObject*)__this);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker1< String_t*, StringBuilder_t* >::Invoke(0, ITupleInternal_t44C4B366A2607196290A5ACF23903A91CC8D6F17_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_3);
		return L_4;
	}
}
// Method Definition Index: 2095
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_2_System_ITupleInternal_ToString_m1346E87EB59CD7F225B6A747CB56494F9FF182F4_fshared (Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* __this, StringBuilder_t* ___0_sb, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T1_t438E68562562A80BDFA84F696160C82DC56D8FD5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const uint32_t SizeOf_T2_tCB2606A95166CC5D34D54904D606F5CA9504DD44 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_t438E68562562A80BDFA84F696160C82DC56D8FD5);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T2_tCB2606A95166CC5D34D54904D606F5CA9504DD44);
	//<source_info:<no-source>:1>
	{
		StringBuilder_t* L_0 = ___0_sb;
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2)), SizeOf_T1_t438E68562562A80BDFA84F696160C82DC56D8FD5);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), L_1);
		NullCheck(L_0);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_0, L_2, NULL);
		StringBuilder_t* L_4 = ___0_sb;
		NullCheck(L_4);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_4, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		StringBuilder_t* L_6 = ___0_sb;
		il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4)), SizeOf_T2_tCB2606A95166CC5D34D54904D606F5CA9504DD44);
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3), L_7);
		NullCheck(L_6);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_6, L_8, NULL);
		StringBuilder_t* L_10 = ___0_sb;
		NullCheck(L_10);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_10, ((int32_t)41), NULL);
		StringBuilder_t* L_12 = ___0_sb;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_12);
		return L_13;
	}
}
// Method Definition Index: 2096
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_2_System_Runtime_CompilerServices_ITuple_get_Length_m90E2B5CFA79CBAE5B89A1B148C90A9183E1A6BDC_fshared (Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return 2;
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
// Method Definition Index: 2097
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Tuple_3_get_Item1_m27D39D6462E97DB4266DFD333599A1DD31CE0FE2_gshared (Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = __this->___m_Item1;
		return L_0;
	}
}
// Method Definition Index: 2098
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Tuple_3_get_Item2_m78DBCB1098B966E7A39DEB0AD6CCD8BBA4816051_gshared (Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = __this->___m_Item2;
		return L_0;
	}
}
// Method Definition Index: 2099
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Tuple_3_get_Item3_m4472E10A81AFC88A18996E34FBF055F308AE70FA_gshared (Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = __this->___m_Item3;
		return L_0;
	}
}
// Method Definition Index: 2100
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_3__ctor_m413787D7163635B482B8CB6B959902D16F8A72AD_gshared (Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513* __this, Il2CppSharedGenericObject* ___0_item1, Il2CppSharedGenericObject* ___1_item2, Il2CppSharedGenericObject* ___2_item3, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Il2CppSharedGenericObject* L_0 = ___0_item1;
		__this->___m_Item1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Item1), (void*)L_0);
		Il2CppSharedGenericObject* L_1 = ___1_item2;
		__this->___m_Item2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Item2), (void*)L_1);
		Il2CppSharedGenericObject* L_2 = ___2_item3;
		__this->___m_Item3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Item3), (void*)L_2);
		return;
	}
}
// Method Definition Index: 2101
// Method Definition Index: 2102
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_3_System_Collections_IStructuralEquatable_Equals_m3E4430841D98F3CCEC5352531B6E4EB389E6DC44_gshared (Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		V_0 = ((Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)));
		Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513* L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Il2CppSharedGenericObject* L_4 = __this->___m_Item1;
		Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513* L_5 = V_0;
		NullCheck(L_5);
		Il2CppSharedGenericObject* L_6 = L_5->___m_Item1;
		NullCheck(L_3);
		bool L_7;
		L_7 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, (RuntimeObject*)L_4, (RuntimeObject*)L_6);
		if (!L_7)
		{
			goto IL_006a;
		}
	}
	{
		RuntimeObject* L_8 = ___1_comparer;
		Il2CppSharedGenericObject* L_9 = __this->___m_Item2;
		Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513* L_10 = V_0;
		NullCheck(L_10);
		Il2CppSharedGenericObject* L_11 = L_10->___m_Item2;
		NullCheck(L_8);
		bool L_12;
		L_12 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_8, (RuntimeObject*)L_9, (RuntimeObject*)L_11);
		if (!L_12)
		{
			goto IL_006a;
		}
	}
	{
		RuntimeObject* L_13 = ___1_comparer;
		Il2CppSharedGenericObject* L_14 = __this->___m_Item3;
		Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513* L_15 = V_0;
		NullCheck(L_15);
		Il2CppSharedGenericObject* L_16 = L_15->___m_Item3;
		NullCheck(L_13);
		bool L_17;
		L_17 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_13, (RuntimeObject*)L_14, (RuntimeObject*)L_16);
		return L_17;
	}

IL_006a:
	{
		return (bool)0;
	}
}
// Method Definition Index: 2103
// Method Definition Index: 2104
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_3_System_Collections_IStructuralComparable_CompareTo_mB47D4B8779C7B147BD25BBAD4AFFC074B0064DD7_gshared (Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		V_0 = ((Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)));
		Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513* L_2 = V_0;
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		NullCheck((RuntimeObject*)__this);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((RuntimeObject*)__this);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_3);
		String_t* L_5;
		L_5 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_002f:
	{
		V_1 = 0;
		RuntimeObject* L_7 = ___1_comparer;
		Il2CppSharedGenericObject* L_8 = __this->___m_Item1;
		Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513* L_9 = V_0;
		NullCheck(L_9);
		Il2CppSharedGenericObject* L_10 = L_9->___m_Item1;
		NullCheck(L_7);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_7, (RuntimeObject*)L_8, (RuntimeObject*)L_10);
		V_1 = L_11;
		int32_t L_12 = V_1;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_13 = V_1;
		return L_13;
	}

IL_0053:
	{
		RuntimeObject* L_14 = ___1_comparer;
		Il2CppSharedGenericObject* L_15 = __this->___m_Item2;
		Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513* L_16 = V_0;
		NullCheck(L_16);
		Il2CppSharedGenericObject* L_17 = L_16->___m_Item2;
		NullCheck(L_14);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_14, (RuntimeObject*)L_15, (RuntimeObject*)L_17);
		V_1 = L_18;
		int32_t L_19 = V_1;
		if (!L_19)
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_20 = V_1;
		return L_20;
	}

IL_0075:
	{
		RuntimeObject* L_21 = ___1_comparer;
		Il2CppSharedGenericObject* L_22 = __this->___m_Item3;
		Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513* L_23 = V_0;
		NullCheck(L_23);
		Il2CppSharedGenericObject* L_24 = L_23->___m_Item3;
		NullCheck(L_21);
		int32_t L_25;
		L_25 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_21, (RuntimeObject*)L_22, (RuntimeObject*)L_24);
		return L_25;
	}
}
// Method Definition Index: 2105
// Method Definition Index: 2106
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_3_System_Collections_IStructuralEquatable_GetHashCode_m6EB4F5926C5F1B9A7AFDBB8E59230CE070A06936_gshared (Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_comparer;
		Il2CppSharedGenericObject* L_1 = __this->___m_Item1;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_0, (RuntimeObject*)L_1);
		RuntimeObject* L_3 = ___0_comparer;
		Il2CppSharedGenericObject* L_4 = __this->___m_Item2;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, (RuntimeObject*)L_4);
		RuntimeObject* L_6 = ___0_comparer;
		Il2CppSharedGenericObject* L_7 = __this->___m_Item3;
		NullCheck(L_6);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_6, (RuntimeObject*)L_7);
		int32_t L_9;
		L_9 = Tuple_CombineHashCodes_mE2699A82EC949B2BDC6E5F34C1B73BAF6C613E50(L_2, L_5, L_8, NULL);
		return L_9;
	}
}
// Method Definition Index: 2107
// Method Definition Index: 2108
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_3_System_ITupleInternal_ToString_m6DBBA7D5490FCC9BA1673E77E680691438861701_gshared (Tuple_3_t35024A24DE329E081A3209592B3CC9E486807513* __this, StringBuilder_t* ___0_sb, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		StringBuilder_t* L_0 = ___0_sb;
		Il2CppSharedGenericObject* L_1 = __this->___m_Item1;
		NullCheck(L_0);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_0, (RuntimeObject*)L_1, NULL);
		StringBuilder_t* L_3 = ___0_sb;
		NullCheck(L_3);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_3, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		StringBuilder_t* L_5 = ___0_sb;
		Il2CppSharedGenericObject* L_6 = __this->___m_Item2;
		NullCheck(L_5);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_5, (RuntimeObject*)L_6, NULL);
		StringBuilder_t* L_8 = ___0_sb;
		NullCheck(L_8);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		StringBuilder_t* L_10 = ___0_sb;
		Il2CppSharedGenericObject* L_11 = __this->___m_Item3;
		NullCheck(L_10);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_10, (RuntimeObject*)L_11, NULL);
		StringBuilder_t* L_13 = ___0_sb;
		NullCheck(L_13);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_13, ((int32_t)41), NULL);
		StringBuilder_t* L_15 = ___0_sb;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_15);
		return L_16;
	}
}
// Method Definition Index: 2109
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 2097
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_3_get_Item1_m617AD393E718884D34C55403F32760EA5325A2D5_fshared (Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T1_tD64A71BDFEE347C86CB3382D84F07323354BBEF3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_tD64A71BDFEE347C86CB3382D84F07323354BBEF3);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2)), SizeOf_T1_tD64A71BDFEE347C86CB3382D84F07323354BBEF3);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T1_tD64A71BDFEE347C86CB3382D84F07323354BBEF3);
		return;
	}
}
// Method Definition Index: 2098
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_3_get_Item2_mAF8E8EBC80FE9377431466D6353576F007C24DA7_fshared (Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T2_t598EEAC448647F6536C391F0F0B746312A4A8E23 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T2_t598EEAC448647F6536C391F0F0B746312A4A8E23);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4)), SizeOf_T2_t598EEAC448647F6536C391F0F0B746312A4A8E23);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T2_t598EEAC448647F6536C391F0F0B746312A4A8E23);
		return;
	}
}
// Method Definition Index: 2099
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_3_get_Item3_mCA65B3EAEF33A0500D92CAC7435D30255A80D947_fshared (Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T3_tCB9B62B11262BA42FC577E159F7A5828210C8843 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T3_tCB9B62B11262BA42FC577E159F7A5828210C8843);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6)), SizeOf_T3_tCB9B62B11262BA42FC577E159F7A5828210C8843);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T3_tCB9B62B11262BA42FC577E159F7A5828210C8843);
		return;
	}
}
// Method Definition Index: 2100
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_3__ctor_mAE8EC256544A8ED26E38C8D9E10A08E6905E136A_fshared (Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* __this, Il2CppFullySharedGenericAny ___0_item1, Il2CppFullySharedGenericAny ___1_item2, Il2CppFullySharedGenericAny ___2_item3, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T1_tD64A71BDFEE347C86CB3382D84F07323354BBEF3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const uint32_t SizeOf_T2_t598EEAC448647F6536C391F0F0B746312A4A8E23 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
	const uint32_t SizeOf_T3_tCB9B62B11262BA42FC577E159F7A5828210C8843 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_tD64A71BDFEE347C86CB3382D84F07323354BBEF3);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T2_t598EEAC448647F6536C391F0F0B746312A4A8E23);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T3_tCB9B62B11262BA42FC577E159F7A5828210C8843);
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? ___0_item1 : &___0_item1), SizeOf_T1_tD64A71BDFEE347C86CB3382D84F07323354BBEF3);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2), L_0, SizeOf_T1_tD64A71BDFEE347C86CB3382D84F07323354BBEF3);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)) ? ___1_item2 : &___1_item2), SizeOf_T2_t598EEAC448647F6536C391F0F0B746312A4A8E23);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4), L_1, SizeOf_T2_t598EEAC448647F6536C391F0F0B746312A4A8E23);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? ___2_item3 : &___2_item3), SizeOf_T3_tCB9B62B11262BA42FC577E159F7A5828210C8843);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6), L_2, SizeOf_T3_tCB9B62B11262BA42FC577E159F7A5828210C8843);
		return;
	}
}
// Method Definition Index: 2101
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_3_Equals_m48FF43FA496512EA8DBEBCE8AB89786C174A8E72_fshared (Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_obj;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_1;
		L_1 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 2102
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tuple_3_System_Collections_IStructuralEquatable_Equals_m9041C5548BDACB86EC398B811A6AB2073F3FA202_fshared (Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T1_tD64A71BDFEE347C86CB3382D84F07323354BBEF3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const uint32_t SizeOf_T2_t598EEAC448647F6536C391F0F0B746312A4A8E23 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
	const uint32_t SizeOf_T3_tCB9B62B11262BA42FC577E159F7A5828210C8843 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T1_tD64A71BDFEE347C86CB3382D84F07323354BBEF3);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T1_tD64A71BDFEE347C86CB3382D84F07323354BBEF3);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T2_t598EEAC448647F6536C391F0F0B746312A4A8E23);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T2_t598EEAC448647F6536C391F0F0B746312A4A8E23);
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T3_tCB9B62B11262BA42FC577E159F7A5828210C8843);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T3_tCB9B62B11262BA42FC577E159F7A5828210C8843);
	//<source_info:<no-source>:1>
	Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		V_0 = ((Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)));
		Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		RuntimeObject* L_3 = ___1_comparer;
		il2cpp_codegen_memcpy(L_4, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2)), SizeOf_T1_tD64A71BDFEE347C86CB3382D84F07323354BBEF3);
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), L_4);
		Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* L_6 = V_0;
		il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_field_data_pointer(L_6, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2)), SizeOf_T1_tD64A71BDFEE347C86CB3382D84F07323354BBEF3);
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), L_7);
		NullCheck(L_3);
		bool L_9;
		L_9 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, L_5, L_8);
		if (!L_9)
		{
			goto IL_006a;
		}
	}
	{
		RuntimeObject* L_10 = ___1_comparer;
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4)), SizeOf_T2_t598EEAC448647F6536C391F0F0B746312A4A8E23);
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3), L_11);
		Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* L_13 = V_0;
		il2cpp_codegen_memcpy(L_14, il2cpp_codegen_get_field_data_pointer(L_13, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4)), SizeOf_T2_t598EEAC448647F6536C391F0F0B746312A4A8E23);
		RuntimeObject* L_15 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3), L_14);
		NullCheck(L_10);
		bool L_16;
		L_16 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_10, L_12, L_15);
		if (!L_16)
		{
			goto IL_006a;
		}
	}
	{
		RuntimeObject* L_17 = ___1_comparer;
		il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6)), SizeOf_T3_tCB9B62B11262BA42FC577E159F7A5828210C8843);
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5), L_18);
		Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* L_20 = V_0;
		il2cpp_codegen_memcpy(L_21, il2cpp_codegen_get_field_data_pointer(L_20, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6)), SizeOf_T3_tCB9B62B11262BA42FC577E159F7A5828210C8843);
		RuntimeObject* L_22 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5), L_21);
		NullCheck(L_17);
		bool L_23;
		L_23 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_17, L_19, L_22);
		return L_23;
	}

IL_006a:
	{
		return (bool)0;
	}
}
// Method Definition Index: 2103
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_3_System_IComparable_CompareTo_m720F0A66A8C9749026F98CDAFE19B05BCB61A0F9_fshared (Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralComparable_tECDA529F783AB28C827B9345B6A008354E596CED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_obj;
		Comparer_1_t0A03F9FBBEA32FB1528366652D3D38513E8B1137* L_1;
		L_1 = Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F(Comparer_1_get_Default_mBE201B8DE0399BC709123B087F2215883366753F_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IStructuralComparable_tECDA529F783AB28C827B9345B6A008354E596CED_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 2104
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_3_System_Collections_IStructuralComparable_CompareTo_m42F0BA676691B76B82BE90BE3D7AC928727DE929_fshared (Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T1_tD64A71BDFEE347C86CB3382D84F07323354BBEF3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const uint32_t SizeOf_T2_t598EEAC448647F6536C391F0F0B746312A4A8E23 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
	const uint32_t SizeOf_T3_tCB9B62B11262BA42FC577E159F7A5828210C8843 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T1_tD64A71BDFEE347C86CB3382D84F07323354BBEF3);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T1_tD64A71BDFEE347C86CB3382D84F07323354BBEF3);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T2_t598EEAC448647F6536C391F0F0B746312A4A8E23);
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_T2_t598EEAC448647F6536C391F0F0B746312A4A8E23);
	const Il2CppFullySharedGenericAny L_26 = alloca(SizeOf_T3_tCB9B62B11262BA42FC577E159F7A5828210C8843);
	const Il2CppFullySharedGenericAny L_29 = alloca(SizeOf_T3_tCB9B62B11262BA42FC577E159F7A5828210C8843);
	//<source_info:<no-source>:1>
	Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		V_0 = ((Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB*)IsInstClass((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)));
		Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* L_2 = V_0;
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		NullCheck((RuntimeObject*)__this);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((RuntimeObject*)__this);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_3);
		String_t* L_5;
		L_5 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_002f:
	{
		V_1 = 0;
		RuntimeObject* L_7 = ___1_comparer;
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2)), SizeOf_T1_tD64A71BDFEE347C86CB3382D84F07323354BBEF3);
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), L_8);
		Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* L_10 = V_0;
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_field_data_pointer(L_10, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2)), SizeOf_T1_tD64A71BDFEE347C86CB3382D84F07323354BBEF3);
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), L_11);
		NullCheck(L_7);
		int32_t L_13;
		L_13 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_7, L_9, L_12);
		V_1 = L_13;
		int32_t L_14 = V_1;
		if (!L_14)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_15 = V_1;
		return L_15;
	}

IL_0053:
	{
		RuntimeObject* L_16 = ___1_comparer;
		il2cpp_codegen_memcpy(L_17, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4)), SizeOf_T2_t598EEAC448647F6536C391F0F0B746312A4A8E23);
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3), L_17);
		Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* L_19 = V_0;
		il2cpp_codegen_memcpy(L_20, il2cpp_codegen_get_field_data_pointer(L_19, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4)), SizeOf_T2_t598EEAC448647F6536C391F0F0B746312A4A8E23);
		RuntimeObject* L_21 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3), L_20);
		NullCheck(L_16);
		int32_t L_22;
		L_22 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_16, L_18, L_21);
		V_1 = L_22;
		int32_t L_23 = V_1;
		if (!L_23)
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_24 = V_1;
		return L_24;
	}

IL_0075:
	{
		RuntimeObject* L_25 = ___1_comparer;
		il2cpp_codegen_memcpy(L_26, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6)), SizeOf_T3_tCB9B62B11262BA42FC577E159F7A5828210C8843);
		RuntimeObject* L_27 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5), L_26);
		Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* L_28 = V_0;
		il2cpp_codegen_memcpy(L_29, il2cpp_codegen_get_field_data_pointer(L_28, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6)), SizeOf_T3_tCB9B62B11262BA42FC577E159F7A5828210C8843);
		RuntimeObject* L_30 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5), L_29);
		NullCheck(L_25);
		int32_t L_31;
		L_31 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_25, L_27, L_30);
		return L_31;
	}
}
// Method Definition Index: 2105
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_3_GetHashCode_m9EA5378A7E64CC482F3575E1B9D836D3E15FFADC_fshared (Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_0;
		L_0 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_RuntimeMethod_var);
		NullCheck((RuntimeObject*)__this);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IStructuralEquatable_t418AE72513EEB0F5AA3521C6FD2160BBC92580A9_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0);
		return L_1;
	}
}
// Method Definition Index: 2106
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_3_System_Collections_IStructuralEquatable_GetHashCode_m39E21BCD54B72C3D96562E142A19CF3F3F7912E0_fshared (Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T1_tD64A71BDFEE347C86CB3382D84F07323354BBEF3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const uint32_t SizeOf_T2_t598EEAC448647F6536C391F0F0B746312A4A8E23 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
	const uint32_t SizeOf_T3_tCB9B62B11262BA42FC577E159F7A5828210C8843 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_tD64A71BDFEE347C86CB3382D84F07323354BBEF3);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T2_t598EEAC448647F6536C391F0F0B746312A4A8E23);
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T3_tCB9B62B11262BA42FC577E159F7A5828210C8843);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_comparer;
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2)), SizeOf_T1_tD64A71BDFEE347C86CB3382D84F07323354BBEF3);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), L_1);
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_0, L_2);
		RuntimeObject* L_4 = ___0_comparer;
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4)), SizeOf_T2_t598EEAC448647F6536C391F0F0B746312A4A8E23);
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3), L_5);
		NullCheck(L_4);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_4, L_6);
		RuntimeObject* L_8 = ___0_comparer;
		il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6)), SizeOf_T3_tCB9B62B11262BA42FC577E159F7A5828210C8843);
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5), L_9);
		NullCheck(L_8);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_8, L_10);
		int32_t L_12;
		L_12 = Tuple_CombineHashCodes_mE2699A82EC949B2BDC6E5F34C1B73BAF6C613E50(L_3, L_7, L_11, NULL);
		return L_12;
	}
}
// Method Definition Index: 2107
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_3_ToString_m3C1DB63D618CDE9927AB213A76AA5506ACB243CC_fshared (Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITupleInternal_t44C4B366A2607196290A5ACF23903A91CC8D6F17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	StringBuilder_t* V_0 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, ((int32_t)40), NULL);
		StringBuilder_t* L_3 = V_0;
		NullCheck((RuntimeObject*)__this);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker1< String_t*, StringBuilder_t* >::Invoke(0, ITupleInternal_t44C4B366A2607196290A5ACF23903A91CC8D6F17_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_3);
		return L_4;
	}
}
// Method Definition Index: 2108
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Tuple_3_System_ITupleInternal_ToString_m12D09516C5EB2A9BA7693C13F937A6F634B1F693_fshared (Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* __this, StringBuilder_t* ___0_sb, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T1_tD64A71BDFEE347C86CB3382D84F07323354BBEF3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const uint32_t SizeOf_T2_t598EEAC448647F6536C391F0F0B746312A4A8E23 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
	const uint32_t SizeOf_T3_tCB9B62B11262BA42FC577E159F7A5828210C8843 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_tD64A71BDFEE347C86CB3382D84F07323354BBEF3);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T2_t598EEAC448647F6536C391F0F0B746312A4A8E23);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T3_tCB9B62B11262BA42FC577E159F7A5828210C8843);
	//<source_info:<no-source>:1>
	{
		StringBuilder_t* L_0 = ___0_sb;
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 2)), SizeOf_T1_tD64A71BDFEE347C86CB3382D84F07323354BBEF3);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), L_1);
		NullCheck(L_0);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_0, L_2, NULL);
		StringBuilder_t* L_4 = ___0_sb;
		NullCheck(L_4);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_4, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		StringBuilder_t* L_6 = ___0_sb;
		il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4)), SizeOf_T2_t598EEAC448647F6536C391F0F0B746312A4A8E23);
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3), L_7);
		NullCheck(L_6);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_6, L_8, NULL);
		StringBuilder_t* L_10 = ___0_sb;
		NullCheck(L_10);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_10, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		StringBuilder_t* L_12 = ___0_sb;
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6)), SizeOf_T3_tCB9B62B11262BA42FC577E159F7A5828210C8843);
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5), L_13);
		NullCheck(L_12);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_12, L_14, NULL);
		StringBuilder_t* L_16 = ___0_sb;
		NullCheck(L_16);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_16, ((int32_t)41), NULL);
		StringBuilder_t* L_18 = ___0_sb;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_18);
		return L_19;
	}
}
// Method Definition Index: 2109
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tuple_3_System_Runtime_CompilerServices_ITuple_get_Length_m8C542888CF87965704B55ACEF2C50DBC59F0F942_fshared (Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return 3;
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
// Method Definition Index: 28413
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenJobData_1_get_stateTransitionAmountFloat_mE1CF2FE9E8A0DD1E3595B8077AD3E892C103E0D6 (TweenJobData_1_t9932452930B7CDE5DC4DA408B50B8E4C7A3AAFB7* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		uint8_t L_0 = __this->___stateTransitionIncrement;
		float L_1 = (il2cpp_codegen_conv<float,uint8_t,int32_t,false,false>(L_0,NULL));
		return ((float)(L_1/(255.0f)));
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
// Method Definition Index: 28413
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenJobData_1_get_stateTransitionAmountFloat_mE222959BD75937C4DCA1A7F1EF540EB9635402FC (TweenJobData_1_t06FAD94FCA49A795B22C7FA2EA018F83E450B97E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		uint8_t L_0 = __this->___stateTransitionIncrement;
		float L_1 = (il2cpp_codegen_conv<float,uint8_t,int32_t,false,false>(L_0,NULL));
		return ((float)(L_1/(255.0f)));
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
// Method Definition Index: 28413
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenJobData_1_get_stateTransitionAmountFloat_mDA489517013C24F14A8B0A404623617E9B234D11_fshared (TweenJobData_1_t304A968236DFE46B649BFB8929A78966DA601B83* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		uint8_t L_0 = *(uint8_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		float L_1 = (il2cpp_codegen_conv<float,uint8_t,int32_t,false,false>(L_0,NULL));
		return ((float)(L_1/(255.0f)));
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
// Method Definition Index: 28413
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenJobData_1_get_stateTransitionAmountFloat_m05FFD785EBE14444F1DC16445FD2622EB9ECAE4E (TweenJobData_1_tC12AA11A847D9ABA7DDDBAD9A71E05808BECD131* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		uint8_t L_0 = __this->___stateTransitionIncrement;
		float L_1 = (il2cpp_codegen_conv<float,uint8_t,int32_t,false,false>(L_0,NULL));
		return ((float)(L_1/(255.0f)));
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
// Method Definition Index: 28413
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenJobData_1_get_stateTransitionAmountFloat_m4C0522B14C43F3EE40EB03CDC66CACED7FE17451 (TweenJobData_1_t934CE1645618038AB80D1E8767C3E96A47371ADC* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		uint8_t L_0 = __this->___stateTransitionIncrement;
		float L_1 = (il2cpp_codegen_conv<float,uint8_t,int32_t,false,false>(L_0,NULL));
		return ((float)(L_1/(255.0f)));
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
// Method Definition Index: 28413
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenJobData_1_get_stateTransitionAmountFloat_m897F92DF4730A91F89E740355A426FA22EE75C9F (TweenJobData_1_tCBC6BEBC1156C8C2517800A02E82EAD727A83415* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		uint8_t L_0 = __this->___stateTransitionIncrement;
		float L_1 = (il2cpp_codegen_conv<float,uint8_t,int32_t,false,false>(L_0,NULL));
		return ((float)(L_1/(255.0f)));
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
// Method Definition Index: 53051
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenRunner_1_Start_m8F517B7356D09DB3B885AC627C1B11853F0F4E3B (FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE ___0_tweenInfo, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		U3CStartU3Ed__2_tC9423255CD49C2088D279B9AA846474D4B59D80D* L_0 = (U3CStartU3Ed__2_tC9423255CD49C2088D279B9AA846474D4B59D80D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		U3CStartU3Ed__2__ctor_m204C7F34151276EE628D17B5C5DECF463BFE649C(L_0, 0, NULL);
		U3CStartU3Ed__2_tC9423255CD49C2088D279B9AA846474D4B59D80D* L_1 = L_0;
		FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE L_2 = ___0_tweenInfo;
		NullCheck(L_1);
		L_1->___tweenInfo = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___tweenInfo))->___m_Target), (void*)NULL);
		return L_1;
	}
}
// Method Definition Index: 53052
// Method Definition Index: 53053
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StartTween_mB94926E3AF23ED3A6EFC8727B6359949BD689DD6 (TweenRunner_1_tF277B20625C8B1939DC85508C4679C690757395E* __this, FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE ___0_info, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE4A57F56A51C577CDB9BA98303B39F3486090F7);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticInit);
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	//<source_info:<no-source>:1>
	{
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = __this->___m_CoroutineContainer;
		CHECKED_LOCAL_INIT(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticInit,(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralBE4A57F56A51C577CDB9BA98303B39F3486090F7, NULL);
		return;
	}

IL_0019:
	{
		TweenRunner_1_StopTween_m6C1159C7A8EDF8A363CD82CBA503E234870826F0(__this, NULL);
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_2 = __this->___m_CoroutineContainer;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_3, NULL);
		if (L_4)
		{
			goto IL_0044;
		}
	}
	{
		FloatTween_TweenValue_m022D385B013439E2FB8020F6A6BD329CECA81E89((&___0_info), (1.0f), NULL);
		return;
	}

IL_0044:
	{
		FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE L_5 = ___0_info;
		RuntimeObject* L_6;
		L_6 = TweenRunner_1_Start_m8F517B7356D09DB3B885AC627C1B11853F0F4E3B(L_5, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6));
		__this->___m_Tween = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Tween), (void*)L_6);
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_7 = __this->___m_CoroutineContainer;
		RuntimeObject* L_8 = __this->___m_Tween;
		NullCheck(L_7);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_9;
		L_9 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_7, L_8, NULL);
		return;
	}
}
// Method Definition Index: 53054
// Method Definition Index: 53055
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 53051
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenRunner_1_Start_m6312DA299DB0D9BEB8A36EB3460648C3ACC364E3_fshared (Il2CppFullySharedGenericStruct ___0_tweenInfo, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tF89D3C06555F6DCA35317A31A8C999F9341C1008 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_tF89D3C06555F6DCA35317A31A8C999F9341C1008);
	//<source_info:<no-source>:1>
	{
		U3CStartU3Ed__2_t1568C5BC91DF861B9E8D83BD27BF6FB38F40D685* L_0 = (U3CStartU3Ed__2_t1568C5BC91DF861B9E8D83BD27BF6FB38F40D685*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		((  void (*) (U3CStartU3Ed__2_t1568C5BC91DF861B9E8D83BD27BF6FB38F40D685*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))(L_0, 0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		U3CStartU3Ed__2_t1568C5BC91DF861B9E8D83BD27BF6FB38F40D685* L_1 = L_0;
		il2cpp_codegen_memcpy(L_2, ___0_tweenInfo, SizeOf_T_tF89D3C06555F6DCA35317A31A8C999F9341C1008);
		NullCheck(L_1);
		il2cpp_codegen_write_field_data<true>(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_2, SizeOf_T_tF89D3C06555F6DCA35317A31A8C999F9341C1008);
		return (RuntimeObject*)L_1;
	}
}
// Method Definition Index: 53052
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_Init_m4C73AEECA1DCB09E3A9A227C275B2E24C1CEF192_fshared (TweenRunner_1_t506331CFBEF4B7DD78419718F858F743187D08F0* __this, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___0_coroutineContainer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = ___0_coroutineContainer;
		__this->___m_CoroutineContainer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CoroutineContainer), (void*)L_0);
		return;
	}
}
// Method Definition Index: 53053
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StartTween_mB084CC7F3B3370EEE23B3FA8707DBFEFEB3BAB5D_fshared (TweenRunner_1_t506331CFBEF4B7DD78419718F858F743187D08F0* __this, Il2CppFullySharedGenericStruct ___0_info, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE4A57F56A51C577CDB9BA98303B39F3486090F7);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticInit);
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)));
	const uint32_t SizeOf_T_tF89D3C06555F6DCA35317A31A8C999F9341C1008 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericStruct L_9 = alloca(SizeOf_T_tF89D3C06555F6DCA35317A31A8C999F9341C1008);
	//<source_info:<no-source>:1>
	{
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = __this->___m_CoroutineContainer;
		CHECKED_LOCAL_INIT(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticInit,(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralBE4A57F56A51C577CDB9BA98303B39F3486090F7, NULL);
		return;
	}

IL_0019:
	{
		((  void (*) (TweenRunner_1_t506331CFBEF4B7DD78419718F858F743187D08F0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4)))(__this, NULL);
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_2 = __this->___m_CoroutineContainer;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_3, NULL);
		if (L_4)
		{
			goto IL_0044;
		}
	}
	{
		Il2CppConstrainedCallData L_6;
		Il2CppMethodPointer L_7 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5), (void*)(Il2CppFullySharedGenericStruct*)___0_info, &L_6, L_5);
		typedef void ( *func_L_8)(void*,float,const RuntimeMethod*);
		((func_L_8)L_7)(L_6.thisPtr, (1.0f),L_6.method);
		return;
	}

IL_0044:
	{
		il2cpp_codegen_memcpy(L_9, ___0_info, SizeOf_T_tF89D3C06555F6DCA35317A31A8C999F9341C1008);
		RuntimeObject* L_10;
		L_10 = InvokerFuncInvoker1< RuntimeObject*, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6), NULL, L_9);
		__this->___m_Tween = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Tween), (void*)L_10);
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_11 = __this->___m_CoroutineContainer;
		RuntimeObject* L_12 = __this->___m_Tween;
		NullCheck(L_11);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_13;
		L_13 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_11, L_12, NULL);
		return;
	}
}
// Method Definition Index: 53054
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StopTween_m782348E0451FB7594F045055A50CDD9DB0C4CE8B_fshared (TweenRunner_1_t506331CFBEF4B7DD78419718F858F743187D08F0* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___m_Tween;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_1 = __this->___m_CoroutineContainer;
		RuntimeObject* L_2 = __this->___m_Tween;
		NullCheck(L_1);
		MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A(L_1, L_2, NULL);
		__this->___m_Tween = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Tween), (void*)(RuntimeObject*)NULL);
	}

IL_0020:
	{
		return;
	}
}
// Method Definition Index: 53055
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1__ctor_mFFBA8A1394D4E000DF6BA61EF59C56273D84DEBC_fshared (TweenRunner_1_t506331CFBEF4B7DD78419718F858F743187D08F0* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
// Method Definition Index: 60626
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenRunner_1_Start_mB20C8AE701784E49515475A471050D8440D444CF (ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7 ___0_tweenInfo, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		U3CStartU3Ed__2_t9658309751B877709F2F33E5F2E46BE104025E47* L_0 = (U3CStartU3Ed__2_t9658309751B877709F2F33E5F2E46BE104025E47*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		U3CStartU3Ed__2__ctor_m0F5A38D7B55D76D7DD1A22C7D2346C87C12C2BC7(L_0, 0, NULL);
		U3CStartU3Ed__2_t9658309751B877709F2F33E5F2E46BE104025E47* L_1 = L_0;
		ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7 L_2 = ___0_tweenInfo;
		NullCheck(L_1);
		L_1->___tweenInfo = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___tweenInfo))->___m_Target), (void*)NULL);
		return L_1;
	}
}
// Method Definition Index: 60627
// Method Definition Index: 60628
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StartTween_m0D1D370495FF04A6F09D1459E5A03ADB2BB2236D (TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* __this, ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7 ___0_info, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE4A57F56A51C577CDB9BA98303B39F3486090F7);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticInit);
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	//<source_info:<no-source>:1>
	{
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = __this->___m_CoroutineContainer;
		CHECKED_LOCAL_INIT(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticInit,(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralBE4A57F56A51C577CDB9BA98303B39F3486090F7, NULL);
		return;
	}

IL_0019:
	{
		TweenRunner_1_StopTween_m1807F7EC3FF55749912B8EBE4951AEC367ED799D(__this, NULL);
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_2 = __this->___m_CoroutineContainer;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_3, NULL);
		if (L_4)
		{
			goto IL_0044;
		}
	}
	{
		ColorTween_TweenValue_mF5CBA9BDE7F73E47F9CF26DC4EC2419694049860((&___0_info), (1.0f), NULL);
		return;
	}

IL_0044:
	{
		ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7 L_5 = ___0_info;
		RuntimeObject* L_6;
		L_6 = TweenRunner_1_Start_mB20C8AE701784E49515475A471050D8440D444CF(L_5, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6));
		__this->___m_Tween = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Tween), (void*)L_6);
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_7 = __this->___m_CoroutineContainer;
		RuntimeObject* L_8 = __this->___m_Tween;
		NullCheck(L_7);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_9;
		L_9 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_7, L_8, NULL);
		return;
	}
}
// Method Definition Index: 60629
// Method Definition Index: 60630
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 60626
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenRunner_1_Start_m4F400F2F86055B01EF66839CA607B07908E4FC7D (FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A ___0_tweenInfo, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		U3CStartU3Ed__2_t623C57A50EEA01089DB79D6F1F1217F89E158FEB* L_0 = (U3CStartU3Ed__2_t623C57A50EEA01089DB79D6F1F1217F89E158FEB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		U3CStartU3Ed__2__ctor_mD1B548DCCF5485603C6FB4E9EB5431232DD5B8D0(L_0, 0, NULL);
		U3CStartU3Ed__2_t623C57A50EEA01089DB79D6F1F1217F89E158FEB* L_1 = L_0;
		FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A L_2 = ___0_tweenInfo;
		NullCheck(L_1);
		L_1->___tweenInfo = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___tweenInfo))->___m_Target), (void*)NULL);
		return L_1;
	}
}
// Method Definition Index: 60627
// Method Definition Index: 60628
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StartTween_mA2C386A4A22A6F801A31585E13B10AF4E4FEC2D0 (TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B* __this, FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A ___0_info, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE4A57F56A51C577CDB9BA98303B39F3486090F7);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticInit);
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	//<source_info:<no-source>:1>
	{
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = __this->___m_CoroutineContainer;
		CHECKED_LOCAL_INIT(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticInit,(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralBE4A57F56A51C577CDB9BA98303B39F3486090F7, NULL);
		return;
	}

IL_0019:
	{
		TweenRunner_1_StopTween_m013CE2AC05F13597F080CDEA23E87CD3FBE422C9(__this, NULL);
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_2 = __this->___m_CoroutineContainer;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_3, NULL);
		if (L_4)
		{
			goto IL_0044;
		}
	}
	{
		FloatTween_TweenValue_mE51344369BDDA58E9C3AEC62E1B1C1AC0349278E((&___0_info), (1.0f), NULL);
		return;
	}

IL_0044:
	{
		FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A L_5 = ___0_info;
		RuntimeObject* L_6;
		L_6 = TweenRunner_1_Start_m4F400F2F86055B01EF66839CA607B07908E4FC7D(L_5, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6));
		__this->___m_Tween = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Tween), (void*)L_6);
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_7 = __this->___m_CoroutineContainer;
		RuntimeObject* L_8 = __this->___m_Tween;
		NullCheck(L_7);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_9;
		L_9 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_7, L_8, NULL);
		return;
	}
}
// Method Definition Index: 60629
// Method Definition Index: 60630
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 60626
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenRunner_1_Start_mAD6D18FE44D639E3EC2EEF54E3FD2EA502532259_fshared (Il2CppFullySharedGenericStruct ___0_tweenInfo, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tDD41B39C2629C5EB98444C2FDDAFD12366A424ED = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_tDD41B39C2629C5EB98444C2FDDAFD12366A424ED);
	//<source_info:<no-source>:1>
	{
		U3CStartU3Ed__2_tBF82820C779B852A606DE0B61E09B9EB4A27F942* L_0 = (U3CStartU3Ed__2_tBF82820C779B852A606DE0B61E09B9EB4A27F942*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		((  void (*) (U3CStartU3Ed__2_tBF82820C779B852A606DE0B61E09B9EB4A27F942*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))(L_0, 0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		U3CStartU3Ed__2_tBF82820C779B852A606DE0B61E09B9EB4A27F942* L_1 = L_0;
		il2cpp_codegen_memcpy(L_2, ___0_tweenInfo, SizeOf_T_tDD41B39C2629C5EB98444C2FDDAFD12366A424ED);
		NullCheck(L_1);
		il2cpp_codegen_write_field_data<true>(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_2, SizeOf_T_tDD41B39C2629C5EB98444C2FDDAFD12366A424ED);
		return (RuntimeObject*)L_1;
	}
}
// Method Definition Index: 60627
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_Init_m3980930C9280CE825270CE506C21109D5ABC67BA_fshared (TweenRunner_1_tA3E6EB0834EDD64BCDE6943EAFE03D0522926859* __this, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___0_coroutineContainer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = ___0_coroutineContainer;
		__this->___m_CoroutineContainer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CoroutineContainer), (void*)L_0);
		return;
	}
}
// Method Definition Index: 60628
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StartTween_m92B806933AECC7A78982E834DFB5E0A6B4699242_fshared (TweenRunner_1_tA3E6EB0834EDD64BCDE6943EAFE03D0522926859* __this, Il2CppFullySharedGenericStruct ___0_info, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE4A57F56A51C577CDB9BA98303B39F3486090F7);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticInit);
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)));
	const uint32_t SizeOf_T_tDD41B39C2629C5EB98444C2FDDAFD12366A424ED = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericStruct L_9 = alloca(SizeOf_T_tDD41B39C2629C5EB98444C2FDDAFD12366A424ED);
	//<source_info:<no-source>:1>
	{
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_0 = __this->___m_CoroutineContainer;
		CHECKED_LOCAL_INIT(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticInit,(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralBE4A57F56A51C577CDB9BA98303B39F3486090F7, NULL);
		return;
	}

IL_0019:
	{
		((  void (*) (TweenRunner_1_tA3E6EB0834EDD64BCDE6943EAFE03D0522926859*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4)))(__this, NULL);
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_2 = __this->___m_CoroutineContainer;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_3, NULL);
		if (L_4)
		{
			goto IL_0044;
		}
	}
	{
		Il2CppConstrainedCallData L_6;
		Il2CppMethodPointer L_7 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5), (void*)(Il2CppFullySharedGenericStruct*)___0_info, &L_6, L_5);
		typedef void ( *func_L_8)(void*,float,const RuntimeMethod*);
		((func_L_8)L_7)(L_6.thisPtr, (1.0f),L_6.method);
		return;
	}

IL_0044:
	{
		il2cpp_codegen_memcpy(L_9, ___0_info, SizeOf_T_tDD41B39C2629C5EB98444C2FDDAFD12366A424ED);
		RuntimeObject* L_10;
		L_10 = InvokerFuncInvoker1< RuntimeObject*, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6), NULL, L_9);
		__this->___m_Tween = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Tween), (void*)L_10);
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_11 = __this->___m_CoroutineContainer;
		RuntimeObject* L_12 = __this->___m_Tween;
		NullCheck(L_11);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_13;
		L_13 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_11, L_12, NULL);
		return;
	}
}
// Method Definition Index: 60629
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1_StopTween_m37DB99A9B05E536CF04651C57196ED6049325A1B_fshared (TweenRunner_1_tA3E6EB0834EDD64BCDE6943EAFE03D0522926859* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___m_Tween;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_1 = __this->___m_CoroutineContainer;
		RuntimeObject* L_2 = __this->___m_Tween;
		NullCheck(L_1);
		MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A(L_1, L_2, NULL);
		__this->___m_Tween = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Tween), (void*)(RuntimeObject*)NULL);
	}

IL_0020:
	{
		return;
	}
}
// Method Definition Index: 60630
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenRunner_1__ctor_mE3994FDD511664B82F731F3F7DB4F2E67217ED38_fshared (TweenRunner_1_tA3E6EB0834EDD64BCDE6943EAFE03D0522926859* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
// Method Definition Index: 22327
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TweenableVariableAsyncBase_1_get_Value_m3F6D28E6F4A54D8F3A8B322A0C6842CF26F612D5 (TweenableVariableAsyncBase_1_t84B7FBBAD5BE9B483A1DF99D3C2F93356D430055* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = BindableVariableBase_1_get_Value_m91CB4186D9501A8357D89A87382E0AA9662E151E_inline(__this, NULL);
		return L_0;
	}
}
// Method Definition Index: 22328
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_set_Value_mA984A18E47D276CFA7055D0E8E85C4953AC73E81 (TweenableVariableAsyncBase_1_t84B7FBBAD5BE9B483A1DF99D3C2F93356D430055* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___m_HasJobPending;
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		bool L_1 = __this->___m_OutputInitialized;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		bool L_2;
		L_2 = TweenableVariableAsyncBase_1_CompleteJob_mBDA4CB462843B515FFFF357F91A6206266EEFEA5(__this, NULL);
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* L_3 = (NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D*)(&__this->___m_JobOutputStore);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___0_value;
		IL2CPP_NATIVEARRAY_SET_ITEM(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (L_3)->___m_Buffer, 0, (L_4));
	}

IL_0024:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___0_value;
		BindableVariableBase_1_set_Value_mFE4F8368B3DD3CFDAF0AC1F22F4E4A6F34E42230(__this, L_5, NULL);
		return;
	}
}
// Method Definition Index: 22329
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_Dispose_m891F4886F4279390F74AE288785DE47C956D0608 (TweenableVariableAsyncBase_1_t84B7FBBAD5BE9B483A1DF99D3C2F93356D430055* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___m_OutputInitialized;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		TweenableVariableAsyncBase_1_UpdateStateFromCompletedJob_m17AEB9CF4F394FCE1A513967FBF06AF33EA21127(__this, NULL);
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* L_1 = (NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D*)(&__this->___m_JobOutputStore);
		NativeArray_1_Dispose_mB472C86D24172D0BAE7EF37E55779C93CE130E8C(L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		__this->___m_OutputInitialized = (bool)0;
	}

IL_0020:
	{
		NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2* L_2 = (NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2*)(&__this->___m_NativeCurve);
		bool L_3;
		L_3 = NativeCurve_get_isCreated_m862A0992B9257B63F7C2CE460A84C71353A97EEC(L_2, NULL);
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2* L_4 = (NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2*)(&__this->___m_NativeCurve);
		NativeCurve_Dispose_m257E292B03ABCDD6EDF3BE197652688AE36E6BB7(L_4, NULL);
		__this->___m_CurveDirty = (bool)1;
	}

IL_003f:
	{
		return;
	}
}
// Method Definition Index: 22330
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 TweenableVariableAsyncBase_1_GetNativeCurve_mA5762CD90494B88DBD282FB9310197DAAD54E4CC (TweenableVariableAsyncBase_1_t84B7FBBAD5BE9B483A1DF99D3C2F93356D430055* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		TweenableVariableAsyncBase_1_RefreshCurve_m675566DCF9937C4F2151C5C150238F555CE587AB(__this, NULL);
		NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 L_0 = __this->___m_NativeCurve;
		return L_0;
	}
}
// Method Definition Index: 22331
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_RefreshCurve_m675566DCF9937C4F2151C5C150238F555CE587AB (TweenableVariableAsyncBase_1_t84B7FBBAD5BE9B483A1DF99D3C2F93356D430055* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___m_CurveDirty;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2* L_1 = (NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2*)(&__this->___m_NativeCurve);
		bool L_2;
		L_2 = NativeCurve_get_isCreated_m862A0992B9257B63F7C2CE460A84C71353A97EEC(L_1, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}

IL_0015:
	{
		NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2* L_3 = (NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2*)(&__this->___m_NativeCurve);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_4;
		L_4 = TweenableVariableBase_1_get_animationCurve_m6EC9A21B3791E6E1974401435B3ABA3E39C864E6_inline(__this, NULL);
		NativeCurve_Update_m12958A86045F18C1F2C01315DD112CC1FB5C99F4(L_3, L_4, ((int32_t)1024), NULL);
		__this->___m_CurveDirty = (bool)0;
	}

IL_0032:
	{
		return;
	}
}
// Method Definition Index: 22332
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_PreprocessTween_m5EFA72E2FE04C4000806D4BE0CFDE7555BB3404D (TweenableVariableAsyncBase_1_t84B7FBBAD5BE9B483A1DF99D3C2F93356D430055* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		TweenableVariableBase_1_PreprocessTween_m1C78D5E568BF1487BA3AF078685AFC689CA392EB(__this, NULL);
		TweenableVariableAsyncBase_1_UpdateStateFromCompletedJob_m17AEB9CF4F394FCE1A513967FBF06AF33EA21127(__this, NULL);
		return;
	}
}
// Method Definition Index: 22333
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_ExecuteTween_mD1D7BBD72FC3F5586401961FDEC839C7769D4D24 (TweenableVariableAsyncBase_1_t84B7FBBAD5BE9B483A1DF99D3C2F93356D430055* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_startValue, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_targetValue, float ___2_tweenAmount, bool ___3_useCurve, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	uint8_t V_2 = 0x0;
	TweenJobData_1_t9932452930B7CDE5DC4DA408B50B8E4C7A3AAFB7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	TweenJobData_1_t9932452930B7CDE5DC4DA408B50B8E4C7A3AAFB7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	float G_B8_0 = 0.0f;
	int32_t G_B11_0 = 0;
	{
		float L_0 = ___2_tweenAmount;
		if ((!(((float)L_0) > ((float)(0.999989986f)))))
		{
			goto IL_0010;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___1_targetValue;
		TweenableVariableAsyncBase_1_set_Value_mA984A18E47D276CFA7055D0E8E85C4953AC73E81(__this, L_1, NULL);
		return;
	}

IL_0010:
	{
		bool L_2 = ___3_useCurve;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___1_targetValue;
		G_B5_0 = L_3;
		goto IL_0018;
	}

IL_0017:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___0_startValue;
		G_B5_0 = L_4;
	}

IL_0018:
	{
		V_0 = G_B5_0;
		bool L_5 = ___3_useCurve;
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		float L_6 = ___2_tweenAmount;
		G_B8_0 = L_6;
		goto IL_0025;
	}

IL_0020:
	{
		G_B8_0 = (1.0f);
	}

IL_0025:
	{
		V_1 = G_B8_0;
		bool L_7 = ___3_useCurve;
		if (L_7)
		{
			goto IL_0031;
		}
	}
	{
		G_B11_0 = ((int32_t)255);
		goto IL_003e;
	}

IL_0031:
	{
		float L_8 = ___2_tweenAmount;
		float L_9;
		L_9 = math_ceil_m06DEF6827759F405C10166F2C9E8047AE7C09179_inline(((float)il2cpp_codegen_multiply(L_8, (255.0f))), NULL);
		uint8_t L_10 = (il2cpp_codegen_conv<uint8_t,float,float,false,false>(L_9,NULL));
		G_B11_0 = ((int32_t)(L_10));
	}

IL_003e:
	{
		V_2 = (uint8_t)G_B11_0;
		il2cpp_codegen_initobj((&V_4), sizeof(TweenJobData_1_t9932452930B7CDE5DC4DA408B50B8E4C7A3AAFB7));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		L_11 = TweenableVariableBase_1_get_initialValue_m7F174333E94175EA8B3F25095AA58941D1100ACA_inline(__this, NULL);
		(&V_4)->___initialValue = L_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = V_0;
		(&V_4)->___stateOriginValue = L_12;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___1_targetValue;
		(&V_4)->___stateTargetValue = L_13;
		uint8_t L_14 = V_2;
		(&V_4)->___stateTransitionIncrement = L_14;
		NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 L_15;
		L_15 = TweenableVariableAsyncBase_1_GetNativeCurve_mA5762CD90494B88DBD282FB9310197DAAD54E4CC(__this, NULL);
		(&V_4)->___nativeCurve = L_15;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = ___0_startValue;
		(&V_4)->___tweenStartValue = L_16;
		float L_17 = V_1;
		(&V_4)->___tweenAmount = L_17;
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D L_18;
		L_18 = TweenableVariableAsyncBase_1_GetJobOutputStore_mE4CD397DDEB0E86B92F3F14F26DD95B932F2ED82(__this, NULL);
		(&V_4)->___outputData = L_18;
		TweenJobData_1_t9932452930B7CDE5DC4DA408B50B8E4C7A3AAFB7 L_19 = V_4;
		V_3 = L_19;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_20;
		L_20 = VirtualFuncInvoker1< JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, TweenJobData_1_t9932452930B7CDE5DC4DA408B50B8E4C7A3AAFB7* >::Invoke(18, __this, (&V_3));
		__this->___m_LastJobHandle = L_20;
		__this->___m_HasJobPending = (bool)1;
		return;
	}
}
// Method Definition Index: 22334
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_UpdateStateFromCompletedJob_m17AEB9CF4F394FCE1A513967FBF06AF33EA21127 (TweenableVariableAsyncBase_1_t84B7FBBAD5BE9B483A1DF99D3C2F93356D430055* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0;
		L_0 = TweenableVariableAsyncBase_1_CompleteJob_mBDA4CB462843B515FFFF357F91A6206266EEFEA5(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D L_1;
		L_1 = TweenableVariableAsyncBase_1_GetJobOutputStore_mE4CD397DDEB0E86B92F3F14F26DD95B932F2ED82(__this, NULL);
		V_0 = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_ITEM(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ((&V_0))->___m_Buffer, 0);
		TweenableVariableAsyncBase_1_set_Value_mA984A18E47D276CFA7055D0E8E85C4953AC73E81(__this, L_2, NULL);
		return;
	}
}
// Method Definition Index: 22336
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D TweenableVariableAsyncBase_1_GetJobOutputStore_mE4CD397DDEB0E86B92F3F14F26DD95B932F2ED82 (TweenableVariableAsyncBase_1_t84B7FBBAD5BE9B483A1DF99D3C2F93356D430055* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___m_OutputInitialized;
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D L_1;
		memset((&L_1), 0, sizeof(L_1));
		NativeArray_1__ctor_mE3E0CC624396EE2CF282ADD8B942B09323AF30E8((&L_1), 1, 4, 1, NULL);
		__this->___m_JobOutputStore = L_1;
		__this->___m_OutputInitialized = (bool)1;
		DisposableManagerSingleton_RegisterDisposable_m59A00C2005FAFD93DD1CBB3ECBCA76804CD64786(__this, NULL);
	}

IL_0023:
	{
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D L_2 = __this->___m_JobOutputStore;
		return L_2;
	}
}
// Method Definition Index: 22337
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_OnAnimationCurveChanged_m54F2363C3937B79F292ECBCC3C2360319C0DD2EF (TweenableVariableAsyncBase_1_t84B7FBBAD5BE9B483A1DF99D3C2F93356D430055* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = ___0_value;
		TweenableVariableBase_1_OnAnimationCurveChanged_mCD8760845DC0872325B4C1F504CB21135583FF5E(__this, L_0, NULL);
		__this->___m_CurveDirty = (bool)1;
		return;
	}
}
// Method Definition Index: 22338
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenableVariableAsyncBase_1_CompleteJob_mBDA4CB462843B515FFFF357F91A6206266EEFEA5 (TweenableVariableAsyncBase_1_t84B7FBBAD5BE9B483A1DF99D3C2F93356D430055* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___m_OutputInitialized;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->___m_HasJobPending;
		if (L_1)
		{
			goto IL_0012;
		}
	}

IL_0010:
	{
		return (bool)0;
	}

IL_0012:
	{
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* L_2 = (JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08*)(&__this->___m_LastJobHandle);
		JobHandle_Complete_mDCED35A125AAB37EDDAB2E31C805B4904B614A4A(L_2, NULL);
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* L_3 = (JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08*)(&__this->___m_LastJobHandle);
		il2cpp_codegen_initobj(L_3, sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		__this->___m_HasJobPending = (bool)0;
		return (bool)1;
	}
}
// Method Definition Index: 22339
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1__ctor_m7198BB74FEA95EB23093972C5038A3F0C2580959 (TweenableVariableAsyncBase_1_t84B7FBBAD5BE9B483A1DF99D3C2F93356D430055* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		__this->___m_CurveDirty = (bool)1;
		TweenableVariableBase_1__ctor_mCAEAF8CBEB3AC895E3B9CD683F8C9B7E2D334A72(__this, NULL);
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
// Method Definition Index: 22327
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenableVariableAsyncBase_1_get_Value_m5DAFDAB70CA05D176B1C3158F7485F8162F3E8FC (TweenableVariableAsyncBase_1_tF183EC63E8112FA406C601A7E49A5AC36036F088* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float L_0;
		L_0 = BindableVariableBase_1_get_Value_m56739E375D26399567FC0F237E68BFA12EAABCA1_inline(__this, NULL);
		return L_0;
	}
}
// Method Definition Index: 22328
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_set_Value_mB830A78DD377C42A7C78E20D2AB4133D52526E3F (TweenableVariableAsyncBase_1_tF183EC63E8112FA406C601A7E49A5AC36036F088* __this, float ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___m_HasJobPending;
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		bool L_1 = __this->___m_OutputInitialized;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		bool L_2;
		L_2 = TweenableVariableAsyncBase_1_CompleteJob_mEA72D798E65A8718EE40C02CB71284E20FBECBCA(__this, NULL);
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* L_3 = (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF*)(&__this->___m_JobOutputStore);
		float L_4 = ___0_value;
		IL2CPP_NATIVEARRAY_SET_ITEM(float, (L_3)->___m_Buffer, 0, (L_4));
	}

IL_0024:
	{
		float L_5 = ___0_value;
		BindableVariableBase_1_set_Value_m4AF1F78B7B57E861E68761340D69FC566D0619AC(__this, L_5, NULL);
		return;
	}
}
// Method Definition Index: 22329
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_Dispose_m8302D545AD62EB13A85B639B2E21FB71843F0CE0 (TweenableVariableAsyncBase_1_tF183EC63E8112FA406C601A7E49A5AC36036F088* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___m_OutputInitialized;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		TweenableVariableAsyncBase_1_UpdateStateFromCompletedJob_m6FC07A6FA964359EAF1140BD6A3C3DC495D80EA6(__this, NULL);
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* L_1 = (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF*)(&__this->___m_JobOutputStore);
		NativeArray_1_Dispose_mC07280A768D065A052D995F3E6175A27CD62E1F6(L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		__this->___m_OutputInitialized = (bool)0;
	}

IL_0020:
	{
		NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2* L_2 = (NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2*)(&__this->___m_NativeCurve);
		bool L_3;
		L_3 = NativeCurve_get_isCreated_m862A0992B9257B63F7C2CE460A84C71353A97EEC(L_2, NULL);
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2* L_4 = (NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2*)(&__this->___m_NativeCurve);
		NativeCurve_Dispose_m257E292B03ABCDD6EDF3BE197652688AE36E6BB7(L_4, NULL);
		__this->___m_CurveDirty = (bool)1;
	}

IL_003f:
	{
		return;
	}
}
// Method Definition Index: 22330
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 TweenableVariableAsyncBase_1_GetNativeCurve_m8EA398243C2E9D46B12395BCA583A652B4F02A51 (TweenableVariableAsyncBase_1_tF183EC63E8112FA406C601A7E49A5AC36036F088* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		TweenableVariableAsyncBase_1_RefreshCurve_m625FDE32D1C133D32A91447F79CD1A505695FFF7(__this, NULL);
		NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 L_0 = __this->___m_NativeCurve;
		return L_0;
	}
}
// Method Definition Index: 22331
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_RefreshCurve_m625FDE32D1C133D32A91447F79CD1A505695FFF7 (TweenableVariableAsyncBase_1_tF183EC63E8112FA406C601A7E49A5AC36036F088* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___m_CurveDirty;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2* L_1 = (NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2*)(&__this->___m_NativeCurve);
		bool L_2;
		L_2 = NativeCurve_get_isCreated_m862A0992B9257B63F7C2CE460A84C71353A97EEC(L_1, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}

IL_0015:
	{
		NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2* L_3 = (NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2*)(&__this->___m_NativeCurve);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_4;
		L_4 = TweenableVariableBase_1_get_animationCurve_m629E6E7B4B5D8981C071EC50A729BAD6E81AE944_inline(__this, NULL);
		NativeCurve_Update_m12958A86045F18C1F2C01315DD112CC1FB5C99F4(L_3, L_4, ((int32_t)1024), NULL);
		__this->___m_CurveDirty = (bool)0;
	}

IL_0032:
	{
		return;
	}
}
// Method Definition Index: 22332
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_PreprocessTween_mCC8C65FED60FDFDD463CEC9204326C01A6287880 (TweenableVariableAsyncBase_1_tF183EC63E8112FA406C601A7E49A5AC36036F088* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		TweenableVariableBase_1_PreprocessTween_m64A3CB2450518DFFFE14D07E9BFDF63E324B5AE9(__this, NULL);
		TweenableVariableAsyncBase_1_UpdateStateFromCompletedJob_m6FC07A6FA964359EAF1140BD6A3C3DC495D80EA6(__this, NULL);
		return;
	}
}
// Method Definition Index: 22333
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_ExecuteTween_m0F9E05DF0FD7CDB645250093389F3C5792C95BEB (TweenableVariableAsyncBase_1_tF183EC63E8112FA406C601A7E49A5AC36036F088* __this, float ___0_startValue, float ___1_targetValue, float ___2_tweenAmount, bool ___3_useCurve, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	uint8_t V_2 = 0x0;
	TweenJobData_1_t06FAD94FCA49A795B22C7FA2EA018F83E450B97E V_3;
	memset((&V_3), 0, sizeof(V_3));
	TweenJobData_1_t06FAD94FCA49A795B22C7FA2EA018F83E450B97E V_4;
	memset((&V_4), 0, sizeof(V_4));
	float G_B5_0 = 0.0f;
	float G_B8_0 = 0.0f;
	int32_t G_B11_0 = 0;
	{
		float L_0 = ___2_tweenAmount;
		if ((!(((float)L_0) > ((float)(0.999989986f)))))
		{
			goto IL_0010;
		}
	}
	{
		float L_1 = ___1_targetValue;
		TweenableVariableAsyncBase_1_set_Value_mB830A78DD377C42A7C78E20D2AB4133D52526E3F(__this, L_1, NULL);
		return;
	}

IL_0010:
	{
		bool L_2 = ___3_useCurve;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		float L_3 = ___1_targetValue;
		G_B5_0 = L_3;
		goto IL_0018;
	}

IL_0017:
	{
		float L_4 = ___0_startValue;
		G_B5_0 = L_4;
	}

IL_0018:
	{
		V_0 = G_B5_0;
		bool L_5 = ___3_useCurve;
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		float L_6 = ___2_tweenAmount;
		G_B8_0 = L_6;
		goto IL_0025;
	}

IL_0020:
	{
		G_B8_0 = (1.0f);
	}

IL_0025:
	{
		V_1 = G_B8_0;
		bool L_7 = ___3_useCurve;
		if (L_7)
		{
			goto IL_0031;
		}
	}
	{
		G_B11_0 = ((int32_t)255);
		goto IL_003e;
	}

IL_0031:
	{
		float L_8 = ___2_tweenAmount;
		float L_9;
		L_9 = math_ceil_m06DEF6827759F405C10166F2C9E8047AE7C09179_inline(((float)il2cpp_codegen_multiply(L_8, (255.0f))), NULL);
		uint8_t L_10 = (il2cpp_codegen_conv<uint8_t,float,float,false,false>(L_9,NULL));
		G_B11_0 = ((int32_t)(L_10));
	}

IL_003e:
	{
		V_2 = (uint8_t)G_B11_0;
		il2cpp_codegen_initobj((&V_4), sizeof(TweenJobData_1_t06FAD94FCA49A795B22C7FA2EA018F83E450B97E));
		float L_11;
		L_11 = TweenableVariableBase_1_get_initialValue_m328C6A22EB2CA996E9C8AFDB3D51F98A0CAF2B64_inline(__this, NULL);
		(&V_4)->___initialValue = L_11;
		float L_12 = V_0;
		(&V_4)->___stateOriginValue = L_12;
		float L_13 = ___1_targetValue;
		(&V_4)->___stateTargetValue = L_13;
		uint8_t L_14 = V_2;
		(&V_4)->___stateTransitionIncrement = L_14;
		NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 L_15;
		L_15 = TweenableVariableAsyncBase_1_GetNativeCurve_m8EA398243C2E9D46B12395BCA583A652B4F02A51(__this, NULL);
		(&V_4)->___nativeCurve = L_15;
		float L_16 = ___0_startValue;
		(&V_4)->___tweenStartValue = L_16;
		float L_17 = V_1;
		(&V_4)->___tweenAmount = L_17;
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_18;
		L_18 = TweenableVariableAsyncBase_1_GetJobOutputStore_mD6671CF6A3B2AE5B6F0AA2A7802BD32AD83705A3(__this, NULL);
		(&V_4)->___outputData = L_18;
		TweenJobData_1_t06FAD94FCA49A795B22C7FA2EA018F83E450B97E L_19 = V_4;
		V_3 = L_19;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_20;
		L_20 = VirtualFuncInvoker1< JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, TweenJobData_1_t06FAD94FCA49A795B22C7FA2EA018F83E450B97E* >::Invoke(18, __this, (&V_3));
		__this->___m_LastJobHandle = L_20;
		__this->___m_HasJobPending = (bool)1;
		return;
	}
}
// Method Definition Index: 22334
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_UpdateStateFromCompletedJob_m6FC07A6FA964359EAF1140BD6A3C3DC495D80EA6 (TweenableVariableAsyncBase_1_tF183EC63E8112FA406C601A7E49A5AC36036F088* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0;
		L_0 = TweenableVariableAsyncBase_1_CompleteJob_mEA72D798E65A8718EE40C02CB71284E20FBECBCA(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_1;
		L_1 = TweenableVariableAsyncBase_1_GetJobOutputStore_mD6671CF6A3B2AE5B6F0AA2A7802BD32AD83705A3(__this, NULL);
		V_0 = L_1;
		float L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_ITEM(float, ((&V_0))->___m_Buffer, 0);
		TweenableVariableAsyncBase_1_set_Value_mB830A78DD377C42A7C78E20D2AB4133D52526E3F(__this, L_2, NULL);
		return;
	}
}
// Method Definition Index: 22336
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF TweenableVariableAsyncBase_1_GetJobOutputStore_mD6671CF6A3B2AE5B6F0AA2A7802BD32AD83705A3 (TweenableVariableAsyncBase_1_tF183EC63E8112FA406C601A7E49A5AC36036F088* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___m_OutputInitialized;
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_1;
		memset((&L_1), 0, sizeof(L_1));
		NativeArray_1__ctor_m4D540A81E1062EEC2C4B0697A34A4EEFB9BC9004((&L_1), 1, 4, 1, NULL);
		__this->___m_JobOutputStore = L_1;
		__this->___m_OutputInitialized = (bool)1;
		DisposableManagerSingleton_RegisterDisposable_m59A00C2005FAFD93DD1CBB3ECBCA76804CD64786(__this, NULL);
	}

IL_0023:
	{
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_2 = __this->___m_JobOutputStore;
		return L_2;
	}
}
// Method Definition Index: 22337
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_OnAnimationCurveChanged_m4CB86FDE5D720BE3039391E4264A7BA639653CD4 (TweenableVariableAsyncBase_1_tF183EC63E8112FA406C601A7E49A5AC36036F088* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = ___0_value;
		TweenableVariableBase_1_OnAnimationCurveChanged_m2C329BCB797EF2DBF83E6B7233B71FC72E3D6317(__this, L_0, NULL);
		__this->___m_CurveDirty = (bool)1;
		return;
	}
}
// Method Definition Index: 22338
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenableVariableAsyncBase_1_CompleteJob_mEA72D798E65A8718EE40C02CB71284E20FBECBCA (TweenableVariableAsyncBase_1_tF183EC63E8112FA406C601A7E49A5AC36036F088* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___m_OutputInitialized;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->___m_HasJobPending;
		if (L_1)
		{
			goto IL_0012;
		}
	}

IL_0010:
	{
		return (bool)0;
	}

IL_0012:
	{
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* L_2 = (JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08*)(&__this->___m_LastJobHandle);
		JobHandle_Complete_mDCED35A125AAB37EDDAB2E31C805B4904B614A4A(L_2, NULL);
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* L_3 = (JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08*)(&__this->___m_LastJobHandle);
		il2cpp_codegen_initobj(L_3, sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		__this->___m_HasJobPending = (bool)0;
		return (bool)1;
	}
}
// Method Definition Index: 22339
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1__ctor_m048E694898C0CFA968E36F041D50A55CA9E07E4A (TweenableVariableAsyncBase_1_tF183EC63E8112FA406C601A7E49A5AC36036F088* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		__this->___m_CurveDirty = (bool)1;
		TweenableVariableBase_1__ctor_mACF24E12EF5F0EA84906361750928AE170DEB855(__this, NULL);
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
// Method Definition Index: 22327
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_get_Value_m37B58507998154300102226AB78CEABF62D939BE_fshared (TweenableVariableAsyncBase_1_t7FD0BE25E95FFCEE9DE5FDBE93CBFB450DEBCD76* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t3F6A3F7660E32D736B1EA14BD00D5A3C7A974C3A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t3F6A3F7660E32D736B1EA14BD00D5A3C7A974C3A);
	//<source_info:<no-source>:1>
	{
		NullCheck((BindableVariableBase_1_tB750E2701A13D0FF6D0351CB5CDEF8ED5E414BAE*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0), (BindableVariableBase_1_tB750E2701A13D0FF6D0351CB5CDEF8ED5E414BAE*)__this, (Il2CppFullySharedGenericStruct*)L_0);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t3F6A3F7660E32D736B1EA14BD00D5A3C7A974C3A);
		return;
	}
}
// Method Definition Index: 22328
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_set_Value_mBECF0C49CE3A707B823A73FC8E47E69F0F4986C9_fshared (TweenableVariableAsyncBase_1_t7FD0BE25E95FFCEE9DE5FDBE93CBFB450DEBCD76* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t3F6A3F7660E32D736B1EA14BD00D5A3C7A974C3A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t3F6A3F7660E32D736B1EA14BD00D5A3C7A974C3A);
	const Il2CppFullySharedGenericStruct L_4 = L_3;
	//<source_info:<no-source>:1>
	{
		bool L_0 = *(bool*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3));
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		bool L_1 = *(bool*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4));
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		bool L_2;
		L_2 = ((  bool (*) (TweenableVariableAsyncBase_1_t7FD0BE25E95FFCEE9DE5FDBE93CBFB450DEBCD76*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		il2cpp_codegen_memcpy(L_3, ___0_value, SizeOf_T_t3F6A3F7660E32D736B1EA14BD00D5A3C7A974C3A);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7), (((NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6)))), 0, L_3);
	}

IL_0024:
	{
		il2cpp_codegen_memcpy(L_4, ___0_value, SizeOf_T_t3F6A3F7660E32D736B1EA14BD00D5A3C7A974C3A);
		NullCheck((BindableVariableBase_1_tB750E2701A13D0FF6D0351CB5CDEF8ED5E414BAE*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8), (BindableVariableBase_1_tB750E2701A13D0FF6D0351CB5CDEF8ED5E414BAE*)__this, L_4);
		return;
	}
}
// Method Definition Index: 22329
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_Dispose_mEEC16F53ED4262F8F6D546E70314DD22218D50D1_fshared (TweenableVariableAsyncBase_1_t7FD0BE25E95FFCEE9DE5FDBE93CBFB450DEBCD76* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = *(bool*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4));
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		((  void (*) (TweenableVariableAsyncBase_1_t7FD0BE25E95FFCEE9DE5FDBE93CBFB450DEBCD76*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)))((((NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		il2cpp_codegen_write_field_data<bool, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4), (bool)0);
	}

IL_0020:
	{
		bool L_1;
		L_1 = NativeCurve_get_isCreated_m862A0992B9257B63F7C2CE460A84C71353A97EEC((((NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11)))), NULL);
		if (!L_1)
		{
			goto IL_003f;
		}
	}
	{
		NativeCurve_Dispose_m257E292B03ABCDD6EDF3BE197652688AE36E6BB7((((NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11)))), NULL);
		il2cpp_codegen_write_field_data<bool, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 12), (bool)1);
	}

IL_003f:
	{
		return;
	}
}
// Method Definition Index: 22330
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 TweenableVariableAsyncBase_1_GetNativeCurve_m2E23D9CDB43B16AC19233B564EC16FCA3047D649_fshared (TweenableVariableAsyncBase_1_t7FD0BE25E95FFCEE9DE5FDBE93CBFB450DEBCD76* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		((  void (*) (TweenableVariableAsyncBase_1_t7FD0BE25E95FFCEE9DE5FDBE93CBFB450DEBCD76*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 L_0 = *(NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11));
		return L_0;
	}
}
// Method Definition Index: 22331
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_RefreshCurve_mD0BB6417BC8E887363D5EF98D8561C3237879F88_fshared (TweenableVariableAsyncBase_1_t7FD0BE25E95FFCEE9DE5FDBE93CBFB450DEBCD76* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = *(bool*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 12));
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		bool L_1;
		L_1 = NativeCurve_get_isCreated_m862A0992B9257B63F7C2CE460A84C71353A97EEC((((NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11)))), NULL);
		if (L_1)
		{
			goto IL_0032;
		}
	}

IL_0015:
	{
		NullCheck((TweenableVariableBase_1_tF83C2E3392A373F7E0B8F6E0ED0DB29FE2634534*)__this);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_2;
		L_2 = ((  AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* (*) (TweenableVariableBase_1_tF83C2E3392A373F7E0B8F6E0ED0DB29FE2634534*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14)))((TweenableVariableBase_1_tF83C2E3392A373F7E0B8F6E0ED0DB29FE2634534*)__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		NativeCurve_Update_m12958A86045F18C1F2C01315DD112CC1FB5C99F4((((NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11)))), L_2, ((int32_t)1024), NULL);
		il2cpp_codegen_write_field_data<bool, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 12), (bool)0);
	}

IL_0032:
	{
		return;
	}
}
// Method Definition Index: 22332
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_PreprocessTween_mEA6A2AF85FEBF02713108F0BB5934AD721B7B4E3_fshared (TweenableVariableAsyncBase_1_t7FD0BE25E95FFCEE9DE5FDBE93CBFB450DEBCD76* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NullCheck((TweenableVariableBase_1_tF83C2E3392A373F7E0B8F6E0ED0DB29FE2634534*)__this);
		((  void (*) (TweenableVariableBase_1_tF83C2E3392A373F7E0B8F6E0ED0DB29FE2634534*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15)))((TweenableVariableBase_1_tF83C2E3392A373F7E0B8F6E0ED0DB29FE2634534*)__this, NULL);
		((  void (*) (TweenableVariableAsyncBase_1_t7FD0BE25E95FFCEE9DE5FDBE93CBFB450DEBCD76*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		return;
	}
}
// Method Definition Index: 22333
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_ExecuteTween_m651F4069B673BD5A2133B04D89B42FCFFA855A5B_fshared (TweenableVariableAsyncBase_1_t7FD0BE25E95FFCEE9DE5FDBE93CBFB450DEBCD76* __this, Il2CppFullySharedGenericStruct ___0_startValue, Il2CppFullySharedGenericStruct ___1_targetValue, float ___2_tweenAmount, bool ___3_useCurve, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t3F6A3F7660E32D736B1EA14BD00D5A3C7A974C3A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const uint32_t SizeOf_TweenJobData_1_t6AD21D5B4498C9FEEC24DE108B7E79E0F0FD5F7E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 17));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_t3F6A3F7660E32D736B1EA14BD00D5A3C7A974C3A);
	const Il2CppFullySharedGenericStruct L_3 = L_1;
	const Il2CppFullySharedGenericStruct L_4 = L_1;
	const Il2CppFullySharedGenericStruct L_11 = L_1;
	const Il2CppFullySharedGenericStruct L_12 = alloca(SizeOf_T_t3F6A3F7660E32D736B1EA14BD00D5A3C7A974C3A);
	const Il2CppFullySharedGenericStruct L_13 = alloca(SizeOf_T_t3F6A3F7660E32D736B1EA14BD00D5A3C7A974C3A);
	const Il2CppFullySharedGenericStruct L_16 = alloca(SizeOf_T_t3F6A3F7660E32D736B1EA14BD00D5A3C7A974C3A);
	const TweenJobData_1_t304A968236DFE46B649BFB8929A78966DA601B83 L_19 = alloca(SizeOf_TweenJobData_1_t6AD21D5B4498C9FEEC24DE108B7E79E0F0FD5F7E);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_T_t3F6A3F7660E32D736B1EA14BD00D5A3C7A974C3A);
	memset(V_0, 0, SizeOf_T_t3F6A3F7660E32D736B1EA14BD00D5A3C7A974C3A);
	float V_1 = 0.0f;
	uint8_t V_2 = 0x0;
	TweenJobData_1_t304A968236DFE46B649BFB8929A78966DA601B83 V_3 = alloca(SizeOf_TweenJobData_1_t6AD21D5B4498C9FEEC24DE108B7E79E0F0FD5F7E);
	memset(V_3, 0, SizeOf_TweenJobData_1_t6AD21D5B4498C9FEEC24DE108B7E79E0F0FD5F7E);
	TweenJobData_1_t304A968236DFE46B649BFB8929A78966DA601B83 V_4 = alloca(SizeOf_TweenJobData_1_t6AD21D5B4498C9FEEC24DE108B7E79E0F0FD5F7E);
	memset(V_4, 0, SizeOf_TweenJobData_1_t6AD21D5B4498C9FEEC24DE108B7E79E0F0FD5F7E);
	Il2CppFullySharedGenericStruct G_B5_0 = alloca(SizeOf_T_t3F6A3F7660E32D736B1EA14BD00D5A3C7A974C3A);
	memset(G_B5_0, 0, SizeOf_T_t3F6A3F7660E32D736B1EA14BD00D5A3C7A974C3A);
	float G_B8_0 = 0.0f;
	int32_t G_B11_0 = 0;
	{
		float L_0 = ___2_tweenAmount;
		if ((!(((float)L_0) > ((float)(0.999989986f)))))
		{
			goto IL_0010;
		}
	}
	{
		il2cpp_codegen_memcpy(L_1, ___1_targetValue, SizeOf_T_t3F6A3F7660E32D736B1EA14BD00D5A3C7A974C3A);
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16), __this, L_1);
		return;
	}

IL_0010:
	{
		bool L_2 = ___3_useCurve;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_memcpy(L_3, ___1_targetValue, SizeOf_T_t3F6A3F7660E32D736B1EA14BD00D5A3C7A974C3A);
		il2cpp_codegen_memcpy(G_B5_0, L_3, SizeOf_T_t3F6A3F7660E32D736B1EA14BD00D5A3C7A974C3A);
		goto IL_0018;
	}

IL_0017:
	{
		il2cpp_codegen_memcpy(L_4, ___0_startValue, SizeOf_T_t3F6A3F7660E32D736B1EA14BD00D5A3C7A974C3A);
		il2cpp_codegen_memcpy(G_B5_0, L_4, SizeOf_T_t3F6A3F7660E32D736B1EA14BD00D5A3C7A974C3A);
	}

IL_0018:
	{
		il2cpp_codegen_memcpy(V_0, G_B5_0, SizeOf_T_t3F6A3F7660E32D736B1EA14BD00D5A3C7A974C3A);
		bool L_5 = ___3_useCurve;
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		float L_6 = ___2_tweenAmount;
		G_B8_0 = L_6;
		goto IL_0025;
	}

IL_0020:
	{
		G_B8_0 = (1.0f);
	}

IL_0025:
	{
		V_1 = G_B8_0;
		bool L_7 = ___3_useCurve;
		if (L_7)
		{
			goto IL_0031;
		}
	}
	{
		G_B11_0 = ((int32_t)255);
		goto IL_003e;
	}

IL_0031:
	{
		float L_8 = ___2_tweenAmount;
		float L_9;
		L_9 = math_ceil_m06DEF6827759F405C10166F2C9E8047AE7C09179_inline(((float)il2cpp_codegen_multiply(L_8, (255.0f))), NULL);
		uint8_t L_10 = (il2cpp_codegen_conv<uint8_t,float,float,false,false>(L_9,NULL));
		G_B11_0 = ((int32_t)(L_10));
	}

IL_003e:
	{
		V_2 = (uint8_t)G_B11_0;
		il2cpp_codegen_initobj((TweenJobData_1_t304A968236DFE46B649BFB8929A78966DA601B83*)V_4, SizeOf_TweenJobData_1_t6AD21D5B4498C9FEEC24DE108B7E79E0F0FD5F7E);
		NullCheck((TweenableVariableBase_1_tF83C2E3392A373F7E0B8F6E0ED0DB29FE2634534*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18), (TweenableVariableBase_1_tF83C2E3392A373F7E0B8F6E0ED0DB29FE2634534*)__this, (Il2CppFullySharedGenericStruct*)L_11);
		il2cpp_codegen_write_field_data<true>((TweenJobData_1_t304A968236DFE46B649BFB8929A78966DA601B83*)V_4, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 17),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 19), L_11, SizeOf_T_t3F6A3F7660E32D736B1EA14BD00D5A3C7A974C3A);
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_T_t3F6A3F7660E32D736B1EA14BD00D5A3C7A974C3A);
		il2cpp_codegen_write_field_data<true>((TweenJobData_1_t304A968236DFE46B649BFB8929A78966DA601B83*)V_4, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 17),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 20), L_12, SizeOf_T_t3F6A3F7660E32D736B1EA14BD00D5A3C7A974C3A);
		il2cpp_codegen_memcpy(L_13, ___1_targetValue, SizeOf_T_t3F6A3F7660E32D736B1EA14BD00D5A3C7A974C3A);
		il2cpp_codegen_write_field_data<true>((TweenJobData_1_t304A968236DFE46B649BFB8929A78966DA601B83*)V_4, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 17),4), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 21), L_13, SizeOf_T_t3F6A3F7660E32D736B1EA14BD00D5A3C7A974C3A);
		uint8_t L_14 = V_2;
		il2cpp_codegen_write_field_data<uint8_t, false>((TweenJobData_1_t304A968236DFE46B649BFB8929A78966DA601B83*)V_4, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 17),5), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 22), L_14);
		NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 L_15;
		L_15 = ((  NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 (*) (TweenableVariableAsyncBase_1_t7FD0BE25E95FFCEE9DE5FDBE93CBFB450DEBCD76*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23));
		il2cpp_codegen_write_field_data<NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2, false>((TweenJobData_1_t304A968236DFE46B649BFB8929A78966DA601B83*)V_4, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 17),6), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 24), L_15);
		il2cpp_codegen_memcpy(L_16, ___0_startValue, SizeOf_T_t3F6A3F7660E32D736B1EA14BD00D5A3C7A974C3A);
		il2cpp_codegen_write_field_data<true>((TweenJobData_1_t304A968236DFE46B649BFB8929A78966DA601B83*)V_4, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 17),7), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 25), L_16, SizeOf_T_t3F6A3F7660E32D736B1EA14BD00D5A3C7A974C3A);
		float L_17 = V_1;
		il2cpp_codegen_write_field_data<float, false>((TweenJobData_1_t304A968236DFE46B649BFB8929A78966DA601B83*)V_4, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 17),8), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 26), L_17);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_18;
		L_18 = ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (TweenableVariableAsyncBase_1_t7FD0BE25E95FFCEE9DE5FDBE93CBFB450DEBCD76*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		il2cpp_codegen_write_field_data<NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, false>((TweenJobData_1_t304A968236DFE46B649BFB8929A78966DA601B83*)V_4, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 17),9), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 28), L_18);
		il2cpp_codegen_memcpy(L_19, V_4, SizeOf_TweenJobData_1_t6AD21D5B4498C9FEEC24DE108B7E79E0F0FD5F7E);
		il2cpp_codegen_memcpy(V_3, L_19, SizeOf_TweenJobData_1_t6AD21D5B4498C9FEEC24DE108B7E79E0F0FD5F7E);
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_20;
		L_20 = VirtualFuncInvoker1< JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, TweenJobData_1_t304A968236DFE46B649BFB8929A78966DA601B83* >::Invoke(18, __this, (TweenJobData_1_t304A968236DFE46B649BFB8929A78966DA601B83*)V_3);
		il2cpp_codegen_write_field_data<JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2),5), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 29), L_20);
		il2cpp_codegen_write_field_data<bool, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2),4), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3), (bool)1);
		return;
	}
}
// Method Definition Index: 22334
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_UpdateStateFromCompletedJob_m821B35AA7C046B1C618582D5C0DFF2B0DD959F15_fshared (TweenableVariableAsyncBase_1_t7FD0BE25E95FFCEE9DE5FDBE93CBFB450DEBCD76* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t3F6A3F7660E32D736B1EA14BD00D5A3C7A974C3A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t3F6A3F7660E32D736B1EA14BD00D5A3C7A974C3A);
	//<source_info:<no-source>:1>
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0;
		L_0 = ((  bool (*) (TweenableVariableAsyncBase_1_t7FD0BE25E95FFCEE9DE5FDBE93CBFB450DEBCD76*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_1;
		L_1 = ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (TweenableVariableAsyncBase_1_t7FD0BE25E95FFCEE9DE5FDBE93CBFB450DEBCD76*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		V_0 = L_1;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30), (&V_0), 0, (Il2CppFullySharedGenericStruct*)L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16), __this, L_2);
		return;
	}
}
// Method Definition Index: 22336
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 TweenableVariableAsyncBase_1_GetJobOutputStore_m8D7086C3BAC8AB0F75E40C392DF09991D0B8C41E_fshared (TweenableVariableAsyncBase_1_t7FD0BE25E95FFCEE9DE5FDBE93CBFB450DEBCD76* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = *(bool*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4));
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_1;
		memset((&L_1), 0, sizeof(L_1));
		NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1((&L_1), 1, 4, 1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 31));
		il2cpp_codegen_write_field_data<NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6), L_1);
		il2cpp_codegen_write_field_data<bool, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4), (bool)1);
		DisposableManagerSingleton_RegisterDisposable_m59A00C2005FAFD93DD1CBB3ECBCA76804CD64786((RuntimeObject*)__this, NULL);
	}

IL_0023:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2 = *(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6));
		return L_2;
	}
}
// Method Definition Index: 22337
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_OnAnimationCurveChanged_mD0D134A56C357CA9A9844CA0FB8FAA5BC15524D6_fshared (TweenableVariableAsyncBase_1_t7FD0BE25E95FFCEE9DE5FDBE93CBFB450DEBCD76* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = ___0_value;
		NullCheck((TweenableVariableBase_1_tF83C2E3392A373F7E0B8F6E0ED0DB29FE2634534*)__this);
		((  void (*) (TweenableVariableBase_1_tF83C2E3392A373F7E0B8F6E0ED0DB29FE2634534*, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 32)))((TweenableVariableBase_1_tF83C2E3392A373F7E0B8F6E0ED0DB29FE2634534*)__this, L_0, NULL);
		il2cpp_codegen_write_field_data<bool, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 12), (bool)1);
		return;
	}
}
// Method Definition Index: 22338
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenableVariableAsyncBase_1_CompleteJob_mB22652D56B71AA812AD7C2BAAFAB01B63B538C4C_fshared (TweenableVariableAsyncBase_1_t7FD0BE25E95FFCEE9DE5FDBE93CBFB450DEBCD76* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = *(bool*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4));
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = *(bool*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3));
		if (L_1)
		{
			goto IL_0012;
		}
	}

IL_0010:
	{
		return (bool)0;
	}

IL_0012:
	{
		JobHandle_Complete_mDCED35A125AAB37EDDAB2E31C805B4904B614A4A((((JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 29)))), NULL);
		il2cpp_codegen_initobj((((JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 29)))), sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		il2cpp_codegen_write_field_data<bool, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2),4), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3), (bool)0);
		return (bool)1;
	}
}
// Method Definition Index: 22339
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1__ctor_m4659D6EBBB6B66CD227EFC267AF599255ACCE5DC_fshared (TweenableVariableAsyncBase_1_t7FD0BE25E95FFCEE9DE5FDBE93CBFB450DEBCD76* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_write_field_data<bool, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 12), (bool)1);
		((  void (*) (TweenableVariableBase_1_tF83C2E3392A373F7E0B8F6E0ED0DB29FE2634534*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 33)))((TweenableVariableBase_1_tF83C2E3392A373F7E0B8F6E0ED0DB29FE2634534*)__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 33));
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
// Method Definition Index: 22327
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 TweenableVariableAsyncBase_1_get_Value_m96FD4CFAF0D9F82691D52D4CFB57046EF3EB9A50 (TweenableVariableAsyncBase_1_t0A92C17D9391783B25BD32E62A3A296324C1A287* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 L_0;
		L_0 = BindableVariableBase_1_get_Value_mA3C426A393A0A5AB6EC95606DABB506F20A5AA84_inline(__this, NULL);
		return L_0;
	}
}
// Method Definition Index: 22328
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_set_Value_m13DFBD337F071EB806AE9D736C384070D3C5B0E4 (TweenableVariableAsyncBase_1_t0A92C17D9391783B25BD32E62A3A296324C1A287* __this, float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___m_HasJobPending;
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		bool L_1 = __this->___m_OutputInitialized;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		bool L_2;
		L_2 = TweenableVariableAsyncBase_1_CompleteJob_mC14CC21C2CA294CF963A521E20F927319482B5BC(__this, NULL);
		NativeArray_1_tB2C0A4BD42DDC767D3B622ACDDD0A5E3898E0F9C* L_3 = (NativeArray_1_tB2C0A4BD42DDC767D3B622ACDDD0A5E3898E0F9C*)(&__this->___m_JobOutputStore);
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 L_4 = ___0_value;
		IL2CPP_NATIVEARRAY_SET_ITEM(float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5, (L_3)->___m_Buffer, 0, (L_4));
	}

IL_0024:
	{
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 L_5 = ___0_value;
		BindableVariableBase_1_set_Value_m588EB4AA14624FE8EA988D058D0550FB211038D4(__this, L_5, NULL);
		return;
	}
}
// Method Definition Index: 22329
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_Dispose_m4AEC5D80D712ECAE79D0BA100607A08717A83D66 (TweenableVariableAsyncBase_1_t0A92C17D9391783B25BD32E62A3A296324C1A287* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___m_OutputInitialized;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		TweenableVariableAsyncBase_1_UpdateStateFromCompletedJob_mD25FD8525E63D070F5421EA4FF80A69E53BD51D4(__this, NULL);
		NativeArray_1_tB2C0A4BD42DDC767D3B622ACDDD0A5E3898E0F9C* L_1 = (NativeArray_1_tB2C0A4BD42DDC767D3B622ACDDD0A5E3898E0F9C*)(&__this->___m_JobOutputStore);
		NativeArray_1_Dispose_m7980162AEAF54A574BA086A397B2F628A24AA1EA(L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		__this->___m_OutputInitialized = (bool)0;
	}

IL_0020:
	{
		NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2* L_2 = (NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2*)(&__this->___m_NativeCurve);
		bool L_3;
		L_3 = NativeCurve_get_isCreated_m862A0992B9257B63F7C2CE460A84C71353A97EEC(L_2, NULL);
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2* L_4 = (NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2*)(&__this->___m_NativeCurve);
		NativeCurve_Dispose_m257E292B03ABCDD6EDF3BE197652688AE36E6BB7(L_4, NULL);
		__this->___m_CurveDirty = (bool)1;
	}

IL_003f:
	{
		return;
	}
}
// Method Definition Index: 22330
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 TweenableVariableAsyncBase_1_GetNativeCurve_mC738E29622E63BEAEA944BBBB1F36714F666231E (TweenableVariableAsyncBase_1_t0A92C17D9391783B25BD32E62A3A296324C1A287* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		TweenableVariableAsyncBase_1_RefreshCurve_m5FE06066BD53F79AA70930D1D2662E2750C39F0D(__this, NULL);
		NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 L_0 = __this->___m_NativeCurve;
		return L_0;
	}
}
// Method Definition Index: 22331
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_RefreshCurve_m5FE06066BD53F79AA70930D1D2662E2750C39F0D (TweenableVariableAsyncBase_1_t0A92C17D9391783B25BD32E62A3A296324C1A287* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___m_CurveDirty;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2* L_1 = (NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2*)(&__this->___m_NativeCurve);
		bool L_2;
		L_2 = NativeCurve_get_isCreated_m862A0992B9257B63F7C2CE460A84C71353A97EEC(L_1, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}

IL_0015:
	{
		NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2* L_3 = (NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2*)(&__this->___m_NativeCurve);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_4;
		L_4 = TweenableVariableBase_1_get_animationCurve_m55397DEBDC220A8C682C16B5C4387DF00B7B4109_inline(__this, NULL);
		NativeCurve_Update_m12958A86045F18C1F2C01315DD112CC1FB5C99F4(L_3, L_4, ((int32_t)1024), NULL);
		__this->___m_CurveDirty = (bool)0;
	}

IL_0032:
	{
		return;
	}
}
// Method Definition Index: 22332
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_PreprocessTween_mD49CC1187A55ECBB8214A7F00FDF026B17C8C283 (TweenableVariableAsyncBase_1_t0A92C17D9391783B25BD32E62A3A296324C1A287* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		TweenableVariableBase_1_PreprocessTween_mF9B80F1F874EE88A2D320171A4803CCCCEA4B6AF(__this, NULL);
		TweenableVariableAsyncBase_1_UpdateStateFromCompletedJob_mD25FD8525E63D070F5421EA4FF80A69E53BD51D4(__this, NULL);
		return;
	}
}
// Method Definition Index: 22333
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_ExecuteTween_mC1A3108861D006C8E2186BDF6949AB876AD54FBB (TweenableVariableAsyncBase_1_t0A92C17D9391783B25BD32E62A3A296324C1A287* __this, float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___0_startValue, float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___1_targetValue, float ___2_tweenAmount, bool ___3_useCurve, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	uint8_t V_2 = 0x0;
	TweenJobData_1_tC12AA11A847D9ABA7DDDBAD9A71E05808BECD131 V_3;
	memset((&V_3), 0, sizeof(V_3));
	TweenJobData_1_tC12AA11A847D9ABA7DDDBAD9A71E05808BECD131 V_4;
	memset((&V_4), 0, sizeof(V_4));
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	float G_B8_0 = 0.0f;
	int32_t G_B11_0 = 0;
	{
		float L_0 = ___2_tweenAmount;
		if ((!(((float)L_0) > ((float)(0.999989986f)))))
		{
			goto IL_0010;
		}
	}
	{
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 L_1 = ___1_targetValue;
		TweenableVariableAsyncBase_1_set_Value_m13DFBD337F071EB806AE9D736C384070D3C5B0E4(__this, L_1, NULL);
		return;
	}

IL_0010:
	{
		bool L_2 = ___3_useCurve;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 L_3 = ___1_targetValue;
		G_B5_0 = L_3;
		goto IL_0018;
	}

IL_0017:
	{
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 L_4 = ___0_startValue;
		G_B5_0 = L_4;
	}

IL_0018:
	{
		V_0 = G_B5_0;
		bool L_5 = ___3_useCurve;
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		float L_6 = ___2_tweenAmount;
		G_B8_0 = L_6;
		goto IL_0025;
	}

IL_0020:
	{
		G_B8_0 = (1.0f);
	}

IL_0025:
	{
		V_1 = G_B8_0;
		bool L_7 = ___3_useCurve;
		if (L_7)
		{
			goto IL_0031;
		}
	}
	{
		G_B11_0 = ((int32_t)255);
		goto IL_003e;
	}

IL_0031:
	{
		float L_8 = ___2_tweenAmount;
		float L_9;
		L_9 = math_ceil_m06DEF6827759F405C10166F2C9E8047AE7C09179_inline(((float)il2cpp_codegen_multiply(L_8, (255.0f))), NULL);
		uint8_t L_10 = (il2cpp_codegen_conv<uint8_t,float,float,false,false>(L_9,NULL));
		G_B11_0 = ((int32_t)(L_10));
	}

IL_003e:
	{
		V_2 = (uint8_t)G_B11_0;
		il2cpp_codegen_initobj((&V_4), sizeof(TweenJobData_1_tC12AA11A847D9ABA7DDDBAD9A71E05808BECD131));
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 L_11;
		L_11 = TweenableVariableBase_1_get_initialValue_m1FB1C293F911ECEE83D12AE9369FAA597FFFF807_inline(__this, NULL);
		(&V_4)->___initialValue = L_11;
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 L_12 = V_0;
		(&V_4)->___stateOriginValue = L_12;
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 L_13 = ___1_targetValue;
		(&V_4)->___stateTargetValue = L_13;
		uint8_t L_14 = V_2;
		(&V_4)->___stateTransitionIncrement = L_14;
		NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 L_15;
		L_15 = TweenableVariableAsyncBase_1_GetNativeCurve_mC738E29622E63BEAEA944BBBB1F36714F666231E(__this, NULL);
		(&V_4)->___nativeCurve = L_15;
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 L_16 = ___0_startValue;
		(&V_4)->___tweenStartValue = L_16;
		float L_17 = V_1;
		(&V_4)->___tweenAmount = L_17;
		NativeArray_1_tB2C0A4BD42DDC767D3B622ACDDD0A5E3898E0F9C L_18;
		L_18 = TweenableVariableAsyncBase_1_GetJobOutputStore_m6DAC7922AF2D97B06293A8705ACEEF9A75117B16(__this, NULL);
		(&V_4)->___outputData = L_18;
		TweenJobData_1_tC12AA11A847D9ABA7DDDBAD9A71E05808BECD131 L_19 = V_4;
		V_3 = L_19;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_20;
		L_20 = VirtualFuncInvoker1< JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, TweenJobData_1_tC12AA11A847D9ABA7DDDBAD9A71E05808BECD131* >::Invoke(18, __this, (&V_3));
		__this->___m_LastJobHandle = L_20;
		__this->___m_HasJobPending = (bool)1;
		return;
	}
}
// Method Definition Index: 22334
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_UpdateStateFromCompletedJob_mD25FD8525E63D070F5421EA4FF80A69E53BD51D4 (TweenableVariableAsyncBase_1_t0A92C17D9391783B25BD32E62A3A296324C1A287* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NativeArray_1_tB2C0A4BD42DDC767D3B622ACDDD0A5E3898E0F9C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0;
		L_0 = TweenableVariableAsyncBase_1_CompleteJob_mC14CC21C2CA294CF963A521E20F927319482B5BC(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		NativeArray_1_tB2C0A4BD42DDC767D3B622ACDDD0A5E3898E0F9C L_1;
		L_1 = TweenableVariableAsyncBase_1_GetJobOutputStore_m6DAC7922AF2D97B06293A8705ACEEF9A75117B16(__this, NULL);
		V_0 = L_1;
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_ITEM(float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5, ((&V_0))->___m_Buffer, 0);
		TweenableVariableAsyncBase_1_set_Value_m13DFBD337F071EB806AE9D736C384070D3C5B0E4(__this, L_2, NULL);
		return;
	}
}
// Method Definition Index: 22336
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB2C0A4BD42DDC767D3B622ACDDD0A5E3898E0F9C TweenableVariableAsyncBase_1_GetJobOutputStore_m6DAC7922AF2D97B06293A8705ACEEF9A75117B16 (TweenableVariableAsyncBase_1_t0A92C17D9391783B25BD32E62A3A296324C1A287* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___m_OutputInitialized;
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		NativeArray_1_tB2C0A4BD42DDC767D3B622ACDDD0A5E3898E0F9C L_1;
		memset((&L_1), 0, sizeof(L_1));
		NativeArray_1__ctor_m3F073274644350A3AB96A6DC9FAEAA1CF55D49ED((&L_1), 1, 4, 1, NULL);
		__this->___m_JobOutputStore = L_1;
		__this->___m_OutputInitialized = (bool)1;
		DisposableManagerSingleton_RegisterDisposable_m59A00C2005FAFD93DD1CBB3ECBCA76804CD64786(__this, NULL);
	}

IL_0023:
	{
		NativeArray_1_tB2C0A4BD42DDC767D3B622ACDDD0A5E3898E0F9C L_2 = __this->___m_JobOutputStore;
		return L_2;
	}
}
// Method Definition Index: 22337
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_OnAnimationCurveChanged_mA7B85E1562774E4B0D94D6E4CEAD25C2AEE122AF (TweenableVariableAsyncBase_1_t0A92C17D9391783B25BD32E62A3A296324C1A287* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = ___0_value;
		TweenableVariableBase_1_OnAnimationCurveChanged_m615D1BACB33B9FE12C448973E7F39FD3797ED37B(__this, L_0, NULL);
		__this->___m_CurveDirty = (bool)1;
		return;
	}
}
// Method Definition Index: 22338
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenableVariableAsyncBase_1_CompleteJob_mC14CC21C2CA294CF963A521E20F927319482B5BC (TweenableVariableAsyncBase_1_t0A92C17D9391783B25BD32E62A3A296324C1A287* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___m_OutputInitialized;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->___m_HasJobPending;
		if (L_1)
		{
			goto IL_0012;
		}
	}

IL_0010:
	{
		return (bool)0;
	}

IL_0012:
	{
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* L_2 = (JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08*)(&__this->___m_LastJobHandle);
		JobHandle_Complete_mDCED35A125AAB37EDDAB2E31C805B4904B614A4A(L_2, NULL);
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* L_3 = (JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08*)(&__this->___m_LastJobHandle);
		il2cpp_codegen_initobj(L_3, sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		__this->___m_HasJobPending = (bool)0;
		return (bool)1;
	}
}
// Method Definition Index: 22339
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1__ctor_m0AD568EBB3DF7481FCDFCB07CA913B24C8FBC07A (TweenableVariableAsyncBase_1_t0A92C17D9391783B25BD32E62A3A296324C1A287* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		__this->___m_CurveDirty = (bool)1;
		TweenableVariableBase_1__ctor_m8FBC71F49CC1938EDCD56394A23AAC5B82474A9E(__this, NULL);
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
// Method Definition Index: 22327
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float3_t7600B73F092B37F484B12910A5269F30C778D31E TweenableVariableAsyncBase_1_get_Value_mCFD595007CD78615B7FD3F5535AAE616941D193A (TweenableVariableAsyncBase_1_t24C3255684D7C73284B0C5A0EBEEC43C7CE867F3* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float3_t7600B73F092B37F484B12910A5269F30C778D31E L_0;
		L_0 = BindableVariableBase_1_get_Value_mFB058C8CBBC994AB70F8F17047FA29748DDBDACF_inline(__this, NULL);
		return L_0;
	}
}
// Method Definition Index: 22328
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_set_Value_m8C121C22038B22441250708D8894FC985763F24F (TweenableVariableAsyncBase_1_t24C3255684D7C73284B0C5A0EBEEC43C7CE867F3* __this, float3_t7600B73F092B37F484B12910A5269F30C778D31E ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___m_HasJobPending;
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		bool L_1 = __this->___m_OutputInitialized;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		bool L_2;
		L_2 = TweenableVariableAsyncBase_1_CompleteJob_m7786DA2D6FA51A529753EC96D4D5B23A3942217C(__this, NULL);
		NativeArray_1_t4CB8C2A6DBEDF6C671F933ADC9E21367D90886F3* L_3 = (NativeArray_1_t4CB8C2A6DBEDF6C671F933ADC9E21367D90886F3*)(&__this->___m_JobOutputStore);
		float3_t7600B73F092B37F484B12910A5269F30C778D31E L_4 = ___0_value;
		IL2CPP_NATIVEARRAY_SET_ITEM(float3_t7600B73F092B37F484B12910A5269F30C778D31E, (L_3)->___m_Buffer, 0, (L_4));
	}

IL_0024:
	{
		float3_t7600B73F092B37F484B12910A5269F30C778D31E L_5 = ___0_value;
		BindableVariableBase_1_set_Value_mC146C923C3804A957825DA499821BDF37750F0E7(__this, L_5, NULL);
		return;
	}
}
// Method Definition Index: 22329
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_Dispose_m431F1E3326F4A5219B0A3E9ED36C38B06865E8BB (TweenableVariableAsyncBase_1_t24C3255684D7C73284B0C5A0EBEEC43C7CE867F3* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___m_OutputInitialized;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		TweenableVariableAsyncBase_1_UpdateStateFromCompletedJob_m95891B7257F1D063A3198DA14097AC3E8625899A(__this, NULL);
		NativeArray_1_t4CB8C2A6DBEDF6C671F933ADC9E21367D90886F3* L_1 = (NativeArray_1_t4CB8C2A6DBEDF6C671F933ADC9E21367D90886F3*)(&__this->___m_JobOutputStore);
		NativeArray_1_Dispose_m2A637EE3594AFEBB9D4A28FED111DE532EC1E707(L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		__this->___m_OutputInitialized = (bool)0;
	}

IL_0020:
	{
		NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2* L_2 = (NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2*)(&__this->___m_NativeCurve);
		bool L_3;
		L_3 = NativeCurve_get_isCreated_m862A0992B9257B63F7C2CE460A84C71353A97EEC(L_2, NULL);
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2* L_4 = (NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2*)(&__this->___m_NativeCurve);
		NativeCurve_Dispose_m257E292B03ABCDD6EDF3BE197652688AE36E6BB7(L_4, NULL);
		__this->___m_CurveDirty = (bool)1;
	}

IL_003f:
	{
		return;
	}
}
// Method Definition Index: 22330
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 TweenableVariableAsyncBase_1_GetNativeCurve_m400C9310B3F316417BF8175C7E45A79E0A15E42F (TweenableVariableAsyncBase_1_t24C3255684D7C73284B0C5A0EBEEC43C7CE867F3* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		TweenableVariableAsyncBase_1_RefreshCurve_m4FD03FB681F2D3213411B45ACF9103D0DCC0C8A3(__this, NULL);
		NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 L_0 = __this->___m_NativeCurve;
		return L_0;
	}
}
// Method Definition Index: 22331
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_RefreshCurve_m4FD03FB681F2D3213411B45ACF9103D0DCC0C8A3 (TweenableVariableAsyncBase_1_t24C3255684D7C73284B0C5A0EBEEC43C7CE867F3* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___m_CurveDirty;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2* L_1 = (NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2*)(&__this->___m_NativeCurve);
		bool L_2;
		L_2 = NativeCurve_get_isCreated_m862A0992B9257B63F7C2CE460A84C71353A97EEC(L_1, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}

IL_0015:
	{
		NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2* L_3 = (NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2*)(&__this->___m_NativeCurve);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_4;
		L_4 = TweenableVariableBase_1_get_animationCurve_m0D7F0A84FD0FD39DC0E1FFF9E48C67EEC6A6CB4D_inline(__this, NULL);
		NativeCurve_Update_m12958A86045F18C1F2C01315DD112CC1FB5C99F4(L_3, L_4, ((int32_t)1024), NULL);
		__this->___m_CurveDirty = (bool)0;
	}

IL_0032:
	{
		return;
	}
}
// Method Definition Index: 22332
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_PreprocessTween_mF46CCC575C6174043E23BCE84C733FD7A6257EAA (TweenableVariableAsyncBase_1_t24C3255684D7C73284B0C5A0EBEEC43C7CE867F3* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		TweenableVariableBase_1_PreprocessTween_m58944555DA2A8F100781DB5E5E8224F80B068FCE(__this, NULL);
		TweenableVariableAsyncBase_1_UpdateStateFromCompletedJob_m95891B7257F1D063A3198DA14097AC3E8625899A(__this, NULL);
		return;
	}
}
// Method Definition Index: 22333
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_ExecuteTween_m959BF0C483B35376E869E115E6891E77D8ED54CE (TweenableVariableAsyncBase_1_t24C3255684D7C73284B0C5A0EBEEC43C7CE867F3* __this, float3_t7600B73F092B37F484B12910A5269F30C778D31E ___0_startValue, float3_t7600B73F092B37F484B12910A5269F30C778D31E ___1_targetValue, float ___2_tweenAmount, bool ___3_useCurve, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	float3_t7600B73F092B37F484B12910A5269F30C778D31E V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	uint8_t V_2 = 0x0;
	TweenJobData_1_t934CE1645618038AB80D1E8767C3E96A47371ADC V_3;
	memset((&V_3), 0, sizeof(V_3));
	TweenJobData_1_t934CE1645618038AB80D1E8767C3E96A47371ADC V_4;
	memset((&V_4), 0, sizeof(V_4));
	float3_t7600B73F092B37F484B12910A5269F30C778D31E G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	float G_B8_0 = 0.0f;
	int32_t G_B11_0 = 0;
	{
		float L_0 = ___2_tweenAmount;
		if ((!(((float)L_0) > ((float)(0.999989986f)))))
		{
			goto IL_0010;
		}
	}
	{
		float3_t7600B73F092B37F484B12910A5269F30C778D31E L_1 = ___1_targetValue;
		TweenableVariableAsyncBase_1_set_Value_m8C121C22038B22441250708D8894FC985763F24F(__this, L_1, NULL);
		return;
	}

IL_0010:
	{
		bool L_2 = ___3_useCurve;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		float3_t7600B73F092B37F484B12910A5269F30C778D31E L_3 = ___1_targetValue;
		G_B5_0 = L_3;
		goto IL_0018;
	}

IL_0017:
	{
		float3_t7600B73F092B37F484B12910A5269F30C778D31E L_4 = ___0_startValue;
		G_B5_0 = L_4;
	}

IL_0018:
	{
		V_0 = G_B5_0;
		bool L_5 = ___3_useCurve;
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		float L_6 = ___2_tweenAmount;
		G_B8_0 = L_6;
		goto IL_0025;
	}

IL_0020:
	{
		G_B8_0 = (1.0f);
	}

IL_0025:
	{
		V_1 = G_B8_0;
		bool L_7 = ___3_useCurve;
		if (L_7)
		{
			goto IL_0031;
		}
	}
	{
		G_B11_0 = ((int32_t)255);
		goto IL_003e;
	}

IL_0031:
	{
		float L_8 = ___2_tweenAmount;
		float L_9;
		L_9 = math_ceil_m06DEF6827759F405C10166F2C9E8047AE7C09179_inline(((float)il2cpp_codegen_multiply(L_8, (255.0f))), NULL);
		uint8_t L_10 = (il2cpp_codegen_conv<uint8_t,float,float,false,false>(L_9,NULL));
		G_B11_0 = ((int32_t)(L_10));
	}

IL_003e:
	{
		V_2 = (uint8_t)G_B11_0;
		il2cpp_codegen_initobj((&V_4), sizeof(TweenJobData_1_t934CE1645618038AB80D1E8767C3E96A47371ADC));
		float3_t7600B73F092B37F484B12910A5269F30C778D31E L_11;
		L_11 = TweenableVariableBase_1_get_initialValue_m39887A8F0538E4A03F89B90922AC33E782982744_inline(__this, NULL);
		(&V_4)->___initialValue = L_11;
		float3_t7600B73F092B37F484B12910A5269F30C778D31E L_12 = V_0;
		(&V_4)->___stateOriginValue = L_12;
		float3_t7600B73F092B37F484B12910A5269F30C778D31E L_13 = ___1_targetValue;
		(&V_4)->___stateTargetValue = L_13;
		uint8_t L_14 = V_2;
		(&V_4)->___stateTransitionIncrement = L_14;
		NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 L_15;
		L_15 = TweenableVariableAsyncBase_1_GetNativeCurve_m400C9310B3F316417BF8175C7E45A79E0A15E42F(__this, NULL);
		(&V_4)->___nativeCurve = L_15;
		float3_t7600B73F092B37F484B12910A5269F30C778D31E L_16 = ___0_startValue;
		(&V_4)->___tweenStartValue = L_16;
		float L_17 = V_1;
		(&V_4)->___tweenAmount = L_17;
		NativeArray_1_t4CB8C2A6DBEDF6C671F933ADC9E21367D90886F3 L_18;
		L_18 = TweenableVariableAsyncBase_1_GetJobOutputStore_mDE98AA9CD1559FA1A4FE67F7F3A4BA0B5881B485(__this, NULL);
		(&V_4)->___outputData = L_18;
		TweenJobData_1_t934CE1645618038AB80D1E8767C3E96A47371ADC L_19 = V_4;
		V_3 = L_19;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_20;
		L_20 = VirtualFuncInvoker1< JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, TweenJobData_1_t934CE1645618038AB80D1E8767C3E96A47371ADC* >::Invoke(18, __this, (&V_3));
		__this->___m_LastJobHandle = L_20;
		__this->___m_HasJobPending = (bool)1;
		return;
	}
}
// Method Definition Index: 22334
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_UpdateStateFromCompletedJob_m95891B7257F1D063A3198DA14097AC3E8625899A (TweenableVariableAsyncBase_1_t24C3255684D7C73284B0C5A0EBEEC43C7CE867F3* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NativeArray_1_t4CB8C2A6DBEDF6C671F933ADC9E21367D90886F3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0;
		L_0 = TweenableVariableAsyncBase_1_CompleteJob_m7786DA2D6FA51A529753EC96D4D5B23A3942217C(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		NativeArray_1_t4CB8C2A6DBEDF6C671F933ADC9E21367D90886F3 L_1;
		L_1 = TweenableVariableAsyncBase_1_GetJobOutputStore_mDE98AA9CD1559FA1A4FE67F7F3A4BA0B5881B485(__this, NULL);
		V_0 = L_1;
		float3_t7600B73F092B37F484B12910A5269F30C778D31E L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_ITEM(float3_t7600B73F092B37F484B12910A5269F30C778D31E, ((&V_0))->___m_Buffer, 0);
		TweenableVariableAsyncBase_1_set_Value_m8C121C22038B22441250708D8894FC985763F24F(__this, L_2, NULL);
		return;
	}
}
// Method Definition Index: 22336
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t4CB8C2A6DBEDF6C671F933ADC9E21367D90886F3 TweenableVariableAsyncBase_1_GetJobOutputStore_mDE98AA9CD1559FA1A4FE67F7F3A4BA0B5881B485 (TweenableVariableAsyncBase_1_t24C3255684D7C73284B0C5A0EBEEC43C7CE867F3* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___m_OutputInitialized;
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		NativeArray_1_t4CB8C2A6DBEDF6C671F933ADC9E21367D90886F3 L_1;
		memset((&L_1), 0, sizeof(L_1));
		NativeArray_1__ctor_mFDD62CBC272061C359019B1D200640B06FB50703((&L_1), 1, 4, 1, NULL);
		__this->___m_JobOutputStore = L_1;
		__this->___m_OutputInitialized = (bool)1;
		DisposableManagerSingleton_RegisterDisposable_m59A00C2005FAFD93DD1CBB3ECBCA76804CD64786(__this, NULL);
	}

IL_0023:
	{
		NativeArray_1_t4CB8C2A6DBEDF6C671F933ADC9E21367D90886F3 L_2 = __this->___m_JobOutputStore;
		return L_2;
	}
}
// Method Definition Index: 22337
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_OnAnimationCurveChanged_mED62E3C6BB44E7527F47FB59D3C59F4F42C96EE2 (TweenableVariableAsyncBase_1_t24C3255684D7C73284B0C5A0EBEEC43C7CE867F3* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = ___0_value;
		TweenableVariableBase_1_OnAnimationCurveChanged_mF940DBEAE0B766E5C1CA8BFB4720495F3E30BF5A(__this, L_0, NULL);
		__this->___m_CurveDirty = (bool)1;
		return;
	}
}
// Method Definition Index: 22338
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenableVariableAsyncBase_1_CompleteJob_m7786DA2D6FA51A529753EC96D4D5B23A3942217C (TweenableVariableAsyncBase_1_t24C3255684D7C73284B0C5A0EBEEC43C7CE867F3* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___m_OutputInitialized;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->___m_HasJobPending;
		if (L_1)
		{
			goto IL_0012;
		}
	}

IL_0010:
	{
		return (bool)0;
	}

IL_0012:
	{
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* L_2 = (JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08*)(&__this->___m_LastJobHandle);
		JobHandle_Complete_mDCED35A125AAB37EDDAB2E31C805B4904B614A4A(L_2, NULL);
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* L_3 = (JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08*)(&__this->___m_LastJobHandle);
		il2cpp_codegen_initobj(L_3, sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		__this->___m_HasJobPending = (bool)0;
		return (bool)1;
	}
}
// Method Definition Index: 22339
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1__ctor_mCBA361D7D88241BB591D8685F80EF81D145CD53D (TweenableVariableAsyncBase_1_t24C3255684D7C73284B0C5A0EBEEC43C7CE867F3* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		__this->___m_CurveDirty = (bool)1;
		TweenableVariableBase_1__ctor_m7A162ABC9A0A622C107B0C1E69E73241C9E72A13(__this, NULL);
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
// Method Definition Index: 22327
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float4_t545A994996126766890C1F28B43EA823F2410190 TweenableVariableAsyncBase_1_get_Value_mFC7B1A3C7DF1BA16B166EE0EC884C977FD8D9703 (TweenableVariableAsyncBase_1_tD3FE5A9C4EEE24A00A53CD66FEB12CB408F76FF2* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float4_t545A994996126766890C1F28B43EA823F2410190 L_0;
		L_0 = BindableVariableBase_1_get_Value_m2079036D42637925E85AB7BDEFE82041D3AD8357_inline(__this, NULL);
		return L_0;
	}
}
// Method Definition Index: 22328
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_set_Value_m09287DBC12CE7BB333CAF20A281910B58ABE2E0C (TweenableVariableAsyncBase_1_tD3FE5A9C4EEE24A00A53CD66FEB12CB408F76FF2* __this, float4_t545A994996126766890C1F28B43EA823F2410190 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___m_HasJobPending;
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		bool L_1 = __this->___m_OutputInitialized;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		bool L_2;
		L_2 = TweenableVariableAsyncBase_1_CompleteJob_m26AAE41705C9C7EF8CF748EE597E5A3D6C5BDD31(__this, NULL);
		NativeArray_1_t38B974FEBDE9C6BC682E4154FA808DE4F13EF788* L_3 = (NativeArray_1_t38B974FEBDE9C6BC682E4154FA808DE4F13EF788*)(&__this->___m_JobOutputStore);
		float4_t545A994996126766890C1F28B43EA823F2410190 L_4 = ___0_value;
		IL2CPP_NATIVEARRAY_SET_ITEM(float4_t545A994996126766890C1F28B43EA823F2410190, (L_3)->___m_Buffer, 0, (L_4));
	}

IL_0024:
	{
		float4_t545A994996126766890C1F28B43EA823F2410190 L_5 = ___0_value;
		BindableVariableBase_1_set_Value_mBBBC397B7ED528276A0FE1260648A9B3B1711160(__this, L_5, NULL);
		return;
	}
}
// Method Definition Index: 22329
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_Dispose_m7A67716340620C8B46FA54470CD4A37898211335 (TweenableVariableAsyncBase_1_tD3FE5A9C4EEE24A00A53CD66FEB12CB408F76FF2* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___m_OutputInitialized;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		TweenableVariableAsyncBase_1_UpdateStateFromCompletedJob_mB877C881052323083AE7B9FDDA69D66CAD337393(__this, NULL);
		NativeArray_1_t38B974FEBDE9C6BC682E4154FA808DE4F13EF788* L_1 = (NativeArray_1_t38B974FEBDE9C6BC682E4154FA808DE4F13EF788*)(&__this->___m_JobOutputStore);
		NativeArray_1_Dispose_m43802A93D40E3DD4656B3DA9CE648583E632FD69(L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		__this->___m_OutputInitialized = (bool)0;
	}

IL_0020:
	{
		NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2* L_2 = (NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2*)(&__this->___m_NativeCurve);
		bool L_3;
		L_3 = NativeCurve_get_isCreated_m862A0992B9257B63F7C2CE460A84C71353A97EEC(L_2, NULL);
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2* L_4 = (NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2*)(&__this->___m_NativeCurve);
		NativeCurve_Dispose_m257E292B03ABCDD6EDF3BE197652688AE36E6BB7(L_4, NULL);
		__this->___m_CurveDirty = (bool)1;
	}

IL_003f:
	{
		return;
	}
}
// Method Definition Index: 22330
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 TweenableVariableAsyncBase_1_GetNativeCurve_mC3F5BBBF46BC9CF3F1FA1615836393E7C04AA969 (TweenableVariableAsyncBase_1_tD3FE5A9C4EEE24A00A53CD66FEB12CB408F76FF2* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		TweenableVariableAsyncBase_1_RefreshCurve_mE14F5E6818345E878FDCB0FC9919C3A16EA0DE5B(__this, NULL);
		NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 L_0 = __this->___m_NativeCurve;
		return L_0;
	}
}
// Method Definition Index: 22331
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_RefreshCurve_mE14F5E6818345E878FDCB0FC9919C3A16EA0DE5B (TweenableVariableAsyncBase_1_tD3FE5A9C4EEE24A00A53CD66FEB12CB408F76FF2* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___m_CurveDirty;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2* L_1 = (NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2*)(&__this->___m_NativeCurve);
		bool L_2;
		L_2 = NativeCurve_get_isCreated_m862A0992B9257B63F7C2CE460A84C71353A97EEC(L_1, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}

IL_0015:
	{
		NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2* L_3 = (NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2*)(&__this->___m_NativeCurve);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_4;
		L_4 = TweenableVariableBase_1_get_animationCurve_m9E5AF31E43EACFB95A17770928B657FA44E7F699_inline(__this, NULL);
		NativeCurve_Update_m12958A86045F18C1F2C01315DD112CC1FB5C99F4(L_3, L_4, ((int32_t)1024), NULL);
		__this->___m_CurveDirty = (bool)0;
	}

IL_0032:
	{
		return;
	}
}
// Method Definition Index: 22332
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_PreprocessTween_m8BEFBB0DA2831D232DAD998062A7565F924E9DFB (TweenableVariableAsyncBase_1_tD3FE5A9C4EEE24A00A53CD66FEB12CB408F76FF2* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		TweenableVariableBase_1_PreprocessTween_m0FFE1F9C326282BAAC3552002477046687CF5861(__this, NULL);
		TweenableVariableAsyncBase_1_UpdateStateFromCompletedJob_mB877C881052323083AE7B9FDDA69D66CAD337393(__this, NULL);
		return;
	}
}
// Method Definition Index: 22333
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_ExecuteTween_mF72A3A071C23807ED2EB5901A2849CB57D52EF6F (TweenableVariableAsyncBase_1_tD3FE5A9C4EEE24A00A53CD66FEB12CB408F76FF2* __this, float4_t545A994996126766890C1F28B43EA823F2410190 ___0_startValue, float4_t545A994996126766890C1F28B43EA823F2410190 ___1_targetValue, float ___2_tweenAmount, bool ___3_useCurve, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	float4_t545A994996126766890C1F28B43EA823F2410190 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	uint8_t V_2 = 0x0;
	TweenJobData_1_tCBC6BEBC1156C8C2517800A02E82EAD727A83415 V_3;
	memset((&V_3), 0, sizeof(V_3));
	TweenJobData_1_tCBC6BEBC1156C8C2517800A02E82EAD727A83415 V_4;
	memset((&V_4), 0, sizeof(V_4));
	float4_t545A994996126766890C1F28B43EA823F2410190 G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	float G_B8_0 = 0.0f;
	int32_t G_B11_0 = 0;
	{
		float L_0 = ___2_tweenAmount;
		if ((!(((float)L_0) > ((float)(0.999989986f)))))
		{
			goto IL_0010;
		}
	}
	{
		float4_t545A994996126766890C1F28B43EA823F2410190 L_1 = ___1_targetValue;
		TweenableVariableAsyncBase_1_set_Value_m09287DBC12CE7BB333CAF20A281910B58ABE2E0C(__this, L_1, NULL);
		return;
	}

IL_0010:
	{
		bool L_2 = ___3_useCurve;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		float4_t545A994996126766890C1F28B43EA823F2410190 L_3 = ___1_targetValue;
		G_B5_0 = L_3;
		goto IL_0018;
	}

IL_0017:
	{
		float4_t545A994996126766890C1F28B43EA823F2410190 L_4 = ___0_startValue;
		G_B5_0 = L_4;
	}

IL_0018:
	{
		V_0 = G_B5_0;
		bool L_5 = ___3_useCurve;
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		float L_6 = ___2_tweenAmount;
		G_B8_0 = L_6;
		goto IL_0025;
	}

IL_0020:
	{
		G_B8_0 = (1.0f);
	}

IL_0025:
	{
		V_1 = G_B8_0;
		bool L_7 = ___3_useCurve;
		if (L_7)
		{
			goto IL_0031;
		}
	}
	{
		G_B11_0 = ((int32_t)255);
		goto IL_003e;
	}

IL_0031:
	{
		float L_8 = ___2_tweenAmount;
		float L_9;
		L_9 = math_ceil_m06DEF6827759F405C10166F2C9E8047AE7C09179_inline(((float)il2cpp_codegen_multiply(L_8, (255.0f))), NULL);
		uint8_t L_10 = (il2cpp_codegen_conv<uint8_t,float,float,false,false>(L_9,NULL));
		G_B11_0 = ((int32_t)(L_10));
	}

IL_003e:
	{
		V_2 = (uint8_t)G_B11_0;
		il2cpp_codegen_initobj((&V_4), sizeof(TweenJobData_1_tCBC6BEBC1156C8C2517800A02E82EAD727A83415));
		float4_t545A994996126766890C1F28B43EA823F2410190 L_11;
		L_11 = TweenableVariableBase_1_get_initialValue_m4BCD5A8FB7FFEC10F64E2229C79255538745D10E_inline(__this, NULL);
		(&V_4)->___initialValue = L_11;
		float4_t545A994996126766890C1F28B43EA823F2410190 L_12 = V_0;
		(&V_4)->___stateOriginValue = L_12;
		float4_t545A994996126766890C1F28B43EA823F2410190 L_13 = ___1_targetValue;
		(&V_4)->___stateTargetValue = L_13;
		uint8_t L_14 = V_2;
		(&V_4)->___stateTransitionIncrement = L_14;
		NativeCurve_t53467541921F37973B10C15D756AC81FD88381D2 L_15;
		L_15 = TweenableVariableAsyncBase_1_GetNativeCurve_mC3F5BBBF46BC9CF3F1FA1615836393E7C04AA969(__this, NULL);
		(&V_4)->___nativeCurve = L_15;
		float4_t545A994996126766890C1F28B43EA823F2410190 L_16 = ___0_startValue;
		(&V_4)->___tweenStartValue = L_16;
		float L_17 = V_1;
		(&V_4)->___tweenAmount = L_17;
		NativeArray_1_t38B974FEBDE9C6BC682E4154FA808DE4F13EF788 L_18;
		L_18 = TweenableVariableAsyncBase_1_GetJobOutputStore_mF6CE6A2CCF38630441E58A18641E585F69A04D86(__this, NULL);
		(&V_4)->___outputData = L_18;
		TweenJobData_1_tCBC6BEBC1156C8C2517800A02E82EAD727A83415 L_19 = V_4;
		V_3 = L_19;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_20;
		L_20 = VirtualFuncInvoker1< JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, TweenJobData_1_tCBC6BEBC1156C8C2517800A02E82EAD727A83415* >::Invoke(18, __this, (&V_3));
		__this->___m_LastJobHandle = L_20;
		__this->___m_HasJobPending = (bool)1;
		return;
	}
}
// Method Definition Index: 22334
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_UpdateStateFromCompletedJob_mB877C881052323083AE7B9FDDA69D66CAD337393 (TweenableVariableAsyncBase_1_tD3FE5A9C4EEE24A00A53CD66FEB12CB408F76FF2* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NativeArray_1_t38B974FEBDE9C6BC682E4154FA808DE4F13EF788 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0;
		L_0 = TweenableVariableAsyncBase_1_CompleteJob_m26AAE41705C9C7EF8CF748EE597E5A3D6C5BDD31(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		NativeArray_1_t38B974FEBDE9C6BC682E4154FA808DE4F13EF788 L_1;
		L_1 = TweenableVariableAsyncBase_1_GetJobOutputStore_mF6CE6A2CCF38630441E58A18641E585F69A04D86(__this, NULL);
		V_0 = L_1;
		float4_t545A994996126766890C1F28B43EA823F2410190 L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_ITEM(float4_t545A994996126766890C1F28B43EA823F2410190, ((&V_0))->___m_Buffer, 0);
		TweenableVariableAsyncBase_1_set_Value_m09287DBC12CE7BB333CAF20A281910B58ABE2E0C(__this, L_2, NULL);
		return;
	}
}
// Method Definition Index: 22336
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t38B974FEBDE9C6BC682E4154FA808DE4F13EF788 TweenableVariableAsyncBase_1_GetJobOutputStore_mF6CE6A2CCF38630441E58A18641E585F69A04D86 (TweenableVariableAsyncBase_1_tD3FE5A9C4EEE24A00A53CD66FEB12CB408F76FF2* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___m_OutputInitialized;
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		NativeArray_1_t38B974FEBDE9C6BC682E4154FA808DE4F13EF788 L_1;
		memset((&L_1), 0, sizeof(L_1));
		NativeArray_1__ctor_mA436E603DA9491DAC49E5C7203B895500F86B034((&L_1), 1, 4, 1, NULL);
		__this->___m_JobOutputStore = L_1;
		__this->___m_OutputInitialized = (bool)1;
		DisposableManagerSingleton_RegisterDisposable_m59A00C2005FAFD93DD1CBB3ECBCA76804CD64786(__this, NULL);
	}

IL_0023:
	{
		NativeArray_1_t38B974FEBDE9C6BC682E4154FA808DE4F13EF788 L_2 = __this->___m_JobOutputStore;
		return L_2;
	}
}
// Method Definition Index: 22337
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1_OnAnimationCurveChanged_m9F38929580DA7ED0C99B4018E4131F8C9CC989DF (TweenableVariableAsyncBase_1_tD3FE5A9C4EEE24A00A53CD66FEB12CB408F76FF2* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = ___0_value;
		TweenableVariableBase_1_OnAnimationCurveChanged_mFA5416E2B47F19B0ACC3135EB90904F461F2B4A2(__this, L_0, NULL);
		__this->___m_CurveDirty = (bool)1;
		return;
	}
}
// Method Definition Index: 22338
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenableVariableAsyncBase_1_CompleteJob_m26AAE41705C9C7EF8CF748EE597E5A3D6C5BDD31 (TweenableVariableAsyncBase_1_tD3FE5A9C4EEE24A00A53CD66FEB12CB408F76FF2* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___m_OutputInitialized;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->___m_HasJobPending;
		if (L_1)
		{
			goto IL_0012;
		}
	}

IL_0010:
	{
		return (bool)0;
	}

IL_0012:
	{
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* L_2 = (JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08*)(&__this->___m_LastJobHandle);
		JobHandle_Complete_mDCED35A125AAB37EDDAB2E31C805B4904B614A4A(L_2, NULL);
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* L_3 = (JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08*)(&__this->___m_LastJobHandle);
		il2cpp_codegen_initobj(L_3, sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		__this->___m_HasJobPending = (bool)0;
		return (bool)1;
	}
}
// Method Definition Index: 22339
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableAsyncBase_1__ctor_m1F4D74FCE017ECDDB5B6B960495B3D24162228D2 (TweenableVariableAsyncBase_1_tD3FE5A9C4EEE24A00A53CD66FEB12CB408F76FF2* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		__this->___m_CurveDirty = (bool)1;
		TweenableVariableBase_1__ctor_m912642E50E0348D02E8EAF1EC7FAFD20732F3D11(__this, NULL);
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
// Method Definition Index: 22340
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* TweenableVariableBase_1_get_animationCurve_m6EC9A21B3791E6E1974401435B3ABA3E39C864E6 (TweenableVariableBase_1_t8364472CCBD4F605378E11C0AC3182CEC3E26736* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = __this->___m_AnimationCurve;
		return L_0;
	}
}
// Method Definition Index: 22341
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1_set_animationCurve_m3C3F7A12DC1FEA253EAB11D23A96136FF33A857C (TweenableVariableBase_1_t8364472CCBD4F605378E11C0AC3182CEC3E26736* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = ___0_value;
		__this->___m_AnimationCurve = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AnimationCurve), (void*)L_0);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_1 = ___0_value;
		VirtualActionInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* >::Invoke(14, __this, L_1);
		return;
	}
}
// Method Definition Index: 22342
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TweenableVariableBase_1_get_target_mE6FD18451F50101EFE64887DD526D68B91E95E28 (TweenableVariableBase_1_t8364472CCBD4F605378E11C0AC3182CEC3E26736* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_Target;
		return L_0;
	}
}
// Method Definition Index: 22343
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1_set_target_m16A8BB4CD70A810413D70BA0DD6CEE5C45E83417 (TweenableVariableBase_1_t8364472CCBD4F605378E11C0AC3182CEC3E26736* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_0 = (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)(&__this->___m_Target);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___0_value;
		bool L_2;
		L_2 = Color_Equals_mD297CAFFEBE9352C940873862FDF9A28F1F02435_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		return;
	}

IL_0015:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___0_value;
		__this->___m_Target = L_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___m_Target;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(15, __this, L_4);
		return;
	}
}
// Method Definition Index: 22344
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TweenableVariableBase_1_get_initialValue_m7F174333E94175EA8B3F25095AA58941D1100ACA (TweenableVariableBase_1_t8364472CCBD4F605378E11C0AC3182CEC3E26736* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___U3CinitialValueU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 22345
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1_set_initialValue_m0C195E427EC2AD002B68B1A724283B21EAA98D8D (TweenableVariableBase_1_t8364472CCBD4F605378E11C0AC3182CEC3E26736* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_value;
		__this->___U3CinitialValueU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 22346
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1_HandleTween_mE881A306195BF7919C68BB32D0DD0756CCADFC5F (TweenableVariableBase_1_t8364472CCBD4F605378E11C0AC3182CEC3E26736* __this, float ___0_tweenTarget, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = TweenableVariableBase_1_get_target_mE6FD18451F50101EFE64887DD526D68B91E95E28_inline(__this, NULL);
		bool L_1;
		L_1 = VirtualFuncInvoker1< bool, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(12, __this, L_0);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		return;
	}

IL_000f:
	{
		VirtualActionInvoker0::Invoke(16, __this);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = BindableVariableBase_1_get_Value_m91CB4186D9501A8357D89A87382E0AA9662E151E_inline(__this, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = TweenableVariableBase_1_get_target_mE6FD18451F50101EFE64887DD526D68B91E95E28_inline(__this, NULL);
		float L_4 = ___0_tweenTarget;
		VirtualActionInvoker4< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, float, bool >::Invoke(13, __this, L_2, L_3, L_4, (bool)0);
		return;
	}
}
// Method Definition Index: 22348
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenableVariableBase_1_StartAutoTween_m687778285E87A0431E4A8DE68A63A6623AAC3ABB (TweenableVariableBase_1_t8364472CCBD4F605378E11C0AC3182CEC3E26736* __this, float ___0_deltaTimeMultiplier, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		U3CStartAutoTweenU3Ed__15_t964033BA020D9A4F19E6256B7CEB1A24FED19BBC* L_0 = (U3CStartAutoTweenU3Ed__15_t964033BA020D9A4F19E6256B7CEB1A24FED19BBC*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9));
		U3CStartAutoTweenU3Ed__15__ctor_mC8B2A96752F231F0A1D160AF85E8B6D096E52655(L_0, 0, NULL);
		U3CStartAutoTweenU3Ed__15_t964033BA020D9A4F19E6256B7CEB1A24FED19BBC* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		U3CStartAutoTweenU3Ed__15_t964033BA020D9A4F19E6256B7CEB1A24FED19BBC* L_2 = L_1;
		float L_3 = ___0_deltaTimeMultiplier;
		NullCheck(L_2);
		L_2->___deltaTimeMultiplier = L_3;
		return L_2;
	}
}
// Method Definition Index: 22349
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenableVariableBase_1_PlaySequence_mBB8B160E07DBDBE4A2134D74D94487CB7A652EDE (TweenableVariableBase_1_t8364472CCBD4F605378E11C0AC3182CEC3E26736* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_start, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_finish, float ___2_duration, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___3_onComplete, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		U3CPlaySequenceU3Ed__16_tD929E6110FE78A4938CC59458DF4E7F1E168BCA8* L_0 = (U3CPlaySequenceU3Ed__16_tD929E6110FE78A4938CC59458DF4E7F1E168BCA8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
		U3CPlaySequenceU3Ed__16__ctor_mD5239208BA9D14D79B5035D4801DBADB83E20CFA(L_0, 0, NULL);
		U3CPlaySequenceU3Ed__16_tD929E6110FE78A4938CC59458DF4E7F1E168BCA8* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		U3CPlaySequenceU3Ed__16_tD929E6110FE78A4938CC59458DF4E7F1E168BCA8* L_2 = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___0_start;
		NullCheck(L_2);
		L_2->___start = L_3;
		U3CPlaySequenceU3Ed__16_tD929E6110FE78A4938CC59458DF4E7F1E168BCA8* L_4 = L_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___1_finish;
		NullCheck(L_4);
		L_4->___finish = L_5;
		U3CPlaySequenceU3Ed__16_tD929E6110FE78A4938CC59458DF4E7F1E168BCA8* L_6 = L_4;
		float L_7 = ___2_duration;
		NullCheck(L_6);
		L_6->___duration = L_7;
		U3CPlaySequenceU3Ed__16_tD929E6110FE78A4938CC59458DF4E7F1E168BCA8* L_8 = L_6;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = ___3_onComplete;
		NullCheck(L_8);
		L_8->___onComplete = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___onComplete), (void*)L_9);
		return L_8;
	}
}
// Method Definition Index: 22350
// Method Definition Index: 22351
// Method Definition Index: 22352
// Method Definition Index: 22353
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1__ctor_mCAEAF8CBEB3AC895E3B9CD683F8C9B7E2D334A72 (TweenableVariableBase_1_t8364472CCBD4F605378E11C0AC3182CEC3E26736* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0;
		L_0 = AnimationCurve_EaseInOut_m01DD06E6C8962F8F62F293C9EAE491C3D3F2CAF3((0.0f), (0.0f), (1.0f), (1.0f), NULL);
		__this->___m_AnimationCurve = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AnimationCurve), (void*)L_0);
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		BindableVariable_1__ctor_m46454FD2616E16C958CBF75FACF06DC26354C3D6(__this, L_1, (bool)1, (Func_3_t694ADFBBF2CEA4DEF1F1F1F9B00D5DCAE200F97E*)NULL, (bool)0, NULL);
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
// Method Definition Index: 22340
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* TweenableVariableBase_1_get_animationCurve_m21E54689FDC5927A7972A3C3E2DA224B4A76CBAB (TweenableVariableBase_1_t894346E06DB112599F8C5FBC5AD5F251F33CFBD9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = __this->___m_AnimationCurve;
		return L_0;
	}
}
// Method Definition Index: 22341
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1_set_animationCurve_mFA270D85721C6691543116D24F2BBB28677A45AC (TweenableVariableBase_1_t894346E06DB112599F8C5FBC5AD5F251F33CFBD9* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = ___0_value;
		__this->___m_AnimationCurve = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AnimationCurve), (void*)L_0);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_1 = ___0_value;
		VirtualActionInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* >::Invoke(14, __this, L_1);
		return;
	}
}
// Method Definition Index: 22342
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TweenableVariableBase_1_get_target_mE8C9B81F32FFE81DDA5373629D88AF18F1B76E87 (TweenableVariableBase_1_t894346E06DB112599F8C5FBC5AD5F251F33CFBD9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___m_Target;
		return L_0;
	}
}
// Method Definition Index: 22343
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1_set_target_m3B5D4156AFDDEE2E041341605265E52A487F1657 (TweenableVariableBase_1_t894346E06DB112599F8C5FBC5AD5F251F33CFBD9* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_0 = (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)(&__this->___m_Target);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___0_value;
		bool L_2;
		L_2 = Quaternion_Equals_m25B95D8412B79CC7F8B34062BFAE662BD99578BE_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		return;
	}

IL_0015:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = ___0_value;
		__this->___m_Target = L_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = __this->___m_Target;
		VirtualActionInvoker1< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(15, __this, L_4);
		return;
	}
}
// Method Definition Index: 22344
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TweenableVariableBase_1_get_initialValue_m4B04515498E5CE2013241DBF7F43AD0ED688471D (TweenableVariableBase_1_t894346E06DB112599F8C5FBC5AD5F251F33CFBD9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___U3CinitialValueU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 22345
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1_set_initialValue_mED8169A6BC4A8E293C7E6D2E57A2B8DB25A0733C (TweenableVariableBase_1_t894346E06DB112599F8C5FBC5AD5F251F33CFBD9* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_value;
		__this->___U3CinitialValueU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 22346
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1_HandleTween_m197557B3C05112A4C89C97E2200E07C1DCF2C274 (TweenableVariableBase_1_t894346E06DB112599F8C5FBC5AD5F251F33CFBD9* __this, float ___0_tweenTarget, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = TweenableVariableBase_1_get_target_mE8C9B81F32FFE81DDA5373629D88AF18F1B76E87_inline(__this, NULL);
		bool L_1;
		L_1 = VirtualFuncInvoker1< bool, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(12, __this, L_0);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		return;
	}

IL_000f:
	{
		VirtualActionInvoker0::Invoke(16, __this);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = BindableVariableBase_1_get_Value_mDA92236BCE8EC7928399D7271AA97D7B62941EEC_inline(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = TweenableVariableBase_1_get_target_mE8C9B81F32FFE81DDA5373629D88AF18F1B76E87_inline(__this, NULL);
		float L_4 = ___0_tweenTarget;
		VirtualActionInvoker4< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, float, bool >::Invoke(13, __this, L_2, L_3, L_4, (bool)0);
		return;
	}
}
// Method Definition Index: 22348
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenableVariableBase_1_StartAutoTween_m392286EB661B855E2F57C6E7D381910C63204C3A (TweenableVariableBase_1_t894346E06DB112599F8C5FBC5AD5F251F33CFBD9* __this, float ___0_deltaTimeMultiplier, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		U3CStartAutoTweenU3Ed__15_t8D4EED35BE1F7508EB210894C5CCDB4B853C0409* L_0 = (U3CStartAutoTweenU3Ed__15_t8D4EED35BE1F7508EB210894C5CCDB4B853C0409*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9));
		U3CStartAutoTweenU3Ed__15__ctor_mD806DE58EC9FDDB99D70D834D484788C5A0F944F(L_0, 0, NULL);
		U3CStartAutoTweenU3Ed__15_t8D4EED35BE1F7508EB210894C5CCDB4B853C0409* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		U3CStartAutoTweenU3Ed__15_t8D4EED35BE1F7508EB210894C5CCDB4B853C0409* L_2 = L_1;
		float L_3 = ___0_deltaTimeMultiplier;
		NullCheck(L_2);
		L_2->___deltaTimeMultiplier = L_3;
		return L_2;
	}
}
// Method Definition Index: 22349
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenableVariableBase_1_PlaySequence_mFFAF06B6A61980AF2F2A818FA952D3A1497F4A0B (TweenableVariableBase_1_t894346E06DB112599F8C5FBC5AD5F251F33CFBD9* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_start, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_finish, float ___2_duration, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___3_onComplete, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		U3CPlaySequenceU3Ed__16_t6E1C7756370FBAA5707020040BCB462499584560* L_0 = (U3CPlaySequenceU3Ed__16_t6E1C7756370FBAA5707020040BCB462499584560*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
		U3CPlaySequenceU3Ed__16__ctor_mD30D043965C8B426229C7C1EB62FE361A0447792(L_0, 0, NULL);
		U3CPlaySequenceU3Ed__16_t6E1C7756370FBAA5707020040BCB462499584560* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		U3CPlaySequenceU3Ed__16_t6E1C7756370FBAA5707020040BCB462499584560* L_2 = L_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = ___0_start;
		NullCheck(L_2);
		L_2->___start = L_3;
		U3CPlaySequenceU3Ed__16_t6E1C7756370FBAA5707020040BCB462499584560* L_4 = L_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = ___1_finish;
		NullCheck(L_4);
		L_4->___finish = L_5;
		U3CPlaySequenceU3Ed__16_t6E1C7756370FBAA5707020040BCB462499584560* L_6 = L_4;
		float L_7 = ___2_duration;
		NullCheck(L_6);
		L_6->___duration = L_7;
		U3CPlaySequenceU3Ed__16_t6E1C7756370FBAA5707020040BCB462499584560* L_8 = L_6;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = ___3_onComplete;
		NullCheck(L_8);
		L_8->___onComplete = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___onComplete), (void*)L_9);
		return L_8;
	}
}
// Method Definition Index: 22350
// Method Definition Index: 22351
// Method Definition Index: 22352
// Method Definition Index: 22353
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1__ctor_m6E06BE86674001DE6ABE6591650908B5292962BB (TweenableVariableBase_1_t894346E06DB112599F8C5FBC5AD5F251F33CFBD9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0;
		L_0 = AnimationCurve_EaseInOut_m01DD06E6C8962F8F62F293C9EAE491C3D3F2CAF3((0.0f), (0.0f), (1.0f), (1.0f), NULL);
		__this->___m_AnimationCurve = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AnimationCurve), (void*)L_0);
		il2cpp_codegen_initobj((&V_0), sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		BindableVariable_1__ctor_mE0064F585587C1463E0D4AE1EDA3B66C42B2DEF0(__this, L_1, (bool)1, (Func_3_tE82E2E9CB095585276C858A2EA8860ACC9745B0C*)NULL, (bool)0, NULL);
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
// Method Definition Index: 22340
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* TweenableVariableBase_1_get_animationCurve_m629E6E7B4B5D8981C071EC50A729BAD6E81AE944 (TweenableVariableBase_1_tE056BE2293DB2624363EEADF82A5A9439C26C35D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = __this->___m_AnimationCurve;
		return L_0;
	}
}
// Method Definition Index: 22341
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1_set_animationCurve_mD8E0045AB11F0544C0F743F59FACE9D6C8BC1424 (TweenableVariableBase_1_tE056BE2293DB2624363EEADF82A5A9439C26C35D* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = ___0_value;
		__this->___m_AnimationCurve = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AnimationCurve), (void*)L_0);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_1 = ___0_value;
		VirtualActionInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* >::Invoke(14, __this, L_1);
		return;
	}
}
// Method Definition Index: 22342
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenableVariableBase_1_get_target_mAC0A1CFF253192C4AE820F8EEF2A380F508E99EA (TweenableVariableBase_1_tE056BE2293DB2624363EEADF82A5A9439C26C35D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float L_0 = __this->___m_Target;
		return L_0;
	}
}
// Method Definition Index: 22343
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1_set_target_m353B619618455D8C59D23B5D02D69EFB492AAA59 (TweenableVariableBase_1_tE056BE2293DB2624363EEADF82A5A9439C26C35D* __this, float ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float* L_0 = (float*)(&__this->___m_Target);
		float L_1 = ___0_value;
		bool L_2;
		L_2 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		return;
	}

IL_0015:
	{
		float L_3 = ___0_value;
		__this->___m_Target = L_3;
		float L_4 = __this->___m_Target;
		VirtualActionInvoker1< float >::Invoke(15, __this, L_4);
		return;
	}
}
// Method Definition Index: 22344
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenableVariableBase_1_get_initialValue_m328C6A22EB2CA996E9C8AFDB3D51F98A0CAF2B64 (TweenableVariableBase_1_tE056BE2293DB2624363EEADF82A5A9439C26C35D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float L_0 = __this->___U3CinitialValueU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 22345
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1_set_initialValue_m434E8F754F94C478D99C15816B0EA5284444191B (TweenableVariableBase_1_tE056BE2293DB2624363EEADF82A5A9439C26C35D* __this, float ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float L_0 = ___0_value;
		__this->___U3CinitialValueU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 22346
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1_HandleTween_m46B71286EECBE0E3F279B742875CE8EF4D068791 (TweenableVariableBase_1_tE056BE2293DB2624363EEADF82A5A9439C26C35D* __this, float ___0_tweenTarget, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float L_0;
		L_0 = TweenableVariableBase_1_get_target_mAC0A1CFF253192C4AE820F8EEF2A380F508E99EA_inline(__this, NULL);
		bool L_1;
		L_1 = VirtualFuncInvoker1< bool, float >::Invoke(12, __this, L_0);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		return;
	}

IL_000f:
	{
		VirtualActionInvoker0::Invoke(16, __this);
		float L_2;
		L_2 = BindableVariableBase_1_get_Value_m56739E375D26399567FC0F237E68BFA12EAABCA1_inline(__this, NULL);
		float L_3;
		L_3 = TweenableVariableBase_1_get_target_mAC0A1CFF253192C4AE820F8EEF2A380F508E99EA_inline(__this, NULL);
		float L_4 = ___0_tweenTarget;
		VirtualActionInvoker4< float, float, float, bool >::Invoke(13, __this, L_2, L_3, L_4, (bool)0);
		return;
	}
}
// Method Definition Index: 22348
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenableVariableBase_1_StartAutoTween_mD7CA29B4C7470C9E1C07F3C40AAFA7117D7E4662 (TweenableVariableBase_1_tE056BE2293DB2624363EEADF82A5A9439C26C35D* __this, float ___0_deltaTimeMultiplier, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		U3CStartAutoTweenU3Ed__15_t1B24DDAB48535E27943F0747CE374D9B76ED1755* L_0 = (U3CStartAutoTweenU3Ed__15_t1B24DDAB48535E27943F0747CE374D9B76ED1755*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9));
		U3CStartAutoTweenU3Ed__15__ctor_m532C16799F55E4F6596BDFC6B96698298F673639(L_0, 0, NULL);
		U3CStartAutoTweenU3Ed__15_t1B24DDAB48535E27943F0747CE374D9B76ED1755* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		U3CStartAutoTweenU3Ed__15_t1B24DDAB48535E27943F0747CE374D9B76ED1755* L_2 = L_1;
		float L_3 = ___0_deltaTimeMultiplier;
		NullCheck(L_2);
		L_2->___deltaTimeMultiplier = L_3;
		return L_2;
	}
}
// Method Definition Index: 22349
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenableVariableBase_1_PlaySequence_m386673E959A984E1904995806BF534EB09FD7BF4 (TweenableVariableBase_1_tE056BE2293DB2624363EEADF82A5A9439C26C35D* __this, float ___0_start, float ___1_finish, float ___2_duration, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___3_onComplete, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		U3CPlaySequenceU3Ed__16_tE012EC718E27C230237DCC2B98ACC84B3C7F095B* L_0 = (U3CPlaySequenceU3Ed__16_tE012EC718E27C230237DCC2B98ACC84B3C7F095B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
		U3CPlaySequenceU3Ed__16__ctor_mF90BCFCB27D576381218D1738E70B36844DA596E(L_0, 0, NULL);
		U3CPlaySequenceU3Ed__16_tE012EC718E27C230237DCC2B98ACC84B3C7F095B* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		U3CPlaySequenceU3Ed__16_tE012EC718E27C230237DCC2B98ACC84B3C7F095B* L_2 = L_1;
		float L_3 = ___0_start;
		NullCheck(L_2);
		L_2->___start = L_3;
		U3CPlaySequenceU3Ed__16_tE012EC718E27C230237DCC2B98ACC84B3C7F095B* L_4 = L_2;
		float L_5 = ___1_finish;
		NullCheck(L_4);
		L_4->___finish = L_5;
		U3CPlaySequenceU3Ed__16_tE012EC718E27C230237DCC2B98ACC84B3C7F095B* L_6 = L_4;
		float L_7 = ___2_duration;
		NullCheck(L_6);
		L_6->___duration = L_7;
		U3CPlaySequenceU3Ed__16_tE012EC718E27C230237DCC2B98ACC84B3C7F095B* L_8 = L_6;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = ___3_onComplete;
		NullCheck(L_8);
		L_8->___onComplete = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___onComplete), (void*)L_9);
		return L_8;
	}
}
// Method Definition Index: 22350
// Method Definition Index: 22351
// Method Definition Index: 22352
// Method Definition Index: 22353
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1__ctor_mACF24E12EF5F0EA84906361750928AE170DEB855 (TweenableVariableBase_1_tE056BE2293DB2624363EEADF82A5A9439C26C35D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	float V_0 = 0.0f;
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0;
		L_0 = AnimationCurve_EaseInOut_m01DD06E6C8962F8F62F293C9EAE491C3D3F2CAF3((0.0f), (0.0f), (1.0f), (1.0f), NULL);
		__this->___m_AnimationCurve = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AnimationCurve), (void*)L_0);
		il2cpp_codegen_initobj((&V_0), sizeof(float));
		float L_1 = V_0;
		BindableVariable_1__ctor_mDC40C552DDD7391A70B329BD063A7C4BBD98E408(__this, L_1, (bool)1, (Func_3_tA9AA477D8A5A68C7DC26AE4792295B80F920E61E*)NULL, (bool)0, NULL);
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
// Method Definition Index: 22340
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* TweenableVariableBase_1_get_animationCurve_mACC5F67B6E66BDDD7220A773A652FA4491EEF0B7_fshared (TweenableVariableBase_1_tAB0E2A3343CE9D2FA33FB849E99B8DF11F6F55AC* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = *(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1));
		return L_0;
	}
}
// Method Definition Index: 22341
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1_set_animationCurve_m73647A7E68C06CC71FD71B4EC0CB98B1E4669EAC_fshared (TweenableVariableBase_1_tAB0E2A3343CE9D2FA33FB849E99B8DF11F6F55AC* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = ___0_value;
		il2cpp_codegen_write_field_data<AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), L_0);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_1 = ___0_value;
		VirtualActionInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* >::Invoke(14, __this, L_1);
		return;
	}
}
// Method Definition Index: 22342
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1_get_target_m44322F94309259A0469E836A2F93CFED23C1A4EC_fshared (TweenableVariableBase_1_tAB0E2A3343CE9D2FA33FB849E99B8DF11F6F55AC* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t146C76C20524528F60C37C786ED1C127A093BA55 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t146C76C20524528F60C37C786ED1C127A093BA55);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3)), SizeOf_T_t146C76C20524528F60C37C786ED1C127A093BA55);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t146C76C20524528F60C37C786ED1C127A093BA55);
		return;
	}
}
// Method Definition Index: 22343
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1_set_target_m1D3A94553B81300767EE030D4F2078434EA8935F_fshared (TweenableVariableBase_1_tAB0E2A3343CE9D2FA33FB849E99B8DF11F6F55AC* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t146C76C20524528F60C37C786ED1C127A093BA55 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	void* L_1 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t146C76C20524528F60C37C786ED1C127A093BA55);
	const Il2CppFullySharedGenericAny L_5 = L_0;
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t146C76C20524528F60C37C786ED1C127A093BA55);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___0_value : &___0_value), SizeOf_T_t146C76C20524528F60C37C786ED1C127A093BA55);
		Il2CppConstrainedCallData L_2;
		Il2CppMethodPointer L_3 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4), (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3)))), &L_2, L_1);
		bool L_4 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_3, L_2.method,L_2.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_0: *(void**)L_0));
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		return;
	}

IL_0015:
	{
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___0_value : &___0_value), SizeOf_T_t146C76C20524528F60C37C786ED1C127A093BA55);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3), L_5, SizeOf_T_t146C76C20524528F60C37C786ED1C127A093BA55);
		il2cpp_codegen_memcpy(L_6, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3)), SizeOf_T_t146C76C20524528F60C37C786ED1C127A093BA55);
		VirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(15, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_6: *(void**)L_6));
		return;
	}
}
// Method Definition Index: 22344
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1_get_initialValue_m99E83ECF1D83401D1244DFFF76C639EE6B218CE3_fshared (TweenableVariableBase_1_tAB0E2A3343CE9D2FA33FB849E99B8DF11F6F55AC* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t146C76C20524528F60C37C786ED1C127A093BA55 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t146C76C20524528F60C37C786ED1C127A093BA55);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6)), SizeOf_T_t146C76C20524528F60C37C786ED1C127A093BA55);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t146C76C20524528F60C37C786ED1C127A093BA55);
		return;
	}
}
// Method Definition Index: 22345
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1_set_initialValue_m96D717C2CD069C7FC385E52A3F56049A5D50E25D_fshared (TweenableVariableBase_1_tAB0E2A3343CE9D2FA33FB849E99B8DF11F6F55AC* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t146C76C20524528F60C37C786ED1C127A093BA55 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t146C76C20524528F60C37C786ED1C127A093BA55);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___0_value : &___0_value), SizeOf_T_t146C76C20524528F60C37C786ED1C127A093BA55);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6), L_0, SizeOf_T_t146C76C20524528F60C37C786ED1C127A093BA55);
		return;
	}
}
// Method Definition Index: 22346
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1_HandleTween_m5F5336AC691CDEC9F6045BF1EA3C8AF58B754CA9_fshared (TweenableVariableBase_1_tAB0E2A3343CE9D2FA33FB849E99B8DF11F6F55AC* __this, float ___0_tweenTarget, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t146C76C20524528F60C37C786ED1C127A093BA55 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t146C76C20524528F60C37C786ED1C127A093BA55);
	const Il2CppFullySharedGenericAny L_2 = L_0;
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t146C76C20524528F60C37C786ED1C127A093BA55);
	//<source_info:<no-source>:1>
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7), __this, (Il2CppFullySharedGenericAny*)L_0);
		NullCheck((BindableVariableBase_1_tF075B55161CD973AA28BB081CC7E13F360F44F90*)__this);
		bool L_1;
		L_1 = VirtualFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(12, (BindableVariableBase_1_tF075B55161CD973AA28BB081CC7E13F360F44F90*)__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_0: *(void**)L_0));
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		return;
	}

IL_000f:
	{
		VirtualActionInvoker0::Invoke(16, __this);
		NullCheck((BindableVariableBase_1_tF075B55161CD973AA28BB081CC7E13F360F44F90*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8), (BindableVariableBase_1_tF075B55161CD973AA28BB081CC7E13F360F44F90*)__this, (Il2CppFullySharedGenericAny*)L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7), __this, (Il2CppFullySharedGenericAny*)L_3);
		float L_4 = ___0_tweenTarget;
		VirtualActionInvoker4Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, float, bool >::Invoke(13, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_2: *(void**)L_2), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_3: *(void**)L_3), L_4, (bool)0);
		return;
	}
}
// Method Definition Index: 22348
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenableVariableBase_1_StartAutoTween_m0B632641843750B9605C5CA9D2DE55FDF9DE9077_fshared (TweenableVariableBase_1_tAB0E2A3343CE9D2FA33FB849E99B8DF11F6F55AC* __this, float ___0_deltaTimeMultiplier, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		U3CStartAutoTweenU3Ed__15_tED1E53FE63B5378710F206E83DC5BBE005CC7CBA* L_0 = (U3CStartAutoTweenU3Ed__15_tED1E53FE63B5378710F206E83DC5BBE005CC7CBA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9));
		((  void (*) (U3CStartAutoTweenU3Ed__15_tED1E53FE63B5378710F206E83DC5BBE005CC7CBA*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)))(L_0, 0, NULL);
		U3CStartAutoTweenU3Ed__15_tED1E53FE63B5378710F206E83DC5BBE005CC7CBA* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		U3CStartAutoTweenU3Ed__15_tED1E53FE63B5378710F206E83DC5BBE005CC7CBA* L_2 = L_1;
		float L_3 = ___0_deltaTimeMultiplier;
		NullCheck(L_2);
		L_2->___deltaTimeMultiplier = L_3;
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 22349
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenableVariableBase_1_PlaySequence_mBCB6C3763077123E825DED3664BC2E2F60F7C793_fshared (TweenableVariableBase_1_tAB0E2A3343CE9D2FA33FB849E99B8DF11F6F55AC* __this, Il2CppFullySharedGenericAny ___0_start, Il2CppFullySharedGenericAny ___1_finish, float ___2_duration, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___3_onComplete, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t146C76C20524528F60C37C786ED1C127A093BA55 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t146C76C20524528F60C37C786ED1C127A093BA55);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t146C76C20524528F60C37C786ED1C127A093BA55);
	//<source_info:<no-source>:1>
	{
		U3CPlaySequenceU3Ed__16_t2AE39AD2793C196D4DA67537F7B0D293DBFA5F5D* L_0 = (U3CPlaySequenceU3Ed__16_t2AE39AD2793C196D4DA67537F7B0D293DBFA5F5D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
		((  void (*) (U3CPlaySequenceU3Ed__16_t2AE39AD2793C196D4DA67537F7B0D293DBFA5F5D*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12)))(L_0, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		U3CPlaySequenceU3Ed__16_t2AE39AD2793C196D4DA67537F7B0D293DBFA5F5D* L_1 = L_0;
		NullCheck(L_1);
		il2cpp_codegen_write_field_data<TweenableVariableBase_1_tAB0E2A3343CE9D2FA33FB849E99B8DF11F6F55AC*, true>(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 13), __this);
		U3CPlaySequenceU3Ed__16_t2AE39AD2793C196D4DA67537F7B0D293DBFA5F5D* L_2 = L_1;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___0_start : &___0_start), SizeOf_T_t146C76C20524528F60C37C786ED1C127A093BA55);
		NullCheck(L_2);
		il2cpp_codegen_write_field_data<true>(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11),4), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 14), L_3, SizeOf_T_t146C76C20524528F60C37C786ED1C127A093BA55);
		U3CPlaySequenceU3Ed__16_t2AE39AD2793C196D4DA67537F7B0D293DBFA5F5D* L_4 = L_2;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___1_finish : &___1_finish), SizeOf_T_t146C76C20524528F60C37C786ED1C127A093BA55);
		NullCheck(L_4);
		il2cpp_codegen_write_field_data<true>(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11),5), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15), L_5, SizeOf_T_t146C76C20524528F60C37C786ED1C127A093BA55);
		U3CPlaySequenceU3Ed__16_t2AE39AD2793C196D4DA67537F7B0D293DBFA5F5D* L_6 = L_4;
		float L_7 = ___2_duration;
		NullCheck(L_6);
		il2cpp_codegen_write_field_data<float, false>(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 16), L_7);
		U3CPlaySequenceU3Ed__16_t2AE39AD2793C196D4DA67537F7B0D293DBFA5F5D* L_8 = L_6;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = ___3_onComplete;
		NullCheck(L_8);
		il2cpp_codegen_write_field_data<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, true>(L_8, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11),6), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 17), L_9);
		return (RuntimeObject*)L_8;
	}
}
// Method Definition Index: 22350
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1_OnAnimationCurveChanged_m93BA49D17E83BBECE7326DDA936729FCF9FE1672_fshared (TweenableVariableBase_1_tAB0E2A3343CE9D2FA33FB849E99B8DF11F6F55AC* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return;
	}
}
// Method Definition Index: 22351
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1_OnTargetChanged_m346ABD21B71E1531203D50F25D06EB058B791BD6_fshared (TweenableVariableBase_1_tAB0E2A3343CE9D2FA33FB849E99B8DF11F6F55AC* __this, Il2CppFullySharedGenericAny ___0_newTarget, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return;
	}
}
// Method Definition Index: 22352
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1_PreprocessTween_mECB6DF68955E32BBB920DBCB403E07FA4E0D4489_fshared (TweenableVariableBase_1_tAB0E2A3343CE9D2FA33FB849E99B8DF11F6F55AC* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return;
	}
}
// Method Definition Index: 22353
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1__ctor_mC4D646C2D646F1B3DAEAC88D07E43D5CA76DFA81_fshared (TweenableVariableBase_1_tAB0E2A3343CE9D2FA33FB849E99B8DF11F6F55AC* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t146C76C20524528F60C37C786ED1C127A093BA55 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t146C76C20524528F60C37C786ED1C127A093BA55);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t146C76C20524528F60C37C786ED1C127A093BA55);
	memset(V_0, 0, SizeOf_T_t146C76C20524528F60C37C786ED1C127A093BA55);
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0;
		L_0 = AnimationCurve_EaseInOut_m01DD06E6C8962F8F62F293C9EAE491C3D3F2CAF3((0.0f), (0.0f), (1.0f), (1.0f), NULL);
		il2cpp_codegen_write_field_data<AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 1), L_0);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_t146C76C20524528F60C37C786ED1C127A093BA55);
		il2cpp_codegen_memcpy(L_1, V_0, SizeOf_T_t146C76C20524528F60C37C786ED1C127A093BA55);
		InvokerActionInvoker4< Il2CppFullySharedGenericAny, bool, Func_3_t8ABA11B2555ED37315928295E1F5259AD6951D6A*, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18), (BindableVariable_1_tF68814975B820C0866290792123728110FCC67E1*)__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_1: *(void**)L_1), (bool)1, (Func_3_t8ABA11B2555ED37315928295E1F5259AD6951D6A*)NULL, (bool)0);
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
// Method Definition Index: 22340
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* TweenableVariableBase_1_get_animationCurve_m55397DEBDC220A8C682C16B5C4387DF00B7B4109 (TweenableVariableBase_1_tA9EC62FCEF5FA67F96F841799692ED88299C6DCB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = __this->___m_AnimationCurve;
		return L_0;
	}
}
// Method Definition Index: 22341
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1_set_animationCurve_mB07D93C7DE0B24D8D7CC66FA64A8A109F2D64B99 (TweenableVariableBase_1_tA9EC62FCEF5FA67F96F841799692ED88299C6DCB* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = ___0_value;
		__this->___m_AnimationCurve = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AnimationCurve), (void*)L_0);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_1 = ___0_value;
		VirtualActionInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* >::Invoke(14, __this, L_1);
		return;
	}
}
// Method Definition Index: 22342
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 TweenableVariableBase_1_get_target_m1A7E3A9D6216D6936EF6041FBD721AC6A6050945 (TweenableVariableBase_1_tA9EC62FCEF5FA67F96F841799692ED88299C6DCB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 L_0 = __this->___m_Target;
		return L_0;
	}
}
// Method Definition Index: 22343
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1_set_target_m4E91B67E97527BE1F91058654EF65327F6F98ABE (TweenableVariableBase_1_tA9EC62FCEF5FA67F96F841799692ED88299C6DCB* __this, float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5* L_0 = (float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5*)(&__this->___m_Target);
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 L_1 = ___0_value;
		bool L_2;
		L_2 = float2_Equals_mEC26CC3305FBABDA61A8A5FD2D0EFA6A33F4DC26_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		return;
	}

IL_0015:
	{
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 L_3 = ___0_value;
		__this->___m_Target = L_3;
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 L_4 = __this->___m_Target;
		VirtualActionInvoker1< float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 >::Invoke(15, __this, L_4);
		return;
	}
}
// Method Definition Index: 22344
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 TweenableVariableBase_1_get_initialValue_m1FB1C293F911ECEE83D12AE9369FAA597FFFF807 (TweenableVariableBase_1_tA9EC62FCEF5FA67F96F841799692ED88299C6DCB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 L_0 = __this->___U3CinitialValueU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 22345
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1_set_initialValue_mAA3E47C6E18C45B752FAE577B223915F8D15806F (TweenableVariableBase_1_tA9EC62FCEF5FA67F96F841799692ED88299C6DCB* __this, float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 L_0 = ___0_value;
		__this->___U3CinitialValueU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 22346
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1_HandleTween_m3A0F82362AC1E3BDC282CC71A35E498DC020F6BC (TweenableVariableBase_1_tA9EC62FCEF5FA67F96F841799692ED88299C6DCB* __this, float ___0_tweenTarget, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 L_0;
		L_0 = TweenableVariableBase_1_get_target_m1A7E3A9D6216D6936EF6041FBD721AC6A6050945_inline(__this, NULL);
		bool L_1;
		L_1 = VirtualFuncInvoker1< bool, float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 >::Invoke(12, __this, L_0);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		return;
	}

IL_000f:
	{
		VirtualActionInvoker0::Invoke(16, __this);
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 L_2;
		L_2 = BindableVariableBase_1_get_Value_mA3C426A393A0A5AB6EC95606DABB506F20A5AA84_inline(__this, NULL);
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 L_3;
		L_3 = TweenableVariableBase_1_get_target_m1A7E3A9D6216D6936EF6041FBD721AC6A6050945_inline(__this, NULL);
		float L_4 = ___0_tweenTarget;
		VirtualActionInvoker4< float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5, float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5, float, bool >::Invoke(13, __this, L_2, L_3, L_4, (bool)0);
		return;
	}
}
// Method Definition Index: 22348
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenableVariableBase_1_StartAutoTween_mDB27E7B07F26ADE0B35C08BEEC6050EF7762FF6E (TweenableVariableBase_1_tA9EC62FCEF5FA67F96F841799692ED88299C6DCB* __this, float ___0_deltaTimeMultiplier, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		U3CStartAutoTweenU3Ed__15_tC1F158DF3449E6CAFD97BDBF1A65431F6DBF8290* L_0 = (U3CStartAutoTweenU3Ed__15_tC1F158DF3449E6CAFD97BDBF1A65431F6DBF8290*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9));
		U3CStartAutoTweenU3Ed__15__ctor_mC4850279D16A0141777E5BE32DCF4CC1EDB1CF3B(L_0, 0, NULL);
		U3CStartAutoTweenU3Ed__15_tC1F158DF3449E6CAFD97BDBF1A65431F6DBF8290* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		U3CStartAutoTweenU3Ed__15_tC1F158DF3449E6CAFD97BDBF1A65431F6DBF8290* L_2 = L_1;
		float L_3 = ___0_deltaTimeMultiplier;
		NullCheck(L_2);
		L_2->___deltaTimeMultiplier = L_3;
		return L_2;
	}
}
// Method Definition Index: 22349
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenableVariableBase_1_PlaySequence_m8C04AB1E421ABB4C2227E04D093282B17A3AE714 (TweenableVariableBase_1_tA9EC62FCEF5FA67F96F841799692ED88299C6DCB* __this, float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___0_start, float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___1_finish, float ___2_duration, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___3_onComplete, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		U3CPlaySequenceU3Ed__16_tCA72372FBD9801568210AF34AD05BDBA76A80466* L_0 = (U3CPlaySequenceU3Ed__16_tCA72372FBD9801568210AF34AD05BDBA76A80466*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
		U3CPlaySequenceU3Ed__16__ctor_mBED71238022E607B05C425C6883C0385523FE70F(L_0, 0, NULL);
		U3CPlaySequenceU3Ed__16_tCA72372FBD9801568210AF34AD05BDBA76A80466* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		U3CPlaySequenceU3Ed__16_tCA72372FBD9801568210AF34AD05BDBA76A80466* L_2 = L_1;
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 L_3 = ___0_start;
		NullCheck(L_2);
		L_2->___start = L_3;
		U3CPlaySequenceU3Ed__16_tCA72372FBD9801568210AF34AD05BDBA76A80466* L_4 = L_2;
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 L_5 = ___1_finish;
		NullCheck(L_4);
		L_4->___finish = L_5;
		U3CPlaySequenceU3Ed__16_tCA72372FBD9801568210AF34AD05BDBA76A80466* L_6 = L_4;
		float L_7 = ___2_duration;
		NullCheck(L_6);
		L_6->___duration = L_7;
		U3CPlaySequenceU3Ed__16_tCA72372FBD9801568210AF34AD05BDBA76A80466* L_8 = L_6;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = ___3_onComplete;
		NullCheck(L_8);
		L_8->___onComplete = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___onComplete), (void*)L_9);
		return L_8;
	}
}
// Method Definition Index: 22350
// Method Definition Index: 22351
// Method Definition Index: 22352
// Method Definition Index: 22353
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1__ctor_m8FBC71F49CC1938EDCD56394A23AAC5B82474A9E (TweenableVariableBase_1_tA9EC62FCEF5FA67F96F841799692ED88299C6DCB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0;
		L_0 = AnimationCurve_EaseInOut_m01DD06E6C8962F8F62F293C9EAE491C3D3F2CAF3((0.0f), (0.0f), (1.0f), (1.0f), NULL);
		__this->___m_AnimationCurve = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AnimationCurve), (void*)L_0);
		il2cpp_codegen_initobj((&V_0), sizeof(float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5));
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 L_1 = V_0;
		BindableVariable_1__ctor_mE5AFD4A6299A180D32742AE69F14BD70F32A6B63(__this, L_1, (bool)1, (Func_3_t679D611E3FC0D6DC6403103FC27F2989317B18D7*)NULL, (bool)0, NULL);
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
// Method Definition Index: 22340
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* TweenableVariableBase_1_get_animationCurve_m0D7F0A84FD0FD39DC0E1FFF9E48C67EEC6A6CB4D (TweenableVariableBase_1_t559E6D69FB65AF8FBCF6044D84C6466C849D826E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = __this->___m_AnimationCurve;
		return L_0;
	}
}
// Method Definition Index: 22341
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1_set_animationCurve_mFC30908FC58A59BA88B74469A81F069BA50ED4F2 (TweenableVariableBase_1_t559E6D69FB65AF8FBCF6044D84C6466C849D826E* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = ___0_value;
		__this->___m_AnimationCurve = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AnimationCurve), (void*)L_0);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_1 = ___0_value;
		VirtualActionInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* >::Invoke(14, __this, L_1);
		return;
	}
}
// Method Definition Index: 22342
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float3_t7600B73F092B37F484B12910A5269F30C778D31E TweenableVariableBase_1_get_target_mE63B487CCE2E85D507B2DB414EC01492C3839623 (TweenableVariableBase_1_t559E6D69FB65AF8FBCF6044D84C6466C849D826E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float3_t7600B73F092B37F484B12910A5269F30C778D31E L_0 = __this->___m_Target;
		return L_0;
	}
}
// Method Definition Index: 22343
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1_set_target_m3A29BD545B9F68B11BF2D5EDAD2BFD72758704D8 (TweenableVariableBase_1_t559E6D69FB65AF8FBCF6044D84C6466C849D826E* __this, float3_t7600B73F092B37F484B12910A5269F30C778D31E ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float3_t7600B73F092B37F484B12910A5269F30C778D31E* L_0 = (float3_t7600B73F092B37F484B12910A5269F30C778D31E*)(&__this->___m_Target);
		float3_t7600B73F092B37F484B12910A5269F30C778D31E L_1 = ___0_value;
		bool L_2;
		L_2 = float3_Equals_m53E5496F35693B0B1082AF2D1C2A98629A743DF2_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		return;
	}

IL_0015:
	{
		float3_t7600B73F092B37F484B12910A5269F30C778D31E L_3 = ___0_value;
		__this->___m_Target = L_3;
		float3_t7600B73F092B37F484B12910A5269F30C778D31E L_4 = __this->___m_Target;
		VirtualActionInvoker1< float3_t7600B73F092B37F484B12910A5269F30C778D31E >::Invoke(15, __this, L_4);
		return;
	}
}
// Method Definition Index: 22344
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float3_t7600B73F092B37F484B12910A5269F30C778D31E TweenableVariableBase_1_get_initialValue_m39887A8F0538E4A03F89B90922AC33E782982744 (TweenableVariableBase_1_t559E6D69FB65AF8FBCF6044D84C6466C849D826E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float3_t7600B73F092B37F484B12910A5269F30C778D31E L_0 = __this->___U3CinitialValueU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 22345
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1_set_initialValue_mF16F9C4500B3F969AD2AC8F3071C7C565C9BC6CD (TweenableVariableBase_1_t559E6D69FB65AF8FBCF6044D84C6466C849D826E* __this, float3_t7600B73F092B37F484B12910A5269F30C778D31E ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float3_t7600B73F092B37F484B12910A5269F30C778D31E L_0 = ___0_value;
		__this->___U3CinitialValueU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 22346
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1_HandleTween_m28E8FCE845532D8FBC537DD2802EBD1DEE65BF68 (TweenableVariableBase_1_t559E6D69FB65AF8FBCF6044D84C6466C849D826E* __this, float ___0_tweenTarget, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float3_t7600B73F092B37F484B12910A5269F30C778D31E L_0;
		L_0 = TweenableVariableBase_1_get_target_mE63B487CCE2E85D507B2DB414EC01492C3839623_inline(__this, NULL);
		bool L_1;
		L_1 = VirtualFuncInvoker1< bool, float3_t7600B73F092B37F484B12910A5269F30C778D31E >::Invoke(12, __this, L_0);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		return;
	}

IL_000f:
	{
		VirtualActionInvoker0::Invoke(16, __this);
		float3_t7600B73F092B37F484B12910A5269F30C778D31E L_2;
		L_2 = BindableVariableBase_1_get_Value_mFB058C8CBBC994AB70F8F17047FA29748DDBDACF_inline(__this, NULL);
		float3_t7600B73F092B37F484B12910A5269F30C778D31E L_3;
		L_3 = TweenableVariableBase_1_get_target_mE63B487CCE2E85D507B2DB414EC01492C3839623_inline(__this, NULL);
		float L_4 = ___0_tweenTarget;
		VirtualActionInvoker4< float3_t7600B73F092B37F484B12910A5269F30C778D31E, float3_t7600B73F092B37F484B12910A5269F30C778D31E, float, bool >::Invoke(13, __this, L_2, L_3, L_4, (bool)0);
		return;
	}
}
// Method Definition Index: 22348
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenableVariableBase_1_StartAutoTween_m88A45CD6935AE41AF45B67F556C26EF79FDF4100 (TweenableVariableBase_1_t559E6D69FB65AF8FBCF6044D84C6466C849D826E* __this, float ___0_deltaTimeMultiplier, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		U3CStartAutoTweenU3Ed__15_t9A8F92B5B1E5F2AB087F724A900818F3E9D715E2* L_0 = (U3CStartAutoTweenU3Ed__15_t9A8F92B5B1E5F2AB087F724A900818F3E9D715E2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9));
		U3CStartAutoTweenU3Ed__15__ctor_mFD10B34827204EDB1B68956569998B8325D354A9(L_0, 0, NULL);
		U3CStartAutoTweenU3Ed__15_t9A8F92B5B1E5F2AB087F724A900818F3E9D715E2* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		U3CStartAutoTweenU3Ed__15_t9A8F92B5B1E5F2AB087F724A900818F3E9D715E2* L_2 = L_1;
		float L_3 = ___0_deltaTimeMultiplier;
		NullCheck(L_2);
		L_2->___deltaTimeMultiplier = L_3;
		return L_2;
	}
}
// Method Definition Index: 22349
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenableVariableBase_1_PlaySequence_mFCB71076328FC7E1514787A1B9C015C0971E2BEA (TweenableVariableBase_1_t559E6D69FB65AF8FBCF6044D84C6466C849D826E* __this, float3_t7600B73F092B37F484B12910A5269F30C778D31E ___0_start, float3_t7600B73F092B37F484B12910A5269F30C778D31E ___1_finish, float ___2_duration, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___3_onComplete, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		U3CPlaySequenceU3Ed__16_t1C260580ED8FDAD0E72E6BB8297B4F389219A035* L_0 = (U3CPlaySequenceU3Ed__16_t1C260580ED8FDAD0E72E6BB8297B4F389219A035*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
		U3CPlaySequenceU3Ed__16__ctor_m0CEE9278458D7AA90145D65805B59F232A99088B(L_0, 0, NULL);
		U3CPlaySequenceU3Ed__16_t1C260580ED8FDAD0E72E6BB8297B4F389219A035* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		U3CPlaySequenceU3Ed__16_t1C260580ED8FDAD0E72E6BB8297B4F389219A035* L_2 = L_1;
		float3_t7600B73F092B37F484B12910A5269F30C778D31E L_3 = ___0_start;
		NullCheck(L_2);
		L_2->___start = L_3;
		U3CPlaySequenceU3Ed__16_t1C260580ED8FDAD0E72E6BB8297B4F389219A035* L_4 = L_2;
		float3_t7600B73F092B37F484B12910A5269F30C778D31E L_5 = ___1_finish;
		NullCheck(L_4);
		L_4->___finish = L_5;
		U3CPlaySequenceU3Ed__16_t1C260580ED8FDAD0E72E6BB8297B4F389219A035* L_6 = L_4;
		float L_7 = ___2_duration;
		NullCheck(L_6);
		L_6->___duration = L_7;
		U3CPlaySequenceU3Ed__16_t1C260580ED8FDAD0E72E6BB8297B4F389219A035* L_8 = L_6;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = ___3_onComplete;
		NullCheck(L_8);
		L_8->___onComplete = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___onComplete), (void*)L_9);
		return L_8;
	}
}
// Method Definition Index: 22350
// Method Definition Index: 22351
// Method Definition Index: 22352
// Method Definition Index: 22353
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1__ctor_m7A162ABC9A0A622C107B0C1E69E73241C9E72A13 (TweenableVariableBase_1_t559E6D69FB65AF8FBCF6044D84C6466C849D826E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	float3_t7600B73F092B37F484B12910A5269F30C778D31E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0;
		L_0 = AnimationCurve_EaseInOut_m01DD06E6C8962F8F62F293C9EAE491C3D3F2CAF3((0.0f), (0.0f), (1.0f), (1.0f), NULL);
		__this->___m_AnimationCurve = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AnimationCurve), (void*)L_0);
		il2cpp_codegen_initobj((&V_0), sizeof(float3_t7600B73F092B37F484B12910A5269F30C778D31E));
		float3_t7600B73F092B37F484B12910A5269F30C778D31E L_1 = V_0;
		BindableVariable_1__ctor_mC5FD3859C69FD36D84C05294C0A7DCED6C5C2D2A(__this, L_1, (bool)1, (Func_3_tE48C31D7100E33FE059CEE93727D825F38ABBD94*)NULL, (bool)0, NULL);
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
// Method Definition Index: 22340
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* TweenableVariableBase_1_get_animationCurve_m9E5AF31E43EACFB95A17770928B657FA44E7F699 (TweenableVariableBase_1_t9D1C5D207B9A321B201B828091D3953D761BB265* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = __this->___m_AnimationCurve;
		return L_0;
	}
}
// Method Definition Index: 22341
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1_set_animationCurve_m16A92F2AF868C98E90BF0A4E4128BB7E5488B09D (TweenableVariableBase_1_t9D1C5D207B9A321B201B828091D3953D761BB265* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = ___0_value;
		__this->___m_AnimationCurve = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AnimationCurve), (void*)L_0);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_1 = ___0_value;
		VirtualActionInvoker1< AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* >::Invoke(14, __this, L_1);
		return;
	}
}
// Method Definition Index: 22342
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float4_t545A994996126766890C1F28B43EA823F2410190 TweenableVariableBase_1_get_target_m2DE9FA2DD2FE238ECDC3FCC00457736DB0A44893 (TweenableVariableBase_1_t9D1C5D207B9A321B201B828091D3953D761BB265* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float4_t545A994996126766890C1F28B43EA823F2410190 L_0 = __this->___m_Target;
		return L_0;
	}
}
// Method Definition Index: 22343
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1_set_target_m7881EDA6ACB6A677F060EBBB4D6BA9BD64908EF6 (TweenableVariableBase_1_t9D1C5D207B9A321B201B828091D3953D761BB265* __this, float4_t545A994996126766890C1F28B43EA823F2410190 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float4_t545A994996126766890C1F28B43EA823F2410190* L_0 = (float4_t545A994996126766890C1F28B43EA823F2410190*)(&__this->___m_Target);
		float4_t545A994996126766890C1F28B43EA823F2410190 L_1 = ___0_value;
		bool L_2;
		L_2 = float4_Equals_m1567E11F547B2FED9A8F0A0BF4BE06C2469E6799_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		return;
	}

IL_0015:
	{
		float4_t545A994996126766890C1F28B43EA823F2410190 L_3 = ___0_value;
		__this->___m_Target = L_3;
		float4_t545A994996126766890C1F28B43EA823F2410190 L_4 = __this->___m_Target;
		VirtualActionInvoker1< float4_t545A994996126766890C1F28B43EA823F2410190 >::Invoke(15, __this, L_4);
		return;
	}
}
// Method Definition Index: 22344
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float4_t545A994996126766890C1F28B43EA823F2410190 TweenableVariableBase_1_get_initialValue_m4BCD5A8FB7FFEC10F64E2229C79255538745D10E (TweenableVariableBase_1_t9D1C5D207B9A321B201B828091D3953D761BB265* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float4_t545A994996126766890C1F28B43EA823F2410190 L_0 = __this->___U3CinitialValueU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 22345
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1_set_initialValue_mFEE7E91FE772257237BDE81116AD1AE0B5B76184 (TweenableVariableBase_1_t9D1C5D207B9A321B201B828091D3953D761BB265* __this, float4_t545A994996126766890C1F28B43EA823F2410190 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float4_t545A994996126766890C1F28B43EA823F2410190 L_0 = ___0_value;
		__this->___U3CinitialValueU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 22346
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1_HandleTween_mC9C3BB1D6CA3E597CC7968CE42E92A82AD6D1899 (TweenableVariableBase_1_t9D1C5D207B9A321B201B828091D3953D761BB265* __this, float ___0_tweenTarget, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float4_t545A994996126766890C1F28B43EA823F2410190 L_0;
		L_0 = TweenableVariableBase_1_get_target_m2DE9FA2DD2FE238ECDC3FCC00457736DB0A44893_inline(__this, NULL);
		bool L_1;
		L_1 = VirtualFuncInvoker1< bool, float4_t545A994996126766890C1F28B43EA823F2410190 >::Invoke(12, __this, L_0);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		return;
	}

IL_000f:
	{
		VirtualActionInvoker0::Invoke(16, __this);
		float4_t545A994996126766890C1F28B43EA823F2410190 L_2;
		L_2 = BindableVariableBase_1_get_Value_m2079036D42637925E85AB7BDEFE82041D3AD8357_inline(__this, NULL);
		float4_t545A994996126766890C1F28B43EA823F2410190 L_3;
		L_3 = TweenableVariableBase_1_get_target_m2DE9FA2DD2FE238ECDC3FCC00457736DB0A44893_inline(__this, NULL);
		float L_4 = ___0_tweenTarget;
		VirtualActionInvoker4< float4_t545A994996126766890C1F28B43EA823F2410190, float4_t545A994996126766890C1F28B43EA823F2410190, float, bool >::Invoke(13, __this, L_2, L_3, L_4, (bool)0);
		return;
	}
}
// Method Definition Index: 22348
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenableVariableBase_1_StartAutoTween_mB8F19F20E2E484F8F483AEA2AE0B795047FCF532 (TweenableVariableBase_1_t9D1C5D207B9A321B201B828091D3953D761BB265* __this, float ___0_deltaTimeMultiplier, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		U3CStartAutoTweenU3Ed__15_t0940E62889D459485D0979635ACD5EC7166F76D7* L_0 = (U3CStartAutoTweenU3Ed__15_t0940E62889D459485D0979635ACD5EC7166F76D7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9));
		U3CStartAutoTweenU3Ed__15__ctor_mF0E147CE1429D6EA02FBBD204909486970A48D69(L_0, 0, NULL);
		U3CStartAutoTweenU3Ed__15_t0940E62889D459485D0979635ACD5EC7166F76D7* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		U3CStartAutoTweenU3Ed__15_t0940E62889D459485D0979635ACD5EC7166F76D7* L_2 = L_1;
		float L_3 = ___0_deltaTimeMultiplier;
		NullCheck(L_2);
		L_2->___deltaTimeMultiplier = L_3;
		return L_2;
	}
}
// Method Definition Index: 22349
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenableVariableBase_1_PlaySequence_m094911F648C0AC7E6703867656CB72333E796809 (TweenableVariableBase_1_t9D1C5D207B9A321B201B828091D3953D761BB265* __this, float4_t545A994996126766890C1F28B43EA823F2410190 ___0_start, float4_t545A994996126766890C1F28B43EA823F2410190 ___1_finish, float ___2_duration, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___3_onComplete, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		U3CPlaySequenceU3Ed__16_t72A400DA1334A84E936DC682068A5FE43D939808* L_0 = (U3CPlaySequenceU3Ed__16_t72A400DA1334A84E936DC682068A5FE43D939808*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
		U3CPlaySequenceU3Ed__16__ctor_m7A7243D873C9667CA8691C8DD1C47B8B3FAEB16A(L_0, 0, NULL);
		U3CPlaySequenceU3Ed__16_t72A400DA1334A84E936DC682068A5FE43D939808* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		U3CPlaySequenceU3Ed__16_t72A400DA1334A84E936DC682068A5FE43D939808* L_2 = L_1;
		float4_t545A994996126766890C1F28B43EA823F2410190 L_3 = ___0_start;
		NullCheck(L_2);
		L_2->___start = L_3;
		U3CPlaySequenceU3Ed__16_t72A400DA1334A84E936DC682068A5FE43D939808* L_4 = L_2;
		float4_t545A994996126766890C1F28B43EA823F2410190 L_5 = ___1_finish;
		NullCheck(L_4);
		L_4->___finish = L_5;
		U3CPlaySequenceU3Ed__16_t72A400DA1334A84E936DC682068A5FE43D939808* L_6 = L_4;
		float L_7 = ___2_duration;
		NullCheck(L_6);
		L_6->___duration = L_7;
		U3CPlaySequenceU3Ed__16_t72A400DA1334A84E936DC682068A5FE43D939808* L_8 = L_6;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = ___3_onComplete;
		NullCheck(L_8);
		L_8->___onComplete = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___onComplete), (void*)L_9);
		return L_8;
	}
}
// Method Definition Index: 22350
// Method Definition Index: 22351
// Method Definition Index: 22352
// Method Definition Index: 22353
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableBase_1__ctor_m912642E50E0348D02E8EAF1EC7FAFD20732F3D11 (TweenableVariableBase_1_t9D1C5D207B9A321B201B828091D3953D761BB265* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	float4_t545A994996126766890C1F28B43EA823F2410190 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0;
		L_0 = AnimationCurve_EaseInOut_m01DD06E6C8962F8F62F293C9EAE491C3D3F2CAF3((0.0f), (0.0f), (1.0f), (1.0f), NULL);
		__this->___m_AnimationCurve = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AnimationCurve), (void*)L_0);
		il2cpp_codegen_initobj((&V_0), sizeof(float4_t545A994996126766890C1F28B43EA823F2410190));
		float4_t545A994996126766890C1F28B43EA823F2410190 L_1 = V_0;
		BindableVariable_1__ctor_mBF426439A562766ACAFABC863271D16C5D5D70A4(__this, L_1, (bool)1, (Func_3_t8204F4CEB15630A3F397A0E7FB8F90248872DB09*)NULL, (bool)0, NULL);
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
// Method Definition Index: 22366
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableSynchronousBase_1_ExecuteTween_mC67CA5D8661600130D4A2A60B1E669F1A2C97B5A (TweenableVariableSynchronousBase_1_t27C59C64A400660B379C3DC861B0AAFB196D92AA* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_startValue, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_targetValue, float ___2_tweenAmount, bool ___3_useCurve, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	float V_0 = 0.0f;
	float G_B6_0 = 0.0f;
	{
		float L_0 = ___2_tweenAmount;
		if ((((float)L_0) > ((float)(0.999989986f))))
		{
			goto IL_0012;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___0_startValue;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___1_targetValue;
		bool L_3;
		L_3 = VirtualFuncInvoker2< bool, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(18, __this, L_1, L_2);
		if (!L_3)
		{
			goto IL_001a;
		}
	}

IL_0012:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___1_targetValue;
		BindableVariableBase_1_set_Value_m19676F8DE67466CD43313044F2ADBAD0B83D9F0B(__this, L_4, NULL);
		return;
	}

IL_001a:
	{
		bool L_5 = ___3_useCurve;
		if (L_5)
		{
			goto IL_0021;
		}
	}
	{
		float L_6 = ___2_tweenAmount;
		G_B6_0 = L_6;
		goto IL_002d;
	}

IL_0021:
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_7;
		L_7 = TweenableVariableBase_1_get_animationCurve_m21E54689FDC5927A7972A3C3E2DA224B4A76CBAB_inline(__this, NULL);
		float L_8 = ___2_tweenAmount;
		NullCheck(L_7);
		float L_9;
		L_9 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_7, L_8, NULL);
		G_B6_0 = L_9;
	}

IL_002d:
	{
		V_0 = G_B6_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___0_startValue;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = ___1_targetValue;
		float L_12 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = VirtualFuncInvoker3< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, float >::Invoke(17, __this, L_10, L_11, L_12);
		BindableVariableBase_1_set_Value_m19676F8DE67466CD43313044F2ADBAD0B83D9F0B(__this, L_13, NULL);
		return;
	}
}
// Method Definition Index: 22369
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableSynchronousBase_1__ctor_m43CF73F358AC3253C534972876A524850CBD346C (TweenableVariableSynchronousBase_1_t27C59C64A400660B379C3DC861B0AAFB196D92AA* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		TweenableVariableBase_1__ctor_m6E06BE86674001DE6ABE6591650908B5292962BB(__this, NULL);
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
// Method Definition Index: 22366
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableSynchronousBase_1_ExecuteTween_mAE6AFBABB47BBAF1FF46DC18B173E6C0C1BE1E15_fshared (TweenableVariableSynchronousBase_1_t4C3B9512C9A567578B87241A0C19E00F4BE0B892* __this, Il2CppFullySharedGenericAny ___0_startValue, Il2CppFullySharedGenericAny ___1_targetValue, float ___2_tweenAmount, bool ___3_useCurve, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t3482E432AF09DB09554BD8F9A3E3EB25B05F340F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t3482E432AF09DB09554BD8F9A3E3EB25B05F340F);
	const Il2CppFullySharedGenericAny L_4 = L_1;
	const Il2CppFullySharedGenericAny L_10 = L_1;
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t3482E432AF09DB09554BD8F9A3E3EB25B05F340F);
	const Il2CppFullySharedGenericAny L_11 = L_2;
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T_t3482E432AF09DB09554BD8F9A3E3EB25B05F340F);
	//<source_info:<no-source>:1>
	float V_0 = 0.0f;
	float G_B6_0 = 0.0f;
	{
		float L_0 = ___2_tweenAmount;
		if ((((float)L_0) > ((float)(0.999989986f))))
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? ___0_startValue : &___0_startValue), SizeOf_T_t3482E432AF09DB09554BD8F9A3E3EB25B05F340F);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? ___1_targetValue : &___1_targetValue), SizeOf_T_t3482E432AF09DB09554BD8F9A3E3EB25B05F340F);
		bool L_3;
		L_3 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(18, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? L_1: *(void**)L_1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? L_2: *(void**)L_2));
		if (!L_3)
		{
			goto IL_001a;
		}
	}

IL_0012:
	{
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? ___1_targetValue : &___1_targetValue), SizeOf_T_t3482E432AF09DB09554BD8F9A3E3EB25B05F340F);
		NullCheck((BindableVariableBase_1_tF075B55161CD973AA28BB081CC7E13F360F44F90*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1), (BindableVariableBase_1_tF075B55161CD973AA28BB081CC7E13F360F44F90*)__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? L_4: *(void**)L_4));
		return;
	}

IL_001a:
	{
		bool L_5 = ___3_useCurve;
		if (L_5)
		{
			goto IL_0021;
		}
	}
	{
		float L_6 = ___2_tweenAmount;
		G_B6_0 = L_6;
		goto IL_002d;
	}

IL_0021:
	{
		NullCheck((TweenableVariableBase_1_tAB0E2A3343CE9D2FA33FB849E99B8DF11F6F55AC*)__this);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_7;
		L_7 = ((  AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* (*) (TweenableVariableBase_1_tAB0E2A3343CE9D2FA33FB849E99B8DF11F6F55AC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))((TweenableVariableBase_1_tAB0E2A3343CE9D2FA33FB849E99B8DF11F6F55AC*)__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		float L_8 = ___2_tweenAmount;
		NullCheck(L_7);
		float L_9;
		L_9 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_7, L_8, NULL);
		G_B6_0 = L_9;
	}

IL_002d:
	{
		V_0 = G_B6_0;
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? ___0_startValue : &___0_startValue), SizeOf_T_t3482E432AF09DB09554BD8F9A3E3EB25B05F340F);
		il2cpp_codegen_memcpy(L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? ___1_targetValue : &___1_targetValue), SizeOf_T_t3482E432AF09DB09554BD8F9A3E3EB25B05F340F);
		float L_12 = V_0;
		VirtualActionInvoker4Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, float, Il2CppFullySharedGenericAny* >::Invoke(17, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? L_10: *(void**)L_10), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? L_11: *(void**)L_11), L_12, (Il2CppFullySharedGenericAny*)L_13);
		NullCheck((BindableVariableBase_1_tF075B55161CD973AA28BB081CC7E13F360F44F90*)__this);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1), (BindableVariableBase_1_tF075B55161CD973AA28BB081CC7E13F360F44F90*)__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? L_13: *(void**)L_13));
		return;
	}
}
// Method Definition Index: 22369
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenableVariableSynchronousBase_1__ctor_mC3A7AE55E7E317E1ED67FCD5CCF6A455BACEE5E1_fshared (TweenableVariableSynchronousBase_1_t4C3B9512C9A567578B87241A0C19E00F4BE0B892* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		((  void (*) (TweenableVariableBase_1_tAB0E2A3343CE9D2FA33FB849E99B8DF11F6F55AC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3)))((TweenableVariableBase_1_tAB0E2A3343CE9D2FA33FB849E99B8DF11F6F55AC*)__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
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
// Method Definition Index: 70294
// Method Definition Index: 70295
// Method Definition Index: 70296
// Method Definition Index: 70297
// Method Definition Index: 70298
// Method Definition Index: 70299
// Method Definition Index: 70300
// Method Definition Index: 70301
// Method Definition Index: 70302
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 70294
// Method Definition Index: 70295
// Method Definition Index: 70296
// Method Definition Index: 70297
// Method Definition Index: 70298
// Method Definition Index: 70299
// Method Definition Index: 70300
// Method Definition Index: 70301
// Method Definition Index: 70302
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 70294
// Method Definition Index: 70295
// Method Definition Index: 70296
// Method Definition Index: 70297
// Method Definition Index: 70298
// Method Definition Index: 70299
// Method Definition Index: 70300
// Method Definition Index: 70301
// Method Definition Index: 70302
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 70294
// Method Definition Index: 70295
// Method Definition Index: 70296
// Method Definition Index: 70297
// Method Definition Index: 70298
// Method Definition Index: 70299
// Method Definition Index: 70300
// Method Definition Index: 70301
// Method Definition Index: 70302
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 70294
// Method Definition Index: 70295
// Method Definition Index: 70296
// Method Definition Index: 70297
// Method Definition Index: 70298
// Method Definition Index: 70299
// Method Definition Index: 70300
// Method Definition Index: 70301
// Method Definition Index: 70302
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 70294
// Method Definition Index: 70295
// Method Definition Index: 70296
// Method Definition Index: 70297
// Method Definition Index: 70298
// Method Definition Index: 70299
// Method Definition Index: 70300
// Method Definition Index: 70301
// Method Definition Index: 70302
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 70294
// Method Definition Index: 70295
// Method Definition Index: 70296
// Method Definition Index: 70297
// Method Definition Index: 70298
// Method Definition Index: 70299
// Method Definition Index: 70300
// Method Definition Index: 70301
// Method Definition Index: 70302
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 70294
// Method Definition Index: 70295
// Method Definition Index: 70296
// Method Definition Index: 70297
// Method Definition Index: 70298
// Method Definition Index: 70299
// Method Definition Index: 70300
// Method Definition Index: 70301
// Method Definition Index: 70302
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 70294
// Method Definition Index: 70295
// Method Definition Index: 70296
// Method Definition Index: 70297
// Method Definition Index: 70298
// Method Definition Index: 70299
// Method Definition Index: 70300
// Method Definition Index: 70301
// Method Definition Index: 70302
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 70294
// Method Definition Index: 70295
// Method Definition Index: 70296
// Method Definition Index: 70297
// Method Definition Index: 70298
// Method Definition Index: 70299
// Method Definition Index: 70300
// Method Definition Index: 70301
// Method Definition Index: 70302
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 70294
// Method Definition Index: 70295
// Method Definition Index: 70296
// Method Definition Index: 70297
// Method Definition Index: 70298
// Method Definition Index: 70299
// Method Definition Index: 70300
// Method Definition Index: 70301
// Method Definition Index: 70302
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 70294
// Method Definition Index: 70295
// Method Definition Index: 70296
// Method Definition Index: 70297
// Method Definition Index: 70298
// Method Definition Index: 70299
// Method Definition Index: 70300
// Method Definition Index: 70301
// Method Definition Index: 70302
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 70294
// Method Definition Index: 70295
// Method Definition Index: 70296
// Method Definition Index: 70297
// Method Definition Index: 70298
// Method Definition Index: 70299
// Method Definition Index: 70300
// Method Definition Index: 70301
// Method Definition Index: 70302
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 70294
// Method Definition Index: 70295
// Method Definition Index: 70296
// Method Definition Index: 70297
// Method Definition Index: 70298
// Method Definition Index: 70299
// Method Definition Index: 70300
// Method Definition Index: 70301
// Method Definition Index: 70302
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 70294
// Method Definition Index: 70295
// Method Definition Index: 70296
// Method Definition Index: 70297
// Method Definition Index: 70298
// Method Definition Index: 70299
// Method Definition Index: 70300
// Method Definition Index: 70301
// Method Definition Index: 70302
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 70294
// Method Definition Index: 70295
// Method Definition Index: 70296
// Method Definition Index: 70297
// Method Definition Index: 70298
// Method Definition Index: 70299
// Method Definition Index: 70300
// Method Definition Index: 70301
// Method Definition Index: 70302
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 70294
// Method Definition Index: 70295
// Method Definition Index: 70296
// Method Definition Index: 70297
// Method Definition Index: 70298
// Method Definition Index: 70299
// Method Definition Index: 70300
// Method Definition Index: 70301
// Method Definition Index: 70302
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 70294
// Method Definition Index: 70295
// Method Definition Index: 70296
// Method Definition Index: 70297
// Method Definition Index: 70298
// Method Definition Index: 70299
// Method Definition Index: 70300
// Method Definition Index: 70301
// Method Definition Index: 70302
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 70294
// Method Definition Index: 70295
// Method Definition Index: 70296
// Method Definition Index: 70297
// Method Definition Index: 70298
// Method Definition Index: 70299
// Method Definition Index: 70300
// Method Definition Index: 70301
// Method Definition Index: 70302
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 70294
// Method Definition Index: 70295
// Method Definition Index: 70296
// Method Definition Index: 70297
// Method Definition Index: 70298
// Method Definition Index: 70299
// Method Definition Index: 70300
// Method Definition Index: 70301
// Method Definition Index: 70302
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 70294
// Method Definition Index: 70295
// Method Definition Index: 70296
// Method Definition Index: 70297
// Method Definition Index: 70298
// Method Definition Index: 70299
// Method Definition Index: 70300
// Method Definition Index: 70301
// Method Definition Index: 70302
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 70294
// Method Definition Index: 70295
// Method Definition Index: 70296
// Method Definition Index: 70297
// Method Definition Index: 70298
// Method Definition Index: 70299
// Method Definition Index: 70300
// Method Definition Index: 70301
// Method Definition Index: 70302
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 70294
// Method Definition Index: 70295
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_mCC2DDBA49E1A5E34050E36FBBF78034FB04D1415_gshared (TypeConstructor_1_tFF185AD2A1E08A2874947762589A4D832280E8FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_StaticInit);
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		CHECKED_LOCAL_INIT(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_StaticInit,(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		RuntimeObject* L_0;
		L_0 = PropertyBagStore_GetPropertyBag_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_m9BDE5E9B9E0EE309570C0E1BEEFF1D970E301057(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		__this->___m_OverrideConstructor = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OverrideConstructor), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1))));
		TypeConstructor_1_SetImplicitConstructor_m567724D44415F983B593F79A65DF98D0B49A7586(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		return;
	}
}
// Method Definition Index: 70296
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m567724D44415F983B593F79A65DF98D0B49A7586_gshared (TypeConstructor_1_tFF185AD2A1E08A2874947762589A4D832280E8FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* G_B3_0 = NULL;
	TypeConstructor_1_tFF185AD2A1E08A2874947762589A4D832280E8FE* G_B3_1 = NULL;
	Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* G_B2_0 = NULL;
	TypeConstructor_1_tFF185AD2A1E08A2874947762589A4D832280E8FE* G_B2_1 = NULL;
	Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* G_B9_0 = NULL;
	TypeConstructor_1_tFF185AD2A1E08A2874947762589A4D832280E8FE* G_B9_1 = NULL;
	Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* G_B8_0 = NULL;
	TypeConstructor_1_tFF185AD2A1E08A2874947762589A4D832280E8FE* G_B8_1 = NULL;
	Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* G_B13_0 = NULL;
	TypeConstructor_1_tFF185AD2A1E08A2874947762589A4D832280E8FE* G_B13_1 = NULL;
	Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* G_B12_0 = NULL;
	TypeConstructor_1_tFF185AD2A1E08A2874947762589A4D832280E8FE* G_B12_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_4 = ((U3CU3EO_t7CCBA094BC61E89AE8824EBE2C208E8301421B2F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C0U3E__CreateValueTypeInstance;
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_5 = L_4;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = __this;
			goto IL_002f;
		}
		G_B2_0 = L_5;
		G_B2_1 = __this;
	}
	{
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_6 = (Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
		Func_1__ctor_m1CF94999885A2AB1DEDC3C4D08360632327809FC(L_6, NULL, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)), NULL);
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_7 = L_6;
		((U3CU3EO_t7CCBA094BC61E89AE8824EBE2C208E8301421B2F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C0U3E__CreateValueTypeInstance = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t7CCBA094BC61E89AE8824EBE2C208E8301421B2F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C0U3E__CreateValueTypeInstance), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_002f:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_ImplicitConstructor = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_ImplicitConstructor), (void*)G_B3_0);
		return;
	}

IL_0035:
	{
		Type_t* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_11, L_12);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_14 = ((U3CU3EO_t7CCBA094BC61E89AE8824EBE2C208E8301421B2F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C1U3E__CreateScriptableObjectInstance;
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_15 = L_14;
		if (L_15)
		{
			G_B9_0 = L_15;
			G_B9_1 = __this;
			goto IL_006c;
		}
		G_B8_0 = L_15;
		G_B8_1 = __this;
	}
	{
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_16 = (Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
		Func_1__ctor_m1CF94999885A2AB1DEDC3C4D08360632327809FC(L_16, NULL, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)), NULL);
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_17 = L_16;
		((U3CU3EO_t7CCBA094BC61E89AE8824EBE2C208E8301421B2F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C1U3E__CreateScriptableObjectInstance = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t7CCBA094BC61E89AE8824EBE2C208E8301421B2F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C1U3E__CreateScriptableObjectInstance), (void*)L_17);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
	}

IL_006c:
	{
		NullCheck(G_B9_1);
		G_B9_1->___m_ImplicitConstructor = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___m_ImplicitConstructor), (void*)G_B9_0);
		return;
	}

IL_0072:
	{
		Type_t* L_18 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19;
		L_19 = Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_inline(Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		NullCheck(L_18);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_20;
		L_20 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_18, L_19, NULL);
		CHECKED_LOCAL_INIT(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_StaticInit,(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_21;
		L_21 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, L_20, NULL);
		if (!L_21)
		{
			goto IL_00a6;
		}
	}
	{
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_22 = ((U3CU3EO_t7CCBA094BC61E89AE8824EBE2C208E8301421B2F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C2U3E__CreateClassInstance;
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_23 = L_22;
		if (L_23)
		{
			G_B13_0 = L_23;
			G_B13_1 = __this;
			goto IL_00a1;
		}
		G_B12_0 = L_23;
		G_B12_1 = __this;
	}
	{
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_24 = (Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
		Func_1__ctor_m1CF94999885A2AB1DEDC3C4D08360632327809FC(L_24, NULL, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)), NULL);
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_25 = L_24;
		((U3CU3EO_t7CCBA094BC61E89AE8824EBE2C208E8301421B2F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C2U3E__CreateClassInstance = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t7CCBA094BC61E89AE8824EBE2C208E8301421B2F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C2U3E__CreateClassInstance), (void*)L_25);
		G_B13_0 = L_25;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		NullCheck(G_B13_1);
		G_B13_1->___m_ImplicitConstructor = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___m_ImplicitConstructor), (void*)G_B13_0);
	}

IL_00a6:
	{
		return;
	}
}
// Method Definition Index: 70297
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 TypeConstructor_1_CreateValueTypeInstance_mE82A51832FF8AC458EBFF1DAF32C00E26A1B997F_gshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26));
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 70298
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 TypeConstructor_1_CreateScriptableObjectInstance_m7808269708154B7FC4A4A23A67857D16C016AA2B_gshared (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		return ((*(StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26*)UnBox(L_2, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))));
	}
}
// Method Definition Index: 70299
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 TypeConstructor_1_CreateClassInstance_m8420F36ADDA84956FB32B12F2D0E0AAC091DF87A_gshared (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 L_0;
		L_0 = Activator_CreateInstance_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_mB73A28B81E6D6D5CEA36624398A83B517613B668(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return L_0;
	}
}
// Method Definition Index: 70300
// Method Definition Index: 70301
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructorU3CTU3E_Instantiate_mDFC4AF8F2F59A00B79672C881DCC617898FC054A_gshared (TypeConstructor_1_tFF185AD2A1E08A2874947762589A4D832280E8FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_1 = __this->___m_ExplicitConstructor;
		NullCheck(L_1);
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 L_2;
		L_2 = Func_1_Invoke_mD023E4BE9F2AC4DDAB5BC6865F64444F25EBA15C_inline(L_1, NULL);
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->___m_OverrideConstructor;
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_7);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___m_OverrideConstructor;
		NullCheck((RuntimeObject*)L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_13 = __this->___m_OverrideConstructor;
		NullCheck(L_13);
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 L_14;
		L_14 = InterfaceFuncInvoker0< StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 1), L_13);
		return L_14;
	}

IL_0068:
	{
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_15 = __this->___m_ImplicitConstructor;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* L_16 = __this->___m_ImplicitConstructor;
		NullCheck(L_16);
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 L_17;
		L_17 = Func_1_Invoke_mD023E4BE9F2AC4DDAB5BC6865F64444F25EBA15C_inline(L_16, NULL);
		return L_17;
	}

IL_007c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_19);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_22 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
	}
}
// Method Definition Index: 70302
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_Instantiate_m94D3A94CB2318D30FDA3DDF783B2DC2ACF3A2858_gshared (TypeConstructor_1_tFF185AD2A1E08A2874947762589A4D832280E8FE* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NullCheck((RuntimeObject*)__this);
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 L_0;
		L_0 = InterfaceFuncInvoker0< StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 14), (RuntimeObject*)__this);
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_1);
		return L_2;
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
// Method Definition Index: 70294
// Method Definition Index: 70295
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_m9232AD992B16F402E5AE8AAC8083758F889F6D2C (TypeConstructor_1_tE75B89D5AA084F114504AC7D05DD0F8154EF0058* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_StaticInit);
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECKED_LOCAL_INIT(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_StaticInit,(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		RuntimeObject* L_0;
		L_0 = PropertyBagStore_GetPropertyBag_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m371FB7DB718EACB453900456810E9A5E7C4560FC(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		__this->___m_OverrideConstructor = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OverrideConstructor), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1))));
		TypeConstructor_1_SetImplicitConstructor_mB3A3166BECF17AF72ECD9CB45352121E79693D1D(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		return;
	}
}
// Method Definition Index: 70296
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_mB3A3166BECF17AF72ECD9CB45352121E79693D1D (TypeConstructor_1_tE75B89D5AA084F114504AC7D05DD0F8154EF0058* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* G_B3_0 = NULL;
	TypeConstructor_1_tE75B89D5AA084F114504AC7D05DD0F8154EF0058* G_B3_1 = NULL;
	Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* G_B2_0 = NULL;
	TypeConstructor_1_tE75B89D5AA084F114504AC7D05DD0F8154EF0058* G_B2_1 = NULL;
	Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* G_B9_0 = NULL;
	TypeConstructor_1_tE75B89D5AA084F114504AC7D05DD0F8154EF0058* G_B9_1 = NULL;
	Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* G_B8_0 = NULL;
	TypeConstructor_1_tE75B89D5AA084F114504AC7D05DD0F8154EF0058* G_B8_1 = NULL;
	Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* G_B13_0 = NULL;
	TypeConstructor_1_tE75B89D5AA084F114504AC7D05DD0F8154EF0058* G_B13_1 = NULL;
	Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* G_B12_0 = NULL;
	TypeConstructor_1_tE75B89D5AA084F114504AC7D05DD0F8154EF0058* G_B12_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_4 = ((U3CU3EO_tF65737FFA29D453F880A97786FC1135BF1DF4433_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C0U3E__CreateValueTypeInstance;
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_5 = L_4;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = __this;
			goto IL_002f;
		}
		G_B2_0 = L_5;
		G_B2_1 = __this;
	}
	{
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_6 = (Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
		Func_1__ctor_mA471FC63ABD240998521909693B8E1F0E226F4C7(L_6, NULL, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)), NULL);
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_7 = L_6;
		((U3CU3EO_tF65737FFA29D453F880A97786FC1135BF1DF4433_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C0U3E__CreateValueTypeInstance = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tF65737FFA29D453F880A97786FC1135BF1DF4433_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C0U3E__CreateValueTypeInstance), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_002f:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_ImplicitConstructor = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_ImplicitConstructor), (void*)G_B3_0);
		return;
	}

IL_0035:
	{
		Type_t* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_11, L_12);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_14 = ((U3CU3EO_tF65737FFA29D453F880A97786FC1135BF1DF4433_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C1U3E__CreateScriptableObjectInstance;
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_15 = L_14;
		if (L_15)
		{
			G_B9_0 = L_15;
			G_B9_1 = __this;
			goto IL_006c;
		}
		G_B8_0 = L_15;
		G_B8_1 = __this;
	}
	{
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_16 = (Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
		Func_1__ctor_mA471FC63ABD240998521909693B8E1F0E226F4C7(L_16, NULL, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)), NULL);
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_17 = L_16;
		((U3CU3EO_tF65737FFA29D453F880A97786FC1135BF1DF4433_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C1U3E__CreateScriptableObjectInstance = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tF65737FFA29D453F880A97786FC1135BF1DF4433_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C1U3E__CreateScriptableObjectInstance), (void*)L_17);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
	}

IL_006c:
	{
		NullCheck(G_B9_1);
		G_B9_1->___m_ImplicitConstructor = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___m_ImplicitConstructor), (void*)G_B9_0);
		return;
	}

IL_0072:
	{
		Type_t* L_18 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19;
		L_19 = Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_inline(Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		NullCheck(L_18);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_20;
		L_20 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_18, L_19, NULL);
		CHECKED_LOCAL_INIT(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_StaticInit,(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_21;
		L_21 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, L_20, NULL);
		if (!L_21)
		{
			goto IL_00a6;
		}
	}
	{
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_22 = ((U3CU3EO_tF65737FFA29D453F880A97786FC1135BF1DF4433_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C2U3E__CreateClassInstance;
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_23 = L_22;
		if (L_23)
		{
			G_B13_0 = L_23;
			G_B13_1 = __this;
			goto IL_00a1;
		}
		G_B12_0 = L_23;
		G_B12_1 = __this;
	}
	{
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_24 = (Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
		Func_1__ctor_mA471FC63ABD240998521909693B8E1F0E226F4C7(L_24, NULL, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)), NULL);
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_25 = L_24;
		((U3CU3EO_tF65737FFA29D453F880A97786FC1135BF1DF4433_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C2U3E__CreateClassInstance = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tF65737FFA29D453F880A97786FC1135BF1DF4433_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C2U3E__CreateClassInstance), (void*)L_25);
		G_B13_0 = L_25;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		NullCheck(G_B13_1);
		G_B13_1->___m_ImplicitConstructor = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___m_ImplicitConstructor), (void*)G_B13_0);
	}

IL_00a6:
	{
		return;
	}
}
// Method Definition Index: 70297
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F TypeConstructor_1_CreateValueTypeInstance_m19B1CE1BBC1A99035092372B76357F65AD50F3EB (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F));
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 70298
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F TypeConstructor_1_CreateScriptableObjectInstance_mF527B42378E99D95B32A5C720C55CC4B99C1C254 (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		return ((*(StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*)UnBox(L_2, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))));
	}
}
// Method Definition Index: 70299
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F TypeConstructor_1_CreateClassInstance_m12CE46EC997EDE13530D214B1EA33CC2D607ACBB (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F L_0;
		L_0 = Activator_CreateInstance_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_mB01EF8A1953AD6AC7F3EA56DC0CA6C9353BFD778(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return L_0;
	}
}
// Method Definition Index: 70300
// Method Definition Index: 70301
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructorU3CTU3E_Instantiate_mB03C1C2B54AC9CCEAFD667680E05FD93813B043D (TypeConstructor_1_tE75B89D5AA084F114504AC7D05DD0F8154EF0058* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_1 = __this->___m_ExplicitConstructor;
		NullCheck(L_1);
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F L_2;
		L_2 = Func_1_Invoke_mEFCC6E276B7F9541F583BF1DD7C2D4B88A5C9CED_inline(L_1, NULL);
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->___m_OverrideConstructor;
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_7);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___m_OverrideConstructor;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_13 = __this->___m_OverrideConstructor;
		NullCheck(L_13);
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F L_14;
		L_14 = InterfaceFuncInvoker0< StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 1), L_13);
		return L_14;
	}

IL_0068:
	{
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_15 = __this->___m_ImplicitConstructor;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* L_16 = __this->___m_ImplicitConstructor;
		NullCheck(L_16);
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F L_17;
		L_17 = Func_1_Invoke_mEFCC6E276B7F9541F583BF1DD7C2D4B88A5C9CED_inline(L_16, NULL);
		return L_17;
	}

IL_007c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_19);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_22 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
	}
}
// Method Definition Index: 70302
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_Instantiate_mCA9AE2736B793171808602C4C83E73056F48CE55 (TypeConstructor_1_tE75B89D5AA084F114504AC7D05DD0F8154EF0058* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F L_0;
		L_0 = InterfaceFuncInvoker0< StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 14), __this);
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_1);
		return L_2;
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
// Method Definition Index: 70294
// Method Definition Index: 70295
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_m21847F0A7EA3023224244FA42EC54883D6CC4F4B (TypeConstructor_1_tF5F8176F6A09CD203432077E7C7B5AABC31327EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_StaticInit);
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECKED_LOCAL_INIT(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_StaticInit,(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		RuntimeObject* L_0;
		L_0 = PropertyBagStore_GetPropertyBag_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_m62FD638362BFCB156A7F8AC98F87BB9DA45A686C(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		__this->___m_OverrideConstructor = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OverrideConstructor), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1))));
		TypeConstructor_1_SetImplicitConstructor_m962EFB2F614BF82E3DFE0A548F875ED7EC21B705(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		return;
	}
}
// Method Definition Index: 70296
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m962EFB2F614BF82E3DFE0A548F875ED7EC21B705 (TypeConstructor_1_tF5F8176F6A09CD203432077E7C7B5AABC31327EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* G_B3_0 = NULL;
	TypeConstructor_1_tF5F8176F6A09CD203432077E7C7B5AABC31327EA* G_B3_1 = NULL;
	Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* G_B2_0 = NULL;
	TypeConstructor_1_tF5F8176F6A09CD203432077E7C7B5AABC31327EA* G_B2_1 = NULL;
	Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* G_B9_0 = NULL;
	TypeConstructor_1_tF5F8176F6A09CD203432077E7C7B5AABC31327EA* G_B9_1 = NULL;
	Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* G_B8_0 = NULL;
	TypeConstructor_1_tF5F8176F6A09CD203432077E7C7B5AABC31327EA* G_B8_1 = NULL;
	Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* G_B13_0 = NULL;
	TypeConstructor_1_tF5F8176F6A09CD203432077E7C7B5AABC31327EA* G_B13_1 = NULL;
	Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* G_B12_0 = NULL;
	TypeConstructor_1_tF5F8176F6A09CD203432077E7C7B5AABC31327EA* G_B12_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_4 = ((U3CU3EO_tC1F9D0861156D7C559F6EEE36FC95D3ABF3F0025_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C0U3E__CreateValueTypeInstance;
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_5 = L_4;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = __this;
			goto IL_002f;
		}
		G_B2_0 = L_5;
		G_B2_1 = __this;
	}
	{
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_6 = (Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
		Func_1__ctor_m39E4205D276C3545517E8CBC0AAA109AED598253(L_6, NULL, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)), NULL);
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_7 = L_6;
		((U3CU3EO_tC1F9D0861156D7C559F6EEE36FC95D3ABF3F0025_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C0U3E__CreateValueTypeInstance = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tC1F9D0861156D7C559F6EEE36FC95D3ABF3F0025_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C0U3E__CreateValueTypeInstance), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_002f:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_ImplicitConstructor = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_ImplicitConstructor), (void*)G_B3_0);
		return;
	}

IL_0035:
	{
		Type_t* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_11, L_12);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_14 = ((U3CU3EO_tC1F9D0861156D7C559F6EEE36FC95D3ABF3F0025_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C1U3E__CreateScriptableObjectInstance;
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_15 = L_14;
		if (L_15)
		{
			G_B9_0 = L_15;
			G_B9_1 = __this;
			goto IL_006c;
		}
		G_B8_0 = L_15;
		G_B8_1 = __this;
	}
	{
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_16 = (Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
		Func_1__ctor_m39E4205D276C3545517E8CBC0AAA109AED598253(L_16, NULL, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)), NULL);
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_17 = L_16;
		((U3CU3EO_tC1F9D0861156D7C559F6EEE36FC95D3ABF3F0025_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C1U3E__CreateScriptableObjectInstance = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tC1F9D0861156D7C559F6EEE36FC95D3ABF3F0025_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C1U3E__CreateScriptableObjectInstance), (void*)L_17);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
	}

IL_006c:
	{
		NullCheck(G_B9_1);
		G_B9_1->___m_ImplicitConstructor = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___m_ImplicitConstructor), (void*)G_B9_0);
		return;
	}

IL_0072:
	{
		Type_t* L_18 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19;
		L_19 = Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_inline(Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		NullCheck(L_18);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_20;
		L_20 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_18, L_19, NULL);
		CHECKED_LOCAL_INIT(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_StaticInit,(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_21;
		L_21 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, L_20, NULL);
		if (!L_21)
		{
			goto IL_00a6;
		}
	}
	{
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_22 = ((U3CU3EO_tC1F9D0861156D7C559F6EEE36FC95D3ABF3F0025_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C2U3E__CreateClassInstance;
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_23 = L_22;
		if (L_23)
		{
			G_B13_0 = L_23;
			G_B13_1 = __this;
			goto IL_00a1;
		}
		G_B12_0 = L_23;
		G_B12_1 = __this;
	}
	{
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_24 = (Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
		Func_1__ctor_m39E4205D276C3545517E8CBC0AAA109AED598253(L_24, NULL, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)), NULL);
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_25 = L_24;
		((U3CU3EO_tC1F9D0861156D7C559F6EEE36FC95D3ABF3F0025_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C2U3E__CreateClassInstance = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tC1F9D0861156D7C559F6EEE36FC95D3ABF3F0025_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C2U3E__CreateClassInstance), (void*)L_25);
		G_B13_0 = L_25;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		NullCheck(G_B13_1);
		G_B13_1->___m_ImplicitConstructor = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___m_ImplicitConstructor), (void*)G_B13_0);
	}

IL_00a6:
	{
		return;
	}
}
// Method Definition Index: 70297
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 TypeConstructor_1_CreateValueTypeInstance_mC4D442A1249625E7CD325E3D118DF59F8D41912D (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356));
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 70298
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 TypeConstructor_1_CreateScriptableObjectInstance_m0C83D4D9AF62FE5A4E5E119F5EEA3B38F2220F77 (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		return ((*(StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356*)UnBox(L_2, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))));
	}
}
// Method Definition Index: 70299
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 TypeConstructor_1_CreateClassInstance_mEA489A50989614F774CF74328E70373D0443A9F1 (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 L_0;
		L_0 = Activator_CreateInstance_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_mE1EF4F1754910E076C909536D2A4427F01104233(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return L_0;
	}
}
// Method Definition Index: 70300
// Method Definition Index: 70301
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructorU3CTU3E_Instantiate_mD99B1761C5CBE991095DB35641A4DAFE6310B26D (TypeConstructor_1_tF5F8176F6A09CD203432077E7C7B5AABC31327EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_1 = __this->___m_ExplicitConstructor;
		NullCheck(L_1);
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 L_2;
		L_2 = Func_1_Invoke_mF38ACE8EE747FDAB603827786CAA57779D125644_inline(L_1, NULL);
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->___m_OverrideConstructor;
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_7);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___m_OverrideConstructor;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_13 = __this->___m_OverrideConstructor;
		NullCheck(L_13);
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 L_14;
		L_14 = InterfaceFuncInvoker0< StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 1), L_13);
		return L_14;
	}

IL_0068:
	{
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_15 = __this->___m_ImplicitConstructor;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* L_16 = __this->___m_ImplicitConstructor;
		NullCheck(L_16);
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 L_17;
		L_17 = Func_1_Invoke_mF38ACE8EE747FDAB603827786CAA57779D125644_inline(L_16, NULL);
		return L_17;
	}

IL_007c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_19);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_22 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
	}
}
// Method Definition Index: 70302
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_Instantiate_mFD856ADDCE5758DD220042F53F47E017861E2351 (TypeConstructor_1_tF5F8176F6A09CD203432077E7C7B5AABC31327EA* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 L_0;
		L_0 = InterfaceFuncInvoker0< StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 14), __this);
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_1);
		return L_2;
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
// Method Definition Index: 70294
// Method Definition Index: 70295
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_mDA317D6B6D3FC6DE24B272CF7FB5919581D99F06 (TypeConstructor_1_tD5DA07CE239BB0599B0F321C96FD2BD58C83DF97* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_StaticInit);
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECKED_LOCAL_INIT(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_StaticInit,(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		RuntimeObject* L_0;
		L_0 = PropertyBagStore_GetPropertyBag_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_m3B7D84997A9B8DF8F81AA85C2C9FA88D48A5399A(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		__this->___m_OverrideConstructor = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OverrideConstructor), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1))));
		TypeConstructor_1_SetImplicitConstructor_m44F12955763EFCCB75A37E92EC25D46B88D288B8(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		return;
	}
}
// Method Definition Index: 70296
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m44F12955763EFCCB75A37E92EC25D46B88D288B8 (TypeConstructor_1_tD5DA07CE239BB0599B0F321C96FD2BD58C83DF97* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* G_B3_0 = NULL;
	TypeConstructor_1_tD5DA07CE239BB0599B0F321C96FD2BD58C83DF97* G_B3_1 = NULL;
	Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* G_B2_0 = NULL;
	TypeConstructor_1_tD5DA07CE239BB0599B0F321C96FD2BD58C83DF97* G_B2_1 = NULL;
	Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* G_B9_0 = NULL;
	TypeConstructor_1_tD5DA07CE239BB0599B0F321C96FD2BD58C83DF97* G_B9_1 = NULL;
	Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* G_B8_0 = NULL;
	TypeConstructor_1_tD5DA07CE239BB0599B0F321C96FD2BD58C83DF97* G_B8_1 = NULL;
	Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* G_B13_0 = NULL;
	TypeConstructor_1_tD5DA07CE239BB0599B0F321C96FD2BD58C83DF97* G_B13_1 = NULL;
	Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* G_B12_0 = NULL;
	TypeConstructor_1_tD5DA07CE239BB0599B0F321C96FD2BD58C83DF97* G_B12_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_4 = ((U3CU3EO_tB19509DACF6507088BAF9966D572B59E6567F762_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C0U3E__CreateValueTypeInstance;
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_5 = L_4;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = __this;
			goto IL_002f;
		}
		G_B2_0 = L_5;
		G_B2_1 = __this;
	}
	{
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_6 = (Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
		Func_1__ctor_m06C3E157C1C7C2FAB7AC8777BB674C9D951702CB(L_6, NULL, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)), NULL);
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_7 = L_6;
		((U3CU3EO_tB19509DACF6507088BAF9966D572B59E6567F762_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C0U3E__CreateValueTypeInstance = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tB19509DACF6507088BAF9966D572B59E6567F762_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C0U3E__CreateValueTypeInstance), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_002f:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_ImplicitConstructor = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_ImplicitConstructor), (void*)G_B3_0);
		return;
	}

IL_0035:
	{
		Type_t* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_11, L_12);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_14 = ((U3CU3EO_tB19509DACF6507088BAF9966D572B59E6567F762_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C1U3E__CreateScriptableObjectInstance;
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_15 = L_14;
		if (L_15)
		{
			G_B9_0 = L_15;
			G_B9_1 = __this;
			goto IL_006c;
		}
		G_B8_0 = L_15;
		G_B8_1 = __this;
	}
	{
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_16 = (Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
		Func_1__ctor_m06C3E157C1C7C2FAB7AC8777BB674C9D951702CB(L_16, NULL, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)), NULL);
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_17 = L_16;
		((U3CU3EO_tB19509DACF6507088BAF9966D572B59E6567F762_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C1U3E__CreateScriptableObjectInstance = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tB19509DACF6507088BAF9966D572B59E6567F762_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C1U3E__CreateScriptableObjectInstance), (void*)L_17);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
	}

IL_006c:
	{
		NullCheck(G_B9_1);
		G_B9_1->___m_ImplicitConstructor = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___m_ImplicitConstructor), (void*)G_B9_0);
		return;
	}

IL_0072:
	{
		Type_t* L_18 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19;
		L_19 = Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_inline(Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		NullCheck(L_18);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_20;
		L_20 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_18, L_19, NULL);
		CHECKED_LOCAL_INIT(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_StaticInit,(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_21;
		L_21 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, L_20, NULL);
		if (!L_21)
		{
			goto IL_00a6;
		}
	}
	{
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_22 = ((U3CU3EO_tB19509DACF6507088BAF9966D572B59E6567F762_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C2U3E__CreateClassInstance;
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_23 = L_22;
		if (L_23)
		{
			G_B13_0 = L_23;
			G_B13_1 = __this;
			goto IL_00a1;
		}
		G_B12_0 = L_23;
		G_B12_1 = __this;
	}
	{
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_24 = (Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
		Func_1__ctor_m06C3E157C1C7C2FAB7AC8777BB674C9D951702CB(L_24, NULL, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)), NULL);
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_25 = L_24;
		((U3CU3EO_tB19509DACF6507088BAF9966D572B59E6567F762_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C2U3E__CreateClassInstance = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tB19509DACF6507088BAF9966D572B59E6567F762_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C2U3E__CreateClassInstance), (void*)L_25);
		G_B13_0 = L_25;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		NullCheck(G_B13_1);
		G_B13_1->___m_ImplicitConstructor = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___m_ImplicitConstructor), (void*)G_B13_0);
	}

IL_00a6:
	{
		return;
	}
}
// Method Definition Index: 70297
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C TypeConstructor_1_CreateValueTypeInstance_m96835016581CF939379948AA67F6BFD411CBC76D (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C));
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 70298
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C TypeConstructor_1_CreateScriptableObjectInstance_m62CDE7EDB3D646F6F0606138E6184EE13A8C5DF7 (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		return ((*(StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*)UnBox(L_2, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))));
	}
}
// Method Definition Index: 70299
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C TypeConstructor_1_CreateClassInstance_m21E479FCB4EE01FFC540B8EBDD45B52CF4C8E43F (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C L_0;
		L_0 = Activator_CreateInstance_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_m873909B6AA229BD59E90731F4D6FBF4CC87F5602(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return L_0;
	}
}
// Method Definition Index: 70300
// Method Definition Index: 70301
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructorU3CTU3E_Instantiate_m291CDBAEBBCD10CE68F1EB86CE9ED860C36E4E9A (TypeConstructor_1_tD5DA07CE239BB0599B0F321C96FD2BD58C83DF97* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_1 = __this->___m_ExplicitConstructor;
		NullCheck(L_1);
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C L_2;
		L_2 = Func_1_Invoke_m14C121BADC1DA0C563A54E906949398ADE4E510D_inline(L_1, NULL);
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->___m_OverrideConstructor;
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_7);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___m_OverrideConstructor;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_13 = __this->___m_OverrideConstructor;
		NullCheck(L_13);
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C L_14;
		L_14 = InterfaceFuncInvoker0< StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 1), L_13);
		return L_14;
	}

IL_0068:
	{
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_15 = __this->___m_ImplicitConstructor;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* L_16 = __this->___m_ImplicitConstructor;
		NullCheck(L_16);
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C L_17;
		L_17 = Func_1_Invoke_m14C121BADC1DA0C563A54E906949398ADE4E510D_inline(L_16, NULL);
		return L_17;
	}

IL_007c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_19);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_22 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
	}
}
// Method Definition Index: 70302
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_Instantiate_m96352EFE1502C36E2D1B2C8193189EDF43D5E24C (TypeConstructor_1_tD5DA07CE239BB0599B0F321C96FD2BD58C83DF97* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C L_0;
		L_0 = InterfaceFuncInvoker0< StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 14), __this);
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_1);
		return L_2;
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
// Method Definition Index: 70294
// Method Definition Index: 70295
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_m2CFABD1CDC2D6707B10C869155F074E17D2C46F6 (TypeConstructor_1_tB7EF02BD3EFCFE0495E9D67B2BCFF3652B6D6C6F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_StaticInit);
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECKED_LOCAL_INIT(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_StaticInit,(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		RuntimeObject* L_0;
		L_0 = PropertyBagStore_GetPropertyBag_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m90943EC8A95BEF0B7653A90C89F26FC8ADD09FB8(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		__this->___m_OverrideConstructor = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OverrideConstructor), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1))));
		TypeConstructor_1_SetImplicitConstructor_m0187BB447B4788E880EAB9921A60ECB42609286C(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		return;
	}
}
// Method Definition Index: 70296
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m0187BB447B4788E880EAB9921A60ECB42609286C (TypeConstructor_1_tB7EF02BD3EFCFE0495E9D67B2BCFF3652B6D6C6F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* G_B3_0 = NULL;
	TypeConstructor_1_tB7EF02BD3EFCFE0495E9D67B2BCFF3652B6D6C6F* G_B3_1 = NULL;
	Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* G_B2_0 = NULL;
	TypeConstructor_1_tB7EF02BD3EFCFE0495E9D67B2BCFF3652B6D6C6F* G_B2_1 = NULL;
	Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* G_B9_0 = NULL;
	TypeConstructor_1_tB7EF02BD3EFCFE0495E9D67B2BCFF3652B6D6C6F* G_B9_1 = NULL;
	Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* G_B8_0 = NULL;
	TypeConstructor_1_tB7EF02BD3EFCFE0495E9D67B2BCFF3652B6D6C6F* G_B8_1 = NULL;
	Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* G_B13_0 = NULL;
	TypeConstructor_1_tB7EF02BD3EFCFE0495E9D67B2BCFF3652B6D6C6F* G_B13_1 = NULL;
	Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* G_B12_0 = NULL;
	TypeConstructor_1_tB7EF02BD3EFCFE0495E9D67B2BCFF3652B6D6C6F* G_B12_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_4 = ((U3CU3EO_tB37F1F5975821568EC9FCF1B098BD4B808DE7992_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C0U3E__CreateValueTypeInstance;
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_5 = L_4;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = __this;
			goto IL_002f;
		}
		G_B2_0 = L_5;
		G_B2_1 = __this;
	}
	{
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_6 = (Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
		Func_1__ctor_mA4955FA382BBC4CBD82690DCA4DBB23EFFB5B379(L_6, NULL, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)), NULL);
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_7 = L_6;
		((U3CU3EO_tB37F1F5975821568EC9FCF1B098BD4B808DE7992_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C0U3E__CreateValueTypeInstance = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tB37F1F5975821568EC9FCF1B098BD4B808DE7992_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C0U3E__CreateValueTypeInstance), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_002f:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_ImplicitConstructor = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_ImplicitConstructor), (void*)G_B3_0);
		return;
	}

IL_0035:
	{
		Type_t* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_11, L_12);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_14 = ((U3CU3EO_tB37F1F5975821568EC9FCF1B098BD4B808DE7992_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C1U3E__CreateScriptableObjectInstance;
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_15 = L_14;
		if (L_15)
		{
			G_B9_0 = L_15;
			G_B9_1 = __this;
			goto IL_006c;
		}
		G_B8_0 = L_15;
		G_B8_1 = __this;
	}
	{
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_16 = (Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
		Func_1__ctor_mA4955FA382BBC4CBD82690DCA4DBB23EFFB5B379(L_16, NULL, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)), NULL);
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_17 = L_16;
		((U3CU3EO_tB37F1F5975821568EC9FCF1B098BD4B808DE7992_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C1U3E__CreateScriptableObjectInstance = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tB37F1F5975821568EC9FCF1B098BD4B808DE7992_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C1U3E__CreateScriptableObjectInstance), (void*)L_17);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
	}

IL_006c:
	{
		NullCheck(G_B9_1);
		G_B9_1->___m_ImplicitConstructor = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___m_ImplicitConstructor), (void*)G_B9_0);
		return;
	}

IL_0072:
	{
		Type_t* L_18 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19;
		L_19 = Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_inline(Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		NullCheck(L_18);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_20;
		L_20 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_18, L_19, NULL);
		CHECKED_LOCAL_INIT(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_StaticInit,(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_21;
		L_21 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, L_20, NULL);
		if (!L_21)
		{
			goto IL_00a6;
		}
	}
	{
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_22 = ((U3CU3EO_tB37F1F5975821568EC9FCF1B098BD4B808DE7992_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C2U3E__CreateClassInstance;
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_23 = L_22;
		if (L_23)
		{
			G_B13_0 = L_23;
			G_B13_1 = __this;
			goto IL_00a1;
		}
		G_B12_0 = L_23;
		G_B12_1 = __this;
	}
	{
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_24 = (Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
		Func_1__ctor_mA4955FA382BBC4CBD82690DCA4DBB23EFFB5B379(L_24, NULL, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)), NULL);
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_25 = L_24;
		((U3CU3EO_tB37F1F5975821568EC9FCF1B098BD4B808DE7992_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C2U3E__CreateClassInstance = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tB37F1F5975821568EC9FCF1B098BD4B808DE7992_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C2U3E__CreateClassInstance), (void*)L_25);
		G_B13_0 = L_25;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		NullCheck(G_B13_1);
		G_B13_1->___m_ImplicitConstructor = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___m_ImplicitConstructor), (void*)G_B13_0);
	}

IL_00a6:
	{
		return;
	}
}
// Method Definition Index: 70297
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 TypeConstructor_1_CreateValueTypeInstance_mFA0E76FB4F9E05BE9478E01764C224F52B64A6F9 (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4));
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 70298
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 TypeConstructor_1_CreateScriptableObjectInstance_m49FE4D8AFB7F31506A2480105254775E21DEE9CB (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		return ((*(StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*)UnBox(L_2, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))));
	}
}
// Method Definition Index: 70299
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 TypeConstructor_1_CreateClassInstance_mE2A34DE767837644E0AD09754855B78FF4EEF5D4 (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 L_0;
		L_0 = Activator_CreateInstance_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_mEE0F7CDAD8C0B99BA86771065E4EE2D71690474C(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return L_0;
	}
}
// Method Definition Index: 70300
// Method Definition Index: 70301
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructorU3CTU3E_Instantiate_mDC041B94D09AB16884E4B00D33812FD356155D59 (TypeConstructor_1_tB7EF02BD3EFCFE0495E9D67B2BCFF3652B6D6C6F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_1 = __this->___m_ExplicitConstructor;
		NullCheck(L_1);
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 L_2;
		L_2 = Func_1_Invoke_m3C0C15EA65260B3A2D23C645DE9908F470E1D6EB_inline(L_1, NULL);
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->___m_OverrideConstructor;
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_7);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___m_OverrideConstructor;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_13 = __this->___m_OverrideConstructor;
		NullCheck(L_13);
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 L_14;
		L_14 = InterfaceFuncInvoker0< StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 1), L_13);
		return L_14;
	}

IL_0068:
	{
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_15 = __this->___m_ImplicitConstructor;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* L_16 = __this->___m_ImplicitConstructor;
		NullCheck(L_16);
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 L_17;
		L_17 = Func_1_Invoke_m3C0C15EA65260B3A2D23C645DE9908F470E1D6EB_inline(L_16, NULL);
		return L_17;
	}

IL_007c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_19);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_22 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
	}
}
// Method Definition Index: 70302
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_Instantiate_m9F842BBAC1D4ED25459ABE93317AB7521F6E5FF9 (TypeConstructor_1_tB7EF02BD3EFCFE0495E9D67B2BCFF3652B6D6C6F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 L_0;
		L_0 = InterfaceFuncInvoker0< StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 14), __this);
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_1);
		return L_2;
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
// Method Definition Index: 70294
// Method Definition Index: 70295
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_m6B12459720359B1E2565090434E9C652B4A70CE3 (TypeConstructor_1_t4B0BD235497BF51A55673786B4B3FEC08FF7A40A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_StaticInit);
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECKED_LOCAL_INIT(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_StaticInit,(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		RuntimeObject* L_0;
		L_0 = PropertyBagStore_GetPropertyBag_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_m82B5917AD86A0775E7DD8F172FEAE0453CF832CE(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		__this->___m_OverrideConstructor = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OverrideConstructor), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1))));
		TypeConstructor_1_SetImplicitConstructor_m51B797D10A3B0912B091FA941851F9CA25028CD7(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		return;
	}
}
// Method Definition Index: 70296
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m51B797D10A3B0912B091FA941851F9CA25028CD7 (TypeConstructor_1_t4B0BD235497BF51A55673786B4B3FEC08FF7A40A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* G_B3_0 = NULL;
	TypeConstructor_1_t4B0BD235497BF51A55673786B4B3FEC08FF7A40A* G_B3_1 = NULL;
	Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* G_B2_0 = NULL;
	TypeConstructor_1_t4B0BD235497BF51A55673786B4B3FEC08FF7A40A* G_B2_1 = NULL;
	Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* G_B9_0 = NULL;
	TypeConstructor_1_t4B0BD235497BF51A55673786B4B3FEC08FF7A40A* G_B9_1 = NULL;
	Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* G_B8_0 = NULL;
	TypeConstructor_1_t4B0BD235497BF51A55673786B4B3FEC08FF7A40A* G_B8_1 = NULL;
	Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* G_B13_0 = NULL;
	TypeConstructor_1_t4B0BD235497BF51A55673786B4B3FEC08FF7A40A* G_B13_1 = NULL;
	Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* G_B12_0 = NULL;
	TypeConstructor_1_t4B0BD235497BF51A55673786B4B3FEC08FF7A40A* G_B12_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_4 = ((U3CU3EO_t8D134FDE8AA025D402BB56321810E7A5002C8021_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C0U3E__CreateValueTypeInstance;
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_5 = L_4;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = __this;
			goto IL_002f;
		}
		G_B2_0 = L_5;
		G_B2_1 = __this;
	}
	{
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_6 = (Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
		Func_1__ctor_mCA44589EC746F7662FC5375FE18EC12DC9E057C5(L_6, NULL, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)), NULL);
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_7 = L_6;
		((U3CU3EO_t8D134FDE8AA025D402BB56321810E7A5002C8021_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C0U3E__CreateValueTypeInstance = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t8D134FDE8AA025D402BB56321810E7A5002C8021_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C0U3E__CreateValueTypeInstance), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_002f:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_ImplicitConstructor = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_ImplicitConstructor), (void*)G_B3_0);
		return;
	}

IL_0035:
	{
		Type_t* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_11, L_12);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_14 = ((U3CU3EO_t8D134FDE8AA025D402BB56321810E7A5002C8021_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C1U3E__CreateScriptableObjectInstance;
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_15 = L_14;
		if (L_15)
		{
			G_B9_0 = L_15;
			G_B9_1 = __this;
			goto IL_006c;
		}
		G_B8_0 = L_15;
		G_B8_1 = __this;
	}
	{
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_16 = (Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
		Func_1__ctor_mCA44589EC746F7662FC5375FE18EC12DC9E057C5(L_16, NULL, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)), NULL);
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_17 = L_16;
		((U3CU3EO_t8D134FDE8AA025D402BB56321810E7A5002C8021_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C1U3E__CreateScriptableObjectInstance = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t8D134FDE8AA025D402BB56321810E7A5002C8021_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C1U3E__CreateScriptableObjectInstance), (void*)L_17);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
	}

IL_006c:
	{
		NullCheck(G_B9_1);
		G_B9_1->___m_ImplicitConstructor = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___m_ImplicitConstructor), (void*)G_B9_0);
		return;
	}

IL_0072:
	{
		Type_t* L_18 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19;
		L_19 = Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_inline(Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		NullCheck(L_18);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_20;
		L_20 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_18, L_19, NULL);
		CHECKED_LOCAL_INIT(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_StaticInit,(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_21;
		L_21 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, L_20, NULL);
		if (!L_21)
		{
			goto IL_00a6;
		}
	}
	{
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_22 = ((U3CU3EO_t8D134FDE8AA025D402BB56321810E7A5002C8021_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C2U3E__CreateClassInstance;
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_23 = L_22;
		if (L_23)
		{
			G_B13_0 = L_23;
			G_B13_1 = __this;
			goto IL_00a1;
		}
		G_B12_0 = L_23;
		G_B12_1 = __this;
	}
	{
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_24 = (Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
		Func_1__ctor_mCA44589EC746F7662FC5375FE18EC12DC9E057C5(L_24, NULL, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)), NULL);
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_25 = L_24;
		((U3CU3EO_t8D134FDE8AA025D402BB56321810E7A5002C8021_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C2U3E__CreateClassInstance = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t8D134FDE8AA025D402BB56321810E7A5002C8021_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C2U3E__CreateClassInstance), (void*)L_25);
		G_B13_0 = L_25;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		NullCheck(G_B13_1);
		G_B13_1->___m_ImplicitConstructor = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___m_ImplicitConstructor), (void*)G_B13_0);
	}

IL_00a6:
	{
		return;
	}
}
// Method Definition Index: 70297
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC TypeConstructor_1_CreateValueTypeInstance_m59A61EA5D475D36B5DAF8659EF0F19580BC2F6FB (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC));
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 70298
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC TypeConstructor_1_CreateScriptableObjectInstance_mFBEF8ACDCEC715E8608F6484D17F815B04058748 (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		return ((*(Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC*)UnBox(L_2, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))));
	}
}
// Method Definition Index: 70299
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC TypeConstructor_1_CreateClassInstance_m9191BF22A904C28738D72774BF0E5FCC770F4B95 (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC L_0;
		L_0 = Activator_CreateInstance_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_m112E07EE82B221E3263040A368D5DD9FA4581E7A(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return L_0;
	}
}
// Method Definition Index: 70300
// Method Definition Index: 70301
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructorU3CTU3E_Instantiate_mC6A9A3931B170573BE4852111FC22F35786182A4 (TypeConstructor_1_t4B0BD235497BF51A55673786B4B3FEC08FF7A40A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_1 = __this->___m_ExplicitConstructor;
		NullCheck(L_1);
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC L_2;
		L_2 = Func_1_Invoke_m72E1B2AB7AB84681AB456966658AB4AA2262172E_inline(L_1, NULL);
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->___m_OverrideConstructor;
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_7);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___m_OverrideConstructor;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_13 = __this->___m_OverrideConstructor;
		NullCheck(L_13);
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC L_14;
		L_14 = InterfaceFuncInvoker0< Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 1), L_13);
		return L_14;
	}

IL_0068:
	{
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_15 = __this->___m_ImplicitConstructor;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* L_16 = __this->___m_ImplicitConstructor;
		NullCheck(L_16);
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC L_17;
		L_17 = Func_1_Invoke_m72E1B2AB7AB84681AB456966658AB4AA2262172E_inline(L_16, NULL);
		return L_17;
	}

IL_007c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_19);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_22 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
	}
}
// Method Definition Index: 70302
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_Instantiate_mED0F0F7E24A48EC63C65C0D6B308B23EE62811FE (TypeConstructor_1_t4B0BD235497BF51A55673786B4B3FEC08FF7A40A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC L_0;
		L_0 = InterfaceFuncInvoker0< Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 14), __this);
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_1);
		return L_2;
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
// Method Definition Index: 70294
// Method Definition Index: 70295
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_m3DFB5D9D0C5486439488EC6E30821C47EDDECA62 (TypeConstructor_1_t4203D4BA6648D84005F60BA10B9E7FFFD1BD104C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_StaticInit);
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECKED_LOCAL_INIT(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_StaticInit,(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		RuntimeObject* L_0;
		L_0 = PropertyBagStore_GetPropertyBag_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m12EA9186899E84F2F4C3FC7EE5E9BA1EF4A87CE9(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		__this->___m_OverrideConstructor = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OverrideConstructor), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1))));
		TypeConstructor_1_SetImplicitConstructor_m2D39DE69B79401A5162CC3AE92B414DA350B427E(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		return;
	}
}
// Method Definition Index: 70296
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_m2D39DE69B79401A5162CC3AE92B414DA350B427E (TypeConstructor_1_t4203D4BA6648D84005F60BA10B9E7FFFD1BD104C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* G_B3_0 = NULL;
	TypeConstructor_1_t4203D4BA6648D84005F60BA10B9E7FFFD1BD104C* G_B3_1 = NULL;
	Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* G_B2_0 = NULL;
	TypeConstructor_1_t4203D4BA6648D84005F60BA10B9E7FFFD1BD104C* G_B2_1 = NULL;
	Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* G_B9_0 = NULL;
	TypeConstructor_1_t4203D4BA6648D84005F60BA10B9E7FFFD1BD104C* G_B9_1 = NULL;
	Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* G_B8_0 = NULL;
	TypeConstructor_1_t4203D4BA6648D84005F60BA10B9E7FFFD1BD104C* G_B8_1 = NULL;
	Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* G_B13_0 = NULL;
	TypeConstructor_1_t4203D4BA6648D84005F60BA10B9E7FFFD1BD104C* G_B13_1 = NULL;
	Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* G_B12_0 = NULL;
	TypeConstructor_1_t4203D4BA6648D84005F60BA10B9E7FFFD1BD104C* G_B12_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_4 = ((U3CU3EO_t7E5104856073A68D0629FC4F5C0F61EBE336C5DE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C0U3E__CreateValueTypeInstance;
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_5 = L_4;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = __this;
			goto IL_002f;
		}
		G_B2_0 = L_5;
		G_B2_1 = __this;
	}
	{
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_6 = (Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
		Func_1__ctor_mBF9DBF4E06C4D61E55687EABBAC4550B432E6D9A(L_6, NULL, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)), NULL);
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_7 = L_6;
		((U3CU3EO_t7E5104856073A68D0629FC4F5C0F61EBE336C5DE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C0U3E__CreateValueTypeInstance = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t7E5104856073A68D0629FC4F5C0F61EBE336C5DE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C0U3E__CreateValueTypeInstance), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_002f:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_ImplicitConstructor = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_ImplicitConstructor), (void*)G_B3_0);
		return;
	}

IL_0035:
	{
		Type_t* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_11, L_12);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_14 = ((U3CU3EO_t7E5104856073A68D0629FC4F5C0F61EBE336C5DE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C1U3E__CreateScriptableObjectInstance;
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_15 = L_14;
		if (L_15)
		{
			G_B9_0 = L_15;
			G_B9_1 = __this;
			goto IL_006c;
		}
		G_B8_0 = L_15;
		G_B8_1 = __this;
	}
	{
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_16 = (Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
		Func_1__ctor_mBF9DBF4E06C4D61E55687EABBAC4550B432E6D9A(L_16, NULL, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)), NULL);
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_17 = L_16;
		((U3CU3EO_t7E5104856073A68D0629FC4F5C0F61EBE336C5DE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C1U3E__CreateScriptableObjectInstance = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t7E5104856073A68D0629FC4F5C0F61EBE336C5DE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C1U3E__CreateScriptableObjectInstance), (void*)L_17);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
	}

IL_006c:
	{
		NullCheck(G_B9_1);
		G_B9_1->___m_ImplicitConstructor = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___m_ImplicitConstructor), (void*)G_B9_0);
		return;
	}

IL_0072:
	{
		Type_t* L_18 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19;
		L_19 = Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_inline(Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		NullCheck(L_18);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_20;
		L_20 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_18, L_19, NULL);
		CHECKED_LOCAL_INIT(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_StaticInit,(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_21;
		L_21 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, L_20, NULL);
		if (!L_21)
		{
			goto IL_00a6;
		}
	}
	{
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_22 = ((U3CU3EO_t7E5104856073A68D0629FC4F5C0F61EBE336C5DE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C2U3E__CreateClassInstance;
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_23 = L_22;
		if (L_23)
		{
			G_B13_0 = L_23;
			G_B13_1 = __this;
			goto IL_00a1;
		}
		G_B12_0 = L_23;
		G_B12_1 = __this;
	}
	{
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_24 = (Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
		Func_1__ctor_mBF9DBF4E06C4D61E55687EABBAC4550B432E6D9A(L_24, NULL, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)), NULL);
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_25 = L_24;
		((U3CU3EO_t7E5104856073A68D0629FC4F5C0F61EBE336C5DE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C2U3E__CreateClassInstance = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t7E5104856073A68D0629FC4F5C0F61EBE336C5DE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C2U3E__CreateClassInstance), (void*)L_25);
		G_B13_0 = L_25;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		NullCheck(G_B13_1);
		G_B13_1->___m_ImplicitConstructor = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___m_ImplicitConstructor), (void*)G_B13_0);
	}

IL_00a6:
	{
		return;
	}
}
// Method Definition Index: 70297
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 TypeConstructor_1_CreateValueTypeInstance_mE29C4601065AC82AB360DFC9D744A28B708A3248 (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8));
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 70298
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 TypeConstructor_1_CreateScriptableObjectInstance_m80B58BDDD4577BBE8ADA9D46C7587D7B523639BF (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		return ((*(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)UnBox(L_2, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))));
	}
}
// Method Definition Index: 70299
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 TypeConstructor_1_CreateClassInstance_m36C47B5A0F4570ABC84F5ABDDC016DE1FF9AC18A (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_0;
		L_0 = Activator_CreateInstance_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m68F946E397E45AC0C461ABC3CB223C420569B8C5(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return L_0;
	}
}
// Method Definition Index: 70300
// Method Definition Index: 70301
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructorU3CTU3E_Instantiate_m36A4A6AC2B5587810A7654E6E5F2D9DEB425740A (TypeConstructor_1_t4203D4BA6648D84005F60BA10B9E7FFFD1BD104C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_1 = __this->___m_ExplicitConstructor;
		NullCheck(L_1);
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_2;
		L_2 = Func_1_Invoke_m431E4DC7CE52538C527FFFA27B672C9172B9FA5D_inline(L_1, NULL);
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->___m_OverrideConstructor;
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_7);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___m_OverrideConstructor;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_13 = __this->___m_OverrideConstructor;
		NullCheck(L_13);
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_14;
		L_14 = InterfaceFuncInvoker0< Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 1), L_13);
		return L_14;
	}

IL_0068:
	{
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_15 = __this->___m_ImplicitConstructor;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* L_16 = __this->___m_ImplicitConstructor;
		NullCheck(L_16);
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_17;
		L_17 = Func_1_Invoke_m431E4DC7CE52538C527FFFA27B672C9172B9FA5D_inline(L_16, NULL);
		return L_17;
	}

IL_007c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_19);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_22 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
	}
}
// Method Definition Index: 70302
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_Instantiate_mB9E8498773F2128661519B1F3A5325C4F2C88731 (TypeConstructor_1_t4203D4BA6648D84005F60BA10B9E7FFFD1BD104C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_0;
		L_0 = InterfaceFuncInvoker0< Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 14), __this);
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_1);
		return L_2;
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
// Method Definition Index: 70294
// Method Definition Index: 70295
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_m0B140479278307C1B8AD5E67A6C7DAC0ABA8F998 (TypeConstructor_1_t1BB003702AC661844ECFE30F83C9FA228250C58F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_StaticInit);
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECKED_LOCAL_INIT(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_StaticInit,(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		RuntimeObject* L_0;
		L_0 = PropertyBagStore_GetPropertyBag_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m49C3C2D5C8CE19D771AC6E44664479AB1A300582(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		__this->___m_OverrideConstructor = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OverrideConstructor), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1))));
		TypeConstructor_1_SetImplicitConstructor_mC649308AA476E656E8EDFEB064E80C613E329208(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		return;
	}
}
// Method Definition Index: 70296
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_mC649308AA476E656E8EDFEB064E80C613E329208 (TypeConstructor_1_t1BB003702AC661844ECFE30F83C9FA228250C58F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* G_B3_0 = NULL;
	TypeConstructor_1_t1BB003702AC661844ECFE30F83C9FA228250C58F* G_B3_1 = NULL;
	Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* G_B2_0 = NULL;
	TypeConstructor_1_t1BB003702AC661844ECFE30F83C9FA228250C58F* G_B2_1 = NULL;
	Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* G_B9_0 = NULL;
	TypeConstructor_1_t1BB003702AC661844ECFE30F83C9FA228250C58F* G_B9_1 = NULL;
	Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* G_B8_0 = NULL;
	TypeConstructor_1_t1BB003702AC661844ECFE30F83C9FA228250C58F* G_B8_1 = NULL;
	Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* G_B13_0 = NULL;
	TypeConstructor_1_t1BB003702AC661844ECFE30F83C9FA228250C58F* G_B13_1 = NULL;
	Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* G_B12_0 = NULL;
	TypeConstructor_1_t1BB003702AC661844ECFE30F83C9FA228250C58F* G_B12_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_4 = ((U3CU3EO_t327797ABDD0FDED67E617F95EB6916B24E751BF2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C0U3E__CreateValueTypeInstance;
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_5 = L_4;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = __this;
			goto IL_002f;
		}
		G_B2_0 = L_5;
		G_B2_1 = __this;
	}
	{
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_6 = (Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
		Func_1__ctor_m7DAE2F89A23101179BB5B56E3773CE03C3287F94(L_6, NULL, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)), NULL);
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_7 = L_6;
		((U3CU3EO_t327797ABDD0FDED67E617F95EB6916B24E751BF2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C0U3E__CreateValueTypeInstance = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t327797ABDD0FDED67E617F95EB6916B24E751BF2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C0U3E__CreateValueTypeInstance), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_002f:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_ImplicitConstructor = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_ImplicitConstructor), (void*)G_B3_0);
		return;
	}

IL_0035:
	{
		Type_t* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_11, L_12);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_14 = ((U3CU3EO_t327797ABDD0FDED67E617F95EB6916B24E751BF2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C1U3E__CreateScriptableObjectInstance;
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_15 = L_14;
		if (L_15)
		{
			G_B9_0 = L_15;
			G_B9_1 = __this;
			goto IL_006c;
		}
		G_B8_0 = L_15;
		G_B8_1 = __this;
	}
	{
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_16 = (Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
		Func_1__ctor_m7DAE2F89A23101179BB5B56E3773CE03C3287F94(L_16, NULL, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)), NULL);
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_17 = L_16;
		((U3CU3EO_t327797ABDD0FDED67E617F95EB6916B24E751BF2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C1U3E__CreateScriptableObjectInstance = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t327797ABDD0FDED67E617F95EB6916B24E751BF2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C1U3E__CreateScriptableObjectInstance), (void*)L_17);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
	}

IL_006c:
	{
		NullCheck(G_B9_1);
		G_B9_1->___m_ImplicitConstructor = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___m_ImplicitConstructor), (void*)G_B9_0);
		return;
	}

IL_0072:
	{
		Type_t* L_18 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19;
		L_19 = Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_inline(Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		NullCheck(L_18);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_20;
		L_20 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_18, L_19, NULL);
		CHECKED_LOCAL_INIT(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_StaticInit,(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_21;
		L_21 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, L_20, NULL);
		if (!L_21)
		{
			goto IL_00a6;
		}
	}
	{
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_22 = ((U3CU3EO_t327797ABDD0FDED67E617F95EB6916B24E751BF2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C2U3E__CreateClassInstance;
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_23 = L_22;
		if (L_23)
		{
			G_B13_0 = L_23;
			G_B13_1 = __this;
			goto IL_00a1;
		}
		G_B12_0 = L_23;
		G_B12_1 = __this;
	}
	{
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_24 = (Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
		Func_1__ctor_m7DAE2F89A23101179BB5B56E3773CE03C3287F94(L_24, NULL, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)), NULL);
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_25 = L_24;
		((U3CU3EO_t327797ABDD0FDED67E617F95EB6916B24E751BF2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C2U3E__CreateClassInstance = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t327797ABDD0FDED67E617F95EB6916B24E751BF2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C2U3E__CreateClassInstance), (void*)L_25);
		G_B13_0 = L_25;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		NullCheck(G_B13_1);
		G_B13_1->___m_ImplicitConstructor = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___m_ImplicitConstructor), (void*)G_B13_0);
	}

IL_00a6:
	{
		return;
	}
}
// Method Definition Index: 70297
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 TypeConstructor_1_CreateValueTypeInstance_mA5544D30EA2F948EF12F6964F2CEAD744391EEC9 (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56));
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 70298
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 TypeConstructor_1_CreateScriptableObjectInstance_m76688B481B1FB203ABEB5C34B49871AF8928BEFF (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		return ((*(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*)UnBox(L_2, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))));
	}
}
// Method Definition Index: 70299
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 TypeConstructor_1_CreateClassInstance_mA10D596BEB316451B89B92402BD44CFB877D5CD3 (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_0;
		L_0 = Activator_CreateInstance_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_mE7341C88FD622F8CC6463B0990DECFDEC77CE513(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return L_0;
	}
}
// Method Definition Index: 70300
// Method Definition Index: 70301
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructorU3CTU3E_Instantiate_m8AF722A332B44AE38E4101C1680D9256D6A5D50B (TypeConstructor_1_t1BB003702AC661844ECFE30F83C9FA228250C58F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_1 = __this->___m_ExplicitConstructor;
		NullCheck(L_1);
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_2;
		L_2 = Func_1_Invoke_m22D302915F20EEF62D9C1666172BBE063F7D795A_inline(L_1, NULL);
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->___m_OverrideConstructor;
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_7);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___m_OverrideConstructor;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_13 = __this->___m_OverrideConstructor;
		NullCheck(L_13);
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_14;
		L_14 = InterfaceFuncInvoker0< BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 1), L_13);
		return L_14;
	}

IL_0068:
	{
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_15 = __this->___m_ImplicitConstructor;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* L_16 = __this->___m_ImplicitConstructor;
		NullCheck(L_16);
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_17;
		L_17 = Func_1_Invoke_m22D302915F20EEF62D9C1666172BBE063F7D795A_inline(L_16, NULL);
		return L_17;
	}

IL_007c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_19);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_22 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
	}
}
// Method Definition Index: 70302
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_Instantiate_mC73E6C24ED3939B74CC11C8957A49897DFD03992 (TypeConstructor_1_t1BB003702AC661844ECFE30F83C9FA228250C58F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_0;
		L_0 = InterfaceFuncInvoker0< BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 14), __this);
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_1);
		return L_2;
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
// Method Definition Index: 70294
// Method Definition Index: 70295
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_mC6B7B302C518C9F408DD9A14B416B900A4A14B49 (TypeConstructor_1_tA4FE8677DDBAE558A4A99F5C70DA123D6D746068* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_StaticInit);
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECKED_LOCAL_INIT(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_StaticInit,(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		RuntimeObject* L_0;
		L_0 = PropertyBagStore_GetPropertyBag_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m889D9CDB4925D6CEA1E008BD11C74F4C4B526CD7(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		__this->___m_OverrideConstructor = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OverrideConstructor), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1))));
		TypeConstructor_1_SetImplicitConstructor_mF8ACDEC4A418A3DC5EB0F27E4682223125B50B29(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		return;
	}
}
// Method Definition Index: 70296
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_mF8ACDEC4A418A3DC5EB0F27E4682223125B50B29 (TypeConstructor_1_tA4FE8677DDBAE558A4A99F5C70DA123D6D746068* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* G_B3_0 = NULL;
	TypeConstructor_1_tA4FE8677DDBAE558A4A99F5C70DA123D6D746068* G_B3_1 = NULL;
	Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* G_B2_0 = NULL;
	TypeConstructor_1_tA4FE8677DDBAE558A4A99F5C70DA123D6D746068* G_B2_1 = NULL;
	Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* G_B9_0 = NULL;
	TypeConstructor_1_tA4FE8677DDBAE558A4A99F5C70DA123D6D746068* G_B9_1 = NULL;
	Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* G_B8_0 = NULL;
	TypeConstructor_1_tA4FE8677DDBAE558A4A99F5C70DA123D6D746068* G_B8_1 = NULL;
	Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* G_B13_0 = NULL;
	TypeConstructor_1_tA4FE8677DDBAE558A4A99F5C70DA123D6D746068* G_B13_1 = NULL;
	Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* G_B12_0 = NULL;
	TypeConstructor_1_tA4FE8677DDBAE558A4A99F5C70DA123D6D746068* G_B12_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_4 = ((U3CU3EO_tDD9D7685B9E390A6C6CEE6412E3C2B81AB9EB6DC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C0U3E__CreateValueTypeInstance;
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_5 = L_4;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = __this;
			goto IL_002f;
		}
		G_B2_0 = L_5;
		G_B2_1 = __this;
	}
	{
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_6 = (Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
		Func_1__ctor_m2749E8A77FD25617A4ECDB5CEEEDE39F9D1EE456(L_6, NULL, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)), NULL);
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_7 = L_6;
		((U3CU3EO_tDD9D7685B9E390A6C6CEE6412E3C2B81AB9EB6DC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C0U3E__CreateValueTypeInstance = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tDD9D7685B9E390A6C6CEE6412E3C2B81AB9EB6DC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C0U3E__CreateValueTypeInstance), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_002f:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_ImplicitConstructor = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_ImplicitConstructor), (void*)G_B3_0);
		return;
	}

IL_0035:
	{
		Type_t* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_11, L_12);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_14 = ((U3CU3EO_tDD9D7685B9E390A6C6CEE6412E3C2B81AB9EB6DC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C1U3E__CreateScriptableObjectInstance;
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_15 = L_14;
		if (L_15)
		{
			G_B9_0 = L_15;
			G_B9_1 = __this;
			goto IL_006c;
		}
		G_B8_0 = L_15;
		G_B8_1 = __this;
	}
	{
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_16 = (Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
		Func_1__ctor_m2749E8A77FD25617A4ECDB5CEEEDE39F9D1EE456(L_16, NULL, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)), NULL);
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_17 = L_16;
		((U3CU3EO_tDD9D7685B9E390A6C6CEE6412E3C2B81AB9EB6DC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C1U3E__CreateScriptableObjectInstance = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tDD9D7685B9E390A6C6CEE6412E3C2B81AB9EB6DC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C1U3E__CreateScriptableObjectInstance), (void*)L_17);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
	}

IL_006c:
	{
		NullCheck(G_B9_1);
		G_B9_1->___m_ImplicitConstructor = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___m_ImplicitConstructor), (void*)G_B9_0);
		return;
	}

IL_0072:
	{
		Type_t* L_18 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19;
		L_19 = Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_inline(Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		NullCheck(L_18);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_20;
		L_20 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_18, L_19, NULL);
		CHECKED_LOCAL_INIT(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_StaticInit,(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_21;
		L_21 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, L_20, NULL);
		if (!L_21)
		{
			goto IL_00a6;
		}
	}
	{
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_22 = ((U3CU3EO_tDD9D7685B9E390A6C6CEE6412E3C2B81AB9EB6DC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C2U3E__CreateClassInstance;
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_23 = L_22;
		if (L_23)
		{
			G_B13_0 = L_23;
			G_B13_1 = __this;
			goto IL_00a1;
		}
		G_B12_0 = L_23;
		G_B12_1 = __this;
	}
	{
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_24 = (Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
		Func_1__ctor_m2749E8A77FD25617A4ECDB5CEEEDE39F9D1EE456(L_24, NULL, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)), NULL);
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_25 = L_24;
		((U3CU3EO_tDD9D7685B9E390A6C6CEE6412E3C2B81AB9EB6DC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C2U3E__CreateClassInstance = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_tDD9D7685B9E390A6C6CEE6412E3C2B81AB9EB6DC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C2U3E__CreateClassInstance), (void*)L_25);
		G_B13_0 = L_25;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		NullCheck(G_B13_1);
		G_B13_1->___m_ImplicitConstructor = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___m_ImplicitConstructor), (void*)G_B13_0);
	}

IL_00a6:
	{
		return;
	}
}
// Method Definition Index: 70297
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F TypeConstructor_1_CreateValueTypeInstance_m557622F3E0E50739B935E3A78A833E4B208D89B7 (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F));
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 70298
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F TypeConstructor_1_CreateScriptableObjectInstance_mA645D3EC5FB5D761014E7C65A075436FFBF0D6C0 (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		return ((*(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*)UnBox(L_2, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))));
	}
}
// Method Definition Index: 70299
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F TypeConstructor_1_CreateClassInstance_m458F2BAF99E22C22C0C4A5B7A3351ED393A0C63E (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_0;
		L_0 = Activator_CreateInstance_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m93B83A4B46F4D2E164D1604B782F208D26E12267(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return L_0;
	}
}
// Method Definition Index: 70300
// Method Definition Index: 70301
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructorU3CTU3E_Instantiate_m7542D35EBD9882BD549A2F97FA26B89F8CA9DE11 (TypeConstructor_1_tA4FE8677DDBAE558A4A99F5C70DA123D6D746068* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_1 = __this->___m_ExplicitConstructor;
		NullCheck(L_1);
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_2;
		L_2 = Func_1_Invoke_m46E31998378DE2BA4DF293634298EF5AA1E6520B_inline(L_1, NULL);
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->___m_OverrideConstructor;
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_7);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___m_OverrideConstructor;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_13 = __this->___m_OverrideConstructor;
		NullCheck(L_13);
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_14;
		L_14 = InterfaceFuncInvoker0< BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 1), L_13);
		return L_14;
	}

IL_0068:
	{
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_15 = __this->___m_ImplicitConstructor;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* L_16 = __this->___m_ImplicitConstructor;
		NullCheck(L_16);
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_17;
		L_17 = Func_1_Invoke_m46E31998378DE2BA4DF293634298EF5AA1E6520B_inline(L_16, NULL);
		return L_17;
	}

IL_007c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_19);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_22 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
	}
}
// Method Definition Index: 70302
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_Instantiate_m92D34953F6FE5C0902BEDA87560F206951E6C441 (TypeConstructor_1_tA4FE8677DDBAE558A4A99F5C70DA123D6D746068* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_0;
		L_0 = InterfaceFuncInvoker0< BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 14), __this);
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_1);
		return L_2;
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
// Method Definition Index: 70294
// Method Definition Index: 70295
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_m46548CB3BA3F31069F109A752ADE6F8D302E51F7 (TypeConstructor_1_t04F8CEA6E3DA7BFE91DB6C903CB750ECBE264E3F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_StaticInit);
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECKED_LOCAL_INIT(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_StaticInit,(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		RuntimeObject* L_0;
		L_0 = PropertyBagStore_GetPropertyBag_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_mA41D4EADD69077FA3D6860DDBF38E73AC193A3C8(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		__this->___m_OverrideConstructor = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OverrideConstructor), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1))));
		TypeConstructor_1_SetImplicitConstructor_mA88560F0713BBFA2C37745AF9D6C52629ED1DF7E(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		return;
	}
}
// Method Definition Index: 70296
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1_SetImplicitConstructor_mA88560F0713BBFA2C37745AF9D6C52629ED1DF7E (TypeConstructor_1_t04F8CEA6E3DA7BFE91DB6C903CB750ECBE264E3F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* G_B3_0 = NULL;
	TypeConstructor_1_t04F8CEA6E3DA7BFE91DB6C903CB750ECBE264E3F* G_B3_1 = NULL;
	Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* G_B2_0 = NULL;
	TypeConstructor_1_t04F8CEA6E3DA7BFE91DB6C903CB750ECBE264E3F* G_B2_1 = NULL;
	Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* G_B9_0 = NULL;
	TypeConstructor_1_t04F8CEA6E3DA7BFE91DB6C903CB750ECBE264E3F* G_B9_1 = NULL;
	Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* G_B8_0 = NULL;
	TypeConstructor_1_t04F8CEA6E3DA7BFE91DB6C903CB750ECBE264E3F* G_B8_1 = NULL;
	Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* G_B13_0 = NULL;
	TypeConstructor_1_t04F8CEA6E3DA7BFE91DB6C903CB750ECBE264E3F* G_B13_1 = NULL;
	Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* G_B12_0 = NULL;
	TypeConstructor_1_t04F8CEA6E3DA7BFE91DB6C903CB750ECBE264E3F* G_B12_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_4 = ((U3CU3EO_t3C9D2B01CEA2AC8CA1A4426C4F67FB0FF635919E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C0U3E__CreateValueTypeInstance;
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_5 = L_4;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = __this;
			goto IL_002f;
		}
		G_B2_0 = L_5;
		G_B2_1 = __this;
	}
	{
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_6 = (Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
		Func_1__ctor_m5DE18B6F84B0E4095B7DACFC9C7006775018056A(L_6, NULL, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)), NULL);
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_7 = L_6;
		((U3CU3EO_t3C9D2B01CEA2AC8CA1A4426C4F67FB0FF635919E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C0U3E__CreateValueTypeInstance = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t3C9D2B01CEA2AC8CA1A4426C4F67FB0FF635919E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C0U3E__CreateValueTypeInstance), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_002f:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_ImplicitConstructor = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___m_ImplicitConstructor), (void*)G_B3_0);
		return;
	}

IL_0035:
	{
		Type_t* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_11, L_12);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_14 = ((U3CU3EO_t3C9D2B01CEA2AC8CA1A4426C4F67FB0FF635919E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C1U3E__CreateScriptableObjectInstance;
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_15 = L_14;
		if (L_15)
		{
			G_B9_0 = L_15;
			G_B9_1 = __this;
			goto IL_006c;
		}
		G_B8_0 = L_15;
		G_B8_1 = __this;
	}
	{
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_16 = (Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
		Func_1__ctor_m5DE18B6F84B0E4095B7DACFC9C7006775018056A(L_16, NULL, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)), NULL);
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_17 = L_16;
		((U3CU3EO_t3C9D2B01CEA2AC8CA1A4426C4F67FB0FF635919E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C1U3E__CreateScriptableObjectInstance = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t3C9D2B01CEA2AC8CA1A4426C4F67FB0FF635919E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C1U3E__CreateScriptableObjectInstance), (void*)L_17);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
	}

IL_006c:
	{
		NullCheck(G_B9_1);
		G_B9_1->___m_ImplicitConstructor = G_B9_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_1->___m_ImplicitConstructor), (void*)G_B9_0);
		return;
	}

IL_0072:
	{
		Type_t* L_18 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19;
		L_19 = Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_inline(Array_Empty_TisType_t_m1FD9ED0B09CEAFFC537EF0C71689FDB03AEF72AC_RuntimeMethod_var);
		NullCheck(L_18);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_20;
		L_20 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_18, L_19, NULL);
		CHECKED_LOCAL_INIT(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_StaticInit,(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_21;
		L_21 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, L_20, NULL);
		if (!L_21)
		{
			goto IL_00a6;
		}
	}
	{
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_22 = ((U3CU3EO_t3C9D2B01CEA2AC8CA1A4426C4F67FB0FF635919E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C2U3E__CreateClassInstance;
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_23 = L_22;
		if (L_23)
		{
			G_B13_0 = L_23;
			G_B13_1 = __this;
			goto IL_00a1;
		}
		G_B12_0 = L_23;
		G_B12_1 = __this;
	}
	{
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_24 = (Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
		Func_1__ctor_m5DE18B6F84B0E4095B7DACFC9C7006775018056A(L_24, NULL, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)), NULL);
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_25 = L_24;
		((U3CU3EO_t3C9D2B01CEA2AC8CA1A4426C4F67FB0FF635919E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C2U3E__CreateClassInstance = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t3C9D2B01CEA2AC8CA1A4426C4F67FB0FF635919E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)))->___U3C2U3E__CreateClassInstance), (void*)L_25);
		G_B13_0 = L_25;
		G_B13_1 = G_B12_1;
	}

IL_00a1:
	{
		NullCheck(G_B13_1);
		G_B13_1->___m_ImplicitConstructor = G_B13_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B13_1->___m_ImplicitConstructor), (void*)G_B13_0);
	}

IL_00a6:
	{
		return;
	}
}
// Method Definition Index: 70297
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 TypeConstructor_1_CreateValueTypeInstance_mDA2C9B4A3E83D2556ADD98EC0EA7EE8D5AAE1AE7 (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7));
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 70298
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 TypeConstructor_1_CreateScriptableObjectInstance_m7E5AC78F732005C17D67E7209680D1AF00E4AF57 (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		return ((*(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*)UnBox(L_2, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))));
	}
}
// Method Definition Index: 70299
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 TypeConstructor_1_CreateClassInstance_mFDCF8787FDD831843EE2120FB59072B1B6640DA3 (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_0;
		L_0 = Activator_CreateInstance_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m03ECCA81585078D9FEB71559619D15E1512A86A5(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return L_0;
	}
}
// Method Definition Index: 70300
// Method Definition Index: 70301
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructorU3CTU3E_Instantiate_m874EF05F5759D3C9498C79715B2192CB4B684733 (TypeConstructor_1_t04F8CEA6E3DA7BFE91DB6C903CB750ECBE264E3F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_0 = __this->___m_ExplicitConstructor;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_1 = __this->___m_ExplicitConstructor;
		NullCheck(L_1);
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_2;
		L_2 = Func_1_Invoke_m387E8C6D589CA66F72630F311D4CA283A6771829_inline(L_1, NULL);
		return L_2;
	}

IL_0014:
	{
		RuntimeObject* L_3 = __this->___m_OverrideConstructor;
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_4 = __this->___m_OverrideConstructor;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_7);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___m_OverrideConstructor;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IConstructor_tFD3BBCF5C085B55F281ED9F7BD0E2AF484FDEFD9_il2cpp_TypeInfo_var, L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_13 = __this->___m_OverrideConstructor;
		NullCheck(L_13);
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_14;
		L_14 = InterfaceFuncInvoker0< BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 1), L_13);
		return L_14;
	}

IL_0068:
	{
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_15 = __this->___m_ImplicitConstructor;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* L_16 = __this->___m_ImplicitConstructor;
		NullCheck(L_16);
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_17;
		L_17 = Func_1_Invoke_m387E8C6D589CA66F72630F311D4CA283A6771829_inline(L_16, NULL);
		return L_17;
	}

IL_007c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_19);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral596EF2EC55B3C3EC746486C4F4CE3E80945DFECE)), L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC5E3A37AACAFC64E9BD03AA67579081CDD518E4)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_22 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
	}
}
// Method Definition Index: 70302
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeConstructor_1_Unity_Properties_TypeUtility_ITypeConstructor_Instantiate_m38BBF2A889895804BDBB40BF9EF895630DB5127A (TypeConstructor_1_t04F8CEA6E3DA7BFE91DB6C903CB750ECBE264E3F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_0;
		L_0 = InterfaceFuncInvoker0< BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 14), __this);
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_1);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 74357
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_ceil_m06DEF6827759F405C10166F2C9E8047AE7C09179_inline (float ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit);
	//<source_info:<no-source>:1>
	{
		float L_0 = ___0_x;
		float L_1 = (il2cpp_codegen_conv<float,float,float,false,false>(L_0,NULL));
		double L_2 = (il2cpp_codegen_conv<double,float,float,false,false>(L_1,NULL));
		CHECKED_LOCAL_INIT(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit,(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		double L_3;
		L_3 = ceil(L_2);
		float L_4 = (il2cpp_codegen_conv<float,double,double,false,false>(L_3,NULL));
		return L_4;
	}
}
// Method Definition Index: 42386
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_Equals_mD297CAFFEBE9352C940873862FDF9A28F1F02435_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float* L_0 = (float*)(&__this->___r);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___0_other;
		float L_2 = L_1.___r;
		bool L_3;
		L_3 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_004b;
		}
	}
	{
		float* L_4 = (float*)(&__this->___g);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___0_other;
		float L_6 = L_5.___g;
		bool L_7;
		L_7 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_004b;
		}
	}
	{
		float* L_8 = (float*)(&__this->___b);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___0_other;
		float L_10 = L_9.___b;
		bool L_11;
		L_11 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_004b;
		}
	}
	{
		float* L_12 = (float*)(&__this->___a);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___0_other;
		float L_14 = L_13.___a;
		bool L_15;
		L_15 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_12, L_14, NULL);
		return L_15;
	}

IL_004b:
	{
		return (bool)0;
	}
}
// Method Definition Index: 42628
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_Equals_m25B95D8412B79CC7F8B34062BFAE662BD99578BE_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_other, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float* L_0 = (float*)(&__this->___x);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___0_other;
		float L_2 = L_1.___x;
		bool L_3;
		L_3 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_004b;
		}
	}
	{
		float* L_4 = (float*)(&__this->___y);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = ___0_other;
		float L_6 = L_5.___y;
		bool L_7;
		L_7 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_004b;
		}
	}
	{
		float* L_8 = (float*)(&__this->___z);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = ___0_other;
		float L_10 = L_9.___z;
		bool L_11;
		L_11 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_004b;
		}
	}
	{
		float* L_12 = (float*)(&__this->___w);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = ___0_other;
		float L_14 = L_13.___w;
		bool L_15;
		L_15 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_12, L_14, NULL);
		return L_15;
	}

IL_004b:
	{
		return (bool)0;
	}
}
// Method Definition Index: 74503
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool float2_Equals_mEC26CC3305FBABDA61A8A5FD2D0EFA6A33F4DC26_inline (float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5* __this, float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___0_rhs, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float L_0 = __this->___x;
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 L_1 = ___0_rhs;
		float L_2 = L_1.___x;
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_001d;
		}
	}
	{
		float L_3 = __this->___y;
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 L_4 = ___0_rhs;
		float L_5 = L_4.___y;
		return (bool)((((float)L_3) == ((float)L_5))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
// Method Definition Index: 74545
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool float3_Equals_m53E5496F35693B0B1082AF2D1C2A98629A743DF2_inline (float3_t7600B73F092B37F484B12910A5269F30C778D31E* __this, float3_t7600B73F092B37F484B12910A5269F30C778D31E ___0_rhs, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float L_0 = __this->___x;
		float3_t7600B73F092B37F484B12910A5269F30C778D31E L_1 = ___0_rhs;
		float L_2 = L_1.___x;
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_002b;
		}
	}
	{
		float L_3 = __this->___y;
		float3_t7600B73F092B37F484B12910A5269F30C778D31E L_4 = ___0_rhs;
		float L_5 = L_4.___y;
		if ((!(((float)L_3) == ((float)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		float L_6 = __this->___z;
		float3_t7600B73F092B37F484B12910A5269F30C778D31E L_7 = ___0_rhs;
		float L_8 = L_7.___z;
		return (bool)((((float)L_6) == ((float)L_8))? 1 : 0);
	}

IL_002b:
	{
		return (bool)0;
	}
}
// Method Definition Index: 74602
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool float4_Equals_m1567E11F547B2FED9A8F0A0BF4BE06C2469E6799_inline (float4_t545A994996126766890C1F28B43EA823F2410190* __this, float4_t545A994996126766890C1F28B43EA823F2410190 ___0_rhs, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float L_0 = __this->___x;
		float4_t545A994996126766890C1F28B43EA823F2410190 L_1 = ___0_rhs;
		float L_2 = L_1.___x;
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_0039;
		}
	}
	{
		float L_3 = __this->___y;
		float4_t545A994996126766890C1F28B43EA823F2410190 L_4 = ___0_rhs;
		float L_5 = L_4.___y;
		if ((!(((float)L_3) == ((float)L_5))))
		{
			goto IL_0039;
		}
	}
	{
		float L_6 = __this->___z;
		float4_t545A994996126766890C1F28B43EA823F2410190 L_7 = ___0_rhs;
		float L_8 = L_7.___z;
		if ((!(((float)L_6) == ((float)L_8))))
		{
			goto IL_0039;
		}
	}
	{
		float L_9 = __this->___w;
		float4_t545A994996126766890C1F28B43EA823F2410190 L_10 = ___0_rhs;
		float L_11 = L_10.___w;
		return (bool)((((float)L_9) == ((float)L_11))? 1 : 0);
	}

IL_0039:
	{
		return (bool)0;
	}
}
// Method Definition Index: 44347
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* ObjectPool_1_Get_m6033387D88EF9D1AD81A89F3045733BC4B98073D_gshared_inline (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Il2CppSharedGenericObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* G_B7_0 = NULL;
	Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* G_B6_0 = NULL;
	{
		Il2CppSharedGenericObject* L_0 = __this->___m_FreshlyReleased;
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		Il2CppSharedGenericObject* L_1 = __this->___m_FreshlyReleased;
		V_0 = L_1;
		Il2CppSharedGenericObject** L_2 = (Il2CppSharedGenericObject**)(&__this->___m_FreshlyReleased);
		il2cpp_codegen_initobj(L_2, sizeof(Il2CppSharedGenericObject*));
		goto IL_0074;
	}

IL_0022:
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_3 = __this->___m_List;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m9832942FE310479E64D9D0D23F29C65305BE1622_inline(L_3, NULL);
		if (L_4)
		{
			goto IL_004d;
		}
	}
	{
		Func_1_t566D4A654882E282E54CDC3A001E05486F913903* L_5 = __this->___m_CreateFunc;
		NullCheck(L_5);
		Il2CppSharedGenericObject* L_6;
		L_6 = Func_1_Invoke_m201DDBB72CE38673C89C22034EC8779981D83E6D_inline(L_5, NULL);
		V_0 = L_6;
		int32_t L_7;
		L_7 = ObjectPool_1_get_CountAll_m8372ACA3A976C3FCB45CD77A0AEF0BDA496EBB6D_inline(__this, NULL);
		V_1 = L_7;
		int32_t L_8 = V_1;
		ObjectPool_1_set_CountAll_m6E7C5E741DCB73BD743FC27BACBE1886F4414440_inline(__this, ((int32_t)il2cpp_codegen_add(L_8, 1)), NULL);
		goto IL_0074;
	}

IL_004d:
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_9 = __this->___m_List;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_m9832942FE310479E64D9D0D23F29C65305BE1622_inline(L_9, NULL);
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_11 = __this->___m_List;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		Il2CppSharedGenericObject* L_13;
		L_13 = List_1_get_Item_m02336594E8F76D7313E2BCB7A3ED5ABD13B4D515(L_11, L_12, NULL);
		V_0 = L_13;
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_14 = __this->___m_List;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		List_1_RemoveAt_m36F68EA689DB109415094085A496D5EA21E2F23C(L_14, L_15, NULL);
	}

IL_0074:
	{
		Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* L_16 = __this->___m_ActionOnGet;
		Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* L_17 = L_16;
		if (L_17)
		{
			G_B7_0 = L_17;
			goto IL_0080;
		}
		G_B6_0 = L_17;
	}
	{
		goto IL_0086;
	}

IL_0080:
	{
		Il2CppSharedGenericObject* L_18 = V_0;
		NullCheck(G_B7_0);
		Action_1_Invoke_mDB8F7C7381C08B4DCE4E409D2FA4073BC17F90B5_inline(G_B7_0, L_18, NULL);
	}

IL_0086:
	{
		Il2CppSharedGenericObject* L_19 = V_0;
		return L_19;
	}
}
// Method Definition Index: 9022
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tE4AF7E149217032C1AFD6D018342D58C2BB94D77 Enumerator_get_Current_m91805899B27B40B16B94C0ABBAD00442DC9D1EEF_gshared_inline (Enumerator_t58168766D1E54BD4791D0209E876F0E24ACFDF18* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyValuePair_2_tE4AF7E149217032C1AFD6D018342D58C2BB94D77 L_0 = __this->____current;
		return L_0;
	}
}
// Method Definition Index: 9102
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Value_m3B073AA7B627862C9CF55713EB00EA50B597C40E_gshared_inline (KeyValuePair_2_tE4AF7E149217032C1AFD6D018342D58C2BB94D77* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = __this->___value;
		return L_0;
	}
}
// Method Definition Index: 44349
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjectPool_1_Release_m3183E8F3194884123A027D720D37F341AF367E48_gshared_inline (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, Il2CppSharedGenericObject* ___0_element, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* G_B2_0 = NULL;
	Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* G_B1_0 = NULL;
	Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* G_B9_0 = NULL;
	Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* G_B8_0 = NULL;
	{
		Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* L_0 = __this->___m_ActionOnRelease;
		Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
		G_B1_0 = L_1;
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		Il2CppSharedGenericObject* L_2 = ___0_element;
		NullCheck(G_B2_0);
		Action_1_Invoke_mDB8F7C7381C08B4DCE4E409D2FA4073BC17F90B5_inline(G_B2_0, L_2, NULL);
	}

IL_0012:
	{
		Il2CppSharedGenericObject* L_3 = __this->___m_FreshlyReleased;
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		Il2CppSharedGenericObject* L_4 = ___0_element;
		__this->___m_FreshlyReleased = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FreshlyReleased), (void*)L_4);
		return;
	}

IL_0027:
	{
		int32_t L_5;
		L_5 = ObjectPool_1_get_CountInactive_m40351B6BE62E0944A0813C07869822EC0D1E8D26(__this, NULL);
		int32_t L_6 = __this->___m_MaxSize;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0042;
		}
	}
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_7 = __this->___m_List;
		Il2CppSharedGenericObject* L_8 = ___0_element;
		NullCheck(L_7);
		List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_inline(L_7, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		return;
	}

IL_0042:
	{
		int32_t L_9;
		L_9 = ObjectPool_1_get_CountAll_m8372ACA3A976C3FCB45CD77A0AEF0BDA496EBB6D_inline(__this, NULL);
		V_0 = L_9;
		int32_t L_10 = V_0;
		ObjectPool_1_set_CountAll_m6E7C5E741DCB73BD743FC27BACBE1886F4414440_inline(__this, ((int32_t)il2cpp_codegen_subtract(L_10, 1)), NULL);
		Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* L_11 = __this->___m_ActionOnDestroy;
		Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* L_12 = L_11;
		if (L_12)
		{
			G_B9_0 = L_12;
			goto IL_005d;
		}
		G_B8_0 = L_12;
	}
	{
		return;
	}

IL_005d:
	{
		Il2CppSharedGenericObject* L_13 = ___0_element;
		NullCheck(G_B9_0);
		Action_1_Invoke_mDB8F7C7381C08B4DCE4E409D2FA4073BC17F90B5_inline(G_B9_0, L_13, NULL);
		return;
	}
}
// Method Definition Index: 9335
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_gshared_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* V_0 = NULL;
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_0 = ((EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 71923
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F BindableVariableBase_1_get_Value_m91CB4186D9501A8357D89A87382E0AA9662E151E_inline (BindableVariableBase_1_tB87521E1348B0B8E54F53C1261B839682F8D655F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_InternalValue;
		return L_0;
	}
}
// Method Definition Index: 22340
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* TweenableVariableBase_1_get_animationCurve_m6EC9A21B3791E6E1974401435B3ABA3E39C864E6_inline (TweenableVariableBase_1_t8364472CCBD4F605378E11C0AC3182CEC3E26736* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = __this->___m_AnimationCurve;
		return L_0;
	}
}
// Method Definition Index: 22344
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TweenableVariableBase_1_get_initialValue_m7F174333E94175EA8B3F25095AA58941D1100ACA_inline (TweenableVariableBase_1_t8364472CCBD4F605378E11C0AC3182CEC3E26736* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___U3CinitialValueU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 71923
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BindableVariableBase_1_get_Value_m56739E375D26399567FC0F237E68BFA12EAABCA1_inline (BindableVariableBase_1_tB9252B4815AD3E511244D3B578854D3FF333E4BD* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float L_0 = __this->___m_InternalValue;
		return L_0;
	}
}
// Method Definition Index: 22340
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* TweenableVariableBase_1_get_animationCurve_m629E6E7B4B5D8981C071EC50A729BAD6E81AE944_inline (TweenableVariableBase_1_tE056BE2293DB2624363EEADF82A5A9439C26C35D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = __this->___m_AnimationCurve;
		return L_0;
	}
}
// Method Definition Index: 22344
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TweenableVariableBase_1_get_initialValue_m328C6A22EB2CA996E9C8AFDB3D51F98A0CAF2B64_inline (TweenableVariableBase_1_tE056BE2293DB2624363EEADF82A5A9439C26C35D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float L_0 = __this->___U3CinitialValueU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 71923
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 BindableVariableBase_1_get_Value_mA3C426A393A0A5AB6EC95606DABB506F20A5AA84_inline (BindableVariableBase_1_tF26C7349EBD3DF838D75EBA46B0FA97EFE9E43D4* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 L_0 = __this->___m_InternalValue;
		return L_0;
	}
}
// Method Definition Index: 22340
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* TweenableVariableBase_1_get_animationCurve_m55397DEBDC220A8C682C16B5C4387DF00B7B4109_inline (TweenableVariableBase_1_tA9EC62FCEF5FA67F96F841799692ED88299C6DCB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = __this->___m_AnimationCurve;
		return L_0;
	}
}
// Method Definition Index: 22344
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 TweenableVariableBase_1_get_initialValue_m1FB1C293F911ECEE83D12AE9369FAA597FFFF807_inline (TweenableVariableBase_1_tA9EC62FCEF5FA67F96F841799692ED88299C6DCB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 L_0 = __this->___U3CinitialValueU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 71923
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t7600B73F092B37F484B12910A5269F30C778D31E BindableVariableBase_1_get_Value_mFB058C8CBBC994AB70F8F17047FA29748DDBDACF_inline (BindableVariableBase_1_t4142EEA09360420F28B691D2EC2462CA12F8866A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float3_t7600B73F092B37F484B12910A5269F30C778D31E L_0 = __this->___m_InternalValue;
		return L_0;
	}
}
// Method Definition Index: 22340
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* TweenableVariableBase_1_get_animationCurve_m0D7F0A84FD0FD39DC0E1FFF9E48C67EEC6A6CB4D_inline (TweenableVariableBase_1_t559E6D69FB65AF8FBCF6044D84C6466C849D826E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = __this->___m_AnimationCurve;
		return L_0;
	}
}
// Method Definition Index: 22344
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t7600B73F092B37F484B12910A5269F30C778D31E TweenableVariableBase_1_get_initialValue_m39887A8F0538E4A03F89B90922AC33E782982744_inline (TweenableVariableBase_1_t559E6D69FB65AF8FBCF6044D84C6466C849D826E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float3_t7600B73F092B37F484B12910A5269F30C778D31E L_0 = __this->___U3CinitialValueU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 71923
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t545A994996126766890C1F28B43EA823F2410190 BindableVariableBase_1_get_Value_m2079036D42637925E85AB7BDEFE82041D3AD8357_inline (BindableVariableBase_1_t2B7F2DB22F178A593CBE8E2A3E4288B33A6735EF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float4_t545A994996126766890C1F28B43EA823F2410190 L_0 = __this->___m_InternalValue;
		return L_0;
	}
}
// Method Definition Index: 22340
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* TweenableVariableBase_1_get_animationCurve_m9E5AF31E43EACFB95A17770928B657FA44E7F699_inline (TweenableVariableBase_1_t9D1C5D207B9A321B201B828091D3953D761BB265* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = __this->___m_AnimationCurve;
		return L_0;
	}
}
// Method Definition Index: 22344
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t545A994996126766890C1F28B43EA823F2410190 TweenableVariableBase_1_get_initialValue_m4BCD5A8FB7FFEC10F64E2229C79255538745D10E_inline (TweenableVariableBase_1_t9D1C5D207B9A321B201B828091D3953D761BB265* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float4_t545A994996126766890C1F28B43EA823F2410190 L_0 = __this->___U3CinitialValueU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 22342
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TweenableVariableBase_1_get_target_mE6FD18451F50101EFE64887DD526D68B91E95E28_inline (TweenableVariableBase_1_t8364472CCBD4F605378E11C0AC3182CEC3E26736* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_Target;
		return L_0;
	}
}
// Method Definition Index: 22342
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TweenableVariableBase_1_get_target_mE8C9B81F32FFE81DDA5373629D88AF18F1B76E87_inline (TweenableVariableBase_1_t894346E06DB112599F8C5FBC5AD5F251F33CFBD9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___m_Target;
		return L_0;
	}
}
// Method Definition Index: 71923
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 BindableVariableBase_1_get_Value_mDA92236BCE8EC7928399D7271AA97D7B62941EEC_inline (BindableVariableBase_1_t0B8C3C183E9A64B760FC611EA6858D9BD639E610* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___m_InternalValue;
		return L_0;
	}
}
// Method Definition Index: 22342
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TweenableVariableBase_1_get_target_mAC0A1CFF253192C4AE820F8EEF2A380F508E99EA_inline (TweenableVariableBase_1_tE056BE2293DB2624363EEADF82A5A9439C26C35D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float L_0 = __this->___m_Target;
		return L_0;
	}
}
// Method Definition Index: 22342
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 TweenableVariableBase_1_get_target_m1A7E3A9D6216D6936EF6041FBD721AC6A6050945_inline (TweenableVariableBase_1_tA9EC62FCEF5FA67F96F841799692ED88299C6DCB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 L_0 = __this->___m_Target;
		return L_0;
	}
}
// Method Definition Index: 22342
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t7600B73F092B37F484B12910A5269F30C778D31E TweenableVariableBase_1_get_target_mE63B487CCE2E85D507B2DB414EC01492C3839623_inline (TweenableVariableBase_1_t559E6D69FB65AF8FBCF6044D84C6466C849D826E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float3_t7600B73F092B37F484B12910A5269F30C778D31E L_0 = __this->___m_Target;
		return L_0;
	}
}
// Method Definition Index: 22342
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t545A994996126766890C1F28B43EA823F2410190 TweenableVariableBase_1_get_target_m2DE9FA2DD2FE238ECDC3FCC00457736DB0A44893_inline (TweenableVariableBase_1_t9D1C5D207B9A321B201B828091D3953D761BB265* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		float4_t545A994996126766890C1F28B43EA823F2410190 L_0 = __this->___m_Target;
		return L_0;
	}
}
// Method Definition Index: 22340
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* TweenableVariableBase_1_get_animationCurve_m21E54689FDC5927A7972A3C3E2DA224B4A76CBAB_inline (TweenableVariableBase_1_t894346E06DB112599F8C5FBC5AD5F251F33CFBD9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = __this->___m_AnimationCurve;
		return L_0;
	}
}
// Method Definition Index: 2723
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = ((EmptyArray_1_tF2F83411E5DC963DBFFD1F75B10B58A1ED224DD5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 628
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 Func_1_Invoke_mD023E4BE9F2AC4DDAB5BC6865F64444F25EBA15C_gshared_inline (Func_1_t33CEA05ED4A9C1C35FE467F61813D0D35E25C6A3* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 628
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F Func_1_Invoke_mEFCC6E276B7F9541F583BF1DD7C2D4B88A5C9CED_inline (Func_1_t90C4ABD9CE75DEFD0429224C5FEA437A0D34A560* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 628
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 Func_1_Invoke_mF38ACE8EE747FDAB603827786CAA57779D125644_inline (Func_1_t58D73BF1C912B7ACFBB78E3D9555840C6D05847C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 628
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C Func_1_Invoke_m14C121BADC1DA0C563A54E906949398ADE4E510D_inline (Func_1_t474A6DFB11CD15EA2DE61B33EEE1D8F0A0ADF3A4* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 628
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 Func_1_Invoke_m3C0C15EA65260B3A2D23C645DE9908F470E1D6EB_inline (Func_1_t7E971A77C899C4C7AC78281EA99F0EAC4C835FC6* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 628
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC Func_1_Invoke_m72E1B2AB7AB84681AB456966658AB4AA2262172E_inline (Func_1_tAEC089A068FC7EC89FB9C4E3E0049D97E442F3EB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 628
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 Func_1_Invoke_m431E4DC7CE52538C527FFFA27B672C9172B9FA5D_inline (Func_1_t2E108D7F7CD7C342B3350E7FEF5DC4A9A0E06659* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 628
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 Func_1_Invoke_m22D302915F20EEF62D9C1666172BBE063F7D795A_inline (Func_1_t84A4BB0034C8F93767D67BBC1F4EED1D3044795F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 628
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F Func_1_Invoke_m46E31998378DE2BA4DF293634298EF5AA1E6520B_inline (Func_1_tA442CFAC79E91D290B3A20F4D21B19C42FCE52B6* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 628
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 Func_1_Invoke_m387E8C6D589CA66F72630F311D4CA283A6771829_inline (Func_1_tBCE7CAB2DF9A6911CC7E75AE4813E384D191BBB5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 9110
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
// Method Definition Index: 628
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Func_1_Invoke_m201DDBB72CE38673C89C22034EC8779981D83E6D_gshared_inline (Func_1_t566D4A654882E282E54CDC3A001E05486F913903* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef Il2CppSharedGenericObject* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 44343
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_CountAll_m8372ACA3A976C3FCB45CD77A0AEF0BDA496EBB6D_gshared_inline (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___U3CCountAllU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 44344
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjectPool_1_set_CountAll_m6E7C5E741DCB73BD743FC27BACBE1886F4414440_gshared_inline (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_value;
		__this->___U3CCountAllU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 616
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mDB8F7C7381C08B4DCE4E409D2FA4073BC17F90B5_gshared_inline (Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* __this, Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppSharedGenericObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 9119
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_gshared_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_7 = V_0;
		int32_t L_8 = V_1;
		Il2CppSharedGenericObject* L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (Il2CppSharedGenericObject*)L_9);
		return;
	}

IL_0034:
	{
		Il2CppSharedGenericObject* L_10 = ___0_item;
		List_1_AddWithResize_mCC24A812DFC30C3DE2230E3C8EE705871C1DFF81(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
