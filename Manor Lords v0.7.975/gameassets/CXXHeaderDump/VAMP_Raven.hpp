#ifndef UE4SS_SDK_VAMP_Raven_HPP
#define UE4SS_SDK_VAMP_Raven_HPP

class AVAMP_Raven_C : public ASMUnit
{
    class UVAHISMController* VAHISMController_Body;                                   // 0x0C20 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0C28 (size: 0x8)
    class UVARuntimeComponent* VARuntimeBP;                                           // 0x0C30 (size: 0x8)
    FVector flockOffset;                                                              // 0x0C38 (size: 0xC)

}; // Size: 0xC44

#endif
