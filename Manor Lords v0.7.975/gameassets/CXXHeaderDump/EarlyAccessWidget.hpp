#ifndef UE4SS_SDK_EarlyAccessWidget_HPP
#define UE4SS_SDK_EarlyAccessWidget_HPP

class UEarlyAccessWidget_C : public UNaviUi
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class UWidgetAnimation* lerpIn;                                                   // 0x02C8 (size: 0x8)
    class UButton* Button;                                                            // 0x02D0 (size: 0x8)
    class UTextBlock* Header;                                                         // 0x02D8 (size: 0x8)
    class UImage* Image;                                                              // 0x02E0 (size: 0x8)
    class UImage* Image_7;                                                            // 0x02E8 (size: 0x8)
    class UImage* Image_54;                                                           // 0x02F0 (size: 0x8)
    class UTextBlock* nda_txt_1;                                                      // 0x02F8 (size: 0x8)
    FEarlyAccessWidget_COnDone OnDone;                                                // 0x0300 (size: 0x10)
    void OnDone();

    void DoFinish();
    ENaviHandleMethod HandleInput(ENaviUiIntent Key);
    void Construct();
    void BndEvt__NDA_widget_Button_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_EarlyAccessWidget(int32 EntryPoint);
    void OnDone__DelegateSignature();
}; // Size: 0x310

#endif
