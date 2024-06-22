#ifndef UE4SS_SDK_constructionList_Item_HPP
#define UE4SS_SDK_constructionList_Item_HPP

class UconstructionList_Item_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* itemAmt;                                                        // 0x0268 (size: 0x8)
    class UImage* itemImage;                                                          // 0x0270 (size: 0x8)
    int32 ItemType;                                                                   // 0x0278 (size: 0x4)
    int32 amt;                                                                        // 0x027C (size: 0x4)
    class URegionWidget_C* RegionWidget;                                              // 0x0280 (size: 0x8)
    bool Buy;                                                                         // 0x0288 (size: 0x1)
    FText amtTxt;                                                                     // 0x0290 (size: 0x18)

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_constructionList_Item(int32 EntryPoint);
}; // Size: 0x2A8

#endif
