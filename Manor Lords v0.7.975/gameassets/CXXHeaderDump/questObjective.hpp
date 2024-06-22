#ifndef UE4SS_SDK_questObjective_HPP
#define UE4SS_SDK_questObjective_HPP

class UquestObjective_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image_91;                                                           // 0x0268 (size: 0x8)
    class URichTextBlock* objective_txt;                                              // 0x0270 (size: 0x8)
    FObjective Objective;                                                             // 0x0278 (size: 0x70)
    FQuest Quest;                                                                     // 0x02E8 (size: 0x118)

    class APawnCPP* getRecipientByIndex(int32 Index);
    void getRegionByUniqueTag(FName& regionUniqueTag, class ARegion*& Region);
    TArray<class ARegion*> getPlayerRegions();
    void getTotalBuildingCount(TArray<int32>& buildingTypes, int32& numberOfConstructedBuildings);
    void getBuildingCount(const int32& bType, int32& numberOfConstructedBuildings);
    void howMuchCash(float& Cash to Have);
    void Construct();
    void updateObjective();
    void ExecuteUbergraph_questObjective(int32 EntryPoint);
}; // Size: 0x400

#endif
