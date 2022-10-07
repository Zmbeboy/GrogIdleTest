#include "pch-cpp.hpp"

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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Type,System.Runtime.Serialization.Formatters.Binary.TypeInformation>
struct Dictionary_2_t8B428D684ADA214F1A90B42123A1536ED34C1FF8;
// System.Func`2<UnityEngine.GameObject,System.Single>
struct Func_2_tA26CC06F251E5318131EF8475E1A4BDADDFAD8BC;
// System.Func`2<System.Object,System.Single>
struct Func_2_tB5C40A90702B6A6A2E315FD927EEFC9FB69F2B12;
// System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>
struct IEnumerable_1_t73E24A3585FE00B560A12D422A7066F996ACD0A0;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Linq.IOrderedEnumerable`1<UnityEngine.GameObject>
struct IOrderedEnumerable_1_t47EBEEFA0AB46C728DB7E59B318F808CE1089AB7;
// System.Linq.IOrderedEnumerable`1<System.Object>
struct IOrderedEnumerable_1_t0E680E8E1A4A676334F2A0C9A6F9B93135A65EAC;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Loot[]
struct LootU5BU5D_tD17191E4077CD5073CE972F830FCA2D8C081C33D;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// ButtonGrog
struct ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// ContentScaleUpdater
struct ContentScaleUpdater_t6C3EA7B498DC4CFCDCE6065A221D28ECC6F02552;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Encounter
struct Encounter_t91211CC083B2AAE6C88D52B43FE66AE7F8E632E6;
// EncounterHandler
struct EncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4;
// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GoldUpdater
struct GoldUpdater_tF81566509685857184CBF980E1080EB3DAAB9418;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// UnityEngine.UI.GridLayoutGroup
struct GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940;
// Grog
struct Grog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE;
// GrogDesc
struct GrogDesc_t056DE5EA6E86F649972FF8A0F672ADF89652D697;
// GrogItem
struct GrogItem_tF4D3621CD5ECE7D32F1FDC3D8BA2D96CC491B299;
// HealthUpdater
struct HealthUpdater_tD8923C8141880DC65CF81A5F86604D1C19F5459F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t35CC72FCAD57FCB71968799C400627F09E81FB01;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// Item
struct Item_tFAF77888D49883A321EB596A7D93CB5615D37E95;
// Loot
struct Loot_tC8D6569EDF929CC5A066A637FAD7C4031B1866B6;
// LootBoxUpdater
struct LootBoxUpdater_tA7E61E7B2039E525608C1961839DF2C574F74944;
// LootScrollerAnim
struct LootScrollerAnim_t4E4D7E1C0F280F7A3802D523D8C0F7A23C3FCCD6;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// MenuButtonManager
struct MenuButtonManager_tF5F9669A2BCEC99D6AADB4A8EC1D69691753E52D;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MultibuyHandler
struct MultibuyHandler_tB4F2F1A72D5AB705DED8274527981E6EE0594BAC;
// MusicMan
struct MusicMan_t6346202AFD0AA19F471F430BB839033B8A2BEFED;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// OfflineCalculate
struct OfflineCalculate_tBC27B78FBD17348AD96A14F58E778E16AAB11EA3;
// PlayerHandler
struct PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// SaveData
struct SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29;
// UnityEngine.SceneManagement.SceneManager
struct SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_tB959BF0F4EF3F8611E5891A7011DD99F9FD69E2A;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// SlotImageHolder
struct SlotImageHolder_tBEA0514F055F29E58C95932ADF6A313EBADB3048;
// SpawnGrog
struct SpawnGrog_tF9FA499BCB26222A68D537136982C341A8DBD649;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// Transition
struct Transition_tCEFDBCF3B9C6819BF1A11F93B0DBE7EBEB353D04;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// World
struct World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A;
// WorldButtonBuy
struct WorldButtonBuy_t740725B75DEF251588CA3D7221D5964B21762B24;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// ButtonGrog/<UpdatePrice>d__19
struct U3CUpdatePriceU3Ed__19_tF9142A372BC72155C085AFF250EDD75667B01ACA;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// MultibuyHandler/<FindMax>d__12
struct U3CFindMaxU3Ed__12_tD6D56652A3B16D3AB5A9DF3316A4236A7163EC31;
// PlayerHandler/<CalculateSum>d__13
struct U3CCalculateSumU3Ed__13_t467D5D415AA3A76DF401B05D7B1B2CB680D15DAF;
// PlayerHandler/<SaveTheGame>d__10
struct U3CSaveTheGameU3Ed__10_t7D41F480297F89635409B197697B72A1515AA4DB;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// UnityEngine.UI.ScrollRect/ScrollRectEvent
struct ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;
// SpawnGrog/<>c
struct U3CU3Ec_t6248F9A6A0AD9F0A15677D5EA8B91A27E73AA874;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tA26CC06F251E5318131EF8475E1A4BDADDFAD8BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCalculateSumU3Ed__13_t467D5D415AA3A76DF401B05D7B1B2CB680D15DAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFindMaxU3Ed__12_tD6D56652A3B16D3AB5A9DF3316A4236A7163EC31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSaveTheGameU3Ed__10_t7D41F480297F89635409B197697B72A1515AA4DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t6248F9A6A0AD9F0A15677D5EA8B91A27E73AA874_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CUpdatePriceU3Ed__19_tF9142A372BC72155C085AFF250EDD75667B01ACA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral012317678FABF40366606611502ED7D26F067C51;
IL2CPP_EXTERN_C String_t* _stringLiteral09C2BD123EC3C0FFD0EBD2796DEC6EEE3402B461;
IL2CPP_EXTERN_C String_t* _stringLiteral0B8A65EA3069EA15B4CCE5DE1F1AB03D15D21F01;
IL2CPP_EXTERN_C String_t* _stringLiteral0F5A37283C9794F2CE9D395523761CDDA2740A56;
IL2CPP_EXTERN_C String_t* _stringLiteral1AD4B511976697D770C74EC91B0463E704168D73;
IL2CPP_EXTERN_C String_t* _stringLiteral1B25DFBD07EA65F4B3D466AFC210ED0CC5BA4DCB;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral28A7AC9D8C919C224000CAEB134D66D11C6FAB2C;
IL2CPP_EXTERN_C String_t* _stringLiteral398FAFE7B6290F7F0054092DA46288E028440E76;
IL2CPP_EXTERN_C String_t* _stringLiteral3B356B1B1996D6D107B522F170DC7FBF5A5FE225;
IL2CPP_EXTERN_C String_t* _stringLiteral4F5FD870291A9070FD9EF78BF6B827EDFB57EA60;
IL2CPP_EXTERN_C String_t* _stringLiteral50F558929F3BB704F195FD06D0EE9E26421714F3;
IL2CPP_EXTERN_C String_t* _stringLiteral53A826C5CB1AA9FCCD2A1F87FE7808D95367F836;
IL2CPP_EXTERN_C String_t* _stringLiteral61C47167E6BCF2D186CEF5BBF64F0EAF90EF9D9D;
IL2CPP_EXTERN_C String_t* _stringLiteral660AB16DAE3AB0500342DD32D948F5A9D8681C2F;
IL2CPP_EXTERN_C String_t* _stringLiteral7A741E2EAB3EAE846BE7661DA9C991EE55778098;
IL2CPP_EXTERN_C String_t* _stringLiteral7F2E8B5D72BFE649B541D4BB201A379B4DFE3071;
IL2CPP_EXTERN_C String_t* _stringLiteral852EFDF643FA620806D7A0FC961E635054FFCC2B;
IL2CPP_EXTERN_C String_t* _stringLiteral8B8C75D10672D3DACCB961A041AB6C4D5B8BAF41;
IL2CPP_EXTERN_C String_t* _stringLiteral8ED24A309154ACD4CB2CE4DF7584C8EAB0B2BEFD;
IL2CPP_EXTERN_C String_t* _stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED;
IL2CPP_EXTERN_C String_t* _stringLiteral9F90DDE2EFE0D8CC664ACE86AEAA0F207148164B;
IL2CPP_EXTERN_C String_t* _stringLiteralA12C13441E908B46D0E8552680587F5595D959F4;
IL2CPP_EXTERN_C String_t* _stringLiteralA4F72B85CD80CA2B537105899EB83D52E6C57AEC;
IL2CPP_EXTERN_C String_t* _stringLiteralAE12342C1EE58403342EEB30C0DC04BF0398105F;
IL2CPP_EXTERN_C String_t* _stringLiteralAF352EDB39365CCEFFC79049D9420747A599110D;
IL2CPP_EXTERN_C String_t* _stringLiteralB033ECD72F5843CF2FE0D733F86C48DE5B10599D;
IL2CPP_EXTERN_C String_t* _stringLiteralB8BDCD28E40D848FF218A108022AEC2089B2C29F;
IL2CPP_EXTERN_C String_t* _stringLiteralBA5E87F9B45A5388C72F9CA939BD97128B6992A4;
IL2CPP_EXTERN_C String_t* _stringLiteralC6C448FD606120F2C0F85BB5D1424B69A09655F6;
IL2CPP_EXTERN_C String_t* _stringLiteralC7C359886038CEF33D93794E297467294C6AD37D;
IL2CPP_EXTERN_C String_t* _stringLiteralCD599EDCFBEAC503B743CEEACA9F5FF5DBE29220;
IL2CPP_EXTERN_C String_t* _stringLiteralCEE86308D10A93BB69E8B5332994EB88242677B7;
IL2CPP_EXTERN_C String_t* _stringLiteralD26BB837E5613B05E2C62215D1122AF2FD94C319;
IL2CPP_EXTERN_C String_t* _stringLiteralD86C1D0E546CD5347AB55A12B67E5767BE02E9DF;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDC063A23CA8B009640E1202463DC9D150D7EEF80;
IL2CPP_EXTERN_C String_t* _stringLiteralE6F542BE32D6BD4828F9144560BDF6A3A9591859;
IL2CPP_EXTERN_C String_t* _stringLiteralE7682E8013575F404884D72D8C770D2B9CF8A740;
IL2CPP_EXTERN_C String_t* _stringLiteralE817AAA15FFD69D00BE6031E5C8A6EF7CF081933;
IL2CPP_EXTERN_C String_t* _stringLiteralF449ECB799492B6E94508C177821573A9593DCDE;
IL2CPP_EXTERN_C String_t* _stringLiteralF475C40B66CDDEC9B385F4B9DDBBD87798470EA5;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C String_t* _stringLiteralFA543D44D23D22187BB8387DC641127F62247B59;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OrderBy_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m52D6B2FA8A75393C2B50151F7E5902C74B764447_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisLootScrollerAnim_t4E4D7E1C0F280F7A3802D523D8C0F7A23C3FCCD6_m0104B27C038557D7E40E50D861BE77C3AAA37C18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m4883A479F4252D21D45D5AD3140CB42598C48A13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisEncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4_m4A2003BB8153D52192A006D81119F3685D144594_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisEncounter_t91211CC083B2AAE6C88D52B43FE66AE7F8E632E6_m294A093D418D1950B3B849776920FCE81E065BCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGoldUpdater_tF81566509685857184CBF980E1080EB3DAAB9418_m5B744511C9687269F6CC80FB067150101703CDDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGrogItem_tF4D3621CD5ECE7D32F1FDC3D8BA2D96CC491B299_mCBF443CBEE1188E7B637701814CF53431D529B55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGrog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE_mFB69D395569B0895C5375A73C4B1A06FE504974C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMultibuyHandler_tB4F2F1A72D5AB705DED8274527981E6EE0594BAC_m7C2CFBB13AC9B0478EE2F0FA168118ECF663AB58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisOfflineCalculate_tBC27B78FBD17348AD96A14F58E778E16AAB11EA3_mB699987D1C0FA190CA5E849FE40DE9E5605396C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m9A1CDD55B7236FD82E3D23C87F66E4D010B2C79F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m3B73E32B09A6667056AC232DA5238351F51DB7EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSlotImageHolder_tBEA0514F055F29E58C95932ADF6A313EBADB3048_m435DED7D6D2A3E083CE58377BB2328EE6D4DC0B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpawnGrog_tF9FA499BCB26222A68D537136982C341A8DBD649_mB032FA4FE82B8F5BB29BBD873CA52913A8C9A4C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisWorldButtonBuy_t740725B75DEF251588CA3D7221D5964B21762B24_mD93D2DD5171EEE3589EFCCAA9DB3A586DFEF41C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF43DCB3BB782DEE371E585AF95DAD52EE17CC9BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCalculateSumU3Ed__13_System_Collections_IEnumerator_Reset_m507AFDF807F95A31AA672D1057309F22977AC2EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFindMaxU3Ed__12_System_Collections_IEnumerator_Reset_m3551432566F5AC7F804C581B8CF3F120D46770E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSaveTheGameU3Ed__10_System_Collections_IEnumerator_Reset_m5D93613279FE522C97480605364A3B2A169F9494_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSpawnTheGrogU3Eb__3_0_m8FD079D24FF18C2177B63E83A5F3D25E689983CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CUpdatePriceU3Ed__19_System_Collections_IEnumerator_Reset_mF5A0F0207A29BDF0A84A2E9CB489FC1ACB9FD5D5_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct LootU5BU5D_tD17191E4077CD5073CE972F830FCA2D8C081C33D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
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
struct Il2CppArrayBounds;

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// SaveData
struct SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29  : public RuntimeObject
{
	// System.Boolean[] SaveData::WorldBoughts
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___WorldBoughts_0;
	// System.Int32[] SaveData::enemiesKilled
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___enemiesKilled_1;
	// System.Int32[] SaveData::GrogLevel
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___GrogLevel_2;
	// System.Boolean[] SaveData::GrogDiscovered
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___GrogDiscovered_3;
	// System.Boolean[] SaveData::GrogFound
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___GrogFound_4;
	// System.Boolean[] SaveData::ItemsFound
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___ItemsFound_5;
	// System.String SaveData::Gold
	String_t* ___Gold_6;
	// System.String SaveData::currentTime
	String_t* ___currentTime_7;
};

// SaveSystem
struct SaveSystem_t2AD9136E299BBC331486FD5824074967CC1FBDC7  : public RuntimeObject
{
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

// ButtonGrog/<UpdatePrice>d__19
struct U3CUpdatePriceU3Ed__19_tF9142A372BC72155C085AFF250EDD75667B01ACA  : public RuntimeObject
{
	// System.Int32 ButtonGrog/<UpdatePrice>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ButtonGrog/<UpdatePrice>d__19::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// ButtonGrog ButtonGrog/<UpdatePrice>d__19::<>4__this
	ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* ___U3CU3E4__this_2;
};

// MultibuyHandler/<FindMax>d__12
struct U3CFindMaxU3Ed__12_tD6D56652A3B16D3AB5A9DF3316A4236A7163EC31  : public RuntimeObject
{
	// System.Int32 MultibuyHandler/<FindMax>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MultibuyHandler/<FindMax>d__12::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// MultibuyHandler MultibuyHandler/<FindMax>d__12::<>4__this
	MultibuyHandler_tB4F2F1A72D5AB705DED8274527981E6EE0594BAC* ___U3CU3E4__this_2;
};

// PlayerHandler/<SaveTheGame>d__10
struct U3CSaveTheGameU3Ed__10_t7D41F480297F89635409B197697B72A1515AA4DB  : public RuntimeObject
{
	// System.Int32 PlayerHandler/<SaveTheGame>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerHandler/<SaveTheGame>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PlayerHandler PlayerHandler/<SaveTheGame>d__10::<>4__this
	PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* ___U3CU3E4__this_2;
};

// SpawnGrog/<>c
struct U3CU3Ec_t6248F9A6A0AD9F0A15677D5EA8B91A27E73AA874  : public RuntimeObject
{
};

struct U3CU3Ec_t6248F9A6A0AD9F0A15677D5EA8B91A27E73AA874_StaticFields
{
	// SpawnGrog/<>c SpawnGrog/<>c::<>9
	U3CU3Ec_t6248F9A6A0AD9F0A15677D5EA8B91A27E73AA874* ___U3CU3E9_0;
	// System.Func`2<UnityEngine.GameObject,System.Single> SpawnGrog/<>c::<>9__3_0
	Func_2_tA26CC06F251E5318131EF8475E1A4BDADDFAD8BC* ___U3CU3E9__3_0_1;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____current_3;
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

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
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

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
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

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
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

// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F  : public RuntimeObject
{
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_surrogates
	RuntimeObject* ___m_surrogates_0;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_context
	StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___m_context_1;
	// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_binder
	SerializationBinder_tB959BF0F4EF3F8611E5891A7011DD99F9FD69E2A* ___m_binder_2;
	// System.Runtime.Serialization.Formatters.FormatterTypeStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_typeFormat
	int32_t ___m_typeFormat_3;
	// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_assemblyFormat
	int32_t ___m_assemblyFormat_4;
	// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_securityLevel
	int32_t ___m_securityLevel_5;
	// System.Object[] System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_crossAppDomainArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_crossAppDomainArray_6;
};

struct BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Type,System.Runtime.Serialization.Formatters.Binary.TypeInformation> System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::typeNameCache
	Dictionary_2_t8B428D684ADA214F1A90B42123A1536ED34C1FF8* ___typeNameCache_7;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
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

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;
};

struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_StaticFields
{
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject* ___buf_recycle_lock_5;
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

// PlayerHandler/<CalculateSum>d__13
struct U3CCalculateSumU3Ed__13_t467D5D415AA3A76DF401B05D7B1B2CB680D15DAF  : public RuntimeObject
{
	// System.Int32 PlayerHandler/<CalculateSum>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerHandler/<CalculateSum>d__13::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.TimeSpan PlayerHandler/<CalculateSum>d__13::t
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___t_2;
	// PlayerHandler PlayerHandler/<CalculateSum>d__13::<>4__this
	PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* ___U3CU3E4__this_3;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Func`2<UnityEngine.GameObject,System.Single>
struct Func_2_tA26CC06F251E5318131EF8475E1A4BDADDFAD8BC  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
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

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// ButtonGrog
struct ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ButtonGrog::grog
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___grog_4;
	// UnityEngine.GameObject ButtonGrog::ParentObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ParentObject_5;
	// GrogDesc ButtonGrog::desc
	GrogDesc_t056DE5EA6E86F649972FF8A0F672ADF89652D697* ___desc_6;
	// System.Int32 ButtonGrog::currentLevel
	int32_t ___currentLevel_7;
	// UnityEngine.GameObject ButtonGrog::grogArea
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___grogArea_8;
	// System.Boolean ButtonGrog::spawnOnSave
	bool ___spawnOnSave_9;
	// UnityEngine.GameObject ButtonGrog::player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player_10;
	// UnityEngine.GameObject ButtonGrog::GoldFormatter
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___GoldFormatter_11;
	// System.Int32 ButtonGrog::multiPlier
	int32_t ___multiPlier_12;
	// System.Boolean ButtonGrog::discovered
	bool ___discovered_13;
	// System.Boolean ButtonGrog::found
	bool ___found_14;
	// System.Double ButtonGrog::Upcost
	double ___Upcost_15;
	// System.String ButtonGrog::title
	String_t* ___title_16;
	// UnityEngine.UI.Text ButtonGrog::Title
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Title_17;
	// System.String ButtonGrog::description
	String_t* ___description_18;
	// UnityEngine.UI.Text ButtonGrog::d
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___d_19;
	// UnityEngine.UI.Image ButtonGrog::thumbnail
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___thumbnail_20;
};

// ContentScaleUpdater
struct ContentScaleUpdater_t6C3EA7B498DC4CFCDCE6065A221D28ECC6F02552  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.RectTransform ContentScaleUpdater::canvy
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___canvy_4;
	// UnityEngine.UI.GridLayoutGroup ContentScaleUpdater::glg
	GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* ___glg_5;
	// System.Int32 ContentScaleUpdater::x
	int32_t ___x_6;
	// System.Int32 ContentScaleUpdater::y
	int32_t ___y_7;
	// System.Boolean ContentScaleUpdater::multX
	bool ___multX_8;
	// System.Boolean ContentScaleUpdater::multY
	bool ___multY_9;
};

// Encounter
struct Encounter_t91211CC083B2AAE6C88D52B43FE66AE7F8E632E6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Encounter::CurrentStage
	bool ___CurrentStage_4;
	// System.Boolean Encounter::Boss
	bool ___Boss_5;
	// System.Int32[] Encounter::lootChances
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___lootChances_6;
	// Loot[] Encounter::loots
	LootU5BU5D_tD17191E4077CD5073CE972F830FCA2D8C081C33D* ___loots_7;
};

// EncounterHandler
struct EncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// World EncounterHandler::currentWorld
	World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* ___currentWorld_4;
	// World EncounterHandler::nextWorld
	World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* ___nextWorld_5;
	// UnityEngine.GameObject[] EncounterHandler::transitions
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___transitions_6;
	// UnityEngine.GameObject[] EncounterHandler::currentScreens
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___currentScreens_7;
	// UnityEngine.Camera EncounterHandler::cam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam_8;
	// UnityEngine.GameObject EncounterHandler::encArea
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___encArea_9;
	// UnityEngine.GameObject EncounterHandler::currentEncounter
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___currentEncounter_10;
	// UnityEngine.GameObject EncounterHandler::nextEncounter
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___nextEncounter_11;
	// UnityEngine.RectTransform EncounterHandler::clickArea
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___clickArea_12;
	// PlayerHandler EncounterHandler::player
	PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* ___player_13;
	// UnityEngine.GameObject EncounterHandler::LootRoller
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___LootRoller_14;
	// System.Double EncounterHandler::Health
	double ___Health_15;
	// System.Double EncounterHandler::MaxHealth
	double ___MaxHealth_16;
	// System.Double EncounterHandler::Gold
	double ___Gold_17;
	// System.Boolean EncounterHandler::canDie
	bool ___canDie_18;
	// System.Boolean EncounterHandler::InTransition
	bool ___InTransition_19;
	// System.Boolean EncounterHandler::WantToSwapWorlds
	bool ___WantToSwapWorlds_20;
	// System.Boolean EncounterHandler::WorldSwapHit
	bool ___WorldSwapHit_21;
	// System.Int32 EncounterHandler::repetitions
	int32_t ___repetitions_22;
	// System.Boolean EncounterHandler::onStart
	bool ___onStart_23;
};

// GoldUpdater
struct GoldUpdater_tF81566509685857184CBF980E1080EB3DAAB9418  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject GoldUpdater::Player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Player_4;
};

// Grog
struct Grog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Grog::Enabled
	bool ___Enabled_4;
	// Grog/GrogType Grog::grogType
	int32_t ___grogType_5;
	// System.Double Grog::Damage
	double ___Damage_6;
	// System.Double Grog::currentDamage
	double ___currentDamage_7;
	// System.Double Grog::cost
	double ___cost_8;
	// System.Double Grog::upgradeCostMult
	double ___upgradeCostMult_9;
};

// GrogDesc
struct GrogDesc_t056DE5EA6E86F649972FF8A0F672ADF89652D697  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ButtonGrog GrogDesc::thisButton
	ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* ___thisButton_4;
	// UnityEngine.GameObject GrogDesc::GoldFormatter
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___GoldFormatter_5;
};

// GrogItem
struct GrogItem_tF4D3621CD5ECE7D32F1FDC3D8BA2D96CC491B299  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean GrogItem::found
	bool ___found_4;
};

// HealthUpdater
struct HealthUpdater_tD8923C8141880DC65CF81A5F86604D1C19F5459F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject HealthUpdater::encounter
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___encounter_4;
	// EncounterHandler HealthUpdater::EH
	EncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4* ___EH_5;
	// GoldUpdater HealthUpdater::GU
	GoldUpdater_tF81566509685857184CBF980E1080EB3DAAB9418* ___GU_6;
	// System.String HealthUpdater::maxHPFormatted
	String_t* ___maxHPFormatted_7;
};

// Item
struct Item_tFAF77888D49883A321EB596A7D93CB5615D37E95  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Loot
struct Loot_tC8D6569EDF929CC5A066A637FAD7C4031B1866B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Sprite Loot::image
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___image_4;
	// System.Int32 Loot::Index
	int32_t ___Index_5;
	// UnityEngine.GameObject Loot::PH
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___PH_6;
	// Loot/LootType Loot::LT
	int32_t ___LT_7;
	// System.Int32 Loot::amount
	int32_t ___amount_8;
};

// LootBoxUpdater
struct LootBoxUpdater_tA7E61E7B2039E525608C1961839DF2C574F74944  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.RectTransform LootBoxUpdater::canvy
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___canvy_4;
	// UnityEngine.UI.GridLayoutGroup LootBoxUpdater::glg
	GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* ___glg_5;
};

// LootScrollerAnim
struct LootScrollerAnim_t4E4D7E1C0F280F7A3802D523D8C0F7A23C3FCCD6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single LootScrollerAnim::scrollValue
	float ___scrollValue_4;
	// UnityEngine.UI.ScrollRect LootScrollerAnim::SR
	ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* ___SR_5;
	// UnityEngine.GameObject LootScrollerAnim::parent
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___parent_6;
	// UnityEngine.GameObject[] LootScrollerAnim::slots
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___slots_7;
};

// MenuButtonManager
struct MenuButtonManager_tF5F9669A2BCEC99D6AADB4A8EC1D69691753E52D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 MenuButtonManager::buttonIndex
	int32_t ___buttonIndex_4;
	// UnityEngine.GameObject[] MenuButtonManager::buttons
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___buttons_5;
	// UnityEngine.GameObject MenuButtonManager::ShopObjects
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ShopObjects_6;
	// UnityEngine.GameObject MenuButtonManager::WorldObjects
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___WorldObjects_7;
	// UnityEngine.GameObject MenuButtonManager::ItemObjects
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ItemObjects_8;
	// UnityEngine.GameObject MenuButtonManager::SettingsObjects
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___SettingsObjects_9;
};

// MultibuyHandler
struct MultibuyHandler_tB4F2F1A72D5AB705DED8274527981E6EE0594BAC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 MultibuyHandler::buttonIndex
	int32_t ___buttonIndex_4;
	// UnityEngine.GameObject[] MultibuyHandler::buttons
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___buttons_5;
	// UnityEngine.GameObject MultibuyHandler::PH
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___PH_6;
	// System.Boolean MultibuyHandler::max
	bool ___max_7;
};

// MusicMan
struct MusicMan_t6346202AFD0AA19F471F430BB839033B8A2BEFED  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject MusicMan::EH
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___EH_4;
	// UnityEngine.AudioClip[] MusicMan::songs
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ___songs_5;
	// System.Int32 MusicMan::songIndex
	int32_t ___songIndex_6;
};

// OfflineCalculate
struct OfflineCalculate_tBC27B78FBD17348AD96A14F58E778E16AAB11EA3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Double OfflineCalculate::gold
	double ___gold_4;
	// UnityEngine.GameObject OfflineCalculate::PH
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___PH_5;
	// UnityEngine.UI.Text OfflineCalculate::bodyText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___bodyText_6;
	// UnityEngine.GameObject OfflineCalculate::GH
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___GH_7;
};

// PlayerHandler
struct PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Double PlayerHandler::ClickDamage
	double ___ClickDamage_4;
	// System.Double PlayerHandler::DPS
	double ___DPS_5;
	// System.Double PlayerHandler::gold
	double ___gold_6;
	// System.Double PlayerHandler::offlineReducer
	double ___offlineReducer_7;
	// UnityEngine.GameObject[] PlayerHandler::WorldsButton
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___WorldsButton_8;
	// UnityEngine.GameObject[] PlayerHandler::GrogsButton
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___GrogsButton_9;
	// UnityEngine.GameObject[] PlayerHandler::ItemSlots
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___ItemSlots_10;
	// UnityEngine.GameObject PlayerHandler::offlineMenu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___offlineMenu_11;
	// UnityEngine.SceneManagement.SceneManager PlayerHandler::SM
	SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA* ___SM_12;
};

// SlotImageHolder
struct SlotImageHolder_tBEA0514F055F29E58C95932ADF6A313EBADB3048  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image SlotImageHolder::im
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___im_4;
	// Loot SlotImageHolder::loot
	Loot_tC8D6569EDF929CC5A066A637FAD7C4031B1866B6* ___loot_5;
};

// SpawnGrog
struct SpawnGrog_tF9FA499BCB26222A68D537136982C341A8DBD649  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.RectTransform SpawnGrog::rt
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rt_4;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnGrog::grogs
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___grogs_5;
};

// Transition
struct Transition_tCEFDBCF3B9C6819BF1A11F93B0DBE7EBEB353D04  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// World
struct World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] World::encounters
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___encounters_4;
	// System.Double[] World::RNGWeight
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___RNGWeight_5;
	// System.Int32 World::enemiesKilled
	int32_t ___enemiesKilled_6;
	// System.Boolean World::currentWorld
	bool ___currentWorld_7;
	// System.Double World::worldCost
	double ___worldCost_8;
	// System.Double World::baseHealth
	double ___baseHealth_9;
	// System.Double World::worldMult
	double ___worldMult_10;
	// System.Double World::MoneyMult
	double ___MoneyMult_11;
	// System.Double World::bossMult
	double ___bossMult_12;
	// System.Int32 World::worldIndex
	int32_t ___worldIndex_13;
};

// WorldButtonBuy
struct WorldButtonBuy_t740725B75DEF251588CA3D7221D5964B21762B24  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// World WorldButtonBuy::world
	World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* ___world_4;
	// UnityEngine.GameObject WorldButtonBuy::EH
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___EH_5;
	// UnityEngine.GameObject WorldButtonBuy::player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player_6;
	// System.Boolean WorldButtonBuy::bought
	bool ___bought_7;
	// UnityEngine.GameObject WorldButtonBuy::GoldFormatter
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___GoldFormatter_8;
	// UnityEngine.GameObject WorldButtonBuy::TheImage
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___TheImage_9;
	// UnityEngine.UI.Text WorldButtonBuy::texty
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___texty_10;
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

// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.RectOffset UnityEngine.UI.LayoutGroup::m_Padding
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Padding_4;
	// UnityEngine.TextAnchor UnityEngine.UI.LayoutGroup::m_ChildAlignment
	int32_t ___m_ChildAlignment_5;
	// UnityEngine.RectTransform UnityEngine.UI.LayoutGroup::m_Rect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Rect_6;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.LayoutGroup::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_7;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalMinSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalMinSize_8;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalPreferredSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalPreferredSize_9;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalFlexibleSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalFlexibleSize_10;
	// System.Collections.Generic.List`1<UnityEngine.RectTransform> UnityEngine.UI.LayoutGroup::m_RectChildren
	List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* ___m_RectChildren_11;
};

// UnityEngine.UI.ScrollRect
struct ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Content
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Content_4;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Horizontal
	bool ___m_Horizontal_5;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Vertical
	bool ___m_Vertical_6;
	// UnityEngine.UI.ScrollRect/MovementType UnityEngine.UI.ScrollRect::m_MovementType
	int32_t ___m_MovementType_7;
	// System.Single UnityEngine.UI.ScrollRect::m_Elasticity
	float ___m_Elasticity_8;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Inertia
	bool ___m_Inertia_9;
	// System.Single UnityEngine.UI.ScrollRect::m_DecelerationRate
	float ___m_DecelerationRate_10;
	// System.Single UnityEngine.UI.ScrollRect::m_ScrollSensitivity
	float ___m_ScrollSensitivity_11;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Viewport
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Viewport_12;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_HorizontalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_HorizontalScrollbar_13;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_VerticalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_VerticalScrollbar_14;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_HorizontalScrollbarVisibility
	int32_t ___m_HorizontalScrollbarVisibility_15;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_VerticalScrollbarVisibility
	int32_t ___m_VerticalScrollbarVisibility_16;
	// System.Single UnityEngine.UI.ScrollRect::m_HorizontalScrollbarSpacing
	float ___m_HorizontalScrollbarSpacing_17;
	// System.Single UnityEngine.UI.ScrollRect::m_VerticalScrollbarSpacing
	float ___m_VerticalScrollbarSpacing_18;
	// UnityEngine.UI.ScrollRect/ScrollRectEvent UnityEngine.UI.ScrollRect::m_OnValueChanged
	ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26* ___m_OnValueChanged_19;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PointerStartLocalCursor
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PointerStartLocalCursor_20;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_ContentStartPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ContentStartPosition_21;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_ViewRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_ViewRect_22;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ContentBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_ContentBounds_23;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ViewBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_ViewBounds_24;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_Velocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Velocity_25;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Dragging
	bool ___m_Dragging_26;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Scrolling
	bool ___m_Scrolling_27;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PrevPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PrevPosition_28;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevContentBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_PrevContentBounds_29;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevViewBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_PrevViewBounds_30;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HasRebuiltLayout
	bool ___m_HasRebuiltLayout_31;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HSliderExpand
	bool ___m_HSliderExpand_32;
	// System.Boolean UnityEngine.UI.ScrollRect::m_VSliderExpand
	bool ___m_VSliderExpand_33;
	// System.Single UnityEngine.UI.ScrollRect::m_HSliderHeight
	float ___m_HSliderHeight_34;
	// System.Single UnityEngine.UI.ScrollRect::m_VSliderWidth
	float ___m_VSliderWidth_35;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Rect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Rect_36;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_HorizontalScrollbarRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HorizontalScrollbarRect_37;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_VerticalScrollbarRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_VerticalScrollbarRect_38;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.ScrollRect::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_39;
	// UnityEngine.Vector3[] UnityEngine.UI.ScrollRect::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_40;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.GridLayoutGroup
struct GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940  : public LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE
{
	// UnityEngine.UI.GridLayoutGroup/Corner UnityEngine.UI.GridLayoutGroup::m_StartCorner
	int32_t ___m_StartCorner_12;
	// UnityEngine.UI.GridLayoutGroup/Axis UnityEngine.UI.GridLayoutGroup::m_StartAxis
	int32_t ___m_StartAxis_13;
	// UnityEngine.Vector2 UnityEngine.UI.GridLayoutGroup::m_CellSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_CellSize_14;
	// UnityEngine.Vector2 UnityEngine.UI.GridLayoutGroup::m_Spacing
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Spacing_15;
	// UnityEngine.UI.GridLayoutGroup/Constraint UnityEngine.UI.GridLayoutGroup::m_Constraint
	int32_t ___m_Constraint_16;
	// System.Int32 UnityEngine.UI.GridLayoutGroup::m_ConstraintCount
	int32_t ___m_ConstraintCount_17;
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

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
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

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// Loot[]
struct LootU5BU5D_tD17191E4077CD5073CE972F830FCA2D8C081C33D  : public RuntimeArray
{
	ALIGN_FIELD (8) Loot_tC8D6569EDF929CC5A066A637FAD7C4031B1866B6* m_Items[1];

	inline Loot_tC8D6569EDF929CC5A066A637FAD7C4031B1866B6* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Loot_tC8D6569EDF929CC5A066A637FAD7C4031B1866B6** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Loot_tC8D6569EDF929CC5A066A637FAD7C4031B1866B6* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Loot_tC8D6569EDF929CC5A066A637FAD7C4031B1866B6* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Loot_tC8D6569EDF929CC5A066A637FAD7C4031B1866B6** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Loot_tC8D6569EDF929CC5A066A637FAD7C4031B1866B6* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31  : public RuntimeArray
{
	ALIGN_FIELD (8) AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* m_Items[1];

	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
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
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
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


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m04EB988C3F849C1BE164FC6656C2281DF47EEAA7_gshared (Func_2_tB5C40A90702B6A6A2E315FD927EEFC9FB69F2B12* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy<System.Object,System.Single>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_OrderBy_TisRuntimeObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mB2315DD162DED6E65C9B440629954A1B156816CD_gshared (RuntimeObject* ___source0, Func_2_tB5C40A90702B6A6A2E315FD927EEFC9FB69F2B12* ___keySelector1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void LootBoxUpdater::Reformat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LootBoxUpdater_Reformat_mF2311F942A5965624B9147C2C1A79343C67A02CC (LootBoxUpdater_tA7E61E7B2039E525608C1961839DF2C574F74944* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.GridLayoutGroup::set_cellSize(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridLayoutGroup_set_cellSize_m0A3FF07694BDBF52D973597978FC87B0941BE5F9 (GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.ScrollRect>()
inline ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* GameObject_GetComponent_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m9A1CDD55B7236FD82E3D23C87F66E4D010B2C79F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.UI.ScrollRect::set_horizontalNormalizedPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollRect_set_horizontalNormalizedPosition_m9B268C9AE7891FC73623DC7BE6B9900640C029B6 (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, float ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void LootScrollerAnim::giveReward(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LootScrollerAnim_giveReward_m3EBDC50CFDFE9A8B8216D7D0338225453E49B722 (LootScrollerAnim_t4E4D7E1C0F280F7A3802D523D8C0F7A23C3FCCD6* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___center0, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<SlotImageHolder>()
inline SlotImageHolder_tBEA0514F055F29E58C95932ADF6A313EBADB3048* GameObject_GetComponent_TisSlotImageHolder_tBEA0514F055F29E58C95932ADF6A313EBADB3048_m435DED7D6D2A3E083CE58377BB2328EE6D4DC0B4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SlotImageHolder_tBEA0514F055F29E58C95932ADF6A313EBADB3048* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Loot::giveLoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loot_giveLoot_m2FE031DD3D1FCF4AC160C041437B845CC2D81B36 (Loot_tC8D6569EDF929CC5A066A637FAD7C4031B1866B6* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<EncounterHandler>()
inline EncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4* GameObject_GetComponent_TisEncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4_m4A2003BB8153D52192A006D81119F3685D144594 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  EncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void EncounterHandler::actuallydie()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncounterHandler_actuallydie_mAF55AFA863EE9F73FF10B11C2EE5075A3097ABD9 (EncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Void MultibuyHandler::X1ButtonHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultibuyHandler_X1ButtonHit_mEAC687DCA05529DD5438E11200DBD15929C87D46 (MultibuyHandler_tB4F2F1A72D5AB705DED8274527981E6EE0594BAC* __this, const RuntimeMethod* method) ;
// System.Void MultibuyHandler::MenuUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultibuyHandler_MenuUpdate_m567FFD2F16648432DAE6166997E5238C057E6130 (MultibuyHandler_tB4F2F1A72D5AB705DED8274527981E6EE0594BAC* __this, const RuntimeMethod* method) ;
// System.Void MultibuyHandler::buttonReset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultibuyHandler_buttonReset_m683D9B126A083B749D2BB8B6FA8232155BE0BA79 (MultibuyHandler_tB4F2F1A72D5AB705DED8274527981E6EE0594BAC* __this, const RuntimeMethod* method) ;
// System.Void MultibuyHandler::buttonActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultibuyHandler_buttonActions_mDFA7BEF99DAFA976EDEC374B682116E137D9CADE (MultibuyHandler_tB4F2F1A72D5AB705DED8274527981E6EE0594BAC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m1DA0B9343DCDB53221A6CD707CBF0827A6FFF17F (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_gray()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<PlayerHandler>()
inline PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<ButtonGrog>()
inline ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void ButtonGrog::UpdateCost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonGrog_UpdateCost_m7062E0D3D739B742C5BF940BE11C12E3F8D2BF7E (ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* __this, const RuntimeMethod* method) ;
// System.Void ButtonGrog::priceUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonGrog_priceUpdate_m4B400234A6B14DB0C94529092C7BABAD065875B5 (ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// System.Void MultibuyHandler/<FindMax>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFindMaxU3Ed__12__ctor_mF6694EFD9CEC85B8C042C3FAA8958F56DA1600BD (U3CFindMaxU3Ed__12_tD6D56652A3B16D3AB5A9DF3316A4236A7163EC31* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Grog>()
inline Grog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE* GameObject_GetComponent_TisGrog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE_mFB69D395569B0895C5375A73C4B1A06FE504974C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Grog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<GoldUpdater>()
inline GoldUpdater_tF81566509685857184CBF980E1080EB3DAAB9418* GameObject_GetComponent_TisGoldUpdater_tF81566509685857184CBF980E1080EB3DAAB9418_m5B744511C9687269F6CC80FB067150101703CDDD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  GoldUpdater_tF81566509685857184CBF980E1080EB3DAAB9418* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.String GoldUpdater::formatGold(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GoldUpdater_formatGold_m9C9E3CF1B9BD23E558359D83B24E808419582A8F (GoldUpdater_tF81566509685857184CBF980E1080EB3DAAB9418* __this, double ___Gold0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<WorldButtonBuy>()
inline WorldButtonBuy_t740725B75DEF251588CA3D7221D5964B21762B24* GameObject_GetComponent_TisWorldButtonBuy_t740725B75DEF251588CA3D7221D5964B21762B24_mD93D2DD5171EEE3589EFCCAA9DB3A586DFEF41C9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  WorldButtonBuy_t740725B75DEF251588CA3D7221D5964B21762B24* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<GrogItem>()
inline GrogItem_tF4D3621CD5ECE7D32F1FDC3D8BA2D96CC491B299* GameObject_GetComponent_TisGrogItem_tF4D3621CD5ECE7D32F1FDC3D8BA2D96CC491B299_mCBF443CBEE1188E7B637701814CF53431D529B55 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  GrogItem_tF4D3621CD5ECE7D32F1FDC3D8BA2D96CC491B299* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.String System.Double::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339 (double* __this, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
// System.Int64 System.DateTime::ToBinary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DateTime_ToBinary_m14CAC5CF45E58602ACDE00DF41A200CCAA79C445 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.String System.Int64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B (int64_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void ButtonGrog/<UpdatePrice>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdatePriceU3Ed__19__ctor_m0166754362569DB6D84ACAB9AFF9A74A8398E286 (U3CUpdatePriceU3Ed__19_tF9142A372BC72155C085AFF250EDD75667B01ACA* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<SpawnGrog>()
inline SpawnGrog_tF9FA499BCB26222A68D537136982C341A8DBD649* GameObject_GetComponent_TisSpawnGrog_tF9FA499BCB26222A68D537136982C341A8DBD649_mB032FA4FE82B8F5BB29BBD873CA52913A8C9A4C6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SpawnGrog_tF9FA499BCB26222A68D537136982C341A8DBD649* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.GameObject SpawnGrog::SpawnTheGrog(UnityEngine.GameObject,ButtonGrog)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* SpawnGrog_SpawnTheGrog_m783D3A949A4DC867A9C87A271096F288F1B50A41 (SpawnGrog_tF9FA499BCB26222A68D537136982C341A8DBD649* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___grog0, ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* ___buttony1, const RuntimeMethod* method) ;
// System.Void GrogDesc::descFormatter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrogDesc_descFormatter_m3113C63B11808AA6E28465AF36FE58DBFB40548B (GrogDesc_t056DE5EA6E86F649972FF8A0F672ADF89652D697* __this, const RuntimeMethod* method) ;
// System.Void ButtonGrog::discover()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonGrog_discover_m7337A1528746B6FF3E7318046D04429380C9D1B3 (ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_grey()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_grey_m1CE6BEDA3EF8569E939F77A4B0231D9839864F92_inline (const RuntimeMethod* method) ;
// System.Void Grog::onUpgrade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grog_onUpgrade_m8E9832040C31BEF4CA9D4CB6D97FE7BDD1677EA5 (Grog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Void ContentScaleUpdater::Reformat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContentScaleUpdater_Reformat_m377C777F753047A8C38861DED77A99CB1C9BA7CB (ContentScaleUpdater_t6C3EA7B498DC4CFCDCE6065A221D28ECC6F02552* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void EncounterHandler::moveEncounters(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncounterHandler_moveEncounters_m0B6225FFD4A88788E5850E1AB3B5F0F304C2D9C4 (EncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4* __this, bool ___start0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Encounter>()
inline Encounter_t91211CC083B2AAE6C88D52B43FE66AE7F8E632E6* GameObject_GetComponent_TisEncounter_t91211CC083B2AAE6C88D52B43FE66AE7F8E632E6_m294A093D418D1950B3B849776920FCE81E065BCF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Encounter_t91211CC083B2AAE6C88D52B43FE66AE7F8E632E6* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39 (const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1 (int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RectTransformUtility::RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectTransformUtility_RectangleContainsScreenPoint_mBA6600E46C416EF032491AED969AA00BE2249630 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rect0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPoint1, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam2, const RuntimeMethod* method) ;
// System.Void EncounterHandler::WorldButtonHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncounterHandler_WorldButtonHit_mB037BEAE00076A5AF8A779BF8797E586A1C0B3A0 (EncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void EncounterHandler::die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncounterHandler_die_m8FBA82B5B31EF53ABA7D43C40D539F69EB953370 (EncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject World::randomChooser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* World_randomChooser_m138E500374102EBCC0A17751AB8A9510AB8F6C25 (World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___original0, method);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___p0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_offsetMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_offsetMax_m6A51C62A2C69780EFD879D3CFE4EE2CBF4AD3D73 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_offsetMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_offsetMax_m5514D09D86516F2C0E25FA6D11A3A4274D3D002D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_offsetMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_offsetMin_mD02BE5256DADAF02CEEF99214C4E80478CD5287B (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_offsetMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_offsetMin_m07F38B4105C7CA9CC9FBDC9ED0DB008602880AB9 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject EncounterHandler::SpawnObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EncounterHandler_SpawnObject_m638B4A061BA5CC1B7395A78BC219D883A00832C0 (EncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<LootScrollerAnim>()
inline LootScrollerAnim_t4E4D7E1C0F280F7A3802D523D8C0F7A23C3FCCD6* GameObject_GetComponentInChildren_TisLootScrollerAnim_t4E4D7E1C0F280F7A3802D523D8C0F7A23C3FCCD6_m0104B27C038557D7E40E50D861BE77C3AAA37C18 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  LootScrollerAnim_t4E4D7E1C0F280F7A3802D523D8C0F7A23C3FCCD6* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// System.Void LootScrollerAnim::updateSlots(Loot[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LootScrollerAnim_updateSlots_m18DBEBAB4159DC0E8BBD038928E17074F0E9515A (LootScrollerAnim_t4E4D7E1C0F280F7A3802D523D8C0F7A23C3FCCD6* __this, LootU5BU5D_tD17191E4077CD5073CE972F830FCA2D8C081C33D* ___loot0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___chances1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.String System.Double::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m70EC76E1DAD7E8B5B47AF9292189BF3711B24B75 (double* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Slider>()
inline Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* GameObject_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m3B73E32B09A6667056AC232DA5238351F51DB7EA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Slider::set_maxValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, float ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GameObject_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m4883A479F4252D21D45D5AD3140CB42598C48A13 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// System.Void ButtonGrog::SpawnSpecialGrog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonGrog_SpawnSpecialGrog_m1FB1C5F4B891DBD3EF43B308F686C34DB0CD38AD (ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<MultibuyHandler>()
inline MultibuyHandler_tB4F2F1A72D5AB705DED8274527981E6EE0594BAC* GameObject_GetComponent_TisMultibuyHandler_tB4F2F1A72D5AB705DED8274527981E6EE0594BAC_m7C2CFBB13AC9B0478EE2F0FA168118ECF663AB58 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MultibuyHandler_tB4F2F1A72D5AB705DED8274527981E6EE0594BAC* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void MenuButtonManager::MenuUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuButtonManager_MenuUpdate_mD4EF33709E845B59AB34537C04BBEAD405082B8F (MenuButtonManager_tF5F9669A2BCEC99D6AADB4A8EC1D69691753E52D* __this, const RuntimeMethod* method) ;
// System.Void MenuButtonManager::buttonReset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuButtonManager_buttonReset_m21122C2514B5040556303657813D5C9FDC4682EA (MenuButtonManager_tF5F9669A2BCEC99D6AADB4A8EC1D69691753E52D* __this, const RuntimeMethod* method) ;
// System.Void MenuButtonManager::buttonActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuButtonManager_buttonActions_m5AE3DD976CAD70E6E049ED369609207C1EB71751 (MenuButtonManager_tF5F9669A2BCEC99D6AADB4A8EC1D69691753E52D* __this, const RuntimeMethod* method) ;
// System.Void PlayerHandler::LoadPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHandler_LoadPlayer_mFD68E27C0DAFFDF935A6DFE10D03CD274A77F19E (PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* __this, const RuntimeMethod* method) ;
// System.Void PlayerHandler/<SaveTheGame>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveTheGameU3Ed__10__ctor_m89CD2FCF7B3F855F5C048282FC890296A0A0C85C (U3CSaveTheGameU3Ed__10_t7D41F480297F89635409B197697B72A1515AA4DB* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void SaveSystem::SaveGame(PlayerHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveSystem_SaveGame_m45E960B3490FB19E8F9D803837AB343018F09944 (PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* ___PH0, const RuntimeMethod* method) ;
// SaveData SaveSystem::LoadSave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* SaveSystem_LoadSave_m69049E7F09F306B42E39632D8F32A100050DBC96 (const RuntimeMethod* method) ;
// System.Double System.Double::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Double_Parse_mEBC644CE0C86A405283EC4839F872EF9E556670A (String_t* ___s0, const RuntimeMethod* method) ;
// System.Int64 System.Convert::ToInt64(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Convert_ToInt64_mE141C5A7AE0C7A127BA9B6D165F3098B10726591 (String_t* ___value0, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::FromBinary(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_FromBinary_m3CED9C962489A2A0ABF34FB77B2AB257B9DA7B7B (int64_t ___dateData0, const RuntimeMethod* method) ;
// System.TimeSpan System.DateTime::Subtract(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTime_Subtract_m4064A98F489219E9C414DF5C03EE041351B4502A (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator PlayerHandler::CalculateSum(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerHandler_CalculateSum_mB6392BE80E03BE7F978067D81CA24033020EFE41 (PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___t0, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void PlayerHandler/<CalculateSum>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCalculateSumU3Ed__13__ctor_mEF6E0CB7C2C01D199C90D66077D1254D40E9F795 (U3CCalculateSumU3Ed__13_t467D5D415AA3A76DF401B05D7B1B2CB680D15DAF* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399 (const RuntimeMethod* method) ;
// System.Void System.IO.File::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386 (String_t* ___path0, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// System.Void PlayerHandler::SaveGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHandler_SaveGame_m3A6C7279288B41402BBBF67CE63510023C86831E (PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* __this, const RuntimeMethod* method) ;
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<OfflineCalculate>()
inline OfflineCalculate_tBC27B78FBD17348AD96A14F58E778E16AAB11EA3* GameObject_GetComponent_TisOfflineCalculate_tBC27B78FBD17348AD96A14F58E778E16AAB11EA3_mB699987D1C0FA190CA5E849FE40DE9E5605396C8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  OfflineCalculate_tBC27B78FBD17348AD96A14F58E778E16AAB11EA3* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryFormatter__ctor_m484DBB5D742624C3A8190921A85458BCECBB1705 (BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* __this, const RuntimeMethod* method) ;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStream__ctor_m78499F9BE2BE31DA34F123B4399AA457716BD6E6 (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* __this, String_t* ___path0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Void SaveData::.ctor(PlayerHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveData__ctor_m4B7008D3AD212ABA0F77A2E039FA6F3E7530FB22 (SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* __this, PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* ___PH0, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Serialize(System.IO.Stream,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryFormatter_Serialize_mF365DA7FA76E03707336375616D757397CF2992E (BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___serializationStream0, RuntimeObject* ___graph1, const RuntimeMethod* method) ;
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A (String_t* ___path0, const RuntimeMethod* method) ;
// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Deserialize(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BinaryFormatter_Deserialize_mFC50E75F230189EB3660C8F2FD1E786C0D11E1ED (BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___serializationStream0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Func`2<UnityEngine.GameObject,System.Single>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m5750050EBB60074F75746C1F8D7C3EA22904A011 (Func_2_tA26CC06F251E5318131EF8475E1A4BDADDFAD8BC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tA26CC06F251E5318131EF8475E1A4BDADDFAD8BC*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m04EB988C3F849C1BE164FC6656C2281DF47EEAA7_gshared)(__this, ___object0, ___method1, method);
}
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy<UnityEngine.GameObject,System.Single>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
inline RuntimeObject* Enumerable_OrderBy_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m52D6B2FA8A75393C2B50151F7E5902C74B764447 (RuntimeObject* ___source0, Func_2_tA26CC06F251E5318131EF8475E1A4BDADDFAD8BC* ___keySelector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tA26CC06F251E5318131EF8475E1A4BDADDFAD8BC*, const RuntimeMethod*))Enumerable_OrderBy_TisRuntimeObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mB2315DD162DED6E65C9B440629954A1B156816CD_gshared)(___source0, ___keySelector1, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_mF43DCB3BB782DEE371E585AF95DAD52EE17CC9BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___collection0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Transform::SetSiblingIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetSiblingIndex_m8A3B81F08B93991C05BFA89ADA2146836C4FC4B2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27 (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void SpawnGrog/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mCED1BA8942C4747F168B366B401F94E73FEB5B8F (U3CU3Ec_t6248F9A6A0AD9F0A15677D5EA8B91A27E73AA874* __this, const RuntimeMethod* method) ;
// System.Void EncounterHandler::HalfWayHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncounterHandler_HalfWayHandler_m456D998C81152E04B3D88083D1E57F19BF0F163A (EncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Text::set_alignment(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text_set_alignment_m9FAD6C1C270FA28C610AB1E07414FBF96403157A (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void EncounterHandler::WorldSwap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncounterHandler_WorldSwap_m957FD82C0E49E667A8FBDCE2518FDFED4EA7EA63 (EncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
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
// System.Void GrogItem::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrogItem_Start_m3A314F2D0CB4AFF068ABCE9415AFD77F9263CB28 (GrogItem_tF4D3621CD5ECE7D32F1FDC3D8BA2D96CC491B299* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void GrogItem::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrogItem_Update_mFB71F92FFCC6ECBD0BF3B5C42E6512749F76B920 (GrogItem_tF4D3621CD5ECE7D32F1FDC3D8BA2D96CC491B299* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void GrogItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrogItem__ctor_m57D043EE2761071DD887E222FE7D6E12B7882DEC (GrogItem_tF4D3621CD5ECE7D32F1FDC3D8BA2D96CC491B299* __this, const RuntimeMethod* method) 
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
// System.Void LootBoxUpdater::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LootBoxUpdater_Start_m8472BB7601CB82C4AE61C43C9DCA431FB2910137 (LootBoxUpdater_tA7E61E7B2039E525608C1961839DF2C574F74944* __this, const RuntimeMethod* method) 
{
	{
		// Reformat();
		LootBoxUpdater_Reformat_mF2311F942A5965624B9147C2C1A79343C67A02CC(__this, NULL);
		// }
		return;
	}
}
// System.Void LootBoxUpdater::Reformat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LootBoxUpdater_Reformat_mF2311F942A5965624B9147C2C1A79343C67A02CC (LootBoxUpdater_tA7E61E7B2039E525608C1961839DF2C574F74944* __this, const RuntimeMethod* method) 
{
	{
		// glg.cellSize = new Vector2(canvy.sizeDelta.y*0.10f,canvy.sizeDelta.y*0.10f);
		GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* L_0 = __this->___glg_5;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___canvy_4;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_1, NULL);
		float L_3 = L_2.___y_1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = __this->___canvy_4;
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_4, NULL);
		float L_6 = L_5.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_7), ((float)il2cpp_codegen_multiply(L_3, (0.100000001f))), ((float)il2cpp_codegen_multiply(L_6, (0.100000001f))), /*hidden argument*/NULL);
		NullCheck(L_0);
		GridLayoutGroup_set_cellSize_m0A3FF07694BDBF52D973597978FC87B0941BE5F9(L_0, L_7, NULL);
		// }
		return;
	}
}
// System.Void LootBoxUpdater::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LootBoxUpdater__ctor_mDCD7FA22710B2C5314F4B1116ED7E9D9B6976C03 (LootBoxUpdater_tA7E61E7B2039E525608C1961839DF2C574F74944* __this, const RuntimeMethod* method) 
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
// System.Void LootScrollerAnim::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LootScrollerAnim_Start_mC218A842CF40C11E8DD79836677794D567E77C0B (LootScrollerAnim_t4E4D7E1C0F280F7A3802D523D8C0F7A23C3FCCD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m9A1CDD55B7236FD82E3D23C87F66E4D010B2C79F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SR = gameObject.GetComponent<ScrollRect>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_1;
		L_1 = GameObject_GetComponent_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m9A1CDD55B7236FD82E3D23C87F66E4D010B2C79F(L_0, GameObject_GetComponent_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m9A1CDD55B7236FD82E3D23C87F66E4D010B2C79F_RuntimeMethod_var);
		__this->___SR_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SR_5), (void*)L_1);
		// }
		return;
	}
}
// System.Void LootScrollerAnim::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LootScrollerAnim_Update_mA46C6054628A7F6D16F74AF7162F7E1D828005A6 (LootScrollerAnim_t4E4D7E1C0F280F7A3802D523D8C0F7A23C3FCCD6* __this, const RuntimeMethod* method) 
{
	{
		// SR.horizontalNormalizedPosition = scrollValue;
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_0 = __this->___SR_5;
		float L_1 = __this->___scrollValue_4;
		NullCheck(L_0);
		ScrollRect_set_horizontalNormalizedPosition_m9B268C9AE7891FC73623DC7BE6B9900640C029B6(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void LootScrollerAnim::slotSelector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LootScrollerAnim_slotSelector_mE4A39C18539006A508C887054379CB1D4A32B782 (LootScrollerAnim_t4E4D7E1C0F280F7A3802D523D8C0F7A23C3FCCD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_1 = NULL;
	int32_t V_2 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	{
		// GameObject center = slots[0];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___slots_7;
		NullCheck(L_0);
		int32_t L_1 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		// foreach(GameObject g in slots)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = __this->___slots_7;
		V_1 = L_3;
		V_2 = 0;
		goto IL_004a;
	}

IL_0014:
	{
		// foreach(GameObject g in slots)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		// if(Mathf.Abs(g.GetComponent<RectTransform>().position.x) < Mathf.Abs(center.GetComponent<RectTransform>().position.x))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_3;
		NullCheck(L_8);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9;
		L_9 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_8, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11 = L_10.___x_2;
		float L_12;
		L_12 = fabsf(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_0;
		NullCheck(L_13);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14;
		L_14 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_13, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		float L_16 = L_15.___x_2;
		float L_17;
		L_17 = fabsf(L_16);
		if ((!(((float)L_12) < ((float)L_17))))
		{
			goto IL_0046;
		}
	}
	{
		// center = g;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = V_3;
		V_0 = L_18;
	}

IL_0046:
	{
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_004a:
	{
		// foreach(GameObject g in slots)
		int32_t L_20 = V_2;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_21 = V_1;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0014;
		}
	}
	{
		// giveReward(center);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = V_0;
		LootScrollerAnim_giveReward_m3EBDC50CFDFE9A8B8216D7D0338225453E49B722(__this, L_22, NULL);
		// }
		return;
	}
}
// System.Void LootScrollerAnim::giveReward(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LootScrollerAnim_giveReward_m3EBDC50CFDFE9A8B8216D7D0338225453E49B722 (LootScrollerAnim_t4E4D7E1C0F280F7A3802D523D8C0F7A23C3FCCD6* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___center0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4_m4A2003BB8153D52192A006D81119F3685D144594_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSlotImageHolder_tBEA0514F055F29E58C95932ADF6A313EBADB3048_m435DED7D6D2A3E083CE58377BB2328EE6D4DC0B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F5FD870291A9070FD9EF78BF6B827EDFB57EA60);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE12342C1EE58403342EEB30C0DC04BF0398105F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(center.name);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___center0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// center.GetComponent<SlotImageHolder>().loot.giveLoot();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___center0;
		NullCheck(L_2);
		SlotImageHolder_tBEA0514F055F29E58C95932ADF6A313EBADB3048* L_3;
		L_3 = GameObject_GetComponent_TisSlotImageHolder_tBEA0514F055F29E58C95932ADF6A313EBADB3048_m435DED7D6D2A3E083CE58377BB2328EE6D4DC0B4(L_2, GameObject_GetComponent_TisSlotImageHolder_tBEA0514F055F29E58C95932ADF6A313EBADB3048_m435DED7D6D2A3E083CE58377BB2328EE6D4DC0B4_RuntimeMethod_var);
		NullCheck(L_3);
		Loot_tC8D6569EDF929CC5A066A637FAD7C4031B1866B6* L_4 = L_3->___loot_5;
		NullCheck(L_4);
		Loot_giveLoot_m2FE031DD3D1FCF4AC160C041437B845CC2D81B36(L_4, NULL);
		// gameObject.GetComponent<Animator>().SetTrigger("Unroll");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6;
		L_6 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_5, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		NullCheck(L_6);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_6, _stringLiteralAE12342C1EE58403342EEB30C0DC04BF0398105F, NULL);
		// GameObject.Find("EncounterHandler").GetComponent<EncounterHandler>().actuallydie();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral4F5FD870291A9070FD9EF78BF6B827EDFB57EA60, NULL);
		NullCheck(L_7);
		EncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4* L_8;
		L_8 = GameObject_GetComponent_TisEncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4_m4A2003BB8153D52192A006D81119F3685D144594(L_7, GameObject_GetComponent_TisEncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4_m4A2003BB8153D52192A006D81119F3685D144594_RuntimeMethod_var);
		NullCheck(L_8);
		EncounterHandler_actuallydie_mAF55AFA863EE9F73FF10B11C2EE5075A3097ABD9(L_8, NULL);
		// parent.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___parent_6;
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void LootScrollerAnim::updateSlots(Loot[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LootScrollerAnim_updateSlots_m18DBEBAB4159DC0E8BBD038928E17074F0E9515A (LootScrollerAnim_t4E4D7E1C0F280F7A3802D523D8C0F7A23C3FCCD6* __this, LootU5BU5D_tD17191E4077CD5073CE972F830FCA2D8C081C33D* ___loot0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___chances1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSlotImageHolder_tBEA0514F055F29E58C95932ADF6A313EBADB3048_m435DED7D6D2A3E083CE58377BB2328EE6D4DC0B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA12C13441E908B46D0E8552680587F5595D959F4);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// for(int i = 0; i < slots.Length; i++)
		V_0 = 0;
		goto IL_005e;
	}

IL_0004:
	{
		// int x = Random.Range(1,1001);
		int32_t L_0;
		L_0 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(1, ((int32_t)1001), NULL);
		V_1 = L_0;
		// for(int j = 0; j < chances.Length; j++)
		V_2 = 0;
		goto IL_0054;
	}

IL_0014:
	{
		// if(x < chances[j])
		int32_t L_1 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___chances1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if ((((int32_t)L_1) >= ((int32_t)L_5)))
		{
			goto IL_0050;
		}
	}
	{
		// slots[i].GetComponent<SlotImageHolder>().im.sprite = loot[j].image;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___slots_7;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		SlotImageHolder_tBEA0514F055F29E58C95932ADF6A313EBADB3048* L_10;
		L_10 = GameObject_GetComponent_TisSlotImageHolder_tBEA0514F055F29E58C95932ADF6A313EBADB3048_m435DED7D6D2A3E083CE58377BB2328EE6D4DC0B4(L_9, GameObject_GetComponent_TisSlotImageHolder_tBEA0514F055F29E58C95932ADF6A313EBADB3048_m435DED7D6D2A3E083CE58377BB2328EE6D4DC0B4_RuntimeMethod_var);
		NullCheck(L_10);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_11 = L_10->___im_4;
		LootU5BU5D_tD17191E4077CD5073CE972F830FCA2D8C081C33D* L_12 = ___loot0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Loot_tC8D6569EDF929CC5A066A637FAD7C4031B1866B6* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_16 = L_15->___image_4;
		NullCheck(L_11);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_11, L_16, NULL);
		// slots[i].GetComponent<SlotImageHolder>().loot = loot[j];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_17 = __this->___slots_7;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		SlotImageHolder_tBEA0514F055F29E58C95932ADF6A313EBADB3048* L_21;
		L_21 = GameObject_GetComponent_TisSlotImageHolder_tBEA0514F055F29E58C95932ADF6A313EBADB3048_m435DED7D6D2A3E083CE58377BB2328EE6D4DC0B4(L_20, GameObject_GetComponent_TisSlotImageHolder_tBEA0514F055F29E58C95932ADF6A313EBADB3048_m435DED7D6D2A3E083CE58377BB2328EE6D4DC0B4_RuntimeMethod_var);
		LootU5BU5D_tD17191E4077CD5073CE972F830FCA2D8C081C33D* L_22 = ___loot0;
		int32_t L_23 = V_2;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		Loot_tC8D6569EDF929CC5A066A637FAD7C4031B1866B6* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_21);
		L_21->___loot_5 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&L_21->___loot_5), (void*)L_25);
		// break;
		goto IL_005a;
	}

IL_0050:
	{
		// for(int j = 0; j < chances.Length; j++)
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_0054:
	{
		// for(int j = 0; j < chances.Length; j++)
		int32_t L_27 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = ___chances1;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))
		{
			goto IL_0014;
		}
	}

IL_005a:
	{
		// for(int i = 0; i < slots.Length; i++)
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_005e:
	{
		// for(int i = 0; i < slots.Length; i++)
		int32_t L_30 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_31 = __this->___slots_7;
		NullCheck(L_31);
		if ((((int32_t)L_30) < ((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// gameObject.GetComponent<Animator>().SetTrigger("Roll");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32;
		L_32 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_32);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_33;
		L_33 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_32, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		NullCheck(L_33);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_33, _stringLiteralA12C13441E908B46D0E8552680587F5595D959F4, NULL);
		// }
		return;
	}
}
// System.Void LootScrollerAnim::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LootScrollerAnim__ctor_mF96D5CB2EE1F506E0C3FB8D9F26E82A7D948A1D5 (LootScrollerAnim_t4E4D7E1C0F280F7A3802D523D8C0F7A23C3FCCD6* __this, const RuntimeMethod* method) 
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
// System.Void MultibuyHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultibuyHandler_Start_mAECC602F6DB03BB4FEC4FE47E698F30964F4AA32 (MultibuyHandler_tB4F2F1A72D5AB705DED8274527981E6EE0594BAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD599EDCFBEAC503B743CEEACA9F5FF5DBE29220);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PH = GameObject.Find("PlayerHandler");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralCD599EDCFBEAC503B743CEEACA9F5FF5DBE29220, NULL);
		__this->___PH_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PH_6), (void*)L_0);
		// X1ButtonHit();
		MultibuyHandler_X1ButtonHit_mEAC687DCA05529DD5438E11200DBD15929C87D46(__this, NULL);
		// }
		return;
	}
}
// System.Void MultibuyHandler::X1ButtonHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultibuyHandler_X1ButtonHit_mEAC687DCA05529DD5438E11200DBD15929C87D46 (MultibuyHandler_tB4F2F1A72D5AB705DED8274527981E6EE0594BAC* __this, const RuntimeMethod* method) 
{
	{
		// buttonIndex = 1;
		__this->___buttonIndex_4 = 1;
		// MenuUpdate();
		MultibuyHandler_MenuUpdate_m567FFD2F16648432DAE6166997E5238C057E6130(__this, NULL);
		// }
		return;
	}
}
// System.Void MultibuyHandler::X10ButtonHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultibuyHandler_X10ButtonHit_m286B387EC562B30F8DFDBC6F10019ED217705384 (MultibuyHandler_tB4F2F1A72D5AB705DED8274527981E6EE0594BAC* __this, const RuntimeMethod* method) 
{
	{
		// buttonIndex = 2;
		__this->___buttonIndex_4 = 2;
		// MenuUpdate();
		MultibuyHandler_MenuUpdate_m567FFD2F16648432DAE6166997E5238C057E6130(__this, NULL);
		// }
		return;
	}
}
// System.Void MultibuyHandler::X100ButtonHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultibuyHandler_X100ButtonHit_m361672EF032715DA731FC8E07DD34265D70D276E (MultibuyHandler_tB4F2F1A72D5AB705DED8274527981E6EE0594BAC* __this, const RuntimeMethod* method) 
{
	{
		// buttonIndex = 3;
		__this->___buttonIndex_4 = 3;
		// MenuUpdate();
		MultibuyHandler_MenuUpdate_m567FFD2F16648432DAE6166997E5238C057E6130(__this, NULL);
		// }
		return;
	}
}
// System.Void MultibuyHandler::XMaxButtonHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultibuyHandler_XMaxButtonHit_mDC1A178ADAB96108931DBCF502ABC74B33931B90 (MultibuyHandler_tB4F2F1A72D5AB705DED8274527981E6EE0594BAC* __this, const RuntimeMethod* method) 
{
	{
		// buttonIndex = 4;
		__this->___buttonIndex_4 = 4;
		// MenuUpdate();
		MultibuyHandler_MenuUpdate_m567FFD2F16648432DAE6166997E5238C057E6130(__this, NULL);
		// }
		return;
	}
}
// System.Void MultibuyHandler::MenuUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultibuyHandler_MenuUpdate_m567FFD2F16648432DAE6166997E5238C057E6130 (MultibuyHandler_tB4F2F1A72D5AB705DED8274527981E6EE0594BAC* __this, const RuntimeMethod* method) 
{
	{
		// buttonReset();
		MultibuyHandler_buttonReset_m683D9B126A083B749D2BB8B6FA8232155BE0BA79(__this, NULL);
		// buttonActions();
		MultibuyHandler_buttonActions_mDFA7BEF99DAFA976EDEC374B682116E137D9CADE(__this, NULL);
		// }
		return;
	}
}
// System.Void MultibuyHandler::buttonReset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultibuyHandler_buttonReset_m683D9B126A083B749D2BB8B6FA8232155BE0BA79 (MultibuyHandler_tB4F2F1A72D5AB705DED8274527981E6EE0594BAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7C359886038CEF33D93794E297467294C6AD37D);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// max = false;
		__this->___max_7 = (bool)0;
		// StopCoroutine("FindMax");
		MonoBehaviour_StopCoroutine_m1DA0B9343DCDB53221A6CD707CBF0827A6FFF17F(__this, _stringLiteralC7C359886038CEF33D93794E297467294C6AD37D, NULL);
		// foreach(GameObject g in buttons)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___buttons_5;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0033;
	}

IL_001d:
	{
		// foreach(GameObject g in buttons)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// g.GetComponent<Image>().color = Color.white;
		NullCheck(L_4);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5;
		L_5 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_4, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0033:
	{
		// foreach(GameObject g in buttons)
		int32_t L_8 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_001d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MultibuyHandler::buttonActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultibuyHandler_buttonActions_mDFA7BEF99DAFA976EDEC374B682116E137D9CADE (MultibuyHandler_tB4F2F1A72D5AB705DED8274527981E6EE0594BAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7C359886038CEF33D93794E297467294C6AD37D);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_4 = NULL;
	{
		// if(buttonIndex == 1)
		int32_t L_0 = __this->___buttonIndex_4;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_007a;
		}
	}
	{
		// buttons[buttonIndex-1].GetComponent<Image>().color = Color.gray;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___buttons_5;
		int32_t L_2 = __this->___buttonIndex_4;
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5;
		L_5 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_4, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline(NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		// foreach(GameObject g in PH.GetComponent<PlayerHandler>().GrogsButton)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___PH_6;
		NullCheck(L_7);
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_8;
		L_8 = GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D(L_7, GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D_RuntimeMethod_var);
		NullCheck(L_8);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_9 = L_8->___GrogsButton_9;
		V_0 = L_9;
		V_1 = 0;
		goto IL_0073;
	}

IL_003c:
	{
		// foreach(GameObject g in PH.GetComponent<PlayerHandler>().GrogsButton)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_10 = V_0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_2 = L_13;
		// if(g.GetComponent<ButtonGrog>().found)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = V_2;
		NullCheck(L_14);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_15;
		L_15 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_14, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_15);
		bool L_16 = L_15->___found_14;
		if (!L_16)
		{
			goto IL_006f;
		}
	}
	{
		// g.GetComponent<ButtonGrog>().multiPlier = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = V_2;
		NullCheck(L_17);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_18;
		L_18 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_17, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_18);
		L_18->___multiPlier_12 = 1;
		// g.GetComponent<ButtonGrog>().UpdateCost();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = V_2;
		NullCheck(L_19);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_20;
		L_20 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_19, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_20);
		ButtonGrog_UpdateCost_m7062E0D3D739B742C5BF940BE11C12E3F8D2BF7E(L_20, NULL);
		// g.GetComponent<ButtonGrog>().priceUpdate();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = V_2;
		NullCheck(L_21);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_22;
		L_22 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_21, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_22);
		ButtonGrog_priceUpdate_m4B400234A6B14DB0C94529092C7BABAD065875B5(L_22, NULL);
	}

IL_006f:
	{
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0073:
	{
		// foreach(GameObject g in PH.GetComponent<PlayerHandler>().GrogsButton)
		int32_t L_24 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_25 = V_0;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_003c;
		}
	}
	{
		return;
	}

IL_007a:
	{
		// else if(buttonIndex == 2)
		int32_t L_26 = __this->___buttonIndex_4;
		if ((!(((uint32_t)L_26) == ((uint32_t)2))))
		{
			goto IL_00f5;
		}
	}
	{
		// buttons[buttonIndex-1].GetComponent<Image>().color = Color.gray;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_27 = __this->___buttons_5;
		int32_t L_28 = __this->___buttonIndex_4;
		NullCheck(L_27);
		int32_t L_29 = ((int32_t)il2cpp_codegen_subtract(L_28, 1));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_31;
		L_31 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_30, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_32;
		L_32 = Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline(NULL);
		NullCheck(L_31);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_31, L_32);
		// foreach(GameObject g in PH.GetComponent<PlayerHandler>().GrogsButton)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = __this->___PH_6;
		NullCheck(L_33);
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_34;
		L_34 = GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D(L_33, GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D_RuntimeMethod_var);
		NullCheck(L_34);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_35 = L_34->___GrogsButton_9;
		V_0 = L_35;
		V_1 = 0;
		goto IL_00ee;
	}

IL_00b6:
	{
		// foreach(GameObject g in PH.GetComponent<PlayerHandler>().GrogsButton)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_36 = V_0;
		int32_t L_37 = V_1;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		V_3 = L_39;
		// if(g.GetComponent<ButtonGrog>().found)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = V_3;
		NullCheck(L_40);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_41;
		L_41 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_40, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_41);
		bool L_42 = L_41->___found_14;
		if (!L_42)
		{
			goto IL_00ea;
		}
	}
	{
		// g.GetComponent<ButtonGrog>().multiPlier = 10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43 = V_3;
		NullCheck(L_43);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_44;
		L_44 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_43, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_44);
		L_44->___multiPlier_12 = ((int32_t)10);
		// g.GetComponent<ButtonGrog>().UpdateCost();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45 = V_3;
		NullCheck(L_45);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_46;
		L_46 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_45, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_46);
		ButtonGrog_UpdateCost_m7062E0D3D739B742C5BF940BE11C12E3F8D2BF7E(L_46, NULL);
		// g.GetComponent<ButtonGrog>().priceUpdate();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47 = V_3;
		NullCheck(L_47);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_48;
		L_48 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_47, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_48);
		ButtonGrog_priceUpdate_m4B400234A6B14DB0C94529092C7BABAD065875B5(L_48, NULL);
	}

IL_00ea:
	{
		int32_t L_49 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_00ee:
	{
		// foreach(GameObject g in PH.GetComponent<PlayerHandler>().GrogsButton)
		int32_t L_50 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_51 = V_0;
		NullCheck(L_51);
		if ((((int32_t)L_50) < ((int32_t)((int32_t)(((RuntimeArray*)L_51)->max_length)))))
		{
			goto IL_00b6;
		}
	}
	{
		return;
	}

IL_00f5:
	{
		// else if(buttonIndex == 3)
		int32_t L_52 = __this->___buttonIndex_4;
		if ((!(((uint32_t)L_52) == ((uint32_t)3))))
		{
			goto IL_0175;
		}
	}
	{
		// buttons[buttonIndex-1].GetComponent<Image>().color = Color.gray;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_53 = __this->___buttons_5;
		int32_t L_54 = __this->___buttonIndex_4;
		NullCheck(L_53);
		int32_t L_55 = ((int32_t)il2cpp_codegen_subtract(L_54, 1));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		NullCheck(L_56);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_57;
		L_57 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_56, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_58;
		L_58 = Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline(NULL);
		NullCheck(L_57);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_57, L_58);
		// foreach(GameObject g in PH.GetComponent<PlayerHandler>().GrogsButton)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_59 = __this->___PH_6;
		NullCheck(L_59);
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_60;
		L_60 = GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D(L_59, GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D_RuntimeMethod_var);
		NullCheck(L_60);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_61 = L_60->___GrogsButton_9;
		V_0 = L_61;
		V_1 = 0;
		goto IL_016e;
	}

IL_0131:
	{
		// foreach(GameObject g in PH.GetComponent<PlayerHandler>().GrogsButton)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_62 = V_0;
		int32_t L_63 = V_1;
		NullCheck(L_62);
		int32_t L_64 = L_63;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		V_4 = L_65;
		// if(g.GetComponent<ButtonGrog>().found)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_66 = V_4;
		NullCheck(L_66);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_67;
		L_67 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_66, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_67);
		bool L_68 = L_67->___found_14;
		if (!L_68)
		{
			goto IL_016a;
		}
	}
	{
		// g.GetComponent<ButtonGrog>().multiPlier = 100;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_69 = V_4;
		NullCheck(L_69);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_70;
		L_70 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_69, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_70);
		L_70->___multiPlier_12 = ((int32_t)100);
		// g.GetComponent<ButtonGrog>().UpdateCost();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_71 = V_4;
		NullCheck(L_71);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_72;
		L_72 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_71, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_72);
		ButtonGrog_UpdateCost_m7062E0D3D739B742C5BF940BE11C12E3F8D2BF7E(L_72, NULL);
		// g.GetComponent<ButtonGrog>().priceUpdate();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_73 = V_4;
		NullCheck(L_73);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_74;
		L_74 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_73, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_74);
		ButtonGrog_priceUpdate_m4B400234A6B14DB0C94529092C7BABAD065875B5(L_74, NULL);
	}

IL_016a:
	{
		int32_t L_75 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_016e:
	{
		// foreach(GameObject g in PH.GetComponent<PlayerHandler>().GrogsButton)
		int32_t L_76 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_77 = V_0;
		NullCheck(L_77);
		if ((((int32_t)L_76) < ((int32_t)((int32_t)(((RuntimeArray*)L_77)->max_length)))))
		{
			goto IL_0131;
		}
	}
	{
		return;
	}

IL_0175:
	{
		// else if(buttonIndex == 4)
		int32_t L_78 = __this->___buttonIndex_4;
		if ((!(((uint32_t)L_78) == ((uint32_t)4))))
		{
			goto IL_01af;
		}
	}
	{
		// buttons[buttonIndex-1].GetComponent<Image>().color = Color.gray;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_79 = __this->___buttons_5;
		int32_t L_80 = __this->___buttonIndex_4;
		NullCheck(L_79);
		int32_t L_81 = ((int32_t)il2cpp_codegen_subtract(L_80, 1));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		NullCheck(L_82);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_83;
		L_83 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_82, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_84;
		L_84 = Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline(NULL);
		NullCheck(L_83);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_83, L_84);
		// max = true;
		__this->___max_7 = (bool)1;
		// StartCoroutine("FindMax");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_85;
		L_85 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteralC7C359886038CEF33D93794E297467294C6AD37D, NULL);
	}

IL_01af:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator MultibuyHandler::FindMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MultibuyHandler_FindMax_m2C6CC915AEAA5EEC12D5D412BB7200342169A4FE (MultibuyHandler_tB4F2F1A72D5AB705DED8274527981E6EE0594BAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFindMaxU3Ed__12_tD6D56652A3B16D3AB5A9DF3316A4236A7163EC31_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFindMaxU3Ed__12_tD6D56652A3B16D3AB5A9DF3316A4236A7163EC31* L_0 = (U3CFindMaxU3Ed__12_tD6D56652A3B16D3AB5A9DF3316A4236A7163EC31*)il2cpp_codegen_object_new(U3CFindMaxU3Ed__12_tD6D56652A3B16D3AB5A9DF3316A4236A7163EC31_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFindMaxU3Ed__12__ctor_mF6694EFD9CEC85B8C042C3FAA8958F56DA1600BD(L_0, 0, NULL);
		U3CFindMaxU3Ed__12_tD6D56652A3B16D3AB5A9DF3316A4236A7163EC31* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void MultibuyHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultibuyHandler__ctor_m9AB5725C1571480CFDCB97BCAC612B39FEA75F2A (MultibuyHandler_tB4F2F1A72D5AB705DED8274527981E6EE0594BAC* __this, const RuntimeMethod* method) 
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
// System.Void MultibuyHandler/<FindMax>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFindMaxU3Ed__12__ctor_mF6694EFD9CEC85B8C042C3FAA8958F56DA1600BD (U3CFindMaxU3Ed__12_tD6D56652A3B16D3AB5A9DF3316A4236A7163EC31* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void MultibuyHandler/<FindMax>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFindMaxU3Ed__12_System_IDisposable_Dispose_m5D1718301C96935755B8A8B719FD3FEE482D1522 (U3CFindMaxU3Ed__12_tD6D56652A3B16D3AB5A9DF3316A4236A7163EC31* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean MultibuyHandler/<FindMax>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFindMaxU3Ed__12_MoveNext_mC6E59A1D52FBDC6E755BB35C89D41DE58B4BE831 (U3CFindMaxU3Ed__12_tD6D56652A3B16D3AB5A9DF3316A4236A7163EC31* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGrog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE_mFB69D395569B0895C5375A73C4B1A06FE504974C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MultibuyHandler_tB4F2F1A72D5AB705DED8274527981E6EE0594BAC* V_1 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_2 = NULL;
	int32_t V_3 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_4 = NULL;
	bool V_5 = false;
	double V_6 = 0.0;
	int32_t V_7 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		MultibuyHandler_tB4F2F1A72D5AB705DED8274527981E6EE0594BAC* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003c;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_014a;
	}

IL_0023:
	{
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// foreach(GameObject g in PH.GetComponent<PlayerHandler>().GrogsButton)
		MultibuyHandler_tB4F2F1A72D5AB705DED8274527981E6EE0594BAC* L_5 = V_1;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5->___PH_6;
		NullCheck(L_6);
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_7;
		L_7 = GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D(L_6, GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D_RuntimeMethod_var);
		NullCheck(L_7);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = L_7->___GrogsButton_9;
		V_2 = L_8;
		V_3 = 0;
		goto IL_0141;
	}

IL_005b:
	{
		// foreach(GameObject g in PH.GetComponent<PlayerHandler>().GrogsButton)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_9 = V_2;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_4 = L_12;
		// bool x = true;
		V_5 = (bool)1;
		// double Upcost = 0;
		V_6 = (0.0);
		// int repeats = 0;
		V_7 = 0;
		goto IL_0110;
	}

IL_0076:
	{
		// if(g.GetComponent<ButtonGrog>().found)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_4;
		NullCheck(L_13);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_14;
		L_14 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_13, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_14);
		bool L_15 = L_14->___found_14;
		if (!L_15)
		{
			goto IL_0110;
		}
	}
	{
		// Upcost += g.GetComponent<ButtonGrog>().grog.GetComponent<Grog>().cost*(Mathf.Pow((float) g.GetComponent<ButtonGrog>().grog.GetComponent<Grog>().upgradeCostMult,(g.GetComponent<ButtonGrog>().currentLevel+repeats)));
		double L_16 = V_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = V_4;
		NullCheck(L_17);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_18;
		L_18 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_17, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_18);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = L_18->___grog_4;
		NullCheck(L_19);
		Grog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE* L_20;
		L_20 = GameObject_GetComponent_TisGrog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE_mFB69D395569B0895C5375A73C4B1A06FE504974C(L_19, GameObject_GetComponent_TisGrog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE_mFB69D395569B0895C5375A73C4B1A06FE504974C_RuntimeMethod_var);
		NullCheck(L_20);
		double L_21 = L_20->___cost_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = V_4;
		NullCheck(L_22);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_23;
		L_23 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_22, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_23);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = L_23->___grog_4;
		NullCheck(L_24);
		Grog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE* L_25;
		L_25 = GameObject_GetComponent_TisGrog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE_mFB69D395569B0895C5375A73C4B1A06FE504974C(L_24, GameObject_GetComponent_TisGrog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE_mFB69D395569B0895C5375A73C4B1A06FE504974C_RuntimeMethod_var);
		NullCheck(L_25);
		double L_26 = L_25->___upgradeCostMult_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = V_4;
		NullCheck(L_27);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_28;
		L_28 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_27, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_28);
		int32_t L_29 = L_28->___currentLevel_7;
		int32_t L_30 = V_7;
		float L_31;
		L_31 = powf(((float)L_26), ((float)((int32_t)il2cpp_codegen_add(L_29, L_30))));
		V_6 = ((double)il2cpp_codegen_add(L_16, ((double)il2cpp_codegen_multiply(L_21, ((double)L_31)))));
		// if(PH.GetComponent<PlayerHandler>().gold < Upcost)
		MultibuyHandler_tB4F2F1A72D5AB705DED8274527981E6EE0594BAC* L_32 = V_1;
		NullCheck(L_32);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = L_32->___PH_6;
		NullCheck(L_33);
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_34;
		L_34 = GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D(L_33, GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D_RuntimeMethod_var);
		NullCheck(L_34);
		double L_35 = L_34->___gold_6;
		double L_36 = V_6;
		if ((!(((double)L_35) < ((double)L_36))))
		{
			goto IL_010a;
		}
	}
	{
		// x = false;
		V_5 = (bool)0;
		// if(repeats == 0)
		int32_t L_37 = V_7;
		if (L_37)
		{
			goto IL_00fa;
		}
	}
	{
		// g.GetComponent<ButtonGrog>().multiPlier = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = V_4;
		NullCheck(L_38);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_39;
		L_39 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_38, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_39);
		L_39->___multiPlier_12 = 1;
		goto IL_0110;
	}

IL_00fa:
	{
		// g.GetComponent<ButtonGrog>().multiPlier = repeats;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = V_4;
		NullCheck(L_40);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_41;
		L_41 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_40, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		int32_t L_42 = V_7;
		NullCheck(L_41);
		L_41->___multiPlier_12 = L_42;
		goto IL_0110;
	}

IL_010a:
	{
		// repeats++;
		int32_t L_43 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_0110:
	{
		// while(x)
		bool L_44 = V_5;
		if (L_44)
		{
			goto IL_0076;
		}
	}
	{
		// if(g.GetComponent<ButtonGrog>().found)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45 = V_4;
		NullCheck(L_45);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_46;
		L_46 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_45, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_46);
		bool L_47 = L_46->___found_14;
		if (!L_47)
		{
			goto IL_013d;
		}
	}
	{
		// g.GetComponent<ButtonGrog>().UpdateCost();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = V_4;
		NullCheck(L_48);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_49;
		L_49 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_48, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_49);
		ButtonGrog_UpdateCost_m7062E0D3D739B742C5BF940BE11C12E3F8D2BF7E(L_49, NULL);
		// g.GetComponent<ButtonGrog>().priceUpdate();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50 = V_4;
		NullCheck(L_50);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_51;
		L_51 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_50, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_51);
		ButtonGrog_priceUpdate_m4B400234A6B14DB0C94529092C7BABAD065875B5(L_51, NULL);
	}

IL_013d:
	{
		int32_t L_52 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_52, 1));
	}

IL_0141:
	{
		// foreach(GameObject g in PH.GetComponent<PlayerHandler>().GrogsButton)
		int32_t L_53 = V_3;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_54 = V_2;
		NullCheck(L_54);
		if ((((int32_t)L_53) < ((int32_t)((int32_t)(((RuntimeArray*)L_54)->max_length)))))
		{
			goto IL_005b;
		}
	}

IL_014a:
	{
		// while(max)
		MultibuyHandler_tB4F2F1A72D5AB705DED8274527981E6EE0594BAC* L_55 = V_1;
		NullCheck(L_55);
		bool L_56 = L_55->___max_7;
		if (L_56)
		{
			goto IL_0023;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object MultibuyHandler/<FindMax>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFindMaxU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m86AB369F886BF50CB193FD34F265A740D798D2E2 (U3CFindMaxU3Ed__12_tD6D56652A3B16D3AB5A9DF3316A4236A7163EC31* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void MultibuyHandler/<FindMax>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFindMaxU3Ed__12_System_Collections_IEnumerator_Reset_m3551432566F5AC7F804C581B8CF3F120D46770E9 (U3CFindMaxU3Ed__12_tD6D56652A3B16D3AB5A9DF3316A4236A7163EC31* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFindMaxU3Ed__12_System_Collections_IEnumerator_Reset_m3551432566F5AC7F804C581B8CF3F120D46770E9_RuntimeMethod_var)));
	}
}
// System.Object MultibuyHandler/<FindMax>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFindMaxU3Ed__12_System_Collections_IEnumerator_get_Current_mDE7677FD605941621C2F88930AC280E31595D590 (U3CFindMaxU3Ed__12_tD6D56652A3B16D3AB5A9DF3316A4236A7163EC31* __this, const RuntimeMethod* method) 
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
// System.Void MusicMan::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicMan_Start_m8F1C637780471D7007AD30ADFA45ED7BB436A98B (MusicMan_t6346202AFD0AA19F471F430BB839033B8A2BEFED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F5FD870291A9070FD9EF78BF6B827EDFB57EA60);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EH = GameObject.Find("EncounterHandler");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral4F5FD870291A9070FD9EF78BF6B827EDFB57EA60, NULL);
		__this->___EH_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EH_4), (void*)L_0);
		// songIndex = 0;
		__this->___songIndex_6 = 0;
		// }
		return;
	}
}
// System.Void MusicMan::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicMan_Update_m77A2C434A67414026FAFC909E2D372AE3FAD7C8B (MusicMan_t6346202AFD0AA19F471F430BB839033B8A2BEFED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4_m4A2003BB8153D52192A006D81119F3685D144594_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53A826C5CB1AA9FCCD2A1F87FE7808D95367F836);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(EH.GetComponent<EncounterHandler>().currentWorld.worldIndex == 1)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___EH_4;
		NullCheck(L_0);
		EncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4* L_1;
		L_1 = GameObject_GetComponent_TisEncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4_m4A2003BB8153D52192A006D81119F3685D144594(L_0, GameObject_GetComponent_TisEncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4_m4A2003BB8153D52192A006D81119F3685D144594_RuntimeMethod_var);
		NullCheck(L_1);
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_2 = L_1->___currentWorld_4;
		NullCheck(L_2);
		int32_t L_3 = L_2->___worldIndex_13;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_005d;
		}
	}
	{
		// songIndex = 1;
		__this->___songIndex_6 = 1;
		// if(gameObject.GetComponent<AudioSource>().clip == songs[songIndex])
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_4);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5;
		L_5 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_4, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		NullCheck(L_5);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_6;
		L_6 = AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE(L_5, NULL);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_7 = __this->___songs_5;
		int32_t L_8 = __this->___songIndex_6;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_6, L_10, NULL);
		if (L_11)
		{
			goto IL_00f8;
		}
	}
	{
		// gameObject.GetComponent<Animator>().SetBool("Fade",true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_12);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_13;
		L_13 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_12, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		NullCheck(L_13);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_13, _stringLiteral53A826C5CB1AA9FCCD2A1F87FE7808D95367F836, (bool)1, NULL);
		return;
	}

IL_005d:
	{
		// else if(EH.GetComponent<EncounterHandler>().currentWorld.worldIndex == 4)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___EH_4;
		NullCheck(L_14);
		EncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4* L_15;
		L_15 = GameObject_GetComponent_TisEncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4_m4A2003BB8153D52192A006D81119F3685D144594(L_14, GameObject_GetComponent_TisEncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4_m4A2003BB8153D52192A006D81119F3685D144594_RuntimeMethod_var);
		NullCheck(L_15);
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_16 = L_15->___currentWorld_4;
		NullCheck(L_16);
		int32_t L_17 = L_16->___worldIndex_13;
		if ((!(((uint32_t)L_17) == ((uint32_t)4))))
		{
			goto IL_00b7;
		}
	}
	{
		// songIndex = 4;
		__this->___songIndex_6 = 4;
		// if(gameObject.GetComponent<AudioSource>().clip == songs[songIndex])
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_18);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_19;
		L_19 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_18, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		NullCheck(L_19);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_20;
		L_20 = AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE(L_19, NULL);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_21 = __this->___songs_5;
		int32_t L_22 = __this->___songIndex_6;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_20, L_24, NULL);
		if (L_25)
		{
			goto IL_00f8;
		}
	}
	{
		// gameObject.GetComponent<Animator>().SetBool("Fade",true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_26);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_27;
		L_27 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_26, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		NullCheck(L_27);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_27, _stringLiteral53A826C5CB1AA9FCCD2A1F87FE7808D95367F836, (bool)1, NULL);
		return;
	}

IL_00b7:
	{
		// songIndex = 0;
		__this->___songIndex_6 = 0;
		// if(gameObject.GetComponent<AudioSource>().clip == songs[songIndex])
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_28);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_29;
		L_29 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_28, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		NullCheck(L_29);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_30;
		L_30 = AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE(L_29, NULL);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_31 = __this->___songs_5;
		int32_t L_32 = __this->___songIndex_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_35;
		L_35 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_30, L_34, NULL);
		if (L_35)
		{
			goto IL_00f8;
		}
	}
	{
		// gameObject.GetComponent<Animator>().SetBool("Fade",true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36;
		L_36 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_36);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_37;
		L_37 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_36, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		NullCheck(L_37);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_37, _stringLiteral53A826C5CB1AA9FCCD2A1F87FE7808D95367F836, (bool)1, NULL);
	}

IL_00f8:
	{
		// }
		return;
	}
}
// System.Void MusicMan::songSwap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicMan_songSwap_m37044D9CE6966064374B15A2610C027DE80B9A5B (MusicMan_t6346202AFD0AA19F471F430BB839033B8A2BEFED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53A826C5CB1AA9FCCD2A1F87FE7808D95367F836);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObject.GetComponent<AudioSource>().clip = songs[songIndex];
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1;
		L_1 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_0, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_2 = __this->___songs_5;
		int32_t L_3 = __this->___songIndex_6;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_1);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_1, L_5, NULL);
		// gameObject.GetComponent<Animator>().SetBool("Fade",false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_6);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_7;
		L_7 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_6, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		NullCheck(L_7);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_7, _stringLiteral53A826C5CB1AA9FCCD2A1F87FE7808D95367F836, (bool)0, NULL);
		// gameObject.GetComponent<AudioSource>().Play();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_8);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_9;
		L_9 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_8, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		NullCheck(L_9);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_9, NULL);
		// }
		return;
	}
}
// System.Void MusicMan::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicMan__ctor_mDFBD283459E274384CE259CC19A5EEB2B7D6E1E9 (MusicMan_t6346202AFD0AA19F471F430BB839033B8A2BEFED* __this, const RuntimeMethod* method) 
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
// System.Void OfflineCalculate::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OfflineCalculate_OnEnable_m5C2C9F7AB0E124DF6392DD232DD4F09C72529552 (OfflineCalculate_tBC27B78FBD17348AD96A14F58E778E16AAB11EA3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGoldUpdater_tF81566509685857184CBF980E1080EB3DAAB9418_m5B744511C9687269F6CC80FB067150101703CDDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F90DDE2EFE0D8CC664ACE86AEAA0F207148164B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA5E87F9B45A5388C72F9CA939BD97128B6992A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD599EDCFBEAC503B743CEEACA9F5FF5DBE29220);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC063A23CA8B009640E1202463DC9D150D7EEF80);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PH = GameObject.Find("PlayerHandler");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralCD599EDCFBEAC503B743CEEACA9F5FF5DBE29220, NULL);
		__this->___PH_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PH_5), (void*)L_0);
		// GH = GameObject.Find("GoldHandler");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralDC063A23CA8B009640E1202463DC9D150D7EEF80, NULL);
		__this->___GH_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GH_7), (void*)L_1);
		// bodyText.text = "While you were away you earned " + GH.GetComponent<GoldUpdater>().formatGold(gold) + " Gold!";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___bodyText_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___GH_7;
		NullCheck(L_3);
		GoldUpdater_tF81566509685857184CBF980E1080EB3DAAB9418* L_4;
		L_4 = GameObject_GetComponent_TisGoldUpdater_tF81566509685857184CBF980E1080EB3DAAB9418_m5B744511C9687269F6CC80FB067150101703CDDD(L_3, GameObject_GetComponent_TisGoldUpdater_tF81566509685857184CBF980E1080EB3DAAB9418_m5B744511C9687269F6CC80FB067150101703CDDD_RuntimeMethod_var);
		double L_5 = __this->___gold_4;
		NullCheck(L_4);
		String_t* L_6;
		L_6 = GoldUpdater_formatGold_m9C9E3CF1B9BD23E558359D83B24E808419582A8F(L_4, L_5, NULL);
		String_t* L_7;
		L_7 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralBA5E87F9B45A5388C72F9CA939BD97128B6992A4, L_6, _stringLiteral9F90DDE2EFE0D8CC664ACE86AEAA0F207148164B, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_7);
		// }
		return;
	}
}
// System.Void OfflineCalculate::claim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OfflineCalculate_claim_m0663596572699117EC8F09697807A575A9C8F8FB (OfflineCalculate_tBC27B78FBD17348AD96A14F58E778E16AAB11EA3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PH.GetComponent<PlayerHandler>().gold += gold;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___PH_5;
		NullCheck(L_0);
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_1;
		L_1 = GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D(L_0, GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D_RuntimeMethod_var);
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_2 = L_1;
		NullCheck(L_2);
		double L_3 = L_2->___gold_6;
		double L_4 = __this->___gold_4;
		NullCheck(L_2);
		L_2->___gold_6 = ((double)il2cpp_codegen_add(L_3, L_4));
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void OfflineCalculate::AD()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OfflineCalculate_AD_m31FAEA2A2AB82A4D6C81FA1BE0A45461F89544AC (OfflineCalculate_tBC27B78FBD17348AD96A14F58E778E16AAB11EA3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PH.GetComponent<PlayerHandler>().gold += gold;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___PH_5;
		NullCheck(L_0);
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_1;
		L_1 = GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D(L_0, GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D_RuntimeMethod_var);
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_2 = L_1;
		NullCheck(L_2);
		double L_3 = L_2->___gold_6;
		double L_4 = __this->___gold_4;
		NullCheck(L_2);
		L_2->___gold_6 = ((double)il2cpp_codegen_add(L_3, L_4));
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void OfflineCalculate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OfflineCalculate__ctor_m06ADB52615D588415E1FAB3487C9DD778733E3F8 (OfflineCalculate_tBC27B78FBD17348AD96A14F58E778E16AAB11EA3* __this, const RuntimeMethod* method) 
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
// System.Void SaveData::.ctor(PlayerHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveData__ctor_m4B7008D3AD212ABA0F77A2E039FA6F3E7530FB22 (SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* __this, PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* ___PH0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGrogItem_tF4D3621CD5ECE7D32F1FDC3D8BA2D96CC491B299_mCBF443CBEE1188E7B637701814CF53431D529B55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisWorldButtonBuy_t740725B75DEF251588CA3D7221D5964B21762B24_mD93D2DD5171EEE3589EFCCAA9DB3A586DFEF41C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_3;
	memset((&V_3), 0, sizeof(V_3));
	int64_t V_4 = 0;
	{
		// public SaveData(PlayerHandler PH)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// WorldBoughts = new bool[PH.WorldsButton.Length];
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_0 = ___PH0;
		NullCheck(L_0);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = L_0->___WorldsButton_8;
		NullCheck(L_1);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_2 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)));
		__this->___WorldBoughts_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WorldBoughts_0), (void*)L_2);
		// enemiesKilled = new int[PH.WorldsButton.Length];
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_3 = ___PH0;
		NullCheck(L_3);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_4 = L_3->___WorldsButton_8;
		NullCheck(L_4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)));
		__this->___enemiesKilled_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enemiesKilled_1), (void*)L_5);
		// GrogLevel = new int[PH.GrogsButton.Length];
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_6 = ___PH0;
		NullCheck(L_6);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = L_6->___GrogsButton_9;
		NullCheck(L_7);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)));
		__this->___GrogLevel_2 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GrogLevel_2), (void*)L_8);
		// GrogDiscovered = new bool[PH.GrogsButton.Length];
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_9 = ___PH0;
		NullCheck(L_9);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_10 = L_9->___GrogsButton_9;
		NullCheck(L_10);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_11 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)));
		__this->___GrogDiscovered_3 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GrogDiscovered_3), (void*)L_11);
		// GrogFound = new bool[PH.GrogsButton.Length];
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_12 = ___PH0;
		NullCheck(L_12);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_13 = L_12->___GrogsButton_9;
		NullCheck(L_13);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_14 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)));
		__this->___GrogFound_4 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GrogFound_4), (void*)L_14);
		// ItemsFound = new bool[PH.ItemSlots.Length];
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_15 = ___PH0;
		NullCheck(L_15);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_16 = L_15->___ItemSlots_10;
		NullCheck(L_16);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_17 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)));
		__this->___ItemsFound_5 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ItemsFound_5), (void*)L_17);
		// for(int i = 0; i < PH.WorldsButton.Length;i++)
		V_0 = 0;
		goto IL_00b9;
	}

IL_007c:
	{
		// WorldBoughts[i] = PH.WorldsButton[i].GetComponent<WorldButtonBuy>().bought;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_18 = __this->___WorldBoughts_0;
		int32_t L_19 = V_0;
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_20 = ___PH0;
		NullCheck(L_20);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_21 = L_20->___WorldsButton_8;
		int32_t L_22 = V_0;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_24);
		WorldButtonBuy_t740725B75DEF251588CA3D7221D5964B21762B24* L_25;
		L_25 = GameObject_GetComponent_TisWorldButtonBuy_t740725B75DEF251588CA3D7221D5964B21762B24_mD93D2DD5171EEE3589EFCCAA9DB3A586DFEF41C9(L_24, GameObject_GetComponent_TisWorldButtonBuy_t740725B75DEF251588CA3D7221D5964B21762B24_mD93D2DD5171EEE3589EFCCAA9DB3A586DFEF41C9_RuntimeMethod_var);
		NullCheck(L_25);
		bool L_26 = L_25->___bought_7;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (bool)L_26);
		// enemiesKilled[i] = PH.WorldsButton[i].GetComponent<WorldButtonBuy>().world.enemiesKilled;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = __this->___enemiesKilled_1;
		int32_t L_28 = V_0;
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_29 = ___PH0;
		NullCheck(L_29);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_30 = L_29->___WorldsButton_8;
		int32_t L_31 = V_0;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_33);
		WorldButtonBuy_t740725B75DEF251588CA3D7221D5964B21762B24* L_34;
		L_34 = GameObject_GetComponent_TisWorldButtonBuy_t740725B75DEF251588CA3D7221D5964B21762B24_mD93D2DD5171EEE3589EFCCAA9DB3A586DFEF41C9(L_33, GameObject_GetComponent_TisWorldButtonBuy_t740725B75DEF251588CA3D7221D5964B21762B24_mD93D2DD5171EEE3589EFCCAA9DB3A586DFEF41C9_RuntimeMethod_var);
		NullCheck(L_34);
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_35 = L_34->___world_4;
		NullCheck(L_35);
		int32_t L_36 = L_35->___enemiesKilled_6;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int32_t)L_36);
		// for(int i = 0; i < PH.WorldsButton.Length;i++)
		int32_t L_37 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00b9:
	{
		// for(int i = 0; i < PH.WorldsButton.Length;i++)
		int32_t L_38 = V_0;
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_39 = ___PH0;
		NullCheck(L_39);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_40 = L_39->___WorldsButton_8;
		NullCheck(L_40);
		if ((((int32_t)L_38) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_007c;
		}
	}
	{
		// for(int i = 0; i < PH.GrogsButton.Length;i++)
		V_1 = 0;
		goto IL_011a;
	}

IL_00c8:
	{
		// GrogLevel[i] = PH.GrogsButton[i].GetComponent<ButtonGrog>().currentLevel;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = __this->___GrogLevel_2;
		int32_t L_42 = V_1;
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_43 = ___PH0;
		NullCheck(L_43);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_44 = L_43->___GrogsButton_9;
		int32_t L_45 = V_1;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		NullCheck(L_47);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_48;
		L_48 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_47, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_48);
		int32_t L_49 = L_48->___currentLevel_7;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(L_42), (int32_t)L_49);
		// GrogDiscovered[i] = PH.GrogsButton[i].GetComponent<ButtonGrog>().discovered;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_50 = __this->___GrogDiscovered_3;
		int32_t L_51 = V_1;
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_52 = ___PH0;
		NullCheck(L_52);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_53 = L_52->___GrogsButton_9;
		int32_t L_54 = V_1;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		NullCheck(L_56);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_57;
		L_57 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_56, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_57);
		bool L_58 = L_57->___discovered_13;
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(L_51), (bool)L_58);
		// GrogFound[i] = PH.GrogsButton[i].GetComponent<ButtonGrog>().found;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_59 = __this->___GrogFound_4;
		int32_t L_60 = V_1;
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_61 = ___PH0;
		NullCheck(L_61);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_62 = L_61->___GrogsButton_9;
		int32_t L_63 = V_1;
		NullCheck(L_62);
		int32_t L_64 = L_63;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_65);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_66;
		L_66 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_65, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_66);
		bool L_67 = L_66->___found_14;
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(L_60), (bool)L_67);
		// for(int i = 0; i < PH.GrogsButton.Length;i++)
		int32_t L_68 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_68, 1));
	}

IL_011a:
	{
		// for(int i = 0; i < PH.GrogsButton.Length;i++)
		int32_t L_69 = V_1;
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_70 = ___PH0;
		NullCheck(L_70);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_71 = L_70->___GrogsButton_9;
		NullCheck(L_71);
		if ((((int32_t)L_69) < ((int32_t)((int32_t)(((RuntimeArray*)L_71)->max_length)))))
		{
			goto IL_00c8;
		}
	}
	{
		// for(int i = 0; i < PH.ItemSlots.Length;i++)
		V_2 = 0;
		goto IL_0147;
	}

IL_0129:
	{
		// ItemsFound[i] = PH.ItemSlots[i].GetComponent<GrogItem>().found;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_72 = __this->___ItemsFound_5;
		int32_t L_73 = V_2;
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_74 = ___PH0;
		NullCheck(L_74);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_75 = L_74->___ItemSlots_10;
		int32_t L_76 = V_2;
		NullCheck(L_75);
		int32_t L_77 = L_76;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		NullCheck(L_78);
		GrogItem_tF4D3621CD5ECE7D32F1FDC3D8BA2D96CC491B299* L_79;
		L_79 = GameObject_GetComponent_TisGrogItem_tF4D3621CD5ECE7D32F1FDC3D8BA2D96CC491B299_mCBF443CBEE1188E7B637701814CF53431D529B55(L_78, GameObject_GetComponent_TisGrogItem_tF4D3621CD5ECE7D32F1FDC3D8BA2D96CC491B299_mCBF443CBEE1188E7B637701814CF53431D529B55_RuntimeMethod_var);
		NullCheck(L_79);
		bool L_80 = L_79->___found_4;
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(L_73), (bool)L_80);
		// for(int i = 0; i < PH.ItemSlots.Length;i++)
		int32_t L_81 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_81, 1));
	}

IL_0147:
	{
		// for(int i = 0; i < PH.ItemSlots.Length;i++)
		int32_t L_82 = V_2;
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_83 = ___PH0;
		NullCheck(L_83);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_84 = L_83->___ItemSlots_10;
		NullCheck(L_84);
		if ((((int32_t)L_82) < ((int32_t)((int32_t)(((RuntimeArray*)L_84)->max_length)))))
		{
			goto IL_0129;
		}
	}
	{
		// this.Gold = PH.gold.ToString();
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_85 = ___PH0;
		NullCheck(L_85);
		double* L_86 = (&L_85->___gold_6);
		String_t* L_87;
		L_87 = Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339(L_86, NULL);
		__this->___Gold_6 = L_87;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Gold_6), (void*)L_87);
		// this.currentTime = System.DateTime.Now.ToBinary().ToString();
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_88;
		L_88 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_3 = L_88;
		int64_t L_89;
		L_89 = DateTime_ToBinary_m14CAC5CF45E58602ACDE00DF41A200CCAA79C445((&V_3), NULL);
		V_4 = L_89;
		String_t* L_90;
		L_90 = Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B((&V_4), NULL);
		__this->___currentTime_7 = L_90;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentTime_7), (void*)L_90);
		// }
		return;
	}
}
// System.String SaveData::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SaveData_ToString_m42C774616FEBDB4A265C72879A21A6536BCEDAC0 (SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AD4B511976697D770C74EC91B0463E704168D73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral398FAFE7B6290F7F0054092DA46288E028440E76);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B356B1B1996D6D107B522F170DC7FBF5A5FE225);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA543D44D23D22187BB8387DC641127F62247B59);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// string output = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// output += "CurrentTime"+currentTime;
		String_t* L_0 = V_0;
		String_t* L_1 = __this->___currentTime_7;
		String_t* L_2;
		L_2 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_0, _stringLiteralFA543D44D23D22187BB8387DC641127F62247B59, L_1, NULL);
		V_0 = L_2;
		// output += "\nGold" + Gold;
		String_t* L_3 = V_0;
		String_t* L_4 = __this->___Gold_6;
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_3, _stringLiteral398FAFE7B6290F7F0054092DA46288E028440E76, L_4, NULL);
		V_0 = L_5;
		// output += "\nGrogs\n";
		String_t* L_6 = V_0;
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_6, _stringLiteral3B356B1B1996D6D107B522F170DC7FBF5A5FE225, NULL);
		V_0 = L_7;
		// for(int i = 0; i < GrogLevel.Length; i++)
		V_1 = 0;
		goto IL_00a2;
	}

IL_003a:
	{
		// output += "\n" + GrogLevel[i] + " " + GrogDiscovered[i]+" "+ GrogFound[i];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		String_t* L_10 = V_0;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_9;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->___GrogLevel_2;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		String_t* L_15;
		L_15 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14))), NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_15);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_12;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_18 = __this->___GrogDiscovered_3;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		String_t* L_20;
		L_20 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63(((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19))), NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_20);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_17;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_21;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_23 = __this->___GrogFound_4;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		String_t* L_25;
		L_25 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63(((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24))), NULL);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_25);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_25);
		String_t* L_26;
		L_26 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_22, NULL);
		V_0 = L_26;
		// for(int i = 0; i < GrogLevel.Length; i++)
		int32_t L_27 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_00a2:
	{
		// for(int i = 0; i < GrogLevel.Length; i++)
		int32_t L_28 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = __this->___GrogLevel_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_003a;
		}
	}
	{
		// output += "\nWorlds\n";
		String_t* L_30 = V_0;
		String_t* L_31;
		L_31 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_30, _stringLiteral1AD4B511976697D770C74EC91B0463E704168D73, NULL);
		V_0 = L_31;
		// for(int i = 0; i < WorldBoughts.Length; i++)
		V_2 = 0;
		goto IL_0109;
	}

IL_00bd:
	{
		// output += "\n" + WorldBoughts[i] + " " + enemiesKilled[i];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_32 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = L_32;
		String_t* L_34 = V_0;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_34);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_34);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = L_33;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = L_35;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_37 = __this->___WorldBoughts_0;
		int32_t L_38 = V_2;
		NullCheck(L_37);
		String_t* L_39;
		L_39 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63(((L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_38))), NULL);
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_39);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_39);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = L_36;
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_41 = L_40;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = __this->___enemiesKilled_1;
		int32_t L_43 = V_2;
		NullCheck(L_42);
		String_t* L_44;
		L_44 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(((L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_43))), NULL);
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_44);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_44);
		String_t* L_45;
		L_45 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_41, NULL);
		V_0 = L_45;
		// for(int i = 0; i < WorldBoughts.Length; i++)
		int32_t L_46 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_0109:
	{
		// for(int i = 0; i < WorldBoughts.Length; i++)
		int32_t L_47 = V_2;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_48 = __this->___WorldBoughts_0;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_00bd;
		}
	}
	{
		// return output;
		String_t* L_49 = V_0;
		return L_49;
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
// System.Void ButtonGrog::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonGrog_Awake_mBE839D563D556697A88A7C24B442B786945E1FEE (ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF352EDB39365CCEFFC79049D9420747A599110D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD599EDCFBEAC503B743CEEACA9F5FF5DBE29220);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC063A23CA8B009640E1202463DC9D150D7EEF80);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GoldFormatter = GameObject.Find("GoldHandler");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralDC063A23CA8B009640E1202463DC9D150D7EEF80, NULL);
		__this->___GoldFormatter_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GoldFormatter_11), (void*)L_0);
		// grogArea = GameObject.Find("GrogArea");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralAF352EDB39365CCEFFC79049D9420747A599110D, NULL);
		__this->___grogArea_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___grogArea_8), (void*)L_1);
		// player = GameObject.Find("PlayerHandler");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralCD599EDCFBEAC503B743CEEACA9F5FF5DBE29220, NULL);
		__this->___player_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_10), (void*)L_2);
		// }
		return;
	}
}
// System.Void ButtonGrog::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonGrog_Start_m06CE102F37A9B9C70016EFAE35CBB1BA0913278E (ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8ED24A309154ACD4CB2CE4DF7584C8EAB0B2BEFD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartCoroutine("UpdatePrice");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_0;
		L_0 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteral8ED24A309154ACD4CB2CE4DF7584C8EAB0B2BEFD, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator ButtonGrog::UpdatePrice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ButtonGrog_UpdatePrice_mBB596C1AAB4BE35A5D1C13B9A2176E2F9E16E55D (ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CUpdatePriceU3Ed__19_tF9142A372BC72155C085AFF250EDD75667B01ACA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CUpdatePriceU3Ed__19_tF9142A372BC72155C085AFF250EDD75667B01ACA* L_0 = (U3CUpdatePriceU3Ed__19_tF9142A372BC72155C085AFF250EDD75667B01ACA*)il2cpp_codegen_object_new(U3CUpdatePriceU3Ed__19_tF9142A372BC72155C085AFF250EDD75667B01ACA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CUpdatePriceU3Ed__19__ctor_m0166754362569DB6D84ACAB9AFF9A74A8398E286(L_0, 0, NULL);
		U3CUpdatePriceU3Ed__19_tF9142A372BC72155C085AFF250EDD75667B01ACA* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void ButtonGrog::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonGrog_Update_m0DB962EEFA37522C5E3FC3E7628998BE0D27ECF0 (ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpawnGrog_tF9FA499BCB26222A68D537136982C341A8DBD649_mB032FA4FE82B8F5BB29BBD873CA52913A8C9A4C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF475C40B66CDDEC9B385F4B9DDBBD87798470EA5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(spawnOnSave)
		bool L_0 = __this->___spawnOnSave_9;
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		// grog = grogArea.GetComponent<SpawnGrog>().SpawnTheGrog(grog,this);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___grogArea_8;
		NullCheck(L_1);
		SpawnGrog_tF9FA499BCB26222A68D537136982C341A8DBD649* L_2;
		L_2 = GameObject_GetComponent_TisSpawnGrog_tF9FA499BCB26222A68D537136982C341A8DBD649_mB032FA4FE82B8F5BB29BBD873CA52913A8C9A4C6(L_1, GameObject_GetComponent_TisSpawnGrog_tF9FA499BCB26222A68D537136982C341A8DBD649_mB032FA4FE82B8F5BB29BBD873CA52913A8C9A4C6_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___grog_4;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = SpawnGrog_SpawnTheGrog_m783D3A949A4DC867A9C87A271096F288F1B50A41(L_2, L_3, __this, NULL);
		__this->___grog_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___grog_4), (void*)L_4);
		// desc.descFormatter();
		GrogDesc_t056DE5EA6E86F649972FF8A0F672ADF89652D697* L_5 = __this->___desc_6;
		NullCheck(L_5);
		GrogDesc_descFormatter_m3113C63B11808AA6E28465AF36FE58DBFB40548B(L_5, NULL);
		// spawnOnSave = false;
		__this->___spawnOnSave_9 = (bool)0;
	}

IL_0037:
	{
		// if(!discovered)
		bool L_6 = __this->___discovered_13;
		if (L_6)
		{
			goto IL_008f;
		}
	}
	{
		// if(player.GetComponent<PlayerHandler>().gold >= Upcost)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___player_10;
		NullCheck(L_7);
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_8;
		L_8 = GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D(L_7, GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D_RuntimeMethod_var);
		NullCheck(L_8);
		double L_9 = L_8->___gold_6;
		double L_10 = __this->___Upcost_15;
		if ((!(((double)L_9) >= ((double)L_10))))
		{
			goto IL_005f;
		}
	}
	{
		// discover();
		ButtonGrog_discover_m7337A1528746B6FF3E7318046D04429380C9D1B3(__this, NULL);
		goto IL_008f;
	}

IL_005f:
	{
		// Title.text = "???";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = __this->___Title_17;
		NullCheck(L_11);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, _stringLiteralF475C40B66CDDEC9B385F4B9DDBBD87798470EA5);
		// d.text = "???";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = __this->___d_19;
		NullCheck(L_12);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, _stringLiteralF475C40B66CDDEC9B385F4B9DDBBD87798470EA5);
		// thumbnail.color = Color.black;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_13 = __this->___thumbnail_20;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14;
		L_14 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		NullCheck(L_13);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_13, L_14);
	}

IL_008f:
	{
		// if(player.GetComponent<PlayerHandler>().gold >= Upcost)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___player_10;
		NullCheck(L_15);
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_16;
		L_16 = GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D(L_15, GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D_RuntimeMethod_var);
		NullCheck(L_16);
		double L_17 = L_16->___gold_6;
		double L_18 = __this->___Upcost_15;
		if ((!(((double)L_17) >= ((double)L_18))))
		{
			goto IL_00bd;
		}
	}
	{
		// gameObject.GetComponent<Image>().color =  Color.yellow;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_19);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_20;
		L_20 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_19, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21;
		L_21 = Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline(NULL);
		NullCheck(L_20);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_20, L_21);
		return;
	}

IL_00bd:
	{
		// gameObject.GetComponent<Image>().color =  Color.grey;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_22);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_23;
		L_23 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_22, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24;
		L_24 = Color_get_grey_m1CE6BEDA3EF8569E939F77A4B0231D9839864F92_inline(NULL);
		NullCheck(L_23);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_23, L_24);
		// }
		return;
	}
}
// System.Void ButtonGrog::discover()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonGrog_discover_m7337A1528746B6FF3E7318046D04429380C9D1B3 (ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* __this, const RuntimeMethod* method) 
{
	{
		// Title.text = title;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___Title_17;
		String_t* L_1 = __this->___title_16;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// d.text = description;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___d_19;
		String_t* L_3 = __this->___description_18;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
		// thumbnail.color = Color.white;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___thumbnail_20;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_5);
		// discovered = true;
		__this->___discovered_13 = (bool)1;
		// }
		return;
	}
}
// System.Void ButtonGrog::onClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonGrog_onClick_mFB7553848FAB5CB189A6500B5238D61AFBB5D2AC (ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGrog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE_mFB69D395569B0895C5375A73C4B1A06FE504974C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpawnGrog_tF9FA499BCB26222A68D537136982C341A8DBD649_mB032FA4FE82B8F5BB29BBD873CA52913A8C9A4C6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if(currentLevel == 0)
		int32_t L_0 = __this->___currentLevel_7;
		if (L_0)
		{
			goto IL_00c1;
		}
	}
	{
		// if(player.GetComponent<PlayerHandler>().gold >= Upcost)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___player_10;
		NullCheck(L_1);
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_2;
		L_2 = GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D(L_1, GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D_RuntimeMethod_var);
		NullCheck(L_2);
		double L_3 = L_2->___gold_6;
		double L_4 = __this->___Upcost_15;
		if ((!(((double)L_3) >= ((double)L_4))))
		{
			goto IL_00c0;
		}
	}
	{
		// currentLevel++;
		int32_t L_5 = __this->___currentLevel_7;
		__this->___currentLevel_7 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// grog = grogArea.GetComponent<SpawnGrog>().SpawnTheGrog(grog,this);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___grogArea_8;
		NullCheck(L_6);
		SpawnGrog_tF9FA499BCB26222A68D537136982C341A8DBD649* L_7;
		L_7 = GameObject_GetComponent_TisSpawnGrog_tF9FA499BCB26222A68D537136982C341A8DBD649_mB032FA4FE82B8F5BB29BBD873CA52913A8C9A4C6(L_6, GameObject_GetComponent_TisSpawnGrog_tF9FA499BCB26222A68D537136982C341A8DBD649_mB032FA4FE82B8F5BB29BBD873CA52913A8C9A4C6_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___grog_4;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = SpawnGrog_SpawnTheGrog_m783D3A949A4DC867A9C87A271096F288F1B50A41(L_7, L_8, __this, NULL);
		__this->___grog_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___grog_4), (void*)L_9);
		// player.GetComponent<PlayerHandler>().gold -= Upcost;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___player_10;
		NullCheck(L_10);
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_11;
		L_11 = GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D(L_10, GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D_RuntimeMethod_var);
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_12 = L_11;
		NullCheck(L_12);
		double L_13 = L_12->___gold_6;
		double L_14 = __this->___Upcost_15;
		NullCheck(L_12);
		L_12->___gold_6 = ((double)il2cpp_codegen_subtract(L_13, L_14));
		// if(multiPlier != 1)
		int32_t L_15 = __this->___multiPlier_12;
		if ((((int32_t)L_15) == ((int32_t)1)))
		{
			goto IL_00a8;
		}
	}
	{
		// for(int i = 0; i < multiPlier-1;i++)
		V_0 = 0;
		goto IL_009d;
	}

IL_007b:
	{
		// grog.GetComponent<Grog>().onUpgrade();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___grog_4;
		NullCheck(L_16);
		Grog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE* L_17;
		L_17 = GameObject_GetComponent_TisGrog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE_mFB69D395569B0895C5375A73C4B1A06FE504974C(L_16, GameObject_GetComponent_TisGrog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE_mFB69D395569B0895C5375A73C4B1A06FE504974C_RuntimeMethod_var);
		NullCheck(L_17);
		Grog_onUpgrade_m8E9832040C31BEF4CA9D4CB6D97FE7BDD1677EA5(L_17, NULL);
		// currentLevel++;
		int32_t L_18 = __this->___currentLevel_7;
		__this->___currentLevel_7 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		// for(int i = 0; i < multiPlier-1;i++)
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_009d:
	{
		// for(int i = 0; i < multiPlier-1;i++)
		int32_t L_20 = V_0;
		int32_t L_21 = __this->___multiPlier_12;
		if ((((int32_t)L_20) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_21, 1)))))
		{
			goto IL_007b;
		}
	}

IL_00a8:
	{
		// UpdateCost();
		ButtonGrog_UpdateCost_m7062E0D3D739B742C5BF940BE11C12E3F8D2BF7E(__this, NULL);
		// priceUpdate();
		ButtonGrog_priceUpdate_m4B400234A6B14DB0C94529092C7BABAD065875B5(__this, NULL);
		// desc.descFormatter();
		GrogDesc_t056DE5EA6E86F649972FF8A0F672ADF89652D697* L_22 = __this->___desc_6;
		NullCheck(L_22);
		GrogDesc_descFormatter_m3113C63B11808AA6E28465AF36FE58DBFB40548B(L_22, NULL);
		return;
	}

IL_00c0:
	{
		// return;
		return;
	}

IL_00c1:
	{
		// else if(player.GetComponent<PlayerHandler>().gold >= Upcost)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___player_10;
		NullCheck(L_23);
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_24;
		L_24 = GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D(L_23, GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D_RuntimeMethod_var);
		NullCheck(L_24);
		double L_25 = L_24->___gold_6;
		double L_26 = __this->___Upcost_15;
		if ((!(((double)L_25) >= ((double)L_26))))
		{
			goto IL_013c;
		}
	}
	{
		// player.GetComponent<PlayerHandler>().gold -= Upcost;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = __this->___player_10;
		NullCheck(L_27);
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_28;
		L_28 = GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D(L_27, GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D_RuntimeMethod_var);
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_29 = L_28;
		NullCheck(L_29);
		double L_30 = L_29->___gold_6;
		double L_31 = __this->___Upcost_15;
		NullCheck(L_29);
		L_29->___gold_6 = ((double)il2cpp_codegen_subtract(L_30, L_31));
		// for(int i = 0; i < multiPlier;i++)
		V_1 = 0;
		goto IL_011c;
	}

IL_00fa:
	{
		// grog.GetComponent<Grog>().onUpgrade();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = __this->___grog_4;
		NullCheck(L_32);
		Grog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE* L_33;
		L_33 = GameObject_GetComponent_TisGrog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE_mFB69D395569B0895C5375A73C4B1A06FE504974C(L_32, GameObject_GetComponent_TisGrog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE_mFB69D395569B0895C5375A73C4B1A06FE504974C_RuntimeMethod_var);
		NullCheck(L_33);
		Grog_onUpgrade_m8E9832040C31BEF4CA9D4CB6D97FE7BDD1677EA5(L_33, NULL);
		// currentLevel++;
		int32_t L_34 = __this->___currentLevel_7;
		__this->___currentLevel_7 = ((int32_t)il2cpp_codegen_add(L_34, 1));
		// for(int i = 0; i < multiPlier;i++)
		int32_t L_35 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_011c:
	{
		// for(int i = 0; i < multiPlier;i++)
		int32_t L_36 = V_1;
		int32_t L_37 = __this->___multiPlier_12;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_00fa;
		}
	}
	{
		// UpdateCost();
		ButtonGrog_UpdateCost_m7062E0D3D739B742C5BF940BE11C12E3F8D2BF7E(__this, NULL);
		// priceUpdate();
		ButtonGrog_priceUpdate_m4B400234A6B14DB0C94529092C7BABAD065875B5(__this, NULL);
		// desc.descFormatter();
		GrogDesc_t056DE5EA6E86F649972FF8A0F672ADF89652D697* L_38 = __this->___desc_6;
		NullCheck(L_38);
		GrogDesc_descFormatter_m3113C63B11808AA6E28465AF36FE58DBFB40548B(L_38, NULL);
	}

IL_013c:
	{
		// }
		return;
	}
}
// System.Void ButtonGrog::SpawnSpecialGrog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonGrog_SpawnSpecialGrog_m1FB1C5F4B891DBD3EF43B308F686C34DB0CD38AD (ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpawnGrog_tF9FA499BCB26222A68D537136982C341A8DBD649_mB032FA4FE82B8F5BB29BBD873CA52913A8C9A4C6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentLevel++;
		int32_t L_0 = __this->___currentLevel_7;
		__this->___currentLevel_7 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// grog = grogArea.GetComponent<SpawnGrog>().SpawnTheGrog(grog,this);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___grogArea_8;
		NullCheck(L_1);
		SpawnGrog_tF9FA499BCB26222A68D537136982C341A8DBD649* L_2;
		L_2 = GameObject_GetComponent_TisSpawnGrog_tF9FA499BCB26222A68D537136982C341A8DBD649_mB032FA4FE82B8F5BB29BBD873CA52913A8C9A4C6(L_1, GameObject_GetComponent_TisSpawnGrog_tF9FA499BCB26222A68D537136982C341A8DBD649_mB032FA4FE82B8F5BB29BBD873CA52913A8C9A4C6_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___grog_4;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = SpawnGrog_SpawnTheGrog_m783D3A949A4DC867A9C87A271096F288F1B50A41(L_2, L_3, __this, NULL);
		__this->___grog_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___grog_4), (void*)L_4);
		// UpdateCost();
		ButtonGrog_UpdateCost_m7062E0D3D739B742C5BF940BE11C12E3F8D2BF7E(__this, NULL);
		// priceUpdate();
		ButtonGrog_priceUpdate_m4B400234A6B14DB0C94529092C7BABAD065875B5(__this, NULL);
		// desc.descFormatter();
		GrogDesc_t056DE5EA6E86F649972FF8A0F672ADF89652D697* L_5 = __this->___desc_6;
		NullCheck(L_5);
		GrogDesc_descFormatter_m3113C63B11808AA6E28465AF36FE58DBFB40548B(L_5, NULL);
		// found = true;
		__this->___found_14 = (bool)1;
		// }
		return;
	}
}
// System.Void ButtonGrog::UpdateCost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonGrog_UpdateCost_m7062E0D3D739B742C5BF940BE11C12E3F8D2BF7E (ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGrog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE_mFB69D395569B0895C5375A73C4B1A06FE504974C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Upcost = 0;
		__this->___Upcost_15 = (0.0);
		// for(int i = 0; i < multiPlier; i++)
		V_0 = 0;
		goto IL_0055;
	}

IL_0013:
	{
		// Upcost += grog.GetComponent<Grog>().cost*(Mathf.Pow((float)grog.GetComponent<Grog>().upgradeCostMult,(currentLevel+i)));
		double L_0 = __this->___Upcost_15;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___grog_4;
		NullCheck(L_1);
		Grog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE* L_2;
		L_2 = GameObject_GetComponent_TisGrog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE_mFB69D395569B0895C5375A73C4B1A06FE504974C(L_1, GameObject_GetComponent_TisGrog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE_mFB69D395569B0895C5375A73C4B1A06FE504974C_RuntimeMethod_var);
		NullCheck(L_2);
		double L_3 = L_2->___cost_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___grog_4;
		NullCheck(L_4);
		Grog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE* L_5;
		L_5 = GameObject_GetComponent_TisGrog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE_mFB69D395569B0895C5375A73C4B1A06FE504974C(L_4, GameObject_GetComponent_TisGrog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE_mFB69D395569B0895C5375A73C4B1A06FE504974C_RuntimeMethod_var);
		NullCheck(L_5);
		double L_6 = L_5->___upgradeCostMult_9;
		int32_t L_7 = __this->___currentLevel_7;
		int32_t L_8 = V_0;
		float L_9;
		L_9 = powf(((float)L_6), ((float)((int32_t)il2cpp_codegen_add(L_7, L_8))));
		__this->___Upcost_15 = ((double)il2cpp_codegen_add(L_0, ((double)il2cpp_codegen_multiply(L_3, ((double)L_9)))));
		// for(int i = 0; i < multiPlier; i++)
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0055:
	{
		// for(int i = 0; i < multiPlier; i++)
		int32_t L_11 = V_0;
		int32_t L_12 = __this->___multiPlier_12;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0013;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ButtonGrog::priceUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonGrog_priceUpdate_m4B400234A6B14DB0C94529092C7BABAD065875B5 (ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGoldUpdater_tF81566509685857184CBF980E1080EB3DAAB9418_m5B744511C9687269F6CC80FB067150101703CDDD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Text texty = GetComponentInChildren<Text>();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0;
		L_0 = Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259(__this, Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var);
		// texty.text = GoldFormatter.GetComponent<GoldUpdater>().formatGold(Upcost);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___GoldFormatter_11;
		NullCheck(L_1);
		GoldUpdater_tF81566509685857184CBF980E1080EB3DAAB9418* L_2;
		L_2 = GameObject_GetComponent_TisGoldUpdater_tF81566509685857184CBF980E1080EB3DAAB9418_m5B744511C9687269F6CC80FB067150101703CDDD(L_1, GameObject_GetComponent_TisGoldUpdater_tF81566509685857184CBF980E1080EB3DAAB9418_m5B744511C9687269F6CC80FB067150101703CDDD_RuntimeMethod_var);
		double L_3 = __this->___Upcost_15;
		NullCheck(L_2);
		String_t* L_4;
		L_4 = GoldUpdater_formatGold_m9C9E3CF1B9BD23E558359D83B24E808419582A8F(L_2, L_3, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		// }
		return;
	}
}
// System.Void ButtonGrog::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonGrog__ctor_m01DD0F5596AFAE75E428EC4B88B0405E12C99529 (ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* __this, const RuntimeMethod* method) 
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
// System.Void ButtonGrog/<UpdatePrice>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdatePriceU3Ed__19__ctor_m0166754362569DB6D84ACAB9AFF9A74A8398E286 (U3CUpdatePriceU3Ed__19_tF9142A372BC72155C085AFF250EDD75667B01ACA* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ButtonGrog/<UpdatePrice>d__19::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdatePriceU3Ed__19_System_IDisposable_Dispose_m23CDA6C90DCC097077259EF8E51A1F377E539816 (U3CUpdatePriceU3Ed__19_tF9142A372BC72155C085AFF250EDD75667B01ACA* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ButtonGrog/<UpdatePrice>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CUpdatePriceU3Ed__19_MoveNext_m7E3AAAB2FEF9E0A32D7AADDDEFA30C65625EACE0 (U3CUpdatePriceU3Ed__19_tF9142A372BC72155C085AFF250EDD75667B01ACA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (0.100000001f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// UpdateCost();
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_5 = V_1;
		NullCheck(L_5);
		ButtonGrog_UpdateCost_m7062E0D3D739B742C5BF940BE11C12E3F8D2BF7E(L_5, NULL);
		// priceUpdate();
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_6 = V_1;
		NullCheck(L_6);
		ButtonGrog_priceUpdate_m4B400234A6B14DB0C94529092C7BABAD065875B5(L_6, NULL);
		// }
		return (bool)0;
	}
}
// System.Object ButtonGrog/<UpdatePrice>d__19::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CUpdatePriceU3Ed__19_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE58CF20254EA8EBA1B629B9CAC8D994F4A2725C4 (U3CUpdatePriceU3Ed__19_tF9142A372BC72155C085AFF250EDD75667B01ACA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ButtonGrog/<UpdatePrice>d__19::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdatePriceU3Ed__19_System_Collections_IEnumerator_Reset_mF5A0F0207A29BDF0A84A2E9CB489FC1ACB9FD5D5 (U3CUpdatePriceU3Ed__19_tF9142A372BC72155C085AFF250EDD75667B01ACA* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CUpdatePriceU3Ed__19_System_Collections_IEnumerator_Reset_mF5A0F0207A29BDF0A84A2E9CB489FC1ACB9FD5D5_RuntimeMethod_var)));
	}
}
// System.Object ButtonGrog/<UpdatePrice>d__19::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CUpdatePriceU3Ed__19_System_Collections_IEnumerator_get_Current_mB4895113FC54DA44CA5F7EECD756FEBC89AF0A8A (U3CUpdatePriceU3Ed__19_tF9142A372BC72155C085AFF250EDD75667B01ACA* __this, const RuntimeMethod* method) 
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
// System.Void ContentScaleUpdater::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContentScaleUpdater_Start_m6A6396ED8BC28260AE408EA68ADA7E6AFCE91671 (ContentScaleUpdater_t6C3EA7B498DC4CFCDCE6065A221D28ECC6F02552* __this, const RuntimeMethod* method) 
{
	{
		// Reformat();
		ContentScaleUpdater_Reformat_m377C777F753047A8C38861DED77A99CB1C9BA7CB(__this, NULL);
		// }
		return;
	}
}
// System.Void ContentScaleUpdater::Reformat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContentScaleUpdater_Reformat_m377C777F753047A8C38861DED77A99CB1C9BA7CB (ContentScaleUpdater_t6C3EA7B498DC4CFCDCE6065A221D28ECC6F02552* __this, const RuntimeMethod* method) 
{
	{
		// if(multX)
		bool L_0 = __this->___multX_8;
		if (!L_0)
		{
			goto IL_0095;
		}
	}
	{
		// if(multY)
		bool L_1 = __this->___multY_9;
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		// glg.cellSize = new Vector2(canvy.sizeDelta.x/x,canvy.sizeDelta.y/y);
		GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* L_2 = __this->___glg_5;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->___canvy_4;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_3, NULL);
		float L_5 = L_4.___x_0;
		int32_t L_6 = __this->___x_6;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = __this->___canvy_4;
		NullCheck(L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_7, NULL);
		float L_9 = L_8.___y_1;
		int32_t L_10 = __this->___y_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_11), ((float)(L_5/((float)L_6))), ((float)(L_9/((float)L_10))), /*hidden argument*/NULL);
		NullCheck(L_2);
		GridLayoutGroup_set_cellSize_m0A3FF07694BDBF52D973597978FC87B0941BE5F9(L_2, L_11, NULL);
		return;
	}

IL_0054:
	{
		// glg.cellSize = new Vector2(canvy.sizeDelta.x/x,canvy.sizeDelta.y-y);
		GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* L_12 = __this->___glg_5;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_13 = __this->___canvy_4;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_13, NULL);
		float L_15 = L_14.___x_0;
		int32_t L_16 = __this->___x_6;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_17 = __this->___canvy_4;
		NullCheck(L_17);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_17, NULL);
		float L_19 = L_18.___y_1;
		int32_t L_20 = __this->___y_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_21), ((float)(L_15/((float)L_16))), ((float)il2cpp_codegen_subtract(L_19, ((float)L_20))), /*hidden argument*/NULL);
		NullCheck(L_12);
		GridLayoutGroup_set_cellSize_m0A3FF07694BDBF52D973597978FC87B0941BE5F9(L_12, L_21, NULL);
		return;
	}

IL_0095:
	{
		// else if(multY)
		bool L_22 = __this->___multY_9;
		if (!L_22)
		{
			goto IL_00de;
		}
	}
	{
		// glg.cellSize = new Vector2(canvy.sizeDelta.x-x,canvy.sizeDelta.y/y);
		GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* L_23 = __this->___glg_5;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_24 = __this->___canvy_4;
		NullCheck(L_24);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		L_25 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_24, NULL);
		float L_26 = L_25.___x_0;
		int32_t L_27 = __this->___x_6;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_28 = __this->___canvy_4;
		NullCheck(L_28);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		L_29 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_28, NULL);
		float L_30 = L_29.___y_1;
		int32_t L_31 = __this->___y_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_32), ((float)il2cpp_codegen_subtract(L_26, ((float)L_27))), ((float)(L_30/((float)L_31))), /*hidden argument*/NULL);
		NullCheck(L_23);
		GridLayoutGroup_set_cellSize_m0A3FF07694BDBF52D973597978FC87B0941BE5F9(L_23, L_32, NULL);
		return;
	}

IL_00de:
	{
		// glg.cellSize = new Vector2(canvy.sizeDelta.x-x,canvy.sizeDelta.y-y);
		GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* L_33 = __this->___glg_5;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_34 = __this->___canvy_4;
		NullCheck(L_34);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35;
		L_35 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_34, NULL);
		float L_36 = L_35.___x_0;
		int32_t L_37 = __this->___x_6;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_38 = __this->___canvy_4;
		NullCheck(L_38);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39;
		L_39 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_38, NULL);
		float L_40 = L_39.___y_1;
		int32_t L_41 = __this->___y_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_42), ((float)il2cpp_codegen_subtract(L_36, ((float)L_37))), ((float)il2cpp_codegen_subtract(L_40, ((float)L_41))), /*hidden argument*/NULL);
		NullCheck(L_33);
		GridLayoutGroup_set_cellSize_m0A3FF07694BDBF52D973597978FC87B0941BE5F9(L_33, L_42, NULL);
		// }
		return;
	}
}
// System.Void ContentScaleUpdater::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContentScaleUpdater__ctor_m133B3E26DC7FE04F763F33A7B796690BC70D7C41 (ContentScaleUpdater_t6C3EA7B498DC4CFCDCE6065A221D28ECC6F02552* __this, const RuntimeMethod* method) 
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
// System.Void Encounter::HalfWay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encounter_HalfWay_m094D9F52BAF893E8DB608E981A6563CCB7CF60A5 (Encounter_t91211CC083B2AAE6C88D52B43FE66AE7F8E632E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4_m4A2003BB8153D52192A006D81119F3685D144594_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F5FD870291A9070FD9EF78BF6B827EDFB57EA60);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(GameObject.Find("EncounterHandler").GetComponent<EncounterHandler>().InTransition)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral4F5FD870291A9070FD9EF78BF6B827EDFB57EA60, NULL);
		NullCheck(L_0);
		EncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4* L_1;
		L_1 = GameObject_GetComponent_TisEncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4_m4A2003BB8153D52192A006D81119F3685D144594(L_0, GameObject_GetComponent_TisEncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4_m4A2003BB8153D52192A006D81119F3685D144594_RuntimeMethod_var);
		NullCheck(L_1);
		bool L_2 = L_1->___InTransition_19;
		if (!L_2)
		{
			goto IL_0055;
		}
	}
	{
		// GameObject.Find("EncounterHandler").GetComponent<EncounterHandler>().InTransition = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral4F5FD870291A9070FD9EF78BF6B827EDFB57EA60, NULL);
		NullCheck(L_3);
		EncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4* L_4;
		L_4 = GameObject_GetComponent_TisEncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4_m4A2003BB8153D52192A006D81119F3685D144594(L_3, GameObject_GetComponent_TisEncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4_m4A2003BB8153D52192A006D81119F3685D144594_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->___InTransition_19 = (bool)0;
		// GameObject.Find("EncounterHandler").GetComponent<EncounterHandler>().canDie = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral4F5FD870291A9070FD9EF78BF6B827EDFB57EA60, NULL);
		NullCheck(L_5);
		EncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4* L_6;
		L_6 = GameObject_GetComponent_TisEncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4_m4A2003BB8153D52192A006D81119F3685D144594(L_5, GameObject_GetComponent_TisEncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4_m4A2003BB8153D52192A006D81119F3685D144594_RuntimeMethod_var);
		NullCheck(L_6);
		L_6->___canDie_18 = (bool)1;
		// GameObject.Find("EncounterHandler").GetComponent<EncounterHandler>().WorldSwapHit = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral4F5FD870291A9070FD9EF78BF6B827EDFB57EA60, NULL);
		NullCheck(L_7);
		EncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4* L_8;
		L_8 = GameObject_GetComponent_TisEncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4_m4A2003BB8153D52192A006D81119F3685D144594(L_7, GameObject_GetComponent_TisEncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4_m4A2003BB8153D52192A006D81119F3685D144594_RuntimeMethod_var);
		NullCheck(L_8);
		L_8->___WorldSwapHit_21 = (bool)0;
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void Encounter::OnDelete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encounter_OnDelete_m3259CC4B39710DC7B001BB581C1553F04B0CB7FD (Encounter_t91211CC083B2AAE6C88D52B43FE66AE7F8E632E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4_m4A2003BB8153D52192A006D81119F3685D144594_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F5FD870291A9070FD9EF78BF6B827EDFB57EA60);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(!GameObject.Find("EncounterHandler").GetComponent<EncounterHandler>().InTransition)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral4F5FD870291A9070FD9EF78BF6B827EDFB57EA60, NULL);
		NullCheck(L_0);
		EncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4* L_1;
		L_1 = GameObject_GetComponent_TisEncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4_m4A2003BB8153D52192A006D81119F3685D144594(L_0, GameObject_GetComponent_TisEncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4_m4A2003BB8153D52192A006D81119F3685D144594_RuntimeMethod_var);
		NullCheck(L_1);
		bool L_2 = L_1->___InTransition_19;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		// GameObject.Find("EncounterHandler").GetComponent<EncounterHandler>().canDie = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral4F5FD870291A9070FD9EF78BF6B827EDFB57EA60, NULL);
		NullCheck(L_3);
		EncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4* L_4;
		L_4 = GameObject_GetComponent_TisEncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4_m4A2003BB8153D52192A006D81119F3685D144594(L_3, GameObject_GetComponent_TisEncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4_m4A2003BB8153D52192A006D81119F3685D144594_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->___canDie_18 = (bool)1;
	}

IL_002b:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_5, NULL);
		// }
		return;
	}
}
// System.Void Encounter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encounter__ctor_mD79100C8815EE1868BDC103C562A74A88B91233E (Encounter_t91211CC083B2AAE6C88D52B43FE66AE7F8E632E6* __this, const RuntimeMethod* method) 
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
// System.Void EncounterHandler::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncounterHandler_Awake_mAFC33CCF3F13365DE6D2A0BF9D24B5460732FB08 (EncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD599EDCFBEAC503B743CEEACA9F5FF5DBE29220);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = GameObject.Find("PlayerHandler").GetComponent<PlayerHandler>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralCD599EDCFBEAC503B743CEEACA9F5FF5DBE29220, NULL);
		NullCheck(L_0);
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_1;
		L_1 = GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D(L_0, GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D_RuntimeMethod_var);
		__this->___player_13 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_13), (void*)L_1);
		// currentWorld.currentWorld = true;
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_2 = __this->___currentWorld_4;
		NullCheck(L_2);
		L_2->___currentWorld_7 = (bool)1;
		// moveEncounters(true);
		EncounterHandler_moveEncounters_m0B6225FFD4A88788E5850E1AB3B5F0F304C2D9C4(__this, (bool)1, NULL);
		// onStart = true;
		__this->___onStart_23 = (bool)1;
		// }
		return;
	}
}
// System.Void EncounterHandler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncounterHandler_Update_mF2E1D9E34D54E4509A4512A98A9057CAA8E58DB3 (EncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEncounter_t91211CC083B2AAE6C88D52B43FE66AE7F8E632E6_m294A093D418D1950B3B849776920FCE81E065BCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F5A37283C9794F2CE9D395523761CDDA2740A56);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if(onStart)
		bool L_0 = __this->___onStart_23;
		if (!L_0)
		{
			goto IL_00bd;
		}
	}
	{
		// if(!currentEncounter.GetComponent<Encounter>().Boss)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___currentEncounter_10;
		NullCheck(L_1);
		Encounter_t91211CC083B2AAE6C88D52B43FE66AE7F8E632E6* L_2;
		L_2 = GameObject_GetComponent_TisEncounter_t91211CC083B2AAE6C88D52B43FE66AE7F8E632E6_m294A093D418D1950B3B849776920FCE81E065BCF(L_1, GameObject_GetComponent_TisEncounter_t91211CC083B2AAE6C88D52B43FE66AE7F8E632E6_m294A093D418D1950B3B849776920FCE81E065BCF_RuntimeMethod_var);
		NullCheck(L_2);
		bool L_3 = L_2->___Boss_5;
		if (L_3)
		{
			goto IL_005b;
		}
	}
	{
		// MaxHealth = currentWorld.baseHealth+(currentWorld.worldMult*Mathf.Sqrt(currentWorld.enemiesKilled));
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_4 = __this->___currentWorld_4;
		NullCheck(L_4);
		double L_5 = L_4->___baseHealth_9;
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_6 = __this->___currentWorld_4;
		NullCheck(L_6);
		double L_7 = L_6->___worldMult_10;
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_8 = __this->___currentWorld_4;
		NullCheck(L_8);
		int32_t L_9 = L_8->___enemiesKilled_6;
		float L_10;
		L_10 = sqrtf(((float)L_9));
		__this->___MaxHealth_16 = ((double)il2cpp_codegen_add(L_5, ((double)il2cpp_codegen_multiply(L_7, ((double)L_10)))));
		// Health = MaxHealth;
		double L_11 = __this->___MaxHealth_16;
		__this->___Health_15 = L_11;
		goto IL_00a3;
	}

IL_005b:
	{
		// MaxHealth = currentWorld.baseHealth+(currentWorld.worldMult*Mathf.Sqrt(currentWorld.enemiesKilled)*currentWorld.bossMult);
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_12 = __this->___currentWorld_4;
		NullCheck(L_12);
		double L_13 = L_12->___baseHealth_9;
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_14 = __this->___currentWorld_4;
		NullCheck(L_14);
		double L_15 = L_14->___worldMult_10;
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_16 = __this->___currentWorld_4;
		NullCheck(L_16);
		int32_t L_17 = L_16->___enemiesKilled_6;
		float L_18;
		L_18 = sqrtf(((float)L_17));
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_19 = __this->___currentWorld_4;
		NullCheck(L_19);
		double L_20 = L_19->___bossMult_12;
		__this->___MaxHealth_16 = ((double)il2cpp_codegen_add(L_13, ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_15, ((double)L_18))), L_20))));
		// Health = MaxHealth;
		double L_21 = __this->___MaxHealth_16;
		__this->___Health_15 = L_21;
	}

IL_00a3:
	{
		// Gold = Health;
		double L_22 = __this->___Health_15;
		__this->___Gold_17 = L_22;
		// canDie = true;
		__this->___canDie_18 = (bool)1;
		// onStart = false;
		__this->___onStart_23 = (bool)0;
	}

IL_00bd:
	{
		// if(Input.touchCount > 0)
		int32_t L_23;
		L_23 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_23) <= ((int32_t)0)))
		{
			goto IL_0127;
		}
	}
	{
		// for (int index = 0; index < Input.touchCount; index++)
		V_0 = 0;
		goto IL_011f;
	}

IL_00c9:
	{
		// Touch touch = Input.GetTouch(index);
		int32_t L_24 = V_0;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_25;
		L_25 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(L_24, NULL);
		V_1 = L_25;
		// if (touch.phase == TouchPhase.Began)
		int32_t L_26;
		L_26 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_1), NULL);
		if (L_26)
		{
			goto IL_011b;
		}
	}
	{
		// if(RectTransformUtility.RectangleContainsScreenPoint(GameObject.Find("ClickArea").GetComponent<RectTransform>(), Input.GetTouch(index).position,cam))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral0F5A37283C9794F2CE9D395523761CDDA2740A56, NULL);
		NullCheck(L_27);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_28;
		L_28 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_27, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		int32_t L_29 = V_0;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_30;
		L_30 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(L_29, NULL);
		V_2 = L_30;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		L_31 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_2), NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_32 = __this->___cam_8;
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = RectTransformUtility_RectangleContainsScreenPoint_mBA6600E46C416EF032491AED969AA00BE2249630(L_28, L_31, L_32, NULL);
		if (!L_33)
		{
			goto IL_011b;
		}
	}
	{
		// Health -= player.ClickDamage;
		double L_34 = __this->___Health_15;
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_35 = __this->___player_13;
		NullCheck(L_35);
		double L_36 = L_35->___ClickDamage_4;
		__this->___Health_15 = ((double)il2cpp_codegen_subtract(L_34, L_36));
	}

IL_011b:
	{
		// for (int index = 0; index < Input.touchCount; index++)
		int32_t L_37 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_011f:
	{
		// for (int index = 0; index < Input.touchCount; index++)
		int32_t L_38 = V_0;
		int32_t L_39;
		L_39 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_00c9;
		}
	}

IL_0127:
	{
		// if(WantToSwapWorlds)
		bool L_40 = __this->___WantToSwapWorlds_20;
		if (!L_40)
		{
			goto IL_014b;
		}
	}
	{
		// if(canDie)
		bool L_41 = __this->___canDie_18;
		if (!L_41)
		{
			goto IL_014b;
		}
	}
	{
		// WantToSwapWorlds = false;
		__this->___WantToSwapWorlds_20 = (bool)0;
		// canDie = false;
		__this->___canDie_18 = (bool)0;
		// WorldButtonHit();
		EncounterHandler_WorldButtonHit_mB037BEAE00076A5AF8A779BF8797E586A1C0B3A0(__this, NULL);
	}

IL_014b:
	{
		// if(canDie)
		bool L_42 = __this->___canDie_18;
		if (!L_42)
		{
			goto IL_0172;
		}
	}
	{
		// Health -= Time.deltaTime*player.DPS;
		double L_43 = __this->___Health_15;
		float L_44;
		L_44 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_45 = __this->___player_13;
		NullCheck(L_45);
		double L_46 = L_45->___DPS_5;
		__this->___Health_15 = ((double)il2cpp_codegen_subtract(L_43, ((double)il2cpp_codegen_multiply(((double)L_44), L_46))));
	}

IL_0172:
	{
		// if(Health <= 0&& canDie)
		double L_47 = __this->___Health_15;
		if ((!(((double)L_47) <= ((double)(0.0)))))
		{
			goto IL_0198;
		}
	}
	{
		bool L_48 = __this->___canDie_18;
		if (!L_48)
		{
			goto IL_0198;
		}
	}
	{
		// canDie = false;
		__this->___canDie_18 = (bool)0;
		// die();
		EncounterHandler_die_m8FBA82B5B31EF53ABA7D43C40D539F69EB953370(__this, NULL);
	}

IL_0198:
	{
		// }
		return;
	}
}
// System.Void EncounterHandler::moveEncounters(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncounterHandler_moveEncounters_m0B6225FFD4A88788E5850E1AB3B5F0F304C2D9C4 (EncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4* __this, bool ___start0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEncounter_t91211CC083B2AAE6C88D52B43FE66AE7F8E632E6_m294A093D418D1950B3B849776920FCE81E065BCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09C2BD123EC3C0FFD0EBD2796DEC6EEE3402B461);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB033ECD72F5843CF2FE0D733F86C48DE5B10599D);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// nextEncounter = currentWorld.randomChooser();
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_0 = __this->___currentWorld_4;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = World_randomChooser_m138E500374102EBCC0A17751AB8A9510AB8F6C25(L_0, NULL);
		__this->___nextEncounter_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nextEncounter_11), (void*)L_1);
		// if(nextEncounter == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___nextEncounter_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// moveEncounters(start);
		bool L_4 = ___start0;
		EncounterHandler_moveEncounters_m0B6225FFD4A88788E5850E1AB3B5F0F304C2D9C4(__this, L_4, NULL);
		// return;
		return;
	}

IL_0027:
	{
		// var newEnc = Instantiate(nextEncounter);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___nextEncounter_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_5, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		V_0 = L_6;
		// newEnc.GetComponent<RectTransform>().SetParent(encArea.GetComponent<RectTransform>());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_0;
		NullCheck(L_7);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8;
		L_8 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_7, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___encArea_9;
		NullCheck(L_9);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10;
		L_10 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_9, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		NullCheck(L_8);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_8, L_10, NULL);
		// newEnc.GetComponent<RectTransform>().offsetMax = new Vector2(newEnc.GetComponent<RectTransform>().offsetMax.x,0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_0;
		NullCheck(L_11);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12;
		L_12 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_11, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_0;
		NullCheck(L_13);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14;
		L_14 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_13, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		NullCheck(L_14);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = RectTransform_get_offsetMax_m6A51C62A2C69780EFD879D3CFE4EE2CBF4AD3D73(L_14, NULL);
		float L_16 = L_15.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_17), L_16, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_12);
		RectTransform_set_offsetMax_m5514D09D86516F2C0E25FA6D11A3A4274D3D002D(L_12, L_17, NULL);
		// newEnc.GetComponent<RectTransform>().offsetMin = new Vector2(newEnc.GetComponent<RectTransform>().offsetMin.x,0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = V_0;
		NullCheck(L_18);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_19;
		L_19 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_18, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = V_0;
		NullCheck(L_20);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_21;
		L_21 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_20, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		NullCheck(L_21);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		L_22 = RectTransform_get_offsetMin_mD02BE5256DADAF02CEEF99214C4E80478CD5287B(L_21, NULL);
		float L_23 = L_22.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_24), L_23, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_19);
		RectTransform_set_offsetMin_m07F38B4105C7CA9CC9FBDC9ED0DB008602880AB9(L_19, L_24, NULL);
		// newEnc.GetComponent<RectTransform>().offsetMax = new Vector2(0,newEnc.GetComponent<RectTransform>().offsetMax.y);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = V_0;
		NullCheck(L_25);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_26;
		L_26 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_25, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = V_0;
		NullCheck(L_27);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_28;
		L_28 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_27, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		NullCheck(L_28);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		L_29 = RectTransform_get_offsetMax_m6A51C62A2C69780EFD879D3CFE4EE2CBF4AD3D73(L_28, NULL);
		float L_30 = L_29.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_31), (0.0f), L_30, /*hidden argument*/NULL);
		NullCheck(L_26);
		RectTransform_set_offsetMax_m5514D09D86516F2C0E25FA6D11A3A4274D3D002D(L_26, L_31, NULL);
		// newEnc.GetComponent<RectTransform>().offsetMin = new Vector2(0,newEnc.GetComponent<RectTransform>().offsetMin.y);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = V_0;
		NullCheck(L_32);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_33;
		L_33 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_32, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = V_0;
		NullCheck(L_34);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_35;
		L_35 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_34, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		NullCheck(L_35);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36;
		L_36 = RectTransform_get_offsetMin_mD02BE5256DADAF02CEEF99214C4E80478CD5287B(L_35, NULL);
		float L_37 = L_36.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38;
		memset((&L_38), 0, sizeof(L_38));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_38), (0.0f), L_37, /*hidden argument*/NULL);
		NullCheck(L_33);
		RectTransform_set_offsetMin_m07F38B4105C7CA9CC9FBDC9ED0DB008602880AB9(L_33, L_38, NULL);
		// newEnc.GetComponent<RectTransform>().localScale = new Vector3(1,1,1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = V_0;
		NullCheck(L_39);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_40;
		L_40 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_39, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		memset((&L_41), 0, sizeof(L_41));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_41), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_40);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_40, L_41, NULL);
		// newEnc.GetComponent<RectTransform>().localPosition = new Vector3(newEnc.GetComponent<RectTransform>().localPosition.x,newEnc.GetComponent<RectTransform>().localPosition.y,0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42 = V_0;
		NullCheck(L_42);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_43;
		L_43 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_42, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44 = V_0;
		NullCheck(L_44);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_45;
		L_45 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_44, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		NullCheck(L_45);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_45, NULL);
		float L_47 = L_46.___x_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = V_0;
		NullCheck(L_48);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_49;
		L_49 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_48, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		NullCheck(L_49);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_49, NULL);
		float L_51 = L_50.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		memset((&L_52), 0, sizeof(L_52));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_52), L_47, L_51, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_43);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_43, L_52, NULL);
		// nextEncounter = newEnc;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_53 = V_0;
		__this->___nextEncounter_11 = L_53;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nextEncounter_11), (void*)L_53);
		// nextEncounter.GetComponent<Animator>().SetTrigger("MoveIn");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54 = __this->___nextEncounter_11;
		NullCheck(L_54);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_55;
		L_55 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_54, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		NullCheck(L_55);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_55, _stringLiteralB033ECD72F5843CF2FE0D733F86C48DE5B10599D, NULL);
		// if(!start)
		bool L_56 = ___start0;
		if (L_56)
		{
			goto IL_0165;
		}
	}
	{
		// currentEncounter.GetComponent<Animator>().SetTrigger("MoveOut");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_57 = __this->___currentEncounter_10;
		NullCheck(L_57);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_58;
		L_58 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_57, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		NullCheck(L_58);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_58, _stringLiteral09C2BD123EC3C0FFD0EBD2796DEC6EEE3402B461, NULL);
	}

IL_0165:
	{
		// currentEncounter = nextEncounter;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_59 = __this->___nextEncounter_11;
		__this->___currentEncounter_10 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentEncounter_10), (void*)L_59);
		// if(!currentEncounter.GetComponent<Encounter>().Boss)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_60 = __this->___currentEncounter_10;
		NullCheck(L_60);
		Encounter_t91211CC083B2AAE6C88D52B43FE66AE7F8E632E6* L_61;
		L_61 = GameObject_GetComponent_TisEncounter_t91211CC083B2AAE6C88D52B43FE66AE7F8E632E6_m294A093D418D1950B3B849776920FCE81E065BCF(L_60, GameObject_GetComponent_TisEncounter_t91211CC083B2AAE6C88D52B43FE66AE7F8E632E6_m294A093D418D1950B3B849776920FCE81E065BCF_RuntimeMethod_var);
		NullCheck(L_61);
		bool L_62 = L_61->___Boss_5;
		if (L_62)
		{
			goto IL_01c1;
		}
	}
	{
		// MaxHealth = currentWorld.baseHealth+(currentWorld.worldMult*Mathf.Sqrt(currentWorld.enemiesKilled));
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_63 = __this->___currentWorld_4;
		NullCheck(L_63);
		double L_64 = L_63->___baseHealth_9;
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_65 = __this->___currentWorld_4;
		NullCheck(L_65);
		double L_66 = L_65->___worldMult_10;
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_67 = __this->___currentWorld_4;
		NullCheck(L_67);
		int32_t L_68 = L_67->___enemiesKilled_6;
		float L_69;
		L_69 = sqrtf(((float)L_68));
		__this->___MaxHealth_16 = ((double)il2cpp_codegen_add(L_64, ((double)il2cpp_codegen_multiply(L_66, ((double)L_69)))));
		// Health = MaxHealth;
		double L_70 = __this->___MaxHealth_16;
		__this->___Health_15 = L_70;
		goto IL_0209;
	}

IL_01c1:
	{
		// MaxHealth = currentWorld.baseHealth+(currentWorld.worldMult*Mathf.Sqrt(currentWorld.enemiesKilled)*currentWorld.bossMult);
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_71 = __this->___currentWorld_4;
		NullCheck(L_71);
		double L_72 = L_71->___baseHealth_9;
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_73 = __this->___currentWorld_4;
		NullCheck(L_73);
		double L_74 = L_73->___worldMult_10;
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_75 = __this->___currentWorld_4;
		NullCheck(L_75);
		int32_t L_76 = L_75->___enemiesKilled_6;
		float L_77;
		L_77 = sqrtf(((float)L_76));
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_78 = __this->___currentWorld_4;
		NullCheck(L_78);
		double L_79 = L_78->___bossMult_12;
		__this->___MaxHealth_16 = ((double)il2cpp_codegen_add(L_72, ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_74, ((double)L_77))), L_79))));
		// Health = MaxHealth;
		double L_80 = __this->___MaxHealth_16;
		__this->___Health_15 = L_80;
	}

IL_0209:
	{
		// Gold = Health;
		double L_81 = __this->___Health_15;
		__this->___Gold_17 = L_81;
		// }
		return;
	}
}
// System.Void EncounterHandler::WorldSwap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncounterHandler_WorldSwap_m957FD82C0E49E667A8FBDCE2518FDFED4EA7EA63 (EncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4* __this, const RuntimeMethod* method) 
{
	{
		// WantToSwapWorlds = true;
		__this->___WantToSwapWorlds_20 = (bool)1;
		// WorldSwapHit = true;
		__this->___WorldSwapHit_21 = (bool)1;
		// }
		return;
	}
}
// System.Void EncounterHandler::WorldButtonHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncounterHandler_WorldButtonHit_mB037BEAE00076A5AF8A779BF8797E586A1C0B3A0 (EncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09C2BD123EC3C0FFD0EBD2796DEC6EEE3402B461);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB033ECD72F5843CF2FE0D733F86C48DE5B10599D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// InTransition = true;
		__this->___InTransition_19 = (bool)1;
		// repetitions = 0;
		__this->___repetitions_22 = 0;
		// if(currentWorld.worldIndex < nextWorld.worldIndex)
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_0 = __this->___currentWorld_4;
		NullCheck(L_0);
		int32_t L_1 = L_0->___worldIndex_13;
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_2 = __this->___nextWorld_5;
		NullCheck(L_2);
		int32_t L_3 = L_2->___worldIndex_13;
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_00e0;
		}
	}
	{
		// currentScreens = new GameObject[nextWorld.worldIndex-currentWorld.worldIndex+1];
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_4 = __this->___nextWorld_5;
		NullCheck(L_4);
		int32_t L_5 = L_4->___worldIndex_13;
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_6 = __this->___currentWorld_4;
		NullCheck(L_6);
		int32_t L_7 = L_6->___worldIndex_13;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_5, L_7)), 1)));
		__this->___currentScreens_7 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentScreens_7), (void*)L_8);
		// for(int i = 0; i < currentScreens.Length; i++)
		V_0 = 0;
		goto IL_005e;
	}

IL_0051:
	{
		// currentScreens[i] = null;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_9 = __this->___currentScreens_7;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, NULL);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// for(int i = 0; i < currentScreens.Length; i++)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_005e:
	{
		// for(int i = 0; i < currentScreens.Length; i++)
		int32_t L_12 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_13 = __this->___currentScreens_7;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0051;
		}
	}
	{
		// for(int i = 0; i < nextWorld.worldIndex-currentWorld.worldIndex;i++)
		V_1 = 0;
		goto IL_0093;
	}

IL_006d:
	{
		// currentScreens[i] = SpawnObject(transitions[currentWorld.worldIndex+i]);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_14 = __this->___currentScreens_7;
		int32_t L_15 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_16 = __this->___transitions_6;
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_17 = __this->___currentWorld_4;
		NullCheck(L_17);
		int32_t L_18 = L_17->___worldIndex_13;
		int32_t L_19 = V_1;
		NullCheck(L_16);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_18, L_19));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = EncounterHandler_SpawnObject_m638B4A061BA5CC1B7395A78BC219D883A00832C0(__this, L_21, NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_22);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_22);
		// for(int i = 0; i < nextWorld.worldIndex-currentWorld.worldIndex;i++)
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0093:
	{
		// for(int i = 0; i < nextWorld.worldIndex-currentWorld.worldIndex;i++)
		int32_t L_24 = V_1;
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_25 = __this->___nextWorld_5;
		NullCheck(L_25);
		int32_t L_26 = L_25->___worldIndex_13;
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_27 = __this->___currentWorld_4;
		NullCheck(L_27);
		int32_t L_28 = L_27->___worldIndex_13;
		if ((((int32_t)L_24) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_26, L_28)))))
		{
			goto IL_006d;
		}
	}
	{
		// nextEncounter = nextWorld.randomChooser();
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_29 = __this->___nextWorld_5;
		NullCheck(L_29);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30;
		L_30 = World_randomChooser_m138E500374102EBCC0A17751AB8A9510AB8F6C25(L_29, NULL);
		__this->___nextEncounter_11 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nextEncounter_11), (void*)L_30);
		// currentScreens[currentScreens.Length-1] = SpawnObject(nextEncounter);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_31 = __this->___currentScreens_7;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_32 = __this->___currentScreens_7;
		NullCheck(L_32);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = __this->___nextEncounter_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34;
		L_34 = EncounterHandler_SpawnObject_m638B4A061BA5CC1B7395A78BC219D883A00832C0(__this, L_33, NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_34);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_32)->max_length)), 1))), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_34);
		goto IL_01ba;
	}

IL_00e0:
	{
		// currentScreens = new GameObject[currentWorld.worldIndex-nextWorld.worldIndex+1];
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_35 = __this->___currentWorld_4;
		NullCheck(L_35);
		int32_t L_36 = L_35->___worldIndex_13;
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_37 = __this->___nextWorld_5;
		NullCheck(L_37);
		int32_t L_38 = L_37->___worldIndex_13;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_39 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_36, L_38)), 1)));
		__this->___currentScreens_7 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentScreens_7), (void*)L_39);
		// for(int i = 0; i < currentScreens.Length; i++)
		V_2 = 0;
		goto IL_0115;
	}

IL_0108:
	{
		// currentScreens[i] = null;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_40 = __this->___currentScreens_7;
		int32_t L_41 = V_2;
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, NULL);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_41), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// for(int i = 0; i < currentScreens.Length; i++)
		int32_t L_42 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_0115:
	{
		// for(int i = 0; i < currentScreens.Length; i++)
		int32_t L_43 = V_2;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_44 = __this->___currentScreens_7;
		NullCheck(L_44);
		if ((((int32_t)L_43) < ((int32_t)((int32_t)(((RuntimeArray*)L_44)->max_length)))))
		{
			goto IL_0108;
		}
	}
	{
		// for(int i = 0; i < currentWorld.worldIndex-nextWorld.worldIndex;i++)
		V_3 = 0;
		goto IL_0172;
	}

IL_0124:
	{
		// currentScreens[i] = SpawnObject(transitions[currentWorld.worldIndex-1-i]);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_45 = __this->___currentScreens_7;
		int32_t L_46 = V_3;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_47 = __this->___transitions_6;
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_48 = __this->___currentWorld_4;
		NullCheck(L_48);
		int32_t L_49 = L_48->___worldIndex_13;
		int32_t L_50 = V_3;
		NullCheck(L_47);
		int32_t L_51 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_49, 1)), L_50));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_53;
		L_53 = EncounterHandler_SpawnObject_m638B4A061BA5CC1B7395A78BC219D883A00832C0(__this, L_52, NULL);
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_53);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_53);
		// currentScreens[i].GetComponent<RectTransform>().localScale = new Vector3(-1,1,1);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_54 = __this->___currentScreens_7;
		int32_t L_55 = V_3;
		NullCheck(L_54);
		int32_t L_56 = L_55;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		NullCheck(L_57);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_58;
		L_58 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_57, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		memset((&L_59), 0, sizeof(L_59));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_59), (-1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_58);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_58, L_59, NULL);
		// for(int i = 0; i < currentWorld.worldIndex-nextWorld.worldIndex;i++)
		int32_t L_60 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_60, 1));
	}

IL_0172:
	{
		// for(int i = 0; i < currentWorld.worldIndex-nextWorld.worldIndex;i++)
		int32_t L_61 = V_3;
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_62 = __this->___currentWorld_4;
		NullCheck(L_62);
		int32_t L_63 = L_62->___worldIndex_13;
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_64 = __this->___nextWorld_5;
		NullCheck(L_64);
		int32_t L_65 = L_64->___worldIndex_13;
		if ((((int32_t)L_61) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_63, L_65)))))
		{
			goto IL_0124;
		}
	}
	{
		// nextEncounter = nextWorld.randomChooser();
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_66 = __this->___nextWorld_5;
		NullCheck(L_66);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_67;
		L_67 = World_randomChooser_m138E500374102EBCC0A17751AB8A9510AB8F6C25(L_66, NULL);
		__this->___nextEncounter_11 = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nextEncounter_11), (void*)L_67);
		// currentScreens[currentScreens.Length-1] = SpawnObject(nextEncounter);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_68 = __this->___currentScreens_7;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_69 = __this->___currentScreens_7;
		NullCheck(L_69);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_70 = __this->___nextEncounter_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_71;
		L_71 = EncounterHandler_SpawnObject_m638B4A061BA5CC1B7395A78BC219D883A00832C0(__this, L_70, NULL);
		NullCheck(L_68);
		ArrayElementTypeCheck (L_68, L_71);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_69)->max_length)), 1))), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_71);
	}

IL_01ba:
	{
		// currentEncounter.GetComponent<Animator>().SetTrigger("MoveOut");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_72 = __this->___currentEncounter_10;
		NullCheck(L_72);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_73;
		L_73 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_72, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		NullCheck(L_73);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_73, _stringLiteral09C2BD123EC3C0FFD0EBD2796DEC6EEE3402B461, NULL);
		// currentScreens[0].GetComponent<Animator>().SetTrigger("MoveIn");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_74 = __this->___currentScreens_7;
		NullCheck(L_74);
		int32_t L_75 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_76 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		NullCheck(L_76);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_77;
		L_77 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_76, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		NullCheck(L_77);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_77, _stringLiteralB033ECD72F5843CF2FE0D733F86C48DE5B10599D, NULL);
		// }
		return;
	}
}
// System.Void EncounterHandler::HalfWayHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncounterHandler_HalfWayHandler_m456D998C81152E04B3D88083D1E57F19BF0F163A (EncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEncounter_t91211CC083B2AAE6C88D52B43FE66AE7F8E632E6_m294A093D418D1950B3B849776920FCE81E065BCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09C2BD123EC3C0FFD0EBD2796DEC6EEE3402B461);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB033ECD72F5843CF2FE0D733F86C48DE5B10599D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// repetitions++;
		int32_t L_0 = __this->___repetitions_22;
		__this->___repetitions_22 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// currentScreens[repetitions].GetComponent<Animator>().SetTrigger("MoveIn");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___currentScreens_7;
		int32_t L_2 = __this->___repetitions_22;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5;
		L_5 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_4, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		NullCheck(L_5);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_5, _stringLiteralB033ECD72F5843CF2FE0D733F86C48DE5B10599D, NULL);
		// currentScreens[repetitions-1].GetComponent<Animator>().SetTrigger("MoveOut");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___currentScreens_7;
		int32_t L_7 = __this->___repetitions_22;
		NullCheck(L_6);
		int32_t L_8 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_10;
		L_10 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_9, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		NullCheck(L_10);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_10, _stringLiteral09C2BD123EC3C0FFD0EBD2796DEC6EEE3402B461, NULL);
		// if(currentScreens[repetitions] == currentScreens[currentScreens.Length-1])
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_11 = __this->___currentScreens_7;
		int32_t L_12 = __this->___repetitions_22;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_15 = __this->___currentScreens_7;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_16 = __this->___currentScreens_7;
		NullCheck(L_16);
		NullCheck(L_15);
		int32_t L_17 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), 1));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_14, L_18, NULL);
		if (!L_19)
		{
			goto IL_013a;
		}
	}
	{
		// currentEncounter = currentScreens[repetitions];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_20 = __this->___currentScreens_7;
		int32_t L_21 = __this->___repetitions_22;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		__this->___currentEncounter_10 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentEncounter_10), (void*)L_23);
		// currentWorld = nextWorld;
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_24 = __this->___nextWorld_5;
		__this->___currentWorld_4 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentWorld_4), (void*)L_24);
		// nextWorld = null;
		__this->___nextWorld_5 = (World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nextWorld_5), (void*)(World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A*)NULL);
		// if(!currentEncounter.GetComponent<Encounter>().Boss)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___currentEncounter_10;
		NullCheck(L_25);
		Encounter_t91211CC083B2AAE6C88D52B43FE66AE7F8E632E6* L_26;
		L_26 = GameObject_GetComponent_TisEncounter_t91211CC083B2AAE6C88D52B43FE66AE7F8E632E6_m294A093D418D1950B3B849776920FCE81E065BCF(L_25, GameObject_GetComponent_TisEncounter_t91211CC083B2AAE6C88D52B43FE66AE7F8E632E6_m294A093D418D1950B3B849776920FCE81E065BCF_RuntimeMethod_var);
		NullCheck(L_26);
		bool L_27 = L_26->___Boss_5;
		if (L_27)
		{
			goto IL_00e6;
		}
	}
	{
		// MaxHealth = currentWorld.baseHealth+(currentWorld.worldMult*Mathf.Sqrt(currentWorld.enemiesKilled));
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_28 = __this->___currentWorld_4;
		NullCheck(L_28);
		double L_29 = L_28->___baseHealth_9;
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_30 = __this->___currentWorld_4;
		NullCheck(L_30);
		double L_31 = L_30->___worldMult_10;
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_32 = __this->___currentWorld_4;
		NullCheck(L_32);
		int32_t L_33 = L_32->___enemiesKilled_6;
		float L_34;
		L_34 = sqrtf(((float)L_33));
		__this->___MaxHealth_16 = ((double)il2cpp_codegen_add(L_29, ((double)il2cpp_codegen_multiply(L_31, ((double)L_34)))));
		// Health = MaxHealth;
		double L_35 = __this->___MaxHealth_16;
		__this->___Health_15 = L_35;
		goto IL_012e;
	}

IL_00e6:
	{
		// MaxHealth = currentWorld.baseHealth+(currentWorld.worldMult*Mathf.Sqrt(currentWorld.enemiesKilled)*currentWorld.bossMult);
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_36 = __this->___currentWorld_4;
		NullCheck(L_36);
		double L_37 = L_36->___baseHealth_9;
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_38 = __this->___currentWorld_4;
		NullCheck(L_38);
		double L_39 = L_38->___worldMult_10;
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_40 = __this->___currentWorld_4;
		NullCheck(L_40);
		int32_t L_41 = L_40->___enemiesKilled_6;
		float L_42;
		L_42 = sqrtf(((float)L_41));
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_43 = __this->___currentWorld_4;
		NullCheck(L_43);
		double L_44 = L_43->___bossMult_12;
		__this->___MaxHealth_16 = ((double)il2cpp_codegen_add(L_37, ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_39, ((double)L_42))), L_44))));
		// Health = MaxHealth;
		double L_45 = __this->___MaxHealth_16;
		__this->___Health_15 = L_45;
	}

IL_012e:
	{
		// Gold = Health;
		double L_46 = __this->___Health_15;
		__this->___Gold_17 = L_46;
	}

IL_013a:
	{
		// }
		return;
	}
}
// UnityEngine.GameObject EncounterHandler::SpawnObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EncounterHandler_SpawnObject_m638B4A061BA5CC1B7395A78BC219D883A00832C0 (EncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// GameObject newEnc = Instantiate(obj);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___obj0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_0, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		V_0 = L_1;
		// newEnc.GetComponent<RectTransform>().SetParent(encArea.GetComponent<RectTransform>());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_0;
		NullCheck(L_2);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3;
		L_3 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_2, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___encArea_9;
		NullCheck(L_4);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5;
		L_5 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_4, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		NullCheck(L_3);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_3, L_5, NULL);
		// newEnc.GetComponent<RectTransform>().offsetMax = new Vector2(newEnc.GetComponent<RectTransform>().offsetMax.x,0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_0;
		NullCheck(L_6);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7;
		L_7 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_6, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_0;
		NullCheck(L_8);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9;
		L_9 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_8, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		NullCheck(L_9);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = RectTransform_get_offsetMax_m6A51C62A2C69780EFD879D3CFE4EE2CBF4AD3D73(L_9, NULL);
		float L_11 = L_10.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_12), L_11, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		RectTransform_set_offsetMax_m5514D09D86516F2C0E25FA6D11A3A4274D3D002D(L_7, L_12, NULL);
		// newEnc.GetComponent<RectTransform>().offsetMin = new Vector2(newEnc.GetComponent<RectTransform>().offsetMin.x,0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_0;
		NullCheck(L_13);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14;
		L_14 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_13, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_0;
		NullCheck(L_15);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_16;
		L_16 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_15, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		NullCheck(L_16);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = RectTransform_get_offsetMin_mD02BE5256DADAF02CEEF99214C4E80478CD5287B(L_16, NULL);
		float L_18 = L_17.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_19), L_18, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_14);
		RectTransform_set_offsetMin_m07F38B4105C7CA9CC9FBDC9ED0DB008602880AB9(L_14, L_19, NULL);
		// newEnc.GetComponent<RectTransform>().offsetMax = new Vector2(0,newEnc.GetComponent<RectTransform>().offsetMax.y);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = V_0;
		NullCheck(L_20);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_21;
		L_21 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_20, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = V_0;
		NullCheck(L_22);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_23;
		L_23 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_22, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		NullCheck(L_23);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		L_24 = RectTransform_get_offsetMax_m6A51C62A2C69780EFD879D3CFE4EE2CBF4AD3D73(L_23, NULL);
		float L_25 = L_24.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_26), (0.0f), L_25, /*hidden argument*/NULL);
		NullCheck(L_21);
		RectTransform_set_offsetMax_m5514D09D86516F2C0E25FA6D11A3A4274D3D002D(L_21, L_26, NULL);
		// newEnc.GetComponent<RectTransform>().offsetMin = new Vector2(0,newEnc.GetComponent<RectTransform>().offsetMin.y);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = V_0;
		NullCheck(L_27);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_28;
		L_28 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_27, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = V_0;
		NullCheck(L_29);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_30;
		L_30 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_29, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		NullCheck(L_30);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		L_31 = RectTransform_get_offsetMin_mD02BE5256DADAF02CEEF99214C4E80478CD5287B(L_30, NULL);
		float L_32 = L_31.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_33), (0.0f), L_32, /*hidden argument*/NULL);
		NullCheck(L_28);
		RectTransform_set_offsetMin_m07F38B4105C7CA9CC9FBDC9ED0DB008602880AB9(L_28, L_33, NULL);
		// newEnc.GetComponent<RectTransform>().localScale = new Vector3(1,1,1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = V_0;
		NullCheck(L_34);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_35;
		L_35 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_34, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_36), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_35);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_35, L_36, NULL);
		// newEnc.GetComponent<RectTransform>().localPosition = new Vector3(newEnc.GetComponent<RectTransform>().localPosition.x,newEnc.GetComponent<RectTransform>().localPosition.y,0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = V_0;
		NullCheck(L_37);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_38;
		L_38 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_37, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = V_0;
		NullCheck(L_39);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_40;
		L_40 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_39, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		NullCheck(L_40);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_40, NULL);
		float L_42 = L_41.___x_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43 = V_0;
		NullCheck(L_43);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_44;
		L_44 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_43, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		NullCheck(L_44);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_44, NULL);
		float L_46 = L_45.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		memset((&L_47), 0, sizeof(L_47));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_47), L_42, L_46, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_38);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_38, L_47, NULL);
		// return newEnc;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = V_0;
		return L_48;
	}
}
// System.Void EncounterHandler::die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncounterHandler_die_m8FBA82B5B31EF53ABA7D43C40D539F69EB953370 (EncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisLootScrollerAnim_t4E4D7E1C0F280F7A3802D523D8C0F7A23C3FCCD6_m0104B27C038557D7E40E50D861BE77C3AAA37C18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEncounter_t91211CC083B2AAE6C88D52B43FE66AE7F8E632E6_m294A093D418D1950B3B849776920FCE81E065BCF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player.gold+= Gold * currentWorld.MoneyMult;
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_0 = __this->___player_13;
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_1 = L_0;
		NullCheck(L_1);
		double L_2 = L_1->___gold_6;
		double L_3 = __this->___Gold_17;
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_4 = __this->___currentWorld_4;
		NullCheck(L_4);
		double L_5 = L_4->___MoneyMult_11;
		NullCheck(L_1);
		L_1->___gold_6 = ((double)il2cpp_codegen_add(L_2, ((double)il2cpp_codegen_multiply(L_3, L_5))));
		// currentWorld.enemiesKilled++;
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_6 = __this->___currentWorld_4;
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_7 = L_6;
		NullCheck(L_7);
		int32_t L_8 = L_7->___enemiesKilled_6;
		NullCheck(L_7);
		L_7->___enemiesKilled_6 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		// if(currentEncounter.GetComponent<Encounter>().Boss)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___currentEncounter_10;
		NullCheck(L_9);
		Encounter_t91211CC083B2AAE6C88D52B43FE66AE7F8E632E6* L_10;
		L_10 = GameObject_GetComponent_TisEncounter_t91211CC083B2AAE6C88D52B43FE66AE7F8E632E6_m294A093D418D1950B3B849776920FCE81E065BCF(L_9, GameObject_GetComponent_TisEncounter_t91211CC083B2AAE6C88D52B43FE66AE7F8E632E6_m294A093D418D1950B3B849776920FCE81E065BCF_RuntimeMethod_var);
		NullCheck(L_10);
		bool L_11 = L_10->___Boss_5;
		if (!L_11)
		{
			goto IL_0086;
		}
	}
	{
		// LootRoller.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___LootRoller_14;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
		// LootRoller.GetComponentInChildren<LootScrollerAnim>().updateSlots(currentEncounter.GetComponent<Encounter>().loots,currentEncounter.GetComponent<Encounter>().lootChances);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___LootRoller_14;
		NullCheck(L_13);
		LootScrollerAnim_t4E4D7E1C0F280F7A3802D523D8C0F7A23C3FCCD6* L_14;
		L_14 = GameObject_GetComponentInChildren_TisLootScrollerAnim_t4E4D7E1C0F280F7A3802D523D8C0F7A23C3FCCD6_m0104B27C038557D7E40E50D861BE77C3AAA37C18(L_13, GameObject_GetComponentInChildren_TisLootScrollerAnim_t4E4D7E1C0F280F7A3802D523D8C0F7A23C3FCCD6_m0104B27C038557D7E40E50D861BE77C3AAA37C18_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___currentEncounter_10;
		NullCheck(L_15);
		Encounter_t91211CC083B2AAE6C88D52B43FE66AE7F8E632E6* L_16;
		L_16 = GameObject_GetComponent_TisEncounter_t91211CC083B2AAE6C88D52B43FE66AE7F8E632E6_m294A093D418D1950B3B849776920FCE81E065BCF(L_15, GameObject_GetComponent_TisEncounter_t91211CC083B2AAE6C88D52B43FE66AE7F8E632E6_m294A093D418D1950B3B849776920FCE81E065BCF_RuntimeMethod_var);
		NullCheck(L_16);
		LootU5BU5D_tD17191E4077CD5073CE972F830FCA2D8C081C33D* L_17 = L_16->___loots_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___currentEncounter_10;
		NullCheck(L_18);
		Encounter_t91211CC083B2AAE6C88D52B43FE66AE7F8E632E6* L_19;
		L_19 = GameObject_GetComponent_TisEncounter_t91211CC083B2AAE6C88D52B43FE66AE7F8E632E6_m294A093D418D1950B3B849776920FCE81E065BCF(L_18, GameObject_GetComponent_TisEncounter_t91211CC083B2AAE6C88D52B43FE66AE7F8E632E6_m294A093D418D1950B3B849776920FCE81E065BCF_RuntimeMethod_var);
		NullCheck(L_19);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = L_19->___lootChances_6;
		NullCheck(L_14);
		LootScrollerAnim_updateSlots_m18DBEBAB4159DC0E8BBD038928E17074F0E9515A(L_14, L_17, L_20, NULL);
		return;
	}

IL_0086:
	{
		// actuallydie();
		EncounterHandler_actuallydie_mAF55AFA863EE9F73FF10B11C2EE5075A3097ABD9(__this, NULL);
		// }
		return;
	}
}
// System.Void EncounterHandler::actuallydie()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncounterHandler_actuallydie_mAF55AFA863EE9F73FF10B11C2EE5075A3097ABD9 (EncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4* __this, const RuntimeMethod* method) 
{
	{
		// moveEncounters(false);
		EncounterHandler_moveEncounters_m0B6225FFD4A88788E5850E1AB3B5F0F304C2D9C4(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void EncounterHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncounterHandler__ctor_m795C234EB5C855D7E92484E4F8243BB4BE2695A8 (EncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4* __this, const RuntimeMethod* method) 
{
	{
		// public bool canDie = true;
		__this->___canDie_18 = (bool)1;
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
// System.Void GoldUpdater::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoldUpdater_Start_mB38F6AED66DF9464905E3C8BA24A8D270A8EF2D9 (GoldUpdater_tF81566509685857184CBF980E1080EB3DAAB9418* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD599EDCFBEAC503B743CEEACA9F5FF5DBE29220);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Player = GameObject.Find("PlayerHandler");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralCD599EDCFBEAC503B743CEEACA9F5FF5DBE29220, NULL);
		__this->___Player_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Player_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void GoldUpdater::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoldUpdater_Update_m3BCB554989F455C5489CD2C951BB72283341A806 (GoldUpdater_tF81566509685857184CBF980E1080EB3DAAB9418* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObject.GetComponent<Text>().text = formatGold(Player.GetComponent<PlayerHandler>().gold);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1;
		L_1 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_0, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___Player_4;
		NullCheck(L_2);
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_3;
		L_3 = GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D(L_2, GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D_RuntimeMethod_var);
		NullCheck(L_3);
		double L_4 = L_3->___gold_6;
		String_t* L_5;
		L_5 = GoldUpdater_formatGold_m9C9E3CF1B9BD23E558359D83B24E808419582A8F(__this, L_4, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_5);
		// }
		return;
	}
}
// System.String GoldUpdater::formatGold(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GoldUpdater_formatGold_m9C9E3CF1B9BD23E558359D83B24E808419582A8F (GoldUpdater_tF81566509685857184CBF980E1080EB3DAAB9418* __this, double ___Gold0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral012317678FABF40366606611502ED7D26F067C51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28A7AC9D8C919C224000CAEB134D66D11C6FAB2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50F558929F3BB704F195FD06D0EE9E26421714F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61C47167E6BCF2D186CEF5BBF64F0EAF90EF9D9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852EFDF643FA620806D7A0FC961E635054FFCC2B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B8C75D10672D3DACCB961A041AB6C4D5B8BAF41);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8BDCD28E40D848FF218A108022AEC2089B2C29F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6C448FD606120F2C0F85BB5D1424B69A09655F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEE86308D10A93BB69E8B5332994EB88242677B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD86C1D0E546CD5347AB55A12B67E5767BE02E9DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6F542BE32D6BD4828F9144560BDF6A3A9591859);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7682E8013575F404884D72D8C770D2B9CF8A740);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE817AAA15FFD69D00BE6031E5C8A6EF7CF081933);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	double V_1 = 0.0;
	{
		// string finalString = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// Gold = Mathf.Floor((float)Gold);
		double L_0 = ___Gold0;
		float L_1;
		L_1 = floorf(((float)L_0));
		___Gold0 = ((double)L_1);
		// if(Gold < 1000)
		double L_2 = ___Gold0;
		if ((!(((double)L_2) < ((double)(1000.0)))))
		{
			goto IL_002e;
		}
	}
	{
		// finalString = Gold.ToString("###");
		String_t* L_3;
		L_3 = Double_ToString_m70EC76E1DAD7E8B5B47AF9292189BF3711B24B75((&___Gold0), _stringLiteralC6C448FD606120F2C0F85BB5D1424B69A09655F6, NULL);
		V_0 = L_3;
		goto IL_025f;
	}

IL_002e:
	{
		// else if(Gold < 1000000)
		double L_4 = ___Gold0;
		if ((!(((double)L_4) < ((double)(1000000.0)))))
		{
			goto IL_0062;
		}
	}
	{
		// finalString = (Gold/1000).ToString("0.#")+" K";
		double L_5 = ___Gold0;
		V_1 = ((double)(L_5/(1000.0)));
		String_t* L_6;
		L_6 = Double_ToString_m70EC76E1DAD7E8B5B47AF9292189BF3711B24B75((&V_1), _stringLiteralE7682E8013575F404884D72D8C770D2B9CF8A740, NULL);
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_6, _stringLiteral012317678FABF40366606611502ED7D26F067C51, NULL);
		V_0 = L_7;
		goto IL_025f;
	}

IL_0062:
	{
		// else if(Gold < 1000000000)
		double L_8 = ___Gold0;
		if ((!(((double)L_8) < ((double)(1000000000.0)))))
		{
			goto IL_0096;
		}
	}
	{
		// finalString = (Gold/1000000).ToString("0.#")+" M";
		double L_9 = ___Gold0;
		V_1 = ((double)(L_9/(1000000.0)));
		String_t* L_10;
		L_10 = Double_ToString_m70EC76E1DAD7E8B5B47AF9292189BF3711B24B75((&V_1), _stringLiteralE7682E8013575F404884D72D8C770D2B9CF8A740, NULL);
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_10, _stringLiteralB8BDCD28E40D848FF218A108022AEC2089B2C29F, NULL);
		V_0 = L_11;
		goto IL_025f;
	}

IL_0096:
	{
		// else if(Gold < 1000000000000)
		double L_12 = ___Gold0;
		if ((!(((double)L_12) < ((double)(1000000000000.0)))))
		{
			goto IL_00ca;
		}
	}
	{
		// finalString = (Gold/1000000000).ToString("0.#")+" B";
		double L_13 = ___Gold0;
		V_1 = ((double)(L_13/(1000000000.0)));
		String_t* L_14;
		L_14 = Double_ToString_m70EC76E1DAD7E8B5B47AF9292189BF3711B24B75((&V_1), _stringLiteralE7682E8013575F404884D72D8C770D2B9CF8A740, NULL);
		String_t* L_15;
		L_15 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_14, _stringLiteralE817AAA15FFD69D00BE6031E5C8A6EF7CF081933, NULL);
		V_0 = L_15;
		goto IL_025f;
	}

IL_00ca:
	{
		// else if(Gold < 1000000000000000)
		double L_16 = ___Gold0;
		if ((!(((double)L_16) < ((double)(1000000000000000.0)))))
		{
			goto IL_00fe;
		}
	}
	{
		// finalString = (Gold/1000000000000).ToString("0.#")+" T";
		double L_17 = ___Gold0;
		V_1 = ((double)(L_17/(1000000000000.0)));
		String_t* L_18;
		L_18 = Double_ToString_m70EC76E1DAD7E8B5B47AF9292189BF3711B24B75((&V_1), _stringLiteralE7682E8013575F404884D72D8C770D2B9CF8A740, NULL);
		String_t* L_19;
		L_19 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_18, _stringLiteralCEE86308D10A93BB69E8B5332994EB88242677B7, NULL);
		V_0 = L_19;
		goto IL_025f;
	}

IL_00fe:
	{
		// else if(Gold < 1000000000000000000)
		double L_20 = ___Gold0;
		if ((!(((double)L_20) < ((double)(1.0E+18)))))
		{
			goto IL_0132;
		}
	}
	{
		// finalString = (Gold/1000000000000000).ToString("0.#")+" Q";
		double L_21 = ___Gold0;
		V_1 = ((double)(L_21/(1000000000000000.0)));
		String_t* L_22;
		L_22 = Double_ToString_m70EC76E1DAD7E8B5B47AF9292189BF3711B24B75((&V_1), _stringLiteralE7682E8013575F404884D72D8C770D2B9CF8A740, NULL);
		String_t* L_23;
		L_23 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_22, _stringLiteral8B8C75D10672D3DACCB961A041AB6C4D5B8BAF41, NULL);
		V_0 = L_23;
		goto IL_025f;
	}

IL_0132:
	{
		// else if(Gold < 100000000000000000000.0)
		double L_24 = ___Gold0;
		if ((!(((double)L_24) < ((double)(1.0E+20)))))
		{
			goto IL_0166;
		}
	}
	{
		// finalString = (Gold/1000000000000000000.0).ToString("0.#")+" q";
		double L_25 = ___Gold0;
		V_1 = ((double)(L_25/(1.0E+18)));
		String_t* L_26;
		L_26 = Double_ToString_m70EC76E1DAD7E8B5B47AF9292189BF3711B24B75((&V_1), _stringLiteralE7682E8013575F404884D72D8C770D2B9CF8A740, NULL);
		String_t* L_27;
		L_27 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_26, _stringLiteral61C47167E6BCF2D186CEF5BBF64F0EAF90EF9D9D, NULL);
		V_0 = L_27;
		goto IL_025f;
	}

IL_0166:
	{
		// else if(Gold < 100000000000000000000000.0)
		double L_28 = ___Gold0;
		if ((!(((double)L_28) < ((double)(9.9999999999999992E+22)))))
		{
			goto IL_019a;
		}
	}
	{
		// finalString = (Gold/1000000000000000000000.0).ToString("0.#")+" S";
		double L_29 = ___Gold0;
		V_1 = ((double)(L_29/(1.0E+21)));
		String_t* L_30;
		L_30 = Double_ToString_m70EC76E1DAD7E8B5B47AF9292189BF3711B24B75((&V_1), _stringLiteralE7682E8013575F404884D72D8C770D2B9CF8A740, NULL);
		String_t* L_31;
		L_31 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_30, _stringLiteral852EFDF643FA620806D7A0FC961E635054FFCC2B, NULL);
		V_0 = L_31;
		goto IL_025f;
	}

IL_019a:
	{
		// else if(Gold < 100000000000000000000000000.0)
		double L_32 = ___Gold0;
		if ((!(((double)L_32) < ((double)(1.0E+26)))))
		{
			goto IL_01ce;
		}
	}
	{
		// finalString = (Gold/1000000000000000000000000.0).ToString("0.#")+" s";
		double L_33 = ___Gold0;
		V_1 = ((double)(L_33/(9.9999999999999998E+23)));
		String_t* L_34;
		L_34 = Double_ToString_m70EC76E1DAD7E8B5B47AF9292189BF3711B24B75((&V_1), _stringLiteralE7682E8013575F404884D72D8C770D2B9CF8A740, NULL);
		String_t* L_35;
		L_35 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_34, _stringLiteral28A7AC9D8C919C224000CAEB134D66D11C6FAB2C, NULL);
		V_0 = L_35;
		goto IL_025f;
	}

IL_01ce:
	{
		// else if(Gold < 100000000000000000000000000000.0)
		double L_36 = ___Gold0;
		if ((!(((double)L_36) < ((double)(9.9999999999999991E+28)))))
		{
			goto IL_01ff;
		}
	}
	{
		// finalString = (Gold/1000000000000000000000000000.0).ToString("0.#")+" O";
		double L_37 = ___Gold0;
		V_1 = ((double)(L_37/(1.0E+27)));
		String_t* L_38;
		L_38 = Double_ToString_m70EC76E1DAD7E8B5B47AF9292189BF3711B24B75((&V_1), _stringLiteralE7682E8013575F404884D72D8C770D2B9CF8A740, NULL);
		String_t* L_39;
		L_39 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_38, _stringLiteralE6F542BE32D6BD4828F9144560BDF6A3A9591859, NULL);
		V_0 = L_39;
		goto IL_025f;
	}

IL_01ff:
	{
		// else if(Gold < 100000000000000000000000000000000.0)
		double L_40 = ___Gold0;
		if ((!(((double)L_40) < ((double)(1.0000000000000001E+32)))))
		{
			goto IL_0230;
		}
	}
	{
		// finalString = (Gold/1000000000000000000000000000000.0).ToString("0.#")+" N";
		double L_41 = ___Gold0;
		V_1 = ((double)(L_41/(1.0E+30)));
		String_t* L_42;
		L_42 = Double_ToString_m70EC76E1DAD7E8B5B47AF9292189BF3711B24B75((&V_1), _stringLiteralE7682E8013575F404884D72D8C770D2B9CF8A740, NULL);
		String_t* L_43;
		L_43 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_42, _stringLiteral50F558929F3BB704F195FD06D0EE9E26421714F3, NULL);
		V_0 = L_43;
		goto IL_025f;
	}

IL_0230:
	{
		// else if(Gold < 100000000000000000000000000000000000.0)
		double L_44 = ___Gold0;
		if ((!(((double)L_44) < ((double)(9.9999999999999997E+34)))))
		{
			goto IL_025f;
		}
	}
	{
		// finalString = (Gold/1000000000000000000000000000000000.0).ToString("0.#")+" D";
		double L_45 = ___Gold0;
		V_1 = ((double)(L_45/(9.9999999999999995E+32)));
		String_t* L_46;
		L_46 = Double_ToString_m70EC76E1DAD7E8B5B47AF9292189BF3711B24B75((&V_1), _stringLiteralE7682E8013575F404884D72D8C770D2B9CF8A740, NULL);
		String_t* L_47;
		L_47 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_46, _stringLiteralD86C1D0E546CD5347AB55A12B67E5767BE02E9DF, NULL);
		V_0 = L_47;
	}

IL_025f:
	{
		// if(Gold == 0)
		double L_48 = ___Gold0;
		if ((!(((double)L_48) == ((double)(0.0)))))
		{
			goto IL_0271;
		}
	}
	{
		// finalString = "0";
		V_0 = _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
	}

IL_0271:
	{
		// return finalString;
		String_t* L_49 = V_0;
		return L_49;
	}
}
// System.Void GoldUpdater::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoldUpdater__ctor_mC60DC2C143764C614F97D68D860639211996248C (GoldUpdater_tF81566509685857184CBF980E1080EB3DAAB9418* __this, const RuntimeMethod* method) 
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
// System.Void Grog::onUpgrade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grog_onUpgrade_m8E9832040C31BEF4CA9D4CB6D97FE7BDD1677EA5 (Grog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD599EDCFBEAC503B743CEEACA9F5FF5DBE29220);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(!enabled)
		bool L_0;
		L_0 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(__this, NULL);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		// currentDamage = 0;
		__this->___currentDamage_7 = (0.0);
		// enabled = true;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)1, NULL);
	}

IL_001e:
	{
		// currentDamage += Damage;
		double L_1 = __this->___currentDamage_7;
		double L_2 = __this->___Damage_6;
		__this->___currentDamage_7 = ((double)il2cpp_codegen_add(L_1, L_2));
		// if(grogType == GrogType.ClickDamage)
		int32_t L_3 = __this->___grogType_5;
		if (L_3)
		{
			goto IL_005b;
		}
	}
	{
		// GameObject.Find("PlayerHandler").GetComponent<PlayerHandler>().ClickDamage += Damage;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralCD599EDCFBEAC503B743CEEACA9F5FF5DBE29220, NULL);
		NullCheck(L_4);
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_5;
		L_5 = GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D(L_4, GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D_RuntimeMethod_var);
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_6 = L_5;
		NullCheck(L_6);
		double L_7 = L_6->___ClickDamage_4;
		double L_8 = __this->___Damage_6;
		NullCheck(L_6);
		L_6->___ClickDamage_4 = ((double)il2cpp_codegen_add(L_7, L_8));
		return;
	}

IL_005b:
	{
		// else if(grogType == GrogType.Dps)
		int32_t L_9 = __this->___grogType_5;
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_0085;
		}
	}
	{
		// GameObject.Find("PlayerHandler").GetComponent<PlayerHandler>().DPS += Damage;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralCD599EDCFBEAC503B743CEEACA9F5FF5DBE29220, NULL);
		NullCheck(L_10);
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_11;
		L_11 = GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D(L_10, GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D_RuntimeMethod_var);
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_12 = L_11;
		NullCheck(L_12);
		double L_13 = L_12->___DPS_5;
		double L_14 = __this->___Damage_6;
		NullCheck(L_12);
		L_12->___DPS_5 = ((double)il2cpp_codegen_add(L_13, L_14));
	}

IL_0085:
	{
		// }
		return;
	}
}
// System.Void Grog::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grog__ctor_mBB5FCD6AA44D666BA1F5B4D32D0BF45F25DE540D (Grog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE* __this, const RuntimeMethod* method) 
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
// System.Void GrogDesc::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrogDesc_Awake_m1FDECB47F464DAF4C05AFC75F549AB3E8D7D9EB0 (GrogDesc_t056DE5EA6E86F649972FF8A0F672ADF89652D697* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC063A23CA8B009640E1202463DC9D150D7EEF80);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GoldFormatter = GameObject.Find("GoldHandler");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralDC063A23CA8B009640E1202463DC9D150D7EEF80, NULL);
		__this->___GoldFormatter_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GoldFormatter_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void GrogDesc::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrogDesc_Update_m00F44A2C20077D5BEE0F2A8E7E3E64111CEEDA0D (GrogDesc_t056DE5EA6E86F649972FF8A0F672ADF89652D697* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void GrogDesc::descFormatter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrogDesc_descFormatter_m3113C63B11808AA6E28465AF36FE58DBFB40548B (GrogDesc_t056DE5EA6E86F649972FF8A0F672ADF89652D697* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGoldUpdater_tF81566509685857184CBF980E1080EB3DAAB9418_m5B744511C9687269F6CC80FB067150101703CDDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGrog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE_mFB69D395569B0895C5375A73C4B1A06FE504974C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A741E2EAB3EAE846BE7661DA9C991EE55778098);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD26BB837E5613B05E2C62215D1122AF2FD94C319);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string output = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// if(Grog.GrogType.ClickDamage == thisButton.grog.GetComponent<Grog>().grogType)
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_0 = __this->___thisButton_4;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = L_0->___grog_4;
		NullCheck(L_1);
		Grog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE* L_2;
		L_2 = GameObject_GetComponent_TisGrog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE_mFB69D395569B0895C5375A73C4B1A06FE504974C(L_1, GameObject_GetComponent_TisGrog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE_mFB69D395569B0895C5375A73C4B1A06FE504974C_RuntimeMethod_var);
		NullCheck(L_2);
		int32_t L_3 = L_2->___grogType_5;
		if (L_3)
		{
			goto IL_0051;
		}
	}
	{
		// output = GoldFormatter.GetComponent<GoldUpdater>().formatGold(thisButton.grog.GetComponent<Grog>().currentDamage);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___GoldFormatter_5;
		NullCheck(L_4);
		GoldUpdater_tF81566509685857184CBF980E1080EB3DAAB9418* L_5;
		L_5 = GameObject_GetComponent_TisGoldUpdater_tF81566509685857184CBF980E1080EB3DAAB9418_m5B744511C9687269F6CC80FB067150101703CDDD(L_4, GameObject_GetComponent_TisGoldUpdater_tF81566509685857184CBF980E1080EB3DAAB9418_m5B744511C9687269F6CC80FB067150101703CDDD_RuntimeMethod_var);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_6 = __this->___thisButton_4;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_6->___grog_4;
		NullCheck(L_7);
		Grog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE* L_8;
		L_8 = GameObject_GetComponent_TisGrog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE_mFB69D395569B0895C5375A73C4B1A06FE504974C(L_7, GameObject_GetComponent_TisGrog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE_mFB69D395569B0895C5375A73C4B1A06FE504974C_RuntimeMethod_var);
		NullCheck(L_8);
		double L_9 = L_8->___currentDamage_7;
		NullCheck(L_5);
		String_t* L_10;
		L_10 = GoldUpdater_formatGold_m9C9E3CF1B9BD23E558359D83B24E808419582A8F(L_5, L_9, NULL);
		V_0 = L_10;
		// output += " Click Damage";
		String_t* L_11 = V_0;
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_11, _stringLiteral7A741E2EAB3EAE846BE7661DA9C991EE55778098, NULL);
		V_0 = L_12;
		goto IL_009b;
	}

IL_0051:
	{
		// else if(Grog.GrogType.Dps == thisButton.grog.GetComponent<Grog>().grogType)
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_13 = __this->___thisButton_4;
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = L_13->___grog_4;
		NullCheck(L_14);
		Grog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE* L_15;
		L_15 = GameObject_GetComponent_TisGrog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE_mFB69D395569B0895C5375A73C4B1A06FE504974C(L_14, GameObject_GetComponent_TisGrog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE_mFB69D395569B0895C5375A73C4B1A06FE504974C_RuntimeMethod_var);
		NullCheck(L_15);
		int32_t L_16 = L_15->___grogType_5;
		if ((!(((uint32_t)1) == ((uint32_t)L_16))))
		{
			goto IL_009b;
		}
	}
	{
		// output = GoldFormatter.GetComponent<GoldUpdater>().formatGold(thisButton.grog.GetComponent<Grog>().currentDamage);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___GoldFormatter_5;
		NullCheck(L_17);
		GoldUpdater_tF81566509685857184CBF980E1080EB3DAAB9418* L_18;
		L_18 = GameObject_GetComponent_TisGoldUpdater_tF81566509685857184CBF980E1080EB3DAAB9418_m5B744511C9687269F6CC80FB067150101703CDDD(L_17, GameObject_GetComponent_TisGoldUpdater_tF81566509685857184CBF980E1080EB3DAAB9418_m5B744511C9687269F6CC80FB067150101703CDDD_RuntimeMethod_var);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_19 = __this->___thisButton_4;
		NullCheck(L_19);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = L_19->___grog_4;
		NullCheck(L_20);
		Grog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE* L_21;
		L_21 = GameObject_GetComponent_TisGrog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE_mFB69D395569B0895C5375A73C4B1A06FE504974C(L_20, GameObject_GetComponent_TisGrog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE_mFB69D395569B0895C5375A73C4B1A06FE504974C_RuntimeMethod_var);
		NullCheck(L_21);
		double L_22 = L_21->___currentDamage_7;
		NullCheck(L_18);
		String_t* L_23;
		L_23 = GoldUpdater_formatGold_m9C9E3CF1B9BD23E558359D83B24E808419582A8F(L_18, L_22, NULL);
		V_0 = L_23;
		// output += " DPS";
		String_t* L_24 = V_0;
		String_t* L_25;
		L_25 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_24, _stringLiteralD26BB837E5613B05E2C62215D1122AF2FD94C319, NULL);
		V_0 = L_25;
	}

IL_009b:
	{
		// gameObject.GetComponent<Text>().text = output;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_26);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_27;
		L_27 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_26, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		String_t* L_28 = V_0;
		NullCheck(L_27);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_27, L_28);
		// }
		return;
	}
}
// System.Void GrogDesc::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrogDesc__ctor_m94B141EB4CF879A5A2648FCBEA867A74821CF4D3 (GrogDesc_t056DE5EA6E86F649972FF8A0F672ADF89652D697* __this, const RuntimeMethod* method) 
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
// System.Void HealthUpdater::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthUpdater_Awake_m1171BC583BD2B4FC74A43EC2B5AD55D91978BA09 (HealthUpdater_tD8923C8141880DC65CF81A5F86604D1C19F5459F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4_m4A2003BB8153D52192A006D81119F3685D144594_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGoldUpdater_tF81566509685857184CBF980E1080EB3DAAB9418_m5B744511C9687269F6CC80FB067150101703CDDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F5FD870291A9070FD9EF78BF6B827EDFB57EA60);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC063A23CA8B009640E1202463DC9D150D7EEF80);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EH = GameObject.Find("EncounterHandler").GetComponent<EncounterHandler>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral4F5FD870291A9070FD9EF78BF6B827EDFB57EA60, NULL);
		NullCheck(L_0);
		EncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4* L_1;
		L_1 = GameObject_GetComponent_TisEncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4_m4A2003BB8153D52192A006D81119F3685D144594(L_0, GameObject_GetComponent_TisEncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4_m4A2003BB8153D52192A006D81119F3685D144594_RuntimeMethod_var);
		__this->___EH_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EH_5), (void*)L_1);
		// GU = GameObject.Find("GoldHandler").GetComponent<GoldUpdater>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralDC063A23CA8B009640E1202463DC9D150D7EEF80, NULL);
		NullCheck(L_2);
		GoldUpdater_tF81566509685857184CBF980E1080EB3DAAB9418* L_3;
		L_3 = GameObject_GetComponent_TisGoldUpdater_tF81566509685857184CBF980E1080EB3DAAB9418_m5B744511C9687269F6CC80FB067150101703CDDD(L_2, GameObject_GetComponent_TisGoldUpdater_tF81566509685857184CBF980E1080EB3DAAB9418_m5B744511C9687269F6CC80FB067150101703CDDD_RuntimeMethod_var);
		__this->___GU_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GU_6), (void*)L_3);
		// }
		return;
	}
}
// System.Void HealthUpdater::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthUpdater_Update_m77E853BDFFE770D803CF008834557F601C79AC31 (HealthUpdater_tD8923C8141880DC65CF81A5F86604D1C19F5459F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m4883A479F4252D21D45D5AD3140CB42598C48A13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m3B73E32B09A6667056AC232DA5238351F51DB7EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if(EH.currentEncounter == encounter)
		EncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4* L_0 = __this->___EH_5;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = L_0->___currentEncounter_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___encounter_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0097;
		}
	}
	{
		// gameObject.GetComponent<Slider>().maxValue = (float)EH.MaxHealth;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_4);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_5;
		L_5 = GameObject_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m3B73E32B09A6667056AC232DA5238351F51DB7EA(L_4, GameObject_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m3B73E32B09A6667056AC232DA5238351F51DB7EA_RuntimeMethod_var);
		EncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4* L_6 = __this->___EH_5;
		NullCheck(L_6);
		double L_7 = L_6->___MaxHealth_16;
		NullCheck(L_5);
		Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE(L_5, ((float)L_7), NULL);
		// gameObject.GetComponentInChildren<Text>().text = GU.formatGold(EH.Health)+" / "+GU.formatGold(EH.MaxHealth);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_8);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9;
		L_9 = GameObject_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m4883A479F4252D21D45D5AD3140CB42598C48A13(L_8, GameObject_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m4883A479F4252D21D45D5AD3140CB42598C48A13_RuntimeMethod_var);
		GoldUpdater_tF81566509685857184CBF980E1080EB3DAAB9418* L_10 = __this->___GU_6;
		EncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4* L_11 = __this->___EH_5;
		NullCheck(L_11);
		double L_12 = L_11->___Health_15;
		NullCheck(L_10);
		String_t* L_13;
		L_13 = GoldUpdater_formatGold_m9C9E3CF1B9BD23E558359D83B24E808419582A8F(L_10, L_12, NULL);
		GoldUpdater_tF81566509685857184CBF980E1080EB3DAAB9418* L_14 = __this->___GU_6;
		EncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4* L_15 = __this->___EH_5;
		NullCheck(L_15);
		double L_16 = L_15->___MaxHealth_16;
		NullCheck(L_14);
		String_t* L_17;
		L_17 = GoldUpdater_formatGold_m9C9E3CF1B9BD23E558359D83B24E808419582A8F(L_14, L_16, NULL);
		String_t* L_18;
		L_18 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_13, _stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED, L_17, NULL);
		NullCheck(L_9);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_18);
		// gameObject.GetComponent<Slider>().value = (float)EH.Health;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_19);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_20;
		L_20 = GameObject_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m3B73E32B09A6667056AC232DA5238351F51DB7EA(L_19, GameObject_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m3B73E32B09A6667056AC232DA5238351F51DB7EA_RuntimeMethod_var);
		EncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4* L_21 = __this->___EH_5;
		NullCheck(L_21);
		double L_22 = L_21->___Health_15;
		NullCheck(L_20);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_20, ((float)L_22));
		return;
	}

IL_0097:
	{
		// gameObject.GetComponentInChildren<Text>().text = 0+" / "+GU.formatGold(EH.MaxHealth);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_23);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_24;
		L_24 = GameObject_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m4883A479F4252D21D45D5AD3140CB42598C48A13(L_23, GameObject_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m4883A479F4252D21D45D5AD3140CB42598C48A13_RuntimeMethod_var);
		V_0 = 0;
		String_t* L_25;
		L_25 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		GoldUpdater_tF81566509685857184CBF980E1080EB3DAAB9418* L_26 = __this->___GU_6;
		EncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4* L_27 = __this->___EH_5;
		NullCheck(L_27);
		double L_28 = L_27->___MaxHealth_16;
		NullCheck(L_26);
		String_t* L_29;
		L_29 = GoldUpdater_formatGold_m9C9E3CF1B9BD23E558359D83B24E808419582A8F(L_26, L_28, NULL);
		String_t* L_30;
		L_30 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_25, _stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED, L_29, NULL);
		NullCheck(L_24);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_24, L_30);
		// gameObject.GetComponent<Slider>().value = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31;
		L_31 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_31);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_32;
		L_32 = GameObject_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m3B73E32B09A6667056AC232DA5238351F51DB7EA(L_31, GameObject_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m3B73E32B09A6667056AC232DA5238351F51DB7EA_RuntimeMethod_var);
		NullCheck(L_32);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_32, (0.0f));
		// }
		return;
	}
}
// System.Void HealthUpdater::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthUpdater__ctor_mC567A8E9801C888E5A75F6ECEAAB372B5591AD7D (HealthUpdater_tD8923C8141880DC65CF81A5F86604D1C19F5459F* __this, const RuntimeMethod* method) 
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
// System.Void Item::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_Start_mAF304BC26FB5ED4C69F6534266EE4F082967E4D8 (Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Item::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_Update_m321607B5029856E4D4919213FDD9001A1C448E47 (Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Item::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item__ctor_m741D59B05082743C60D2F1149112B571E89CAFAF (Item_tFAF77888D49883A321EB596A7D93CB5615D37E95* __this, const RuntimeMethod* method) 
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
// System.Void Loot::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loot_Start_m87721A9694192782724FFF15F59D62CC25BC7BF7 (Loot_tC8D6569EDF929CC5A066A637FAD7C4031B1866B6* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Loot::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loot_Update_m8C0D34F928290FE44BA49541F8C6B9A1475452D0 (Loot_tC8D6569EDF929CC5A066A637FAD7C4031B1866B6* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Loot::giveLoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loot_giveLoot_m2FE031DD3D1FCF4AC160C041437B845CC2D81B36 (Loot_tC8D6569EDF929CC5A066A637FAD7C4031B1866B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGrog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE_mFB69D395569B0895C5375A73C4B1A06FE504974C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMultibuyHandler_tB4F2F1A72D5AB705DED8274527981E6EE0594BAC_m7C2CFBB13AC9B0478EE2F0FA168118ECF663AB58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4F72B85CD80CA2B537105899EB83D52E6C57AEC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD599EDCFBEAC503B743CEEACA9F5FF5DBE29220);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if(LT == LootType.Grog)
		int32_t L_0 = __this->___LT_7;
		if (L_0)
		{
			goto IL_016c;
		}
	}
	{
		// PH = GameObject.Find("PlayerHandler");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralCD599EDCFBEAC503B743CEEACA9F5FF5DBE29220, NULL);
		__this->___PH_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PH_6), (void*)L_1);
		// PH.GetComponent<PlayerHandler>().GrogsButton[Index].GetComponent<ButtonGrog>().ParentObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___PH_6;
		NullCheck(L_2);
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_3;
		L_3 = GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D(L_2, GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D_RuntimeMethod_var);
		NullCheck(L_3);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_4 = L_3->___GrogsButton_9;
		int32_t L_5 = __this->___Index_5;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_8;
		L_8 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_7, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = L_8->___ParentObject_5;
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
		// if(PH.GetComponent<PlayerHandler>().GrogsButton[Index].GetComponent<ButtonGrog>().currentLevel == 0)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___PH_6;
		NullCheck(L_10);
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_11;
		L_11 = GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D(L_10, GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D_RuntimeMethod_var);
		NullCheck(L_11);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_12 = L_11->___GrogsButton_9;
		int32_t L_13 = __this->___Index_5;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_16;
		L_16 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_15, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_16);
		int32_t L_17 = L_16->___currentLevel_7;
		if (L_17)
		{
			goto IL_008b;
		}
	}
	{
		// PH.GetComponent<PlayerHandler>().GrogsButton[Index].GetComponent<ButtonGrog>().SpawnSpecialGrog();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___PH_6;
		NullCheck(L_18);
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_19;
		L_19 = GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D(L_18, GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D_RuntimeMethod_var);
		NullCheck(L_19);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_20 = L_19->___GrogsButton_9;
		int32_t L_21 = __this->___Index_5;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_24;
		L_24 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_23, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_24);
		ButtonGrog_SpawnSpecialGrog_m1FB1C5F4B891DBD3EF43B308F686C34DB0CD38AD(L_24, NULL);
		goto IL_0158;
	}

IL_008b:
	{
		// for(int i = 0; i < amount; i++)
		V_0 = 0;
		goto IL_00e7;
	}

IL_008f:
	{
		// PH.GetComponent<PlayerHandler>().GrogsButton[Index].GetComponent<ButtonGrog>().grog.GetComponent<Grog>().onUpgrade();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___PH_6;
		NullCheck(L_25);
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_26;
		L_26 = GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D(L_25, GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D_RuntimeMethod_var);
		NullCheck(L_26);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_27 = L_26->___GrogsButton_9;
		int32_t L_28 = __this->___Index_5;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_31;
		L_31 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_30, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_31);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = L_31->___grog_4;
		NullCheck(L_32);
		Grog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE* L_33;
		L_33 = GameObject_GetComponent_TisGrog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE_mFB69D395569B0895C5375A73C4B1A06FE504974C(L_32, GameObject_GetComponent_TisGrog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE_mFB69D395569B0895C5375A73C4B1A06FE504974C_RuntimeMethod_var);
		NullCheck(L_33);
		Grog_onUpgrade_m8E9832040C31BEF4CA9D4CB6D97FE7BDD1677EA5(L_33, NULL);
		// PH.GetComponent<PlayerHandler>().GrogsButton[Index].GetComponent<ButtonGrog>().currentLevel++;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = __this->___PH_6;
		NullCheck(L_34);
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_35;
		L_35 = GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D(L_34, GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D_RuntimeMethod_var);
		NullCheck(L_35);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_36 = L_35->___GrogsButton_9;
		int32_t L_37 = __this->___Index_5;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_39);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_40;
		L_40 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_39, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_41 = L_40;
		NullCheck(L_41);
		int32_t L_42 = L_41->___currentLevel_7;
		NullCheck(L_41);
		L_41->___currentLevel_7 = ((int32_t)il2cpp_codegen_add(L_42, 1));
		// for(int i = 0; i < amount; i++)
		int32_t L_43 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_00e7:
	{
		// for(int i = 0; i < amount; i++)
		int32_t L_44 = V_0;
		int32_t L_45 = __this->___amount_8;
		if ((((int32_t)L_44) < ((int32_t)L_45)))
		{
			goto IL_008f;
		}
	}
	{
		// PH.GetComponent<PlayerHandler>().GrogsButton[Index].GetComponent<ButtonGrog>().UpdateCost();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46 = __this->___PH_6;
		NullCheck(L_46);
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_47;
		L_47 = GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D(L_46, GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D_RuntimeMethod_var);
		NullCheck(L_47);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_48 = L_47->___GrogsButton_9;
		int32_t L_49 = __this->___Index_5;
		NullCheck(L_48);
		int32_t L_50 = L_49;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		NullCheck(L_51);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_52;
		L_52 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_51, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_52);
		ButtonGrog_UpdateCost_m7062E0D3D739B742C5BF940BE11C12E3F8D2BF7E(L_52, NULL);
		// PH.GetComponent<PlayerHandler>().GrogsButton[Index].GetComponent<ButtonGrog>().priceUpdate();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_53 = __this->___PH_6;
		NullCheck(L_53);
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_54;
		L_54 = GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D(L_53, GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D_RuntimeMethod_var);
		NullCheck(L_54);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_55 = L_54->___GrogsButton_9;
		int32_t L_56 = __this->___Index_5;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		NullCheck(L_58);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_59;
		L_59 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_58, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_59);
		ButtonGrog_priceUpdate_m4B400234A6B14DB0C94529092C7BABAD065875B5(L_59, NULL);
		// PH.GetComponent<PlayerHandler>().GrogsButton[Index].GetComponent<ButtonGrog>().desc.descFormatter();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_60 = __this->___PH_6;
		NullCheck(L_60);
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_61;
		L_61 = GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D(L_60, GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D_RuntimeMethod_var);
		NullCheck(L_61);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_62 = L_61->___GrogsButton_9;
		int32_t L_63 = __this->___Index_5;
		NullCheck(L_62);
		int32_t L_64 = L_63;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_65);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_66;
		L_66 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_65, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_66);
		GrogDesc_t056DE5EA6E86F649972FF8A0F672ADF89652D697* L_67 = L_66->___desc_6;
		NullCheck(L_67);
		GrogDesc_descFormatter_m3113C63B11808AA6E28465AF36FE58DBFB40548B(L_67, NULL);
	}

IL_0158:
	{
		// GameObject.Find("MultiBuy").GetComponent<MultibuyHandler>().X1ButtonHit();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_68;
		L_68 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralA4F72B85CD80CA2B537105899EB83D52E6C57AEC, NULL);
		NullCheck(L_68);
		MultibuyHandler_tB4F2F1A72D5AB705DED8274527981E6EE0594BAC* L_69;
		L_69 = GameObject_GetComponent_TisMultibuyHandler_tB4F2F1A72D5AB705DED8274527981E6EE0594BAC_m7C2CFBB13AC9B0478EE2F0FA168118ECF663AB58(L_68, GameObject_GetComponent_TisMultibuyHandler_tB4F2F1A72D5AB705DED8274527981E6EE0594BAC_m7C2CFBB13AC9B0478EE2F0FA168118ECF663AB58_RuntimeMethod_var);
		NullCheck(L_69);
		MultibuyHandler_X1ButtonHit_mEAC687DCA05529DD5438E11200DBD15929C87D46(L_69, NULL);
	}

IL_016c:
	{
		// if(LT == LootType.GrogUpgrader)
		int32_t L_70 = __this->___LT_7;
		if ((!(((uint32_t)L_70) == ((uint32_t)1))))
		{
			goto IL_02b2;
		}
	}
	{
		// PH = GameObject.Find("PlayerHandler");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_71;
		L_71 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralCD599EDCFBEAC503B743CEEACA9F5FF5DBE29220, NULL);
		__this->___PH_6 = L_71;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PH_6), (void*)L_71);
		// if(PH.GetComponent<PlayerHandler>().GrogsButton[Index].GetComponent<ButtonGrog>().currentLevel == 0)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_72 = __this->___PH_6;
		NullCheck(L_72);
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_73;
		L_73 = GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D(L_72, GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D_RuntimeMethod_var);
		NullCheck(L_73);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_74 = L_73->___GrogsButton_9;
		int32_t L_75 = __this->___Index_5;
		NullCheck(L_74);
		int32_t L_76 = L_75;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		NullCheck(L_77);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_78;
		L_78 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_77, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_78);
		int32_t L_79 = L_78->___currentLevel_7;
		if (L_79)
		{
			goto IL_01d1;
		}
	}
	{
		// PH.GetComponent<PlayerHandler>().GrogsButton[Index].GetComponent<ButtonGrog>().SpawnSpecialGrog();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_80 = __this->___PH_6;
		NullCheck(L_80);
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_81;
		L_81 = GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D(L_80, GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D_RuntimeMethod_var);
		NullCheck(L_81);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_82 = L_81->___GrogsButton_9;
		int32_t L_83 = __this->___Index_5;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		NullCheck(L_85);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_86;
		L_86 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_85, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_86);
		ButtonGrog_SpawnSpecialGrog_m1FB1C5F4B891DBD3EF43B308F686C34DB0CD38AD(L_86, NULL);
		goto IL_029e;
	}

IL_01d1:
	{
		// for(int i = 0; i < amount; i++)
		V_1 = 0;
		goto IL_022d;
	}

IL_01d5:
	{
		// PH.GetComponent<PlayerHandler>().GrogsButton[Index].GetComponent<ButtonGrog>().grog.GetComponent<Grog>().onUpgrade();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_87 = __this->___PH_6;
		NullCheck(L_87);
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_88;
		L_88 = GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D(L_87, GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D_RuntimeMethod_var);
		NullCheck(L_88);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_89 = L_88->___GrogsButton_9;
		int32_t L_90 = __this->___Index_5;
		NullCheck(L_89);
		int32_t L_91 = L_90;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_92 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		NullCheck(L_92);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_93;
		L_93 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_92, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_93);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_94 = L_93->___grog_4;
		NullCheck(L_94);
		Grog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE* L_95;
		L_95 = GameObject_GetComponent_TisGrog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE_mFB69D395569B0895C5375A73C4B1A06FE504974C(L_94, GameObject_GetComponent_TisGrog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE_mFB69D395569B0895C5375A73C4B1A06FE504974C_RuntimeMethod_var);
		NullCheck(L_95);
		Grog_onUpgrade_m8E9832040C31BEF4CA9D4CB6D97FE7BDD1677EA5(L_95, NULL);
		// PH.GetComponent<PlayerHandler>().GrogsButton[Index].GetComponent<ButtonGrog>().currentLevel++;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_96 = __this->___PH_6;
		NullCheck(L_96);
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_97;
		L_97 = GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D(L_96, GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D_RuntimeMethod_var);
		NullCheck(L_97);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_98 = L_97->___GrogsButton_9;
		int32_t L_99 = __this->___Index_5;
		NullCheck(L_98);
		int32_t L_100 = L_99;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_101 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		NullCheck(L_101);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_102;
		L_102 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_101, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_103 = L_102;
		NullCheck(L_103);
		int32_t L_104 = L_103->___currentLevel_7;
		NullCheck(L_103);
		L_103->___currentLevel_7 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		// for(int i = 0; i < amount; i++)
		int32_t L_105 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_105, 1));
	}

IL_022d:
	{
		// for(int i = 0; i < amount; i++)
		int32_t L_106 = V_1;
		int32_t L_107 = __this->___amount_8;
		if ((((int32_t)L_106) < ((int32_t)L_107)))
		{
			goto IL_01d5;
		}
	}
	{
		// PH.GetComponent<PlayerHandler>().GrogsButton[Index].GetComponent<ButtonGrog>().UpdateCost();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_108 = __this->___PH_6;
		NullCheck(L_108);
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_109;
		L_109 = GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D(L_108, GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D_RuntimeMethod_var);
		NullCheck(L_109);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_110 = L_109->___GrogsButton_9;
		int32_t L_111 = __this->___Index_5;
		NullCheck(L_110);
		int32_t L_112 = L_111;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_113 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		NullCheck(L_113);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_114;
		L_114 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_113, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_114);
		ButtonGrog_UpdateCost_m7062E0D3D739B742C5BF940BE11C12E3F8D2BF7E(L_114, NULL);
		// PH.GetComponent<PlayerHandler>().GrogsButton[Index].GetComponent<ButtonGrog>().priceUpdate();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_115 = __this->___PH_6;
		NullCheck(L_115);
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_116;
		L_116 = GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D(L_115, GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D_RuntimeMethod_var);
		NullCheck(L_116);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_117 = L_116->___GrogsButton_9;
		int32_t L_118 = __this->___Index_5;
		NullCheck(L_117);
		int32_t L_119 = L_118;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_120 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		NullCheck(L_120);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_121;
		L_121 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_120, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_121);
		ButtonGrog_priceUpdate_m4B400234A6B14DB0C94529092C7BABAD065875B5(L_121, NULL);
		// PH.GetComponent<PlayerHandler>().GrogsButton[Index].GetComponent<ButtonGrog>().desc.descFormatter();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_122 = __this->___PH_6;
		NullCheck(L_122);
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_123;
		L_123 = GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D(L_122, GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D_RuntimeMethod_var);
		NullCheck(L_123);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_124 = L_123->___GrogsButton_9;
		int32_t L_125 = __this->___Index_5;
		NullCheck(L_124);
		int32_t L_126 = L_125;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_127 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
		NullCheck(L_127);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_128;
		L_128 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_127, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_128);
		GrogDesc_t056DE5EA6E86F649972FF8A0F672ADF89652D697* L_129 = L_128->___desc_6;
		NullCheck(L_129);
		GrogDesc_descFormatter_m3113C63B11808AA6E28465AF36FE58DBFB40548B(L_129, NULL);
	}

IL_029e:
	{
		// GameObject.Find("MultiBuy").GetComponent<MultibuyHandler>().X1ButtonHit();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_130;
		L_130 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralA4F72B85CD80CA2B537105899EB83D52E6C57AEC, NULL);
		NullCheck(L_130);
		MultibuyHandler_tB4F2F1A72D5AB705DED8274527981E6EE0594BAC* L_131;
		L_131 = GameObject_GetComponent_TisMultibuyHandler_tB4F2F1A72D5AB705DED8274527981E6EE0594BAC_m7C2CFBB13AC9B0478EE2F0FA168118ECF663AB58(L_130, GameObject_GetComponent_TisMultibuyHandler_tB4F2F1A72D5AB705DED8274527981E6EE0594BAC_m7C2CFBB13AC9B0478EE2F0FA168118ECF663AB58_RuntimeMethod_var);
		NullCheck(L_131);
		MultibuyHandler_X1ButtonHit_mEAC687DCA05529DD5438E11200DBD15929C87D46(L_131, NULL);
	}

IL_02b2:
	{
		// }
		return;
	}
}
// System.Void Loot::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loot__ctor_m60670D98190B9C11726B929CBBF94CD93DAA7BB0 (Loot_tC8D6569EDF929CC5A066A637FAD7C4031B1866B6* __this, const RuntimeMethod* method) 
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
// System.Void MenuButtonManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuButtonManager_Start_m05DFBA7B1E938838EBB1C2F9C5D9E15BAD7887A5 (MenuButtonManager_tF5F9669A2BCEC99D6AADB4A8EC1D69691753E52D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MenuButtonManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuButtonManager_Update_m2ED0B0B5E535242BAB506FE4CAD069E74E1DCE56 (MenuButtonManager_tF5F9669A2BCEC99D6AADB4A8EC1D69691753E52D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MenuButtonManager::ShopButtonHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuButtonManager_ShopButtonHit_m0DC8CF4696F4F5CF9068E6410655293885E76A2D (MenuButtonManager_tF5F9669A2BCEC99D6AADB4A8EC1D69691753E52D* __this, const RuntimeMethod* method) 
{
	{
		// buttonIndex = 1;
		__this->___buttonIndex_4 = 1;
		// MenuUpdate();
		MenuButtonManager_MenuUpdate_mD4EF33709E845B59AB34537C04BBEAD405082B8F(__this, NULL);
		// }
		return;
	}
}
// System.Void MenuButtonManager::WorldButtonHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuButtonManager_WorldButtonHit_m13624F9942EF76064A6DA1CD69632FFB02F3CDD9 (MenuButtonManager_tF5F9669A2BCEC99D6AADB4A8EC1D69691753E52D* __this, const RuntimeMethod* method) 
{
	{
		// buttonIndex = 2;
		__this->___buttonIndex_4 = 2;
		// MenuUpdate();
		MenuButtonManager_MenuUpdate_mD4EF33709E845B59AB34537C04BBEAD405082B8F(__this, NULL);
		// }
		return;
	}
}
// System.Void MenuButtonManager::ItemButtonHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuButtonManager_ItemButtonHit_mBB6472FBDF50CA55652018A6275F7A415DFD4B5F (MenuButtonManager_tF5F9669A2BCEC99D6AADB4A8EC1D69691753E52D* __this, const RuntimeMethod* method) 
{
	{
		// buttonIndex = 3;
		__this->___buttonIndex_4 = 3;
		// MenuUpdate();
		MenuButtonManager_MenuUpdate_mD4EF33709E845B59AB34537C04BBEAD405082B8F(__this, NULL);
		// }
		return;
	}
}
// System.Void MenuButtonManager::SettingsButtonHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuButtonManager_SettingsButtonHit_m1D2CE5D864359EF5E8801F6B496338DD8CA61F7D (MenuButtonManager_tF5F9669A2BCEC99D6AADB4A8EC1D69691753E52D* __this, const RuntimeMethod* method) 
{
	{
		// buttonIndex = 4;
		__this->___buttonIndex_4 = 4;
		// MenuUpdate();
		MenuButtonManager_MenuUpdate_mD4EF33709E845B59AB34537C04BBEAD405082B8F(__this, NULL);
		// }
		return;
	}
}
// System.Void MenuButtonManager::MenuUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuButtonManager_MenuUpdate_mD4EF33709E845B59AB34537C04BBEAD405082B8F (MenuButtonManager_tF5F9669A2BCEC99D6AADB4A8EC1D69691753E52D* __this, const RuntimeMethod* method) 
{
	{
		// buttonReset();
		MenuButtonManager_buttonReset_m21122C2514B5040556303657813D5C9FDC4682EA(__this, NULL);
		// buttonActions();
		MenuButtonManager_buttonActions_m5AE3DD976CAD70E6E049ED369609207C1EB71751(__this, NULL);
		// }
		return;
	}
}
// System.Void MenuButtonManager::buttonReset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuButtonManager_buttonReset_m21122C2514B5040556303657813D5C9FDC4682EA (MenuButtonManager_tF5F9669A2BCEC99D6AADB4A8EC1D69691753E52D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach(GameObject g in buttons)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___buttons_5;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0021;
	}

IL_000b:
	{
		// foreach(GameObject g in buttons)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// g.GetComponent<Image>().color = Color.white;
		NullCheck(L_4);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5;
		L_5 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_4, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0021:
	{
		// foreach(GameObject g in buttons)
		int32_t L_8 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// ShopObjects.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___ShopObjects_6;
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
		// WorldObjects.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___WorldObjects_7;
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
		// ItemObjects.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___ItemObjects_8;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
		// SettingsObjects.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___SettingsObjects_9;
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MenuButtonManager::buttonActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuButtonManager_buttonActions_m5AE3DD976CAD70E6E049ED369609207C1EB71751 (MenuButtonManager_tF5F9669A2BCEC99D6AADB4A8EC1D69691753E52D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(buttonIndex == 1)
		int32_t L_0 = __this->___buttonIndex_4;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0034;
		}
	}
	{
		// buttons[buttonIndex-1].GetComponent<Image>().color = Color.gray;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___buttons_5;
		int32_t L_2 = __this->___buttonIndex_4;
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5;
		L_5 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_4, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline(NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		// ShopObjects.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___ShopObjects_6;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		return;
	}

IL_0034:
	{
		// else if(buttonIndex == 2)
		int32_t L_8 = __this->___buttonIndex_4;
		if ((!(((uint32_t)L_8) == ((uint32_t)2))))
		{
			goto IL_0068;
		}
	}
	{
		// buttons[buttonIndex-1].GetComponent<Image>().color = Color.gray;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_9 = __this->___buttons_5;
		int32_t L_10 = __this->___buttonIndex_4;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_13;
		L_13 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_12, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14;
		L_14 = Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline(NULL);
		NullCheck(L_13);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_13, L_14);
		// WorldObjects.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___WorldObjects_7;
		NullCheck(L_15);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)1, NULL);
		return;
	}

IL_0068:
	{
		// else if(buttonIndex == 3)
		int32_t L_16 = __this->___buttonIndex_4;
		if ((!(((uint32_t)L_16) == ((uint32_t)3))))
		{
			goto IL_009c;
		}
	}
	{
		// buttons[buttonIndex-1].GetComponent<Image>().color = Color.gray;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_17 = __this->___buttons_5;
		int32_t L_18 = __this->___buttonIndex_4;
		NullCheck(L_17);
		int32_t L_19 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_21;
		L_21 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_20, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline(NULL);
		NullCheck(L_21);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_21, L_22);
		// ItemObjects.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___ItemObjects_8;
		NullCheck(L_23);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_23, (bool)1, NULL);
		return;
	}

IL_009c:
	{
		// else if(buttonIndex == 4)
		int32_t L_24 = __this->___buttonIndex_4;
		if ((!(((uint32_t)L_24) == ((uint32_t)4))))
		{
			goto IL_00cf;
		}
	}
	{
		// buttons[buttonIndex-1].GetComponent<Image>().color = Color.gray;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_25 = __this->___buttons_5;
		int32_t L_26 = __this->___buttonIndex_4;
		NullCheck(L_25);
		int32_t L_27 = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_28);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_29;
		L_29 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_28, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		L_30 = Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline(NULL);
		NullCheck(L_29);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_29, L_30);
		// SettingsObjects.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = __this->___SettingsObjects_9;
		NullCheck(L_31);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_31, (bool)1, NULL);
	}

IL_00cf:
	{
		// }
		return;
	}
}
// System.Void MenuButtonManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuButtonManager__ctor_mBE1CE9ADE4188DDF71500B3341DE7DE362AB9BDD (MenuButtonManager_tF5F9669A2BCEC99D6AADB4A8EC1D69691753E52D* __this, const RuntimeMethod* method) 
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
// System.Void PlayerHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHandler_Start_m697AF6AEB42BC32AF406F8899CB8E8F3BEEAF19C (PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F2E8B5D72BFE649B541D4BB201A379B4DFE3071);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LoadPlayer();
		PlayerHandler_LoadPlayer_mFD68E27C0DAFFDF935A6DFE10D03CD274A77F19E(__this, NULL);
		// StartCoroutine("SaveTheGame");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_0;
		L_0 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteral7F2E8B5D72BFE649B541D4BB201A379B4DFE3071, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator PlayerHandler::SaveTheGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerHandler_SaveTheGame_mFA3D7026BD9695FBBA8D53F1187880D98FD95AAC (PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSaveTheGameU3Ed__10_t7D41F480297F89635409B197697B72A1515AA4DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSaveTheGameU3Ed__10_t7D41F480297F89635409B197697B72A1515AA4DB* L_0 = (U3CSaveTheGameU3Ed__10_t7D41F480297F89635409B197697B72A1515AA4DB*)il2cpp_codegen_object_new(U3CSaveTheGameU3Ed__10_t7D41F480297F89635409B197697B72A1515AA4DB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSaveTheGameU3Ed__10__ctor_m89CD2FCF7B3F855F5C048282FC890296A0A0C85C(L_0, 0, NULL);
		U3CSaveTheGameU3Ed__10_t7D41F480297F89635409B197697B72A1515AA4DB* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void PlayerHandler::SaveGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHandler_SaveGame_m3A6C7279288B41402BBBF67CE63510023C86831E (PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* __this, const RuntimeMethod* method) 
{
	{
		// SaveSystem.SaveGame(this);
		SaveSystem_SaveGame_m45E960B3490FB19E8F9D803837AB343018F09944(__this, NULL);
		// }
		return;
	}
}
// System.Void PlayerHandler::LoadPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHandler_LoadPlayer_mFD68E27C0DAFFDF935A6DFE10D03CD274A77F19E (PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGrogItem_tF4D3621CD5ECE7D32F1FDC3D8BA2D96CC491B299_mCBF443CBEE1188E7B637701814CF53431D529B55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisWorldButtonBuy_t740725B75DEF251588CA3D7221D5964B21762B24_mD93D2DD5171EEE3589EFCCAA9DB3A586DFEF41C9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_17;
	memset((&V_17), 0, sizeof(V_17));
	{
		// SaveData data = SaveSystem.LoadSave();
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_0;
		L_0 = SaveSystem_LoadSave_m69049E7F09F306B42E39632D8F32A100050DBC96(NULL);
		V_0 = L_0;
		// if(data == null) // if there is no savedata
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_1 = V_0;
		if (L_1)
		{
			goto IL_00f8;
		}
	}
	{
		// for(int i = 0; i < WorldsButton.Length;i++)
		V_1 = 0;
		goto IL_003f;
	}

IL_0010:
	{
		// WorldsButton[i].GetComponent<WorldButtonBuy>().bought = false;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___WorldsButton_8;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		WorldButtonBuy_t740725B75DEF251588CA3D7221D5964B21762B24* L_6;
		L_6 = GameObject_GetComponent_TisWorldButtonBuy_t740725B75DEF251588CA3D7221D5964B21762B24_mD93D2DD5171EEE3589EFCCAA9DB3A586DFEF41C9(L_5, GameObject_GetComponent_TisWorldButtonBuy_t740725B75DEF251588CA3D7221D5964B21762B24_mD93D2DD5171EEE3589EFCCAA9DB3A586DFEF41C9_RuntimeMethod_var);
		NullCheck(L_6);
		L_6->___bought_7 = (bool)0;
		// WorldsButton[i].GetComponent<WorldButtonBuy>().world.enemiesKilled = 1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = __this->___WorldsButton_8;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		WorldButtonBuy_t740725B75DEF251588CA3D7221D5964B21762B24* L_11;
		L_11 = GameObject_GetComponent_TisWorldButtonBuy_t740725B75DEF251588CA3D7221D5964B21762B24_mD93D2DD5171EEE3589EFCCAA9DB3A586DFEF41C9(L_10, GameObject_GetComponent_TisWorldButtonBuy_t740725B75DEF251588CA3D7221D5964B21762B24_mD93D2DD5171EEE3589EFCCAA9DB3A586DFEF41C9_RuntimeMethod_var);
		NullCheck(L_11);
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_12 = L_11->___world_4;
		NullCheck(L_12);
		L_12->___enemiesKilled_6 = 1;
		// for(int i = 0; i < WorldsButton.Length;i++)
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_003f:
	{
		// for(int i = 0; i < WorldsButton.Length;i++)
		int32_t L_14 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_15 = __this->___WorldsButton_8;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_0010;
		}
	}
	{
		// WorldsButton[0].GetComponent<WorldButtonBuy>().bought = true;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_16 = __this->___WorldsButton_8;
		NullCheck(L_16);
		int32_t L_17 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		WorldButtonBuy_t740725B75DEF251588CA3D7221D5964B21762B24* L_19;
		L_19 = GameObject_GetComponent_TisWorldButtonBuy_t740725B75DEF251588CA3D7221D5964B21762B24_mD93D2DD5171EEE3589EFCCAA9DB3A586DFEF41C9(L_18, GameObject_GetComponent_TisWorldButtonBuy_t740725B75DEF251588CA3D7221D5964B21762B24_mD93D2DD5171EEE3589EFCCAA9DB3A586DFEF41C9_RuntimeMethod_var);
		NullCheck(L_19);
		L_19->___bought_7 = (bool)1;
		// for(int i = 0; i < GrogsButton.Length;i++)
		V_2 = 0;
		goto IL_00b7;
	}

IL_0061:
	{
		// GrogsButton[i].GetComponent<ButtonGrog>().currentLevel = 0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_20 = __this->___GrogsButton_9;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_24;
		L_24 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_23, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_24);
		L_24->___currentLevel_7 = 0;
		// GrogsButton[i].GetComponent<ButtonGrog>().spawnOnSave = false;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_25 = __this->___GrogsButton_9;
		int32_t L_26 = V_2;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_28);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_29;
		L_29 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_28, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_29);
		L_29->___spawnOnSave_9 = (bool)0;
		// if(!GrogsButton[i].GetComponent<ButtonGrog>().found)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_30 = __this->___GrogsButton_9;
		int32_t L_31 = V_2;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_33);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_34;
		L_34 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_33, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_34);
		bool L_35 = L_34->___found_14;
		if (L_35)
		{
			goto IL_00b3;
		}
	}
	{
		// GrogsButton[i].GetComponent<ButtonGrog>().ParentObject.SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_36 = __this->___GrogsButton_9;
		int32_t L_37 = V_2;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_39);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_40;
		L_40 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_39, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_40);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = L_40->___ParentObject_5;
		NullCheck(L_41);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_41, (bool)0, NULL);
	}

IL_00b3:
	{
		// for(int i = 0; i < GrogsButton.Length;i++)
		int32_t L_42 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00b7:
	{
		// for(int i = 0; i < GrogsButton.Length;i++)
		int32_t L_43 = V_2;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_44 = __this->___GrogsButton_9;
		NullCheck(L_44);
		if ((((int32_t)L_43) < ((int32_t)((int32_t)(((RuntimeArray*)L_44)->max_length)))))
		{
			goto IL_0061;
		}
	}
	{
		// for(int i = 0; i < ItemSlots.Length;i++)
		V_3 = 0;
		goto IL_00dd;
	}

IL_00c6:
	{
		// ItemSlots[i].GetComponent<GrogItem>().found = false;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_45 = __this->___ItemSlots_10;
		int32_t L_46 = V_3;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		NullCheck(L_48);
		GrogItem_tF4D3621CD5ECE7D32F1FDC3D8BA2D96CC491B299* L_49;
		L_49 = GameObject_GetComponent_TisGrogItem_tF4D3621CD5ECE7D32F1FDC3D8BA2D96CC491B299_mCBF443CBEE1188E7B637701814CF53431D529B55(L_48, GameObject_GetComponent_TisGrogItem_tF4D3621CD5ECE7D32F1FDC3D8BA2D96CC491B299_mCBF443CBEE1188E7B637701814CF53431D529B55_RuntimeMethod_var);
		NullCheck(L_49);
		L_49->___found_4 = (bool)0;
		// for(int i = 0; i < ItemSlots.Length;i++)
		int32_t L_50 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_00dd:
	{
		// for(int i = 0; i < ItemSlots.Length;i++)
		int32_t L_51 = V_3;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_52 = __this->___ItemSlots_10;
		NullCheck(L_52);
		if ((((int32_t)L_51) < ((int32_t)((int32_t)(((RuntimeArray*)L_52)->max_length)))))
		{
			goto IL_00c6;
		}
	}
	{
		// gold = 1;
		__this->___gold_6 = (1.0);
		return;
	}

IL_00f8:
	{
		// if(data.WorldBoughts!= null)
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_53 = V_0;
		NullCheck(L_53);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_54 = L_53->___WorldBoughts_0;
		if (!L_54)
		{
			goto IL_01cd;
		}
	}
	{
		// for(int i = 0; i < data.WorldBoughts.Length;i++)
		V_5 = 0;
		goto IL_014b;
	}

IL_0108:
	{
		// WorldsButton[i].GetComponent<WorldButtonBuy>().bought = data.WorldBoughts[i];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_55 = __this->___WorldsButton_8;
		int32_t L_56 = V_5;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		NullCheck(L_58);
		WorldButtonBuy_t740725B75DEF251588CA3D7221D5964B21762B24* L_59;
		L_59 = GameObject_GetComponent_TisWorldButtonBuy_t740725B75DEF251588CA3D7221D5964B21762B24_mD93D2DD5171EEE3589EFCCAA9DB3A586DFEF41C9(L_58, GameObject_GetComponent_TisWorldButtonBuy_t740725B75DEF251588CA3D7221D5964B21762B24_mD93D2DD5171EEE3589EFCCAA9DB3A586DFEF41C9_RuntimeMethod_var);
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_60 = V_0;
		NullCheck(L_60);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_61 = L_60->___WorldBoughts_0;
		int32_t L_62 = V_5;
		NullCheck(L_61);
		int32_t L_63 = L_62;
		uint8_t L_64 = (uint8_t)(L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		NullCheck(L_59);
		L_59->___bought_7 = (bool)L_64;
		// WorldsButton[i].GetComponent<WorldButtonBuy>().world.enemiesKilled = data.enemiesKilled[i];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_65 = __this->___WorldsButton_8;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = L_66;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		NullCheck(L_68);
		WorldButtonBuy_t740725B75DEF251588CA3D7221D5964B21762B24* L_69;
		L_69 = GameObject_GetComponent_TisWorldButtonBuy_t740725B75DEF251588CA3D7221D5964B21762B24_mD93D2DD5171EEE3589EFCCAA9DB3A586DFEF41C9(L_68, GameObject_GetComponent_TisWorldButtonBuy_t740725B75DEF251588CA3D7221D5964B21762B24_mD93D2DD5171EEE3589EFCCAA9DB3A586DFEF41C9_RuntimeMethod_var);
		NullCheck(L_69);
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_70 = L_69->___world_4;
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_71 = V_0;
		NullCheck(L_71);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_72 = L_71->___enemiesKilled_1;
		int32_t L_73 = V_5;
		NullCheck(L_72);
		int32_t L_74 = L_73;
		int32_t L_75 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_70);
		L_70->___enemiesKilled_6 = L_75;
		// for(int i = 0; i < data.WorldBoughts.Length;i++)
		int32_t L_76 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_014b:
	{
		// for(int i = 0; i < data.WorldBoughts.Length;i++)
		int32_t L_77 = V_5;
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_78 = V_0;
		NullCheck(L_78);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_79 = L_78->___WorldBoughts_0;
		NullCheck(L_79);
		if ((((int32_t)L_77) < ((int32_t)((int32_t)(((RuntimeArray*)L_79)->max_length)))))
		{
			goto IL_0108;
		}
	}
	{
		// if(data.WorldBoughts.Length < WorldsButton.Length)
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_80 = V_0;
		NullCheck(L_80);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_81 = L_80->___WorldBoughts_0;
		NullCheck(L_81);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_82 = __this->___WorldsButton_8;
		NullCheck(L_82);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_81)->max_length))) >= ((int32_t)((int32_t)(((RuntimeArray*)L_82)->max_length)))))
		{
			goto IL_0211;
		}
	}
	{
		// for(int i = 0; i < WorldsButton.Length-data.WorldBoughts.Length; i++)//if new worlds are added
		V_6 = 0;
		goto IL_01b6;
	}

IL_0171:
	{
		// WorldsButton[i+data.WorldBoughts.Length].GetComponent<WorldButtonBuy>().bought = false;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_83 = __this->___WorldsButton_8;
		int32_t L_84 = V_6;
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_85 = V_0;
		NullCheck(L_85);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_86 = L_85->___WorldBoughts_0;
		NullCheck(L_86);
		NullCheck(L_83);
		int32_t L_87 = ((int32_t)il2cpp_codegen_add(L_84, ((int32_t)(((RuntimeArray*)L_86)->max_length))));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_88 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		NullCheck(L_88);
		WorldButtonBuy_t740725B75DEF251588CA3D7221D5964B21762B24* L_89;
		L_89 = GameObject_GetComponent_TisWorldButtonBuy_t740725B75DEF251588CA3D7221D5964B21762B24_mD93D2DD5171EEE3589EFCCAA9DB3A586DFEF41C9(L_88, GameObject_GetComponent_TisWorldButtonBuy_t740725B75DEF251588CA3D7221D5964B21762B24_mD93D2DD5171EEE3589EFCCAA9DB3A586DFEF41C9_RuntimeMethod_var);
		NullCheck(L_89);
		L_89->___bought_7 = (bool)0;
		// WorldsButton[i+data.WorldBoughts.Length].GetComponent<WorldButtonBuy>().world.enemiesKilled = 1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_90 = __this->___WorldsButton_8;
		int32_t L_91 = V_6;
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_92 = V_0;
		NullCheck(L_92);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_93 = L_92->___WorldBoughts_0;
		NullCheck(L_93);
		NullCheck(L_90);
		int32_t L_94 = ((int32_t)il2cpp_codegen_add(L_91, ((int32_t)(((RuntimeArray*)L_93)->max_length))));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_95 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		NullCheck(L_95);
		WorldButtonBuy_t740725B75DEF251588CA3D7221D5964B21762B24* L_96;
		L_96 = GameObject_GetComponent_TisWorldButtonBuy_t740725B75DEF251588CA3D7221D5964B21762B24_mD93D2DD5171EEE3589EFCCAA9DB3A586DFEF41C9(L_95, GameObject_GetComponent_TisWorldButtonBuy_t740725B75DEF251588CA3D7221D5964B21762B24_mD93D2DD5171EEE3589EFCCAA9DB3A586DFEF41C9_RuntimeMethod_var);
		NullCheck(L_96);
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_97 = L_96->___world_4;
		NullCheck(L_97);
		L_97->___enemiesKilled_6 = 1;
		// for(int i = 0; i < WorldsButton.Length-data.WorldBoughts.Length; i++)//if new worlds are added
		int32_t L_98 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_98, 1));
	}

IL_01b6:
	{
		// for(int i = 0; i < WorldsButton.Length-data.WorldBoughts.Length; i++)//if new worlds are added
		int32_t L_99 = V_6;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_100 = __this->___WorldsButton_8;
		NullCheck(L_100);
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_101 = V_0;
		NullCheck(L_101);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_102 = L_101->___WorldBoughts_0;
		NullCheck(L_102);
		if ((((int32_t)L_99) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_100)->max_length)), ((int32_t)(((RuntimeArray*)L_102)->max_length)))))))
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0211;
	}

IL_01cd:
	{
		// for(int i = 0; i < WorldsButton.Length;i++)//if worlds was not a thing in an old update
		V_7 = 0;
		goto IL_0205;
	}

IL_01d2:
	{
		// WorldsButton[i].GetComponent<WorldButtonBuy>().bought = false;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_103 = __this->___WorldsButton_8;
		int32_t L_104 = V_7;
		NullCheck(L_103);
		int32_t L_105 = L_104;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_106 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		NullCheck(L_106);
		WorldButtonBuy_t740725B75DEF251588CA3D7221D5964B21762B24* L_107;
		L_107 = GameObject_GetComponent_TisWorldButtonBuy_t740725B75DEF251588CA3D7221D5964B21762B24_mD93D2DD5171EEE3589EFCCAA9DB3A586DFEF41C9(L_106, GameObject_GetComponent_TisWorldButtonBuy_t740725B75DEF251588CA3D7221D5964B21762B24_mD93D2DD5171EEE3589EFCCAA9DB3A586DFEF41C9_RuntimeMethod_var);
		NullCheck(L_107);
		L_107->___bought_7 = (bool)0;
		// WorldsButton[i].GetComponent<WorldButtonBuy>().world.enemiesKilled = 1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_108 = __this->___WorldsButton_8;
		int32_t L_109 = V_7;
		NullCheck(L_108);
		int32_t L_110 = L_109;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_111 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		NullCheck(L_111);
		WorldButtonBuy_t740725B75DEF251588CA3D7221D5964B21762B24* L_112;
		L_112 = GameObject_GetComponent_TisWorldButtonBuy_t740725B75DEF251588CA3D7221D5964B21762B24_mD93D2DD5171EEE3589EFCCAA9DB3A586DFEF41C9(L_111, GameObject_GetComponent_TisWorldButtonBuy_t740725B75DEF251588CA3D7221D5964B21762B24_mD93D2DD5171EEE3589EFCCAA9DB3A586DFEF41C9_RuntimeMethod_var);
		NullCheck(L_112);
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_113 = L_112->___world_4;
		NullCheck(L_113);
		L_113->___enemiesKilled_6 = 1;
		// for(int i = 0; i < WorldsButton.Length;i++)//if worlds was not a thing in an old update
		int32_t L_114 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_114, 1));
	}

IL_0205:
	{
		// for(int i = 0; i < WorldsButton.Length;i++)//if worlds was not a thing in an old update
		int32_t L_115 = V_7;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_116 = __this->___WorldsButton_8;
		NullCheck(L_116);
		if ((((int32_t)L_115) < ((int32_t)((int32_t)(((RuntimeArray*)L_116)->max_length)))))
		{
			goto IL_01d2;
		}
	}

IL_0211:
	{
		// if(data.GrogFound!= null) // ideal addition of a new item in the savadata file
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_117 = V_0;
		NullCheck(L_117);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_118 = L_117->___GrogFound_4;
		if (!L_118)
		{
			goto IL_0338;
		}
	}
	{
		// for(int i = 0; i < data.GrogFound.Length;i++)
		V_8 = 0;
		goto IL_027a;
	}

IL_0221:
	{
		// if(data.GrogFound[i])
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_119 = V_0;
		NullCheck(L_119);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_120 = L_119->___GrogFound_4;
		int32_t L_121 = V_8;
		NullCheck(L_120);
		int32_t L_122 = L_121;
		uint8_t L_123 = (uint8_t)(L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		if (!L_123)
		{
			goto IL_025b;
		}
	}
	{
		// GrogsButton[i].GetComponent<ButtonGrog>().found = true;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_124 = __this->___GrogsButton_9;
		int32_t L_125 = V_8;
		NullCheck(L_124);
		int32_t L_126 = L_125;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_127 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
		NullCheck(L_127);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_128;
		L_128 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_127, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_128);
		L_128->___found_14 = (bool)1;
		// GrogsButton[i].GetComponent<ButtonGrog>().ParentObject.SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_129 = __this->___GrogsButton_9;
		int32_t L_130 = V_8;
		NullCheck(L_129);
		int32_t L_131 = L_130;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_132 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		NullCheck(L_132);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_133;
		L_133 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_132, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_133);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_134 = L_133->___ParentObject_5;
		NullCheck(L_134);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_134, (bool)1, NULL);
		goto IL_0274;
	}

IL_025b:
	{
		// GrogsButton[i].GetComponent<ButtonGrog>().ParentObject.SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_135 = __this->___GrogsButton_9;
		int32_t L_136 = V_8;
		NullCheck(L_135);
		int32_t L_137 = L_136;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_138 = (L_135)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		NullCheck(L_138);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_139;
		L_139 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_138, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_139);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_140 = L_139->___ParentObject_5;
		NullCheck(L_140);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_140, (bool)0, NULL);
	}

IL_0274:
	{
		// for(int i = 0; i < data.GrogFound.Length;i++)
		int32_t L_141 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_141, 1));
	}

IL_027a:
	{
		// for(int i = 0; i < data.GrogFound.Length;i++)
		int32_t L_142 = V_8;
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_143 = V_0;
		NullCheck(L_143);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_144 = L_143->___GrogFound_4;
		NullCheck(L_144);
		if ((((int32_t)L_142) < ((int32_t)((int32_t)(((RuntimeArray*)L_144)->max_length)))))
		{
			goto IL_0221;
		}
	}
	{
		// if(data.GrogFound.Length < GrogsButton.Length)
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_145 = V_0;
		NullCheck(L_145);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_146 = L_145->___GrogFound_4;
		NullCheck(L_146);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_147 = __this->___GrogsButton_9;
		NullCheck(L_147);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_146)->max_length))) >= ((int32_t)((int32_t)(((RuntimeArray*)L_147)->max_length)))))
		{
			goto IL_0398;
		}
	}
	{
		// for(int i = 0; i < GrogsButton.Length-data.GrogFound.Length; i++)//if new grogs are added
		V_9 = 0;
		goto IL_031e;
	}

IL_02a0:
	{
		// if(GrogsButton[i+data.GrogFound.Length].GetComponent<ButtonGrog>().found)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_148 = __this->___GrogsButton_9;
		int32_t L_149 = V_9;
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_150 = V_0;
		NullCheck(L_150);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_151 = L_150->___GrogFound_4;
		NullCheck(L_151);
		NullCheck(L_148);
		int32_t L_152 = ((int32_t)il2cpp_codegen_add(L_149, ((int32_t)(((RuntimeArray*)L_151)->max_length))));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_153 = (L_148)->GetAt(static_cast<il2cpp_array_size_t>(L_152));
		NullCheck(L_153);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_154;
		L_154 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_153, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_154);
		bool L_155 = L_154->___found_14;
		if (!L_155)
		{
			goto IL_02db;
		}
	}
	{
		// GrogsButton[i+data.GrogFound.Length].GetComponent<ButtonGrog>().found = true;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_156 = __this->___GrogsButton_9;
		int32_t L_157 = V_9;
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_158 = V_0;
		NullCheck(L_158);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_159 = L_158->___GrogFound_4;
		NullCheck(L_159);
		NullCheck(L_156);
		int32_t L_160 = ((int32_t)il2cpp_codegen_add(L_157, ((int32_t)(((RuntimeArray*)L_159)->max_length))));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_161 = (L_156)->GetAt(static_cast<il2cpp_array_size_t>(L_160));
		NullCheck(L_161);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_162;
		L_162 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_161, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_162);
		L_162->___found_14 = (bool)1;
	}

IL_02db:
	{
		// GrogsButton[i+data.GrogFound.Length].GetComponent<ButtonGrog>().ParentObject.SetActive(GrogsButton[i+data.GrogFound.Length].GetComponent<ButtonGrog>().found);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_163 = __this->___GrogsButton_9;
		int32_t L_164 = V_9;
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_165 = V_0;
		NullCheck(L_165);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_166 = L_165->___GrogFound_4;
		NullCheck(L_166);
		NullCheck(L_163);
		int32_t L_167 = ((int32_t)il2cpp_codegen_add(L_164, ((int32_t)(((RuntimeArray*)L_166)->max_length))));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_168 = (L_163)->GetAt(static_cast<il2cpp_array_size_t>(L_167));
		NullCheck(L_168);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_169;
		L_169 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_168, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_169);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_170 = L_169->___ParentObject_5;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_171 = __this->___GrogsButton_9;
		int32_t L_172 = V_9;
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_173 = V_0;
		NullCheck(L_173);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_174 = L_173->___GrogFound_4;
		NullCheck(L_174);
		NullCheck(L_171);
		int32_t L_175 = ((int32_t)il2cpp_codegen_add(L_172, ((int32_t)(((RuntimeArray*)L_174)->max_length))));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_176 = (L_171)->GetAt(static_cast<il2cpp_array_size_t>(L_175));
		NullCheck(L_176);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_177;
		L_177 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_176, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_177);
		bool L_178 = L_177->___found_14;
		NullCheck(L_170);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_170, L_178, NULL);
		// for(int i = 0; i < GrogsButton.Length-data.GrogFound.Length; i++)//if new grogs are added
		int32_t L_179 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_179, 1));
	}

IL_031e:
	{
		// for(int i = 0; i < GrogsButton.Length-data.GrogFound.Length; i++)//if new grogs are added
		int32_t L_180 = V_9;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_181 = __this->___GrogsButton_9;
		NullCheck(L_181);
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_182 = V_0;
		NullCheck(L_182);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_183 = L_182->___GrogFound_4;
		NullCheck(L_183);
		if ((((int32_t)L_180) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_181)->max_length)), ((int32_t)(((RuntimeArray*)L_183)->max_length)))))))
		{
			goto IL_02a0;
		}
	}
	{
		goto IL_0398;
	}

IL_0338:
	{
		// for(int i = 0; i < GrogsButton.Length;i++)
		V_10 = 0;
		goto IL_038c;
	}

IL_033d:
	{
		// if( GrogsButton[i].GetComponent<ButtonGrog>().found)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_184 = __this->___GrogsButton_9;
		int32_t L_185 = V_10;
		NullCheck(L_184);
		int32_t L_186 = L_185;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_187 = (L_184)->GetAt(static_cast<il2cpp_array_size_t>(L_186));
		NullCheck(L_187);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_188;
		L_188 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_187, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_188);
		bool L_189 = L_188->___found_14;
		if (!L_189)
		{
			goto IL_036d;
		}
	}
	{
		// GrogsButton[i].GetComponent<ButtonGrog>().ParentObject.SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_190 = __this->___GrogsButton_9;
		int32_t L_191 = V_10;
		NullCheck(L_190);
		int32_t L_192 = L_191;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_193 = (L_190)->GetAt(static_cast<il2cpp_array_size_t>(L_192));
		NullCheck(L_193);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_194;
		L_194 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_193, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_194);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_195 = L_194->___ParentObject_5;
		NullCheck(L_195);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_195, (bool)1, NULL);
		goto IL_0386;
	}

IL_036d:
	{
		// GrogsButton[i].GetComponent<ButtonGrog>().ParentObject.SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_196 = __this->___GrogsButton_9;
		int32_t L_197 = V_10;
		NullCheck(L_196);
		int32_t L_198 = L_197;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_199 = (L_196)->GetAt(static_cast<il2cpp_array_size_t>(L_198));
		NullCheck(L_199);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_200;
		L_200 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_199, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_200);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_201 = L_200->___ParentObject_5;
		NullCheck(L_201);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_201, (bool)0, NULL);
	}

IL_0386:
	{
		// for(int i = 0; i < GrogsButton.Length;i++)
		int32_t L_202 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_202, 1));
	}

IL_038c:
	{
		// for(int i = 0; i < GrogsButton.Length;i++)
		int32_t L_203 = V_10;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_204 = __this->___GrogsButton_9;
		NullCheck(L_204);
		if ((((int32_t)L_203) < ((int32_t)((int32_t)(((RuntimeArray*)L_204)->max_length)))))
		{
			goto IL_033d;
		}
	}

IL_0398:
	{
		// if(data.GrogDiscovered != null)
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_205 = V_0;
		NullCheck(L_205);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_206 = L_205->___GrogDiscovered_3;
		if (!L_206)
		{
			goto IL_04bc;
		}
	}
	{
		// for(int i = 0; i < data.GrogLevel.Length;i++)
		V_11 = 0;
		goto IL_043c;
	}

IL_03ab:
	{
		// GrogsButton[i].GetComponent<ButtonGrog>().discovered = data.GrogDiscovered[i];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_207 = __this->___GrogsButton_9;
		int32_t L_208 = V_11;
		NullCheck(L_207);
		int32_t L_209 = L_208;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_210 = (L_207)->GetAt(static_cast<il2cpp_array_size_t>(L_209));
		NullCheck(L_210);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_211;
		L_211 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_210, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_212 = V_0;
		NullCheck(L_212);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_213 = L_212->___GrogDiscovered_3;
		int32_t L_214 = V_11;
		NullCheck(L_213);
		int32_t L_215 = L_214;
		uint8_t L_216 = (uint8_t)(L_213)->GetAt(static_cast<il2cpp_array_size_t>(L_215));
		NullCheck(L_211);
		L_211->___discovered_13 = (bool)L_216;
		// if(data.GrogDiscovered[i])
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_217 = V_0;
		NullCheck(L_217);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_218 = L_217->___GrogDiscovered_3;
		int32_t L_219 = V_11;
		NullCheck(L_218);
		int32_t L_220 = L_219;
		uint8_t L_221 = (uint8_t)(L_218)->GetAt(static_cast<il2cpp_array_size_t>(L_220));
		if (!L_221)
		{
			goto IL_03e5;
		}
	}
	{
		// GrogsButton[i].GetComponent<ButtonGrog>().discover();
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_222 = __this->___GrogsButton_9;
		int32_t L_223 = V_11;
		NullCheck(L_222);
		int32_t L_224 = L_223;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_225 = (L_222)->GetAt(static_cast<il2cpp_array_size_t>(L_224));
		NullCheck(L_225);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_226;
		L_226 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_225, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_226);
		ButtonGrog_discover_m7337A1528746B6FF3E7318046D04429380C9D1B3(L_226, NULL);
	}

IL_03e5:
	{
		// GrogsButton[i].GetComponent<ButtonGrog>().currentLevel = data.GrogLevel[i];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_227 = __this->___GrogsButton_9;
		int32_t L_228 = V_11;
		NullCheck(L_227);
		int32_t L_229 = L_228;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_230 = (L_227)->GetAt(static_cast<il2cpp_array_size_t>(L_229));
		NullCheck(L_230);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_231;
		L_231 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_230, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_232 = V_0;
		NullCheck(L_232);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_233 = L_232->___GrogLevel_2;
		int32_t L_234 = V_11;
		NullCheck(L_233);
		int32_t L_235 = L_234;
		int32_t L_236 = (L_233)->GetAt(static_cast<il2cpp_array_size_t>(L_235));
		NullCheck(L_231);
		L_231->___currentLevel_7 = L_236;
		// if(data.GrogLevel[i] != 0)
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_237 = V_0;
		NullCheck(L_237);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_238 = L_237->___GrogLevel_2;
		int32_t L_239 = V_11;
		NullCheck(L_238);
		int32_t L_240 = L_239;
		int32_t L_241 = (L_238)->GetAt(static_cast<il2cpp_array_size_t>(L_240));
		if (!L_241)
		{
			goto IL_0422;
		}
	}
	{
		// GrogsButton[i].GetComponent<ButtonGrog>().spawnOnSave = true;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_242 = __this->___GrogsButton_9;
		int32_t L_243 = V_11;
		NullCheck(L_242);
		int32_t L_244 = L_243;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_245 = (L_242)->GetAt(static_cast<il2cpp_array_size_t>(L_244));
		NullCheck(L_245);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_246;
		L_246 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_245, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_246);
		L_246->___spawnOnSave_9 = (bool)1;
		goto IL_0436;
	}

IL_0422:
	{
		// GrogsButton[i].GetComponent<ButtonGrog>().spawnOnSave = false;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_247 = __this->___GrogsButton_9;
		int32_t L_248 = V_11;
		NullCheck(L_247);
		int32_t L_249 = L_248;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_250 = (L_247)->GetAt(static_cast<il2cpp_array_size_t>(L_249));
		NullCheck(L_250);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_251;
		L_251 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_250, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_251);
		L_251->___spawnOnSave_9 = (bool)0;
	}

IL_0436:
	{
		// for(int i = 0; i < data.GrogLevel.Length;i++)
		int32_t L_252 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_252, 1));
	}

IL_043c:
	{
		// for(int i = 0; i < data.GrogLevel.Length;i++)
		int32_t L_253 = V_11;
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_254 = V_0;
		NullCheck(L_254);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_255 = L_254->___GrogLevel_2;
		NullCheck(L_255);
		if ((((int32_t)L_253) < ((int32_t)((int32_t)(((RuntimeArray*)L_255)->max_length)))))
		{
			goto IL_03ab;
		}
	}
	{
		// if(data.GrogLevel.Length < GrogsButton.Length)//if a new grog is added
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_256 = V_0;
		NullCheck(L_256);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_257 = L_256->___GrogLevel_2;
		NullCheck(L_257);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_258 = __this->___GrogsButton_9;
		NullCheck(L_258);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_257)->max_length))) >= ((int32_t)((int32_t)(((RuntimeArray*)L_258)->max_length)))))
		{
			goto IL_04fb;
		}
	}
	{
		// for(int i = 0; i < GrogsButton.Length-data.GrogLevel.Length; i++)
		V_12 = 0;
		goto IL_04a5;
	}

IL_0465:
	{
		// GrogsButton[i+data.GrogLevel.Length].GetComponent<ButtonGrog>().currentLevel = 0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_259 = __this->___GrogsButton_9;
		int32_t L_260 = V_12;
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_261 = V_0;
		NullCheck(L_261);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_262 = L_261->___GrogLevel_2;
		NullCheck(L_262);
		NullCheck(L_259);
		int32_t L_263 = ((int32_t)il2cpp_codegen_add(L_260, ((int32_t)(((RuntimeArray*)L_262)->max_length))));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_264 = (L_259)->GetAt(static_cast<il2cpp_array_size_t>(L_263));
		NullCheck(L_264);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_265;
		L_265 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_264, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_265);
		L_265->___currentLevel_7 = 0;
		// GrogsButton[i+data.GrogLevel.Length].GetComponent<ButtonGrog>().spawnOnSave = false;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_266 = __this->___GrogsButton_9;
		int32_t L_267 = V_12;
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_268 = V_0;
		NullCheck(L_268);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_269 = L_268->___GrogLevel_2;
		NullCheck(L_269);
		NullCheck(L_266);
		int32_t L_270 = ((int32_t)il2cpp_codegen_add(L_267, ((int32_t)(((RuntimeArray*)L_269)->max_length))));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_271 = (L_266)->GetAt(static_cast<il2cpp_array_size_t>(L_270));
		NullCheck(L_271);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_272;
		L_272 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_271, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_272);
		L_272->___spawnOnSave_9 = (bool)0;
		// for(int i = 0; i < GrogsButton.Length-data.GrogLevel.Length; i++)
		int32_t L_273 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_273, 1));
	}

IL_04a5:
	{
		// for(int i = 0; i < GrogsButton.Length-data.GrogLevel.Length; i++)
		int32_t L_274 = V_12;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_275 = __this->___GrogsButton_9;
		NullCheck(L_275);
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_276 = V_0;
		NullCheck(L_276);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_277 = L_276->___GrogLevel_2;
		NullCheck(L_277);
		if ((((int32_t)L_274) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_275)->max_length)), ((int32_t)(((RuntimeArray*)L_277)->max_length)))))))
		{
			goto IL_0465;
		}
	}
	{
		goto IL_04fb;
	}

IL_04bc:
	{
		// for(int i = 0; i < GrogsButton.Length;i++)
		V_13 = 0;
		goto IL_04ef;
	}

IL_04c1:
	{
		// GrogsButton[i].GetComponent<ButtonGrog>().currentLevel = 0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_278 = __this->___GrogsButton_9;
		int32_t L_279 = V_13;
		NullCheck(L_278);
		int32_t L_280 = L_279;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_281 = (L_278)->GetAt(static_cast<il2cpp_array_size_t>(L_280));
		NullCheck(L_281);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_282;
		L_282 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_281, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_282);
		L_282->___currentLevel_7 = 0;
		// GrogsButton[i].GetComponent<ButtonGrog>().spawnOnSave = false;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_283 = __this->___GrogsButton_9;
		int32_t L_284 = V_13;
		NullCheck(L_283);
		int32_t L_285 = L_284;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_286 = (L_283)->GetAt(static_cast<il2cpp_array_size_t>(L_285));
		NullCheck(L_286);
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_287;
		L_287 = GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA(L_286, GameObject_GetComponent_TisButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF_m353DB194CCEDEE90628F38C224C8782955745CEA_RuntimeMethod_var);
		NullCheck(L_287);
		L_287->___spawnOnSave_9 = (bool)0;
		// for(int i = 0; i < GrogsButton.Length;i++)
		int32_t L_288 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_288, 1));
	}

IL_04ef:
	{
		// for(int i = 0; i < GrogsButton.Length;i++)
		int32_t L_289 = V_13;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_290 = __this->___GrogsButton_9;
		NullCheck(L_290);
		if ((((int32_t)L_289) < ((int32_t)((int32_t)(((RuntimeArray*)L_290)->max_length)))))
		{
			goto IL_04c1;
		}
	}

IL_04fb:
	{
		// if(data.ItemsFound != null)
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_291 = V_0;
		NullCheck(L_291);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_292 = L_291->___ItemsFound_5;
		if (!L_292)
		{
			goto IL_058a;
		}
	}
	{
		// for(int i = 0; i < data.ItemsFound.Length;i++)
		V_14 = 0;
		goto IL_052d;
	}

IL_050b:
	{
		// ItemSlots[i].GetComponent<GrogItem>().found = data.ItemsFound[i];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_293 = __this->___ItemSlots_10;
		int32_t L_294 = V_14;
		NullCheck(L_293);
		int32_t L_295 = L_294;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_296 = (L_293)->GetAt(static_cast<il2cpp_array_size_t>(L_295));
		NullCheck(L_296);
		GrogItem_tF4D3621CD5ECE7D32F1FDC3D8BA2D96CC491B299* L_297;
		L_297 = GameObject_GetComponent_TisGrogItem_tF4D3621CD5ECE7D32F1FDC3D8BA2D96CC491B299_mCBF443CBEE1188E7B637701814CF53431D529B55(L_296, GameObject_GetComponent_TisGrogItem_tF4D3621CD5ECE7D32F1FDC3D8BA2D96CC491B299_mCBF443CBEE1188E7B637701814CF53431D529B55_RuntimeMethod_var);
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_298 = V_0;
		NullCheck(L_298);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_299 = L_298->___ItemsFound_5;
		int32_t L_300 = V_14;
		NullCheck(L_299);
		int32_t L_301 = L_300;
		uint8_t L_302 = (uint8_t)(L_299)->GetAt(static_cast<il2cpp_array_size_t>(L_301));
		NullCheck(L_297);
		L_297->___found_4 = (bool)L_302;
		// for(int i = 0; i < data.ItemsFound.Length;i++)
		int32_t L_303 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_303, 1));
	}

IL_052d:
	{
		// for(int i = 0; i < data.ItemsFound.Length;i++)
		int32_t L_304 = V_14;
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_305 = V_0;
		NullCheck(L_305);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_306 = L_305->___ItemsFound_5;
		NullCheck(L_306);
		if ((((int32_t)L_304) < ((int32_t)((int32_t)(((RuntimeArray*)L_306)->max_length)))))
		{
			goto IL_050b;
		}
	}
	{
		// if(data.ItemsFound.Length < ItemSlots.Length)//if a new item is added
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_307 = V_0;
		NullCheck(L_307);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_308 = L_307->___ItemsFound_5;
		NullCheck(L_308);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_309 = __this->___ItemSlots_10;
		NullCheck(L_309);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_308)->max_length))) >= ((int32_t)((int32_t)(((RuntimeArray*)L_309)->max_length)))))
		{
			goto IL_05b5;
		}
	}
	{
		// for(int i = 0; i < ItemSlots.Length-data.ItemsFound.Length; i++)
		V_15 = 0;
		goto IL_0573;
	}

IL_0550:
	{
		// ItemSlots[i+data.ItemsFound.Length].GetComponent<GrogItem>().found = false;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_310 = __this->___ItemSlots_10;
		int32_t L_311 = V_15;
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_312 = V_0;
		NullCheck(L_312);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_313 = L_312->___ItemsFound_5;
		NullCheck(L_313);
		NullCheck(L_310);
		int32_t L_314 = ((int32_t)il2cpp_codegen_add(L_311, ((int32_t)(((RuntimeArray*)L_313)->max_length))));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_315 = (L_310)->GetAt(static_cast<il2cpp_array_size_t>(L_314));
		NullCheck(L_315);
		GrogItem_tF4D3621CD5ECE7D32F1FDC3D8BA2D96CC491B299* L_316;
		L_316 = GameObject_GetComponent_TisGrogItem_tF4D3621CD5ECE7D32F1FDC3D8BA2D96CC491B299_mCBF443CBEE1188E7B637701814CF53431D529B55(L_315, GameObject_GetComponent_TisGrogItem_tF4D3621CD5ECE7D32F1FDC3D8BA2D96CC491B299_mCBF443CBEE1188E7B637701814CF53431D529B55_RuntimeMethod_var);
		NullCheck(L_316);
		L_316->___found_4 = (bool)0;
		// for(int i = 0; i < ItemSlots.Length-data.ItemsFound.Length; i++)
		int32_t L_317 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_317, 1));
	}

IL_0573:
	{
		// for(int i = 0; i < ItemSlots.Length-data.ItemsFound.Length; i++)
		int32_t L_318 = V_15;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_319 = __this->___ItemSlots_10;
		NullCheck(L_319);
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_320 = V_0;
		NullCheck(L_320);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_321 = L_320->___ItemsFound_5;
		NullCheck(L_321);
		if ((((int32_t)L_318) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_319)->max_length)), ((int32_t)(((RuntimeArray*)L_321)->max_length)))))))
		{
			goto IL_0550;
		}
	}
	{
		goto IL_05b5;
	}

IL_058a:
	{
		// for(int i = 0; i < ItemSlots.Length;i++)
		V_16 = 0;
		goto IL_05a9;
	}

IL_058f:
	{
		// ItemSlots[i].GetComponent<GrogItem>().found = false;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_322 = __this->___ItemSlots_10;
		int32_t L_323 = V_16;
		NullCheck(L_322);
		int32_t L_324 = L_323;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_325 = (L_322)->GetAt(static_cast<il2cpp_array_size_t>(L_324));
		NullCheck(L_325);
		GrogItem_tF4D3621CD5ECE7D32F1FDC3D8BA2D96CC491B299* L_326;
		L_326 = GameObject_GetComponent_TisGrogItem_tF4D3621CD5ECE7D32F1FDC3D8BA2D96CC491B299_mCBF443CBEE1188E7B637701814CF53431D529B55(L_325, GameObject_GetComponent_TisGrogItem_tF4D3621CD5ECE7D32F1FDC3D8BA2D96CC491B299_mCBF443CBEE1188E7B637701814CF53431D529B55_RuntimeMethod_var);
		NullCheck(L_326);
		L_326->___found_4 = (bool)0;
		// for(int i = 0; i < ItemSlots.Length;i++)
		int32_t L_327 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_327, 1));
	}

IL_05a9:
	{
		// for(int i = 0; i < ItemSlots.Length;i++)
		int32_t L_328 = V_16;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_329 = __this->___ItemSlots_10;
		NullCheck(L_329);
		if ((((int32_t)L_328) < ((int32_t)((int32_t)(((RuntimeArray*)L_329)->max_length)))))
		{
			goto IL_058f;
		}
	}

IL_05b5:
	{
		// gold = double.Parse(data.Gold);
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_330 = V_0;
		NullCheck(L_330);
		String_t* L_331 = L_330->___Gold_6;
		double L_332;
		L_332 = Double_Parse_mEBC644CE0C86A405283EC4839F872EF9E556670A(L_331, NULL);
		__this->___gold_6 = L_332;
		// TimeSpan t = System.DateTime.Now.Subtract(DateTime.FromBinary(Convert.ToInt64(data.currentTime)));
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_333;
		L_333 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_17 = L_333;
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_334 = V_0;
		NullCheck(L_334);
		String_t* L_335 = L_334->___currentTime_7;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int64_t L_336;
		L_336 = Convert_ToInt64_mE141C5A7AE0C7A127BA9B6D165F3098B10726591(L_335, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_337;
		L_337 = DateTime_FromBinary_m3CED9C962489A2A0ABF34FB77B2AB257B9DA7B7B(L_336, NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_338;
		L_338 = DateTime_Subtract_m4064A98F489219E9C414DF5C03EE041351B4502A((&V_17), L_337, NULL);
		V_4 = L_338;
		// StartCoroutine(CalculateSum(t));
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_339 = V_4;
		RuntimeObject* L_340;
		L_340 = PlayerHandler_CalculateSum_mB6392BE80E03BE7F978067D81CA24033020EFE41(__this, L_339, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_341;
		L_341 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_340, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator PlayerHandler::CalculateSum(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerHandler_CalculateSum_mB6392BE80E03BE7F978067D81CA24033020EFE41 (PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCalculateSumU3Ed__13_t467D5D415AA3A76DF401B05D7B1B2CB680D15DAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCalculateSumU3Ed__13_t467D5D415AA3A76DF401B05D7B1B2CB680D15DAF* L_0 = (U3CCalculateSumU3Ed__13_t467D5D415AA3A76DF401B05D7B1B2CB680D15DAF*)il2cpp_codegen_object_new(U3CCalculateSumU3Ed__13_t467D5D415AA3A76DF401B05D7B1B2CB680D15DAF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCalculateSumU3Ed__13__ctor_mEF6E0CB7C2C01D199C90D66077D1254D40E9F795(L_0, 0, NULL);
		U3CCalculateSumU3Ed__13_t467D5D415AA3A76DF401B05D7B1B2CB680D15DAF* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CCalculateSumU3Ed__13_t467D5D415AA3A76DF401B05D7B1B2CB680D15DAF* L_2 = L_1;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_3 = ___t0;
		NullCheck(L_2);
		L_2->___t_2 = L_3;
		return L_2;
	}
}
// System.Void PlayerHandler::DeleteData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHandler_DeleteData_m619F48B26863B90A6C4501F9E323457D5DB855CD (PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B8A65EA3069EA15B4CCE5DE1F1AB03D15D21F01);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// string path = Application.persistentDataPath + "/game.grog";
		String_t* L_0;
		L_0 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, _stringLiteral0B8A65EA3069EA15B4CCE5DE1F1AB03D15D21F01, NULL);
		// File.Delete(path);
		File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386(L_1, NULL);
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_2;
		L_2 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_3, NULL);
		// }
		return;
	}
}
// System.Void PlayerHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHandler__ctor_m7BD446FA50C46A82EBD9FF916A2994C4D77D69F4 (PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* __this, const RuntimeMethod* method) 
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
// System.Void PlayerHandler/<SaveTheGame>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveTheGameU3Ed__10__ctor_m89CD2FCF7B3F855F5C048282FC890296A0A0C85C (U3CSaveTheGameU3Ed__10_t7D41F480297F89635409B197697B72A1515AA4DB* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PlayerHandler/<SaveTheGame>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveTheGameU3Ed__10_System_IDisposable_Dispose_m7816232BD1C657E4F19CC2EB360EA2636ADAC5A1 (U3CSaveTheGameU3Ed__10_t7D41F480297F89635409B197697B72A1515AA4DB* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PlayerHandler/<SaveTheGame>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSaveTheGameU3Ed__10_MoveNext_mAD08700DA70489E244F731FA8A8EF4041171B6AB (U3CSaveTheGameU3Ed__10_t7D41F480297F89635409B197697B72A1515AA4DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_001e:
	{
		// yield return new WaitForSeconds(2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SaveGame();
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_5 = V_1;
		NullCheck(L_5);
		PlayerHandler_SaveGame_m3A6C7279288B41402BBBF67CE63510023C86831E(L_5, NULL);
		// while(true)
		goto IL_001e;
	}
}
// System.Object PlayerHandler/<SaveTheGame>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSaveTheGameU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9BFEEB71B67C5468E22100FA88BC766028E8A03D (U3CSaveTheGameU3Ed__10_t7D41F480297F89635409B197697B72A1515AA4DB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PlayerHandler/<SaveTheGame>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveTheGameU3Ed__10_System_Collections_IEnumerator_Reset_m5D93613279FE522C97480605364A3B2A169F9494 (U3CSaveTheGameU3Ed__10_t7D41F480297F89635409B197697B72A1515AA4DB* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSaveTheGameU3Ed__10_System_Collections_IEnumerator_Reset_m5D93613279FE522C97480605364A3B2A169F9494_RuntimeMethod_var)));
	}
}
// System.Object PlayerHandler/<SaveTheGame>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSaveTheGameU3Ed__10_System_Collections_IEnumerator_get_Current_m027C726B0EC8B16A63D92E84683A0C2E972BADF2 (U3CSaveTheGameU3Ed__10_t7D41F480297F89635409B197697B72A1515AA4DB* __this, const RuntimeMethod* method) 
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
// System.Void PlayerHandler/<CalculateSum>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCalculateSumU3Ed__13__ctor_mEF6E0CB7C2C01D199C90D66077D1254D40E9F795 (U3CCalculateSumU3Ed__13_t467D5D415AA3A76DF401B05D7B1B2CB680D15DAF* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PlayerHandler/<CalculateSum>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCalculateSumU3Ed__13_System_IDisposable_Dispose_m9A90A7CED30C62FA6C00242AD8E8373A8B3D7F47 (U3CCalculateSumU3Ed__13_t467D5D415AA3A76DF401B05D7B1B2CB680D15DAF* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PlayerHandler/<CalculateSum>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCalculateSumU3Ed__13_MoveNext_m2A44E15D00DF461367EB67E16C97E5D8A1B4488A (U3CCalculateSumU3Ed__13_t467D5D415AA3A76DF401B05D7B1B2CB680D15DAF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisOfflineCalculate_tBC27B78FBD17348AD96A14F58E778E16AAB11EA3_mB699987D1C0FA190CA5E849FE40DE9E5605396C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* V_1 = NULL;
	double V_2 = 0.0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// double g = 0;
		V_2 = (0.0);
		// if(t.TotalSeconds > 86400)
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_5 = (&__this->___t_2);
		double L_6;
		L_6 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8(L_5, NULL);
		if ((!(((double)L_6) > ((double)(86400.0)))))
		{
			goto IL_007a;
		}
	}
	{
		// g += (DPS*86400/offlineReducer);
		double L_7 = V_2;
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_8 = V_1;
		NullCheck(L_8);
		double L_9 = L_8->___DPS_5;
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_10 = V_1;
		NullCheck(L_10);
		double L_11 = L_10->___offlineReducer_7;
		V_2 = ((double)il2cpp_codegen_add(L_7, ((double)(((double)il2cpp_codegen_multiply(L_9, (86400.0)))/L_11))));
		goto IL_0096;
	}

IL_007a:
	{
		// g+= (DPS*t.TotalSeconds/offlineReducer);
		double L_12 = V_2;
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_13 = V_1;
		NullCheck(L_13);
		double L_14 = L_13->___DPS_5;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_15 = (&__this->___t_2);
		double L_16;
		L_16 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8(L_15, NULL);
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_17 = V_1;
		NullCheck(L_17);
		double L_18 = L_17->___offlineReducer_7;
		V_2 = ((double)il2cpp_codegen_add(L_12, ((double)(((double)il2cpp_codegen_multiply(L_14, L_16))/L_18))));
	}

IL_0096:
	{
		// offlineMenu.GetComponent<OfflineCalculate>().gold = g;
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_19 = V_1;
		NullCheck(L_19);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = L_19->___offlineMenu_11;
		NullCheck(L_20);
		OfflineCalculate_tBC27B78FBD17348AD96A14F58E778E16AAB11EA3* L_21;
		L_21 = GameObject_GetComponent_TisOfflineCalculate_tBC27B78FBD17348AD96A14F58E778E16AAB11EA3_mB699987D1C0FA190CA5E849FE40DE9E5605396C8(L_20, GameObject_GetComponent_TisOfflineCalculate_tBC27B78FBD17348AD96A14F58E778E16AAB11EA3_mB699987D1C0FA190CA5E849FE40DE9E5605396C8_RuntimeMethod_var);
		double L_22 = V_2;
		NullCheck(L_21);
		L_21->___gold_4 = L_22;
		// offlineMenu.SetActive(true);
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_23 = V_1;
		NullCheck(L_23);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = L_23->___offlineMenu_11;
		NullCheck(L_24);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_24, (bool)1, NULL);
		// }
		return (bool)0;
	}
}
// System.Object PlayerHandler/<CalculateSum>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCalculateSumU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m47139323A6CB1E2A8AD4D4E88669B275EB875816 (U3CCalculateSumU3Ed__13_t467D5D415AA3A76DF401B05D7B1B2CB680D15DAF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PlayerHandler/<CalculateSum>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCalculateSumU3Ed__13_System_Collections_IEnumerator_Reset_m507AFDF807F95A31AA672D1057309F22977AC2EE (U3CCalculateSumU3Ed__13_t467D5D415AA3A76DF401B05D7B1B2CB680D15DAF* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCalculateSumU3Ed__13_System_Collections_IEnumerator_Reset_m507AFDF807F95A31AA672D1057309F22977AC2EE_RuntimeMethod_var)));
	}
}
// System.Object PlayerHandler/<CalculateSum>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCalculateSumU3Ed__13_System_Collections_IEnumerator_get_Current_m22615ADBE3FDFF1C9B4DCC28FE2BCD3EAC05D848 (U3CCalculateSumU3Ed__13_t467D5D415AA3A76DF401B05D7B1B2CB680D15DAF* __this, const RuntimeMethod* method) 
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
// System.Void SaveSystem::SaveGame(PlayerHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveSystem_SaveGame_m45E960B3490FB19E8F9D803837AB343018F09944 (PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* ___PH0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B8A65EA3069EA15B4CCE5DE1F1AB03D15D21F01);
		s_Il2CppMethodInitialized = true;
	}
	BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* V_0 = NULL;
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_1 = NULL;
	SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* V_2 = NULL;
	{
		// BinaryFormatter formatter = new BinaryFormatter();
		BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_0 = (BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F*)il2cpp_codegen_object_new(BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BinaryFormatter__ctor_m484DBB5D742624C3A8190921A85458BCECBB1705(L_0, NULL);
		V_0 = L_0;
		// string path = Application.persistentDataPath + "/game.grog";
		String_t* L_1;
		L_1 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteral0B8A65EA3069EA15B4CCE5DE1F1AB03D15D21F01, NULL);
		// using(FileStream stream = new FileStream(path, FileMode.Create))
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_3 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		FileStream__ctor_m78499F9BE2BE31DA34F123B4399AA457716BD6E6(L_3, L_2, 2, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{// begin finally (depth: 1)
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_4 = V_1;
					if (!L_4)
					{
						goto IL_0036;
					}
				}
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_5 = V_1;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0036:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// SaveData data = new SaveData(PH);
			PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_6 = ___PH0;
			SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_7 = (SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29*)il2cpp_codegen_object_new(SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29_il2cpp_TypeInfo_var);
			NullCheck(L_7);
			SaveData__ctor_m4B7008D3AD212ABA0F77A2E039FA6F3E7530FB22(L_7, L_6, NULL);
			V_2 = L_7;
			// formatter.Serialize(stream, data);
			BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_8 = V_0;
			FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_9 = V_1;
			SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_10 = V_2;
			NullCheck(L_8);
			BinaryFormatter_Serialize_mF365DA7FA76E03707336375616D757397CF2992E(L_8, L_9, L_10, NULL);
			// }
			goto IL_0037;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0037:
	{
		// }
		return;
	}
}
// SaveData SaveSystem::LoadSave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* SaveSystem_LoadSave_m69049E7F09F306B42E39632D8F32A100050DBC96 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B8A65EA3069EA15B4CCE5DE1F1AB03D15D21F01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral660AB16DAE3AB0500342DD32D948F5A9D8681C2F);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* V_1 = NULL;
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_2 = NULL;
	SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* V_3 = NULL;
	{
		// string path = Application.persistentDataPath + "/game.grog";
		String_t* L_0;
		L_0 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, _stringLiteral0B8A65EA3069EA15B4CCE5DE1F1AB03D15D21F01, NULL);
		V_0 = L_1;
		// if (File.Exists(path))
		String_t* L_2 = V_0;
		bool L_3;
		L_3 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_2, NULL);
		if (!L_3)
		{
			goto IL_004b;
		}
	}
	{
		// BinaryFormatter formatter = new BinaryFormatter();
		BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_4 = (BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F*)il2cpp_codegen_object_new(BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		BinaryFormatter__ctor_m484DBB5D742624C3A8190921A85458BCECBB1705(L_4, NULL);
		V_1 = L_4;
		// using(FileStream stream = new FileStream(path, FileMode.Open))
		String_t* L_5 = V_0;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_6 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		FileStream__ctor_m78499F9BE2BE31DA34F123B4399AA457716BD6E6(L_6, L_5, 3, NULL);
		V_2 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0041:
			{// begin finally (depth: 1)
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_7 = V_2;
					if (!L_7)
					{
						goto IL_004a;
					}
				}
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_8 = V_2;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_004a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if(stream.Length == 0)
				FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_9 = V_2;
				NullCheck(L_9);
				int64_t L_10;
				L_10 = VirtualFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_9);
				if (L_10)
				{
					goto IL_0032_1;
				}
			}
			{
				// return null;
				V_3 = (SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29*)NULL;
				goto IL_005d;
			}

IL_0032_1:
			{
				// SaveData data = formatter.Deserialize(stream) as SaveData;
				BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_11 = V_1;
				FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_12 = V_2;
				NullCheck(L_11);
				RuntimeObject* L_13;
				L_13 = BinaryFormatter_Deserialize_mFC50E75F230189EB3660C8F2FD1E786C0D11E1ED(L_11, L_12, NULL);
				// return data;
				V_3 = ((SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29*)IsInstClass((RuntimeObject*)L_13, SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29_il2cpp_TypeInfo_var));
				goto IL_005d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004b:
	{
		// Debug.Log("Save File not found in" + path);
		String_t* L_14 = V_0;
		String_t* L_15;
		L_15 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral660AB16DAE3AB0500342DD32D948F5A9D8681C2F, L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_15, NULL);
		// return null;
		return (SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29*)NULL;
	}

IL_005d:
	{
		// }
		SaveData_tD8A7BA38011DB392E3FC7630525E745AED3AAF29* L_16 = V_3;
		return L_16;
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
// System.Void SpawnGrog::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnGrog_Awake_m9A317B67A6FEE38DB1D22484038C2AB847A95872 (SpawnGrog_tF9FA499BCB26222A68D537136982C341A8DBD649* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rt = GetComponent<RectTransform>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0;
		L_0 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		__this->___rt_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rt_4), (void*)L_0);
		// }
		return;
	}
}
// UnityEngine.GameObject SpawnGrog::SpawnTheGrog(UnityEngine.GameObject,ButtonGrog)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* SpawnGrog_SpawnTheGrog_m783D3A949A4DC867A9C87A271096F288F1B50A41 (SpawnGrog_tF9FA499BCB26222A68D537136982C341A8DBD649* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___grog0, ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* ___buttony1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OrderBy_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m52D6B2FA8A75393C2B50151F7E5902C74B764447_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tA26CC06F251E5318131EF8475E1A4BDADDFAD8BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGrog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE_mFB69D395569B0895C5375A73C4B1A06FE504974C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF43DCB3BB782DEE371E585AF95DAD52EE17CC9BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSpawnTheGrogU3Eb__3_0_m8FD079D24FF18C2177B63E83A5F3D25E689983CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t6248F9A6A0AD9F0A15677D5EA8B91A27E73AA874_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	int32_t V_1 = 0;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Func_2_tA26CC06F251E5318131EF8475E1A4BDADDFAD8BC* G_B5_0 = NULL;
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* G_B5_1 = NULL;
	SpawnGrog_tF9FA499BCB26222A68D537136982C341A8DBD649* G_B5_2 = NULL;
	Func_2_tA26CC06F251E5318131EF8475E1A4BDADDFAD8BC* G_B4_0 = NULL;
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* G_B4_1 = NULL;
	SpawnGrog_tF9FA499BCB26222A68D537136982C341A8DBD649* G_B4_2 = NULL;
	{
		// GameObject g = Instantiate(grog);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___grog0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_0, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		V_0 = L_1;
		// g.GetComponent<RectTransform>().SetParent(rt);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_0;
		NullCheck(L_2);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3;
		L_3 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_2, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = __this->___rt_4;
		NullCheck(L_3);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_3, L_4, NULL);
		// g.GetComponent<RectTransform>().localScale = new Vector3(1,1,1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_0;
		NullCheck(L_5);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6;
		L_6 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_5, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_7), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_6, L_7, NULL);
		// g.GetComponent<RectTransform>().localPosition = new Vector3(Random.Range(-rt.rect.width/2+40,rt.rect.width/2-40),Random.Range(-rt.rect.height/2,rt.rect.height/2),0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_0;
		NullCheck(L_8);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9;
		L_9 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_8, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = __this->___rt_4;
		NullCheck(L_10);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_11;
		L_11 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_10, NULL);
		V_2 = L_11;
		float L_12;
		L_12 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_2), NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_13 = __this->___rt_4;
		NullCheck(L_13);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_14;
		L_14 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_13, NULL);
		V_2 = L_14;
		float L_15;
		L_15 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_2), NULL);
		float L_16;
		L_16 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)il2cpp_codegen_add(((float)(((-L_12))/(2.0f))), (40.0f))), ((float)il2cpp_codegen_subtract(((float)(L_15/(2.0f))), (40.0f))), NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_17 = __this->___rt_4;
		NullCheck(L_17);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_18;
		L_18 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_17, NULL);
		V_2 = L_18;
		float L_19;
		L_19 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_2), NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_20 = __this->___rt_4;
		NullCheck(L_20);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_21;
		L_21 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_20, NULL);
		V_2 = L_21;
		float L_22;
		L_22 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_2), NULL);
		float L_23;
		L_23 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)(((-L_19))/(2.0f))), ((float)(L_22/(2.0f))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), L_16, L_23, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_9, L_24, NULL);
		// grogs.Add(g);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_25 = __this->___grogs_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = V_0;
		NullCheck(L_25);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_25, L_26, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// for(int i = 0; i < buttony.currentLevel; i++)
		V_3 = 0;
		goto IL_00e7;
	}

IL_00d8:
	{
		// g.GetComponent<Grog>().onUpgrade();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = V_0;
		NullCheck(L_27);
		Grog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE* L_28;
		L_28 = GameObject_GetComponent_TisGrog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE_mFB69D395569B0895C5375A73C4B1A06FE504974C(L_27, GameObject_GetComponent_TisGrog_t5F08DBBB7FD81C2EB81087E299654EF696374ACE_mFB69D395569B0895C5375A73C4B1A06FE504974C_RuntimeMethod_var);
		NullCheck(L_28);
		Grog_onUpgrade_m8E9832040C31BEF4CA9D4CB6D97FE7BDD1677EA5(L_28, NULL);
		// for(int i = 0; i < buttony.currentLevel; i++)
		int32_t L_29 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_00e7:
	{
		// for(int i = 0; i < buttony.currentLevel; i++)
		int32_t L_30 = V_3;
		ButtonGrog_tA7416BE46CF030EEF3D641279E0AB7CB754839EF* L_31 = ___buttony1;
		NullCheck(L_31);
		int32_t L_32 = L_31->___currentLevel_7;
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_00d8;
		}
	}
	{
		// grogs = new List<GameObject>(grogs.OrderBy(i => i.GetComponent<RectTransform>().localPosition.y));
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_33 = __this->___grogs_5;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t6248F9A6A0AD9F0A15677D5EA8B91A27E73AA874_il2cpp_TypeInfo_var);
		Func_2_tA26CC06F251E5318131EF8475E1A4BDADDFAD8BC* L_34 = ((U3CU3Ec_t6248F9A6A0AD9F0A15677D5EA8B91A27E73AA874_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6248F9A6A0AD9F0A15677D5EA8B91A27E73AA874_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1;
		Func_2_tA26CC06F251E5318131EF8475E1A4BDADDFAD8BC* L_35 = L_34;
		G_B4_0 = L_35;
		G_B4_1 = L_33;
		G_B4_2 = __this;
		if (L_35)
		{
			G_B5_0 = L_35;
			G_B5_1 = L_33;
			G_B5_2 = __this;
			goto IL_0116;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t6248F9A6A0AD9F0A15677D5EA8B91A27E73AA874_il2cpp_TypeInfo_var);
		U3CU3Ec_t6248F9A6A0AD9F0A15677D5EA8B91A27E73AA874* L_36 = ((U3CU3Ec_t6248F9A6A0AD9F0A15677D5EA8B91A27E73AA874_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6248F9A6A0AD9F0A15677D5EA8B91A27E73AA874_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tA26CC06F251E5318131EF8475E1A4BDADDFAD8BC* L_37 = (Func_2_tA26CC06F251E5318131EF8475E1A4BDADDFAD8BC*)il2cpp_codegen_object_new(Func_2_tA26CC06F251E5318131EF8475E1A4BDADDFAD8BC_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		Func_2__ctor_m5750050EBB60074F75746C1F8D7C3EA22904A011(L_37, L_36, (intptr_t)((void*)U3CU3Ec_U3CSpawnTheGrogU3Eb__3_0_m8FD079D24FF18C2177B63E83A5F3D25E689983CA_RuntimeMethod_var), NULL);
		Func_2_tA26CC06F251E5318131EF8475E1A4BDADDFAD8BC* L_38 = L_37;
		((U3CU3Ec_t6248F9A6A0AD9F0A15677D5EA8B91A27E73AA874_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6248F9A6A0AD9F0A15677D5EA8B91A27E73AA874_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t6248F9A6A0AD9F0A15677D5EA8B91A27E73AA874_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6248F9A6A0AD9F0A15677D5EA8B91A27E73AA874_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1), (void*)L_38);
		G_B5_0 = L_38;
		G_B5_1 = G_B4_1;
		G_B5_2 = G_B4_2;
	}

IL_0116:
	{
		RuntimeObject* L_39;
		L_39 = Enumerable_OrderBy_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m52D6B2FA8A75393C2B50151F7E5902C74B764447(G_B5_1, G_B5_0, Enumerable_OrderBy_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m52D6B2FA8A75393C2B50151F7E5902C74B764447_RuntimeMethod_var);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_40 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		List_1__ctor_mF43DCB3BB782DEE371E585AF95DAD52EE17CC9BC(L_40, L_39, List_1__ctor_mF43DCB3BB782DEE371E585AF95DAD52EE17CC9BC_RuntimeMethod_var);
		NullCheck(G_B5_2);
		G_B5_2->___grogs_5 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&G_B5_2->___grogs_5), (void*)L_40);
		// int counter = 1;
		V_1 = 1;
		// foreach(GameObject gs in grogs)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_41 = __this->___grogs_5;
		NullCheck(L_41);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_42;
		L_42 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_41, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_4 = L_42;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0163:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_4), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0158_1;
			}

IL_0136_1:
			{
				// foreach(GameObject gs in grogs)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43;
				L_43 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_4), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				// gs.GetComponent<RectTransform>().SetSiblingIndex(grogs.Count-counter);
				NullCheck(L_43);
				RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_44;
				L_44 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_43, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
				List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_45 = __this->___grogs_5;
				NullCheck(L_45);
				int32_t L_46;
				L_46 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_45, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
				int32_t L_47 = V_1;
				NullCheck(L_44);
				Transform_SetSiblingIndex_m8A3B81F08B93991C05BFA89ADA2146836C4FC4B2(L_44, ((int32_t)il2cpp_codegen_subtract(L_46, L_47)), NULL);
				// counter++;
				int32_t L_48 = V_1;
				V_1 = ((int32_t)il2cpp_codegen_add(L_48, 1));
			}

IL_0158_1:
			{
				// foreach(GameObject gs in grogs)
				bool L_49;
				L_49 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_4), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_49)
				{
					goto IL_0136_1;
				}
			}
			{
				goto IL_0171;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0171:
	{
		// return g;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50 = V_0;
		return L_50;
	}
}
// System.Void SpawnGrog::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnGrog__ctor_m20DB1161C0DF01A7E209C4A81E168FB75BCC5E59 (SpawnGrog_tF9FA499BCB26222A68D537136982C341A8DBD649* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<GameObject> grogs = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___grogs_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___grogs_5), (void*)L_0);
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
// System.Void SpawnGrog/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mCD8CFCF2A3C51A3DF9DD8A9056E1D49D7C5F5B67 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t6248F9A6A0AD9F0A15677D5EA8B91A27E73AA874_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t6248F9A6A0AD9F0A15677D5EA8B91A27E73AA874* L_0 = (U3CU3Ec_t6248F9A6A0AD9F0A15677D5EA8B91A27E73AA874*)il2cpp_codegen_object_new(U3CU3Ec_t6248F9A6A0AD9F0A15677D5EA8B91A27E73AA874_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mCED1BA8942C4747F168B366B401F94E73FEB5B8F(L_0, NULL);
		((U3CU3Ec_t6248F9A6A0AD9F0A15677D5EA8B91A27E73AA874_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6248F9A6A0AD9F0A15677D5EA8B91A27E73AA874_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t6248F9A6A0AD9F0A15677D5EA8B91A27E73AA874_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6248F9A6A0AD9F0A15677D5EA8B91A27E73AA874_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void SpawnGrog/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mCED1BA8942C4747F168B366B401F94E73FEB5B8F (U3CU3Ec_t6248F9A6A0AD9F0A15677D5EA8B91A27E73AA874* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Single SpawnGrog/<>c::<SpawnTheGrog>b__3_0(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CSpawnTheGrogU3Eb__3_0_m8FD079D24FF18C2177B63E83A5F3D25E689983CA (U3CU3Ec_t6248F9A6A0AD9F0A15677D5EA8B91A27E73AA874* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// grogs = new List<GameObject>(grogs.OrderBy(i => i.GetComponent<RectTransform>().localPosition.y));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___i0;
		NullCheck(L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_0, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_1, NULL);
		float L_3 = L_2.___y_3;
		return L_3;
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
// System.Void Transition::HalfWay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transition_HalfWay_m640D0190AC6709D8AB27D1929CD417B2E1432D8B (Transition_tCEFDBCF3B9C6819BF1A11F93B0DBE7EBEB353D04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4_m4A2003BB8153D52192A006D81119F3685D144594_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F5FD870291A9070FD9EF78BF6B827EDFB57EA60);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject.Find("EncounterHandler").GetComponent<EncounterHandler>().HalfWayHandler();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral4F5FD870291A9070FD9EF78BF6B827EDFB57EA60, NULL);
		NullCheck(L_0);
		EncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4* L_1;
		L_1 = GameObject_GetComponent_TisEncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4_m4A2003BB8153D52192A006D81119F3685D144594(L_0, GameObject_GetComponent_TisEncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4_m4A2003BB8153D52192A006D81119F3685D144594_RuntimeMethod_var);
		NullCheck(L_1);
		EncounterHandler_HalfWayHandler_m456D998C81152E04B3D88083D1E57F19BF0F163A(L_1, NULL);
		// }
		return;
	}
}
// System.Void Transition::OnDelete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transition_OnDelete_m2C52CE015F4E50EF073F557A89FDD6FA75580B3E (Transition_tCEFDBCF3B9C6819BF1A11F93B0DBE7EBEB353D04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_0, NULL);
		// }
		return;
	}
}
// System.Void Transition::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transition_Start_m56FB6AAED27A2560AA91288897726B384F7E4F96 (Transition_tCEFDBCF3B9C6819BF1A11F93B0DBE7EBEB353D04* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Transition::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transition_Update_m92BA0BCCA1DEB843C9840CFB87F43A9C59A9CEEA (Transition_tCEFDBCF3B9C6819BF1A11F93B0DBE7EBEB353D04* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Transition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transition__ctor_m641CBEB2CAC3DD257BAC609DE294488F9BF64768 (Transition_tCEFDBCF3B9C6819BF1A11F93B0DBE7EBEB353D04* __this, const RuntimeMethod* method) 
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
// UnityEngine.GameObject World::randomChooser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* World_randomChooser_m138E500374102EBCC0A17751AB8A9510AB8F6C25 (World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int x = Random.Range(1,1001);
		int32_t L_0;
		L_0 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(1, ((int32_t)1001), NULL);
		V_0 = L_0;
		// for(int i = 0; i < RNGWeight.Length; i++)
		V_1 = 0;
		goto IL_0029;
	}

IL_0010:
	{
		// if(x < RNGWeight[i])
		int32_t L_1 = V_0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_2 = __this->___RNGWeight_5;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		double L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if ((!(((double)((double)L_1)) < ((double)L_5))))
		{
			goto IL_0025;
		}
	}
	{
		// return encounters[i];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___encounters_4;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		return L_9;
	}

IL_0025:
	{
		// for(int i = 0; i < RNGWeight.Length; i++)
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0029:
	{
		// for(int i = 0; i < RNGWeight.Length; i++)
		int32_t L_11 = V_1;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_12 = __this->___RNGWeight_5;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_0010;
		}
	}
	{
		// return null;
		return (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
	}
}
// System.Void World::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void World__ctor_mAFAEE7FBF3A190572FB70B6BFCFEEC8655B5E354 (World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* __this, const RuntimeMethod* method) 
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
// System.Void WorldButtonBuy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldButtonBuy_Start_m61DB072B13EBD38D38F29C264685A12BF22E8877 (WorldButtonBuy_t740725B75DEF251588CA3D7221D5964B21762B24* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGoldUpdater_tF81566509685857184CBF980E1080EB3DAAB9418_m5B744511C9687269F6CC80FB067150101703CDDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F5FD870291A9070FD9EF78BF6B827EDFB57EA60);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD599EDCFBEAC503B743CEEACA9F5FF5DBE29220);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC063A23CA8B009640E1202463DC9D150D7EEF80);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EH = GameObject.Find("EncounterHandler");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral4F5FD870291A9070FD9EF78BF6B827EDFB57EA60, NULL);
		__this->___EH_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EH_5), (void*)L_0);
		// player = GameObject.Find("PlayerHandler");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralCD599EDCFBEAC503B743CEEACA9F5FF5DBE29220, NULL);
		__this->___player_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_6), (void*)L_1);
		// GoldFormatter = GameObject.Find("GoldHandler");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralDC063A23CA8B009640E1202463DC9D150D7EEF80, NULL);
		__this->___GoldFormatter_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GoldFormatter_8), (void*)L_2);
		// texty = GetComponentInChildren<Text>();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3;
		L_3 = Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259(__this, Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var);
		__this->___texty_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___texty_10), (void*)L_3);
		// texty.text = GoldFormatter.GetComponent<GoldUpdater>().formatGold(world.worldCost);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___texty_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___GoldFormatter_8;
		NullCheck(L_5);
		GoldUpdater_tF81566509685857184CBF980E1080EB3DAAB9418* L_6;
		L_6 = GameObject_GetComponent_TisGoldUpdater_tF81566509685857184CBF980E1080EB3DAAB9418_m5B744511C9687269F6CC80FB067150101703CDDD(L_5, GameObject_GetComponent_TisGoldUpdater_tF81566509685857184CBF980E1080EB3DAAB9418_m5B744511C9687269F6CC80FB067150101703CDDD_RuntimeMethod_var);
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_7 = __this->___world_4;
		NullCheck(L_7);
		double L_8 = L_7->___worldCost_8;
		NullCheck(L_6);
		String_t* L_9;
		L_9 = GoldUpdater_formatGold_m9C9E3CF1B9BD23E558359D83B24E808419582A8F(L_6, L_8, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_9);
		// }
		return;
	}
}
// System.Void WorldButtonBuy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldButtonBuy_Update_m16FC3B661A48FA282A1C0522F1E9E0F9834691C7 (WorldButtonBuy_t740725B75DEF251588CA3D7221D5964B21762B24* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4_m4A2003BB8153D52192A006D81119F3685D144594_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B25DFBD07EA65F4B3D466AFC210ED0CC5BA4DCB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF449ECB799492B6E94508C177821573A9593DCDE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(!EH.GetComponent<EncounterHandler>().WorldSwapHit)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___EH_5;
		NullCheck(L_0);
		EncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4* L_1;
		L_1 = GameObject_GetComponent_TisEncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4_m4A2003BB8153D52192A006D81119F3685D144594(L_0, GameObject_GetComponent_TisEncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4_m4A2003BB8153D52192A006D81119F3685D144594_RuntimeMethod_var);
		NullCheck(L_1);
		bool L_2 = L_1->___WorldSwapHit_21;
		if (L_2)
		{
			goto IL_00fe;
		}
	}
	{
		// gameObject.GetComponent<Button>().interactable =  true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4;
		L_4 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_3, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		NullCheck(L_4);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_4, (bool)1, NULL);
		// if(!bought)
		bool L_5 = __this->___bought_7;
		if (L_5)
		{
			goto IL_0077;
		}
	}
	{
		// if(player.GetComponent<PlayerHandler>().gold >= world.worldCost)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___player_6;
		NullCheck(L_6);
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_7;
		L_7 = GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D(L_6, GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D_RuntimeMethod_var);
		NullCheck(L_7);
		double L_8 = L_7->___gold_6;
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_9 = __this->___world_4;
		NullCheck(L_9);
		double L_10 = L_9->___worldCost_8;
		if ((!(((double)L_8) >= ((double)L_10))))
		{
			goto IL_0061;
		}
	}
	{
		// gameObject.GetComponent<Image>().color =  Color.yellow;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_11);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12;
		L_12 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_11, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline(NULL);
		NullCheck(L_12);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_12, L_13);
		return;
	}

IL_0061:
	{
		// gameObject.GetComponent<Image>().color =  Color.grey;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_14);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15;
		L_15 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_14, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		L_16 = Color_get_grey_m1CE6BEDA3EF8569E939F77A4B0231D9839864F92_inline(NULL);
		NullCheck(L_15);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_15, L_16);
		return;
	}

IL_0077:
	{
		// texty.alignment = TextAnchor.MiddleCenter;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_17 = __this->___texty_10;
		NullCheck(L_17);
		Text_set_alignment_m9FAD6C1C270FA28C610AB1E07414FBF96403157A(L_17, 4, NULL);
		// if(world.currentWorld == false)
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_18 = __this->___world_4;
		NullCheck(L_18);
		bool L_19 = L_18->___currentWorld_7;
		if (L_19)
		{
			goto IL_00c7;
		}
	}
	{
		// gameObject.GetComponent<Button>().interactable =  true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_20);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_21;
		L_21 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_20, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		NullCheck(L_21);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_21, (bool)1, NULL);
		// gameObject.GetComponent<Image>().color =  Color.yellow;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_22);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_23;
		L_23 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_22, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24;
		L_24 = Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline(NULL);
		NullCheck(L_23);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_23, L_24);
		// texty.text = "Swap";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_25 = __this->___texty_10;
		NullCheck(L_25);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_25, _stringLiteral1B25DFBD07EA65F4B3D466AFC210ED0CC5BA4DCB);
		return;
	}

IL_00c7:
	{
		// gameObject.GetComponent<Button>().interactable =  false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_26);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_27;
		L_27 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_26, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		NullCheck(L_27);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_27, (bool)0, NULL);
		// gameObject.GetComponent<Image>().color =  Color.grey;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_28);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_29;
		L_29 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_28, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		L_30 = Color_get_grey_m1CE6BEDA3EF8569E939F77A4B0231D9839864F92_inline(NULL);
		NullCheck(L_29);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_29, L_30);
		// texty.text = "Selected";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_31 = __this->___texty_10;
		NullCheck(L_31);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_31, _stringLiteralF449ECB799492B6E94508C177821573A9593DCDE);
		return;
	}

IL_00fe:
	{
		// gameObject.GetComponent<Button>().interactable =  false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32;
		L_32 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_32);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_33;
		L_33 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_32, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		NullCheck(L_33);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_33, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void WorldButtonBuy::OnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldButtonBuy_OnClick_m6E18871CBB06FBB4A45E126E18640A7A3EB93A38 (WorldButtonBuy_t740725B75DEF251588CA3D7221D5964B21762B24* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4_m4A2003BB8153D52192A006D81119F3685D144594_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(!bought)
		bool L_0 = __this->___bought_7;
		if (L_0)
		{
			goto IL_005e;
		}
	}
	{
		// if(player.GetComponent<PlayerHandler>().gold >= world.worldCost)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___player_6;
		NullCheck(L_1);
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_2;
		L_2 = GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D(L_1, GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D_RuntimeMethod_var);
		NullCheck(L_2);
		double L_3 = L_2->___gold_6;
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_4 = __this->___world_4;
		NullCheck(L_4);
		double L_5 = L_4->___worldCost_8;
		if ((!(((double)L_3) >= ((double)L_5))))
		{
			goto IL_00c5;
		}
	}
	{
		// bought = true;
		__this->___bought_7 = (bool)1;
		// TheImage.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___TheImage_9;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// player.GetComponent<PlayerHandler>().gold -= world.worldCost;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___player_6;
		NullCheck(L_7);
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_8;
		L_8 = GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D(L_7, GameObject_GetComponent_TisPlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635_mF90461E5322521AF07F4976BA6BA8BDFFDAE231D_RuntimeMethod_var);
		PlayerHandler_tF1FFC3408F6506799097BE4B31C5E96E897A2635* L_9 = L_8;
		NullCheck(L_9);
		double L_10 = L_9->___gold_6;
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_11 = __this->___world_4;
		NullCheck(L_11);
		double L_12 = L_11->___worldCost_8;
		NullCheck(L_9);
		L_9->___gold_6 = ((double)il2cpp_codegen_subtract(L_10, L_12));
		return;
	}

IL_005e:
	{
		// else if(world.currentWorld)
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_13 = __this->___world_4;
		NullCheck(L_13);
		bool L_14 = L_13->___currentWorld_7;
		if (!L_14)
		{
			goto IL_007d;
		}
	}
	{
		// gameObject.GetComponent<Button>().interactable =  false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_15);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_16;
		L_16 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_15, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		NullCheck(L_16);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_16, (bool)0, NULL);
		return;
	}

IL_007d:
	{
		// EH.GetComponent<EncounterHandler>().currentWorld.currentWorld = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___EH_5;
		NullCheck(L_17);
		EncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4* L_18;
		L_18 = GameObject_GetComponent_TisEncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4_m4A2003BB8153D52192A006D81119F3685D144594(L_17, GameObject_GetComponent_TisEncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4_m4A2003BB8153D52192A006D81119F3685D144594_RuntimeMethod_var);
		NullCheck(L_18);
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_19 = L_18->___currentWorld_4;
		NullCheck(L_19);
		L_19->___currentWorld_7 = (bool)0;
		// EH.GetComponent<EncounterHandler>().nextWorld = world;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___EH_5;
		NullCheck(L_20);
		EncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4* L_21;
		L_21 = GameObject_GetComponent_TisEncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4_m4A2003BB8153D52192A006D81119F3685D144594(L_20, GameObject_GetComponent_TisEncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4_m4A2003BB8153D52192A006D81119F3685D144594_RuntimeMethod_var);
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_22 = __this->___world_4;
		NullCheck(L_21);
		L_21->___nextWorld_5 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&L_21->___nextWorld_5), (void*)L_22);
		// world.currentWorld = true;
		World_t7E641366D3E68AEADB5A0B3409E31C580A24BC6A* L_23 = __this->___world_4;
		NullCheck(L_23);
		L_23->___currentWorld_7 = (bool)1;
		// EH.GetComponent<EncounterHandler>().WorldSwap();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___EH_5;
		NullCheck(L_24);
		EncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4* L_25;
		L_25 = GameObject_GetComponent_TisEncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4_m4A2003BB8153D52192A006D81119F3685D144594(L_24, GameObject_GetComponent_TisEncounterHandler_t4C8AA0F8450B4D12DA8D141809189B6BD7DA82D4_m4A2003BB8153D52192A006D81119F3685D144594_RuntimeMethod_var);
		NullCheck(L_25);
		EncounterHandler_WorldSwap_m957FD82C0E49E667A8FBDCE2518FDFED4EA7EA63(L_25, NULL);
	}

IL_00c5:
	{
		// }
		return;
	}
}
// System.Void WorldButtonBuy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldButtonBuy__ctor_m03799310B5D94C987CD5A5812687F5A88F8B50F2 (WorldButtonBuy_t740725B75DEF251588CA3D7221D5964B21762B24* __this, const RuntimeMethod* method) 
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
// System.Void SlotImageHolder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotImageHolder__ctor_m32DABA9D69CC0260D8AC794975DD8F6010AD788F (SlotImageHolder_tBEA0514F055F29E58C95932ADF6A313EBADB3048* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.5f), (0.5f), (0.5f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.921568632f), (0.0156862754f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_grey_m1CE6BEDA3EF8569E939F77A4B0231D9839864F92_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.5f), (0.5f), (0.5f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
