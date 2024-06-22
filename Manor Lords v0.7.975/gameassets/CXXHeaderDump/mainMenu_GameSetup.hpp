#ifndef UE4SS_SDK_mainMenu_GameSetup_HPP
#define UE4SS_SDK_mainMenu_GameSetup_HPP

class UmainMenu_GameSetup_C : public UNaviUi
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class UHorizontalBox* aggressiveness_hb;                                          // 0x02C8 (size: 0x8)
    class UHorizontalBox* approval_hb;                                                // 0x02D0 (size: 0x8)
    class UHorizontalBox* approval_hb_1;                                              // 0x02D8 (size: 0x8)
    class UHorizontalBox* approval_hb_2;                                              // 0x02E0 (size: 0x8)
    class UHorizontalBox* approval_hb_3;                                              // 0x02E8 (size: 0x8)
    class UButton* Button_0;                                                          // 0x02F0 (size: 0x8)
    class UButton* Button_210;                                                        // 0x02F8 (size: 0x8)
    class UComboBoxString* ComboBoxString_27;                                         // 0x0300 (size: 0x8)
    class UHorizontalBox* consumption_hb;                                             // 0x0308 (size: 0x8)
    class UHorizontalBox* customization_HB;                                           // 0x0310 (size: 0x8)
    class UVerticalBox* economic_settings;                                            // 0x0318 (size: 0x8)
    class UlocalizedTextBox_C* gameSetting_aggrs;                                     // 0x0320 (size: 0x8)
    class UlocalizedTextBox_C* gameSetting_AI;                                        // 0x0328 (size: 0x8)
    class UlocalizedTextBox_C* gameSetting_consumption;                               // 0x0330 (size: 0x8)
    class UlocalizedTextBox_C* gameSetting_consumption_1;                             // 0x0338 (size: 0x8)
    class UlocalizedTextBox_C* gameSetting_consumption_2;                             // 0x0340 (size: 0x8)
    class UlocalizedTextBox_C* gameSetting_consumption_3;                             // 0x0348 (size: 0x8)
    class UlocalizedTextBox_C* gameSetting_consumption_4;                             // 0x0350 (size: 0x8)
    class UlocalizedTextBox_C* gameSetting_goals;                                     // 0x0358 (size: 0x8)
    class UlocalizedTextBox_C* gameSetting_raiders;                                   // 0x0360 (size: 0x8)
    class UlocalizedTextBox_C* gameSetting_raiders_1;                                 // 0x0368 (size: 0x8)
    class UlocalizedTextBox_C* gameSetting_raiders_2;                                 // 0x0370 (size: 0x8)
    class UlocalizedTextBox_C* gameSetting_raiders_3;                                 // 0x0378 (size: 0x8)
    class UlocalizedTextBox_C* gameSetting_resourceRandomness;                        // 0x0380 (size: 0x8)
    class UlocalizedTextBox_C* gameSetting_startingSeason;                            // 0x0388 (size: 0x8)
    class UlocalizedTextBox_C* gameSetting_startingSeason_1;                          // 0x0390 (size: 0x8)
    class UlocalizedTextBox_C* gameSetting_startingSeason_2;                          // 0x0398 (size: 0x8)
    class UlocalizedTextBox_C* gameSetting_supplies;                                  // 0x03A0 (size: 0x8)
    class UlocalizedTextBox_C* gameSetting_supplies_1;                                // 0x03A8 (size: 0x8)
    class UlocalizedTextBox_C* gameSetting_supplies_2;                                // 0x03B0 (size: 0x8)
    class UHorizontalBox* goals_hb_3;                                                 // 0x03B8 (size: 0x8)
    class UImage* Grunge;                                                             // 0x03C0 (size: 0x8)
    class UTextBlock* header_txt_2;                                                   // 0x03C8 (size: 0x8)
    class UVerticalBox* header_VB;                                                    // 0x03D0 (size: 0x8)
    class UHorizontalRadioSelect_C* HorizontalRadioSelect;                            // 0x03D8 (size: 0x8)
    class UHorizontalRadioSelect_C* HorizontalRadioSelect_Difficulty;                 // 0x03E0 (size: 0x8)
    class UImage* Image;                                                              // 0x03E8 (size: 0x8)
    class UImage* Image_1;                                                            // 0x03F0 (size: 0x8)
    class UImage* Image_2;                                                            // 0x03F8 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0400 (size: 0x8)
    class UImage* Image_4;                                                            // 0x0408 (size: 0x8)
    class UImage* Image_5;                                                            // 0x0410 (size: 0x8)
    class UImage* Image_6;                                                            // 0x0418 (size: 0x8)
    class UImage* Image_7;                                                            // 0x0420 (size: 0x8)
    class UImage* Image_8;                                                            // 0x0428 (size: 0x8)
    class UImage* Image_9;                                                            // 0x0430 (size: 0x8)
    class UImage* Image_10;                                                           // 0x0438 (size: 0x8)
    class UImage* Image_11;                                                           // 0x0440 (size: 0x8)
    class UImage* Image_12;                                                           // 0x0448 (size: 0x8)
    class UImage* Image_13;                                                           // 0x0450 (size: 0x8)
    class UImage* Image_14;                                                           // 0x0458 (size: 0x8)
    class UImage* Image_15;                                                           // 0x0460 (size: 0x8)
    class UImage* Image_16;                                                           // 0x0468 (size: 0x8)
    class UImage* Image_17;                                                           // 0x0470 (size: 0x8)
    class UImage* Image_18;                                                           // 0x0478 (size: 0x8)
    class UImage* Image_19;                                                           // 0x0480 (size: 0x8)
    class UImage* Image_20;                                                           // 0x0488 (size: 0x8)
    class UImage* Image_21;                                                           // 0x0490 (size: 0x8)
    class UImage* Image_65;                                                           // 0x0498 (size: 0x8)
    class UImage* Image_76;                                                           // 0x04A0 (size: 0x8)
    class UImage* Image_136;                                                          // 0x04A8 (size: 0x8)
    class UVerticalBox* LEFT_VB;                                                      // 0x04B0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox;                                      // 0x04B8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_2;                                    // 0x04C0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_88;                                   // 0x04C8 (size: 0x8)
    class UMLDefaultSpinner_C* MLDefaultSpinner;                                      // 0x04D0 (size: 0x8)
    class UMLDefaultSpinner_C* MLDefaultSpinner_2;                                    // 0x04D8 (size: 0x8)
    class UHorizontalBox* modePresets_HB;                                             // 0x04E0 (size: 0x8)
    class UUniformGridPanel* older_economic_settings_uniformPanel;                    // 0x04E8 (size: 0x8)
    class UmenuButton_C* play_button;                                                 // 0x04F0 (size: 0x8)
    class UButton* playOld;                                                           // 0x04F8 (size: 0x8)
    class UHorizontalBox* presetDifficulty_HB;                                        // 0x0500 (size: 0x8)
    class UHorizontalBox* presets_hb;                                                 // 0x0508 (size: 0x8)
    class UHorizontalBox* raiderFreeYears_hb_2;                                       // 0x0510 (size: 0x8)
    class UHorizontalBox* raiders_hb;                                                 // 0x0518 (size: 0x8)
    class UHorizontalBox* raiders_hb_1;                                               // 0x0520 (size: 0x8)
    class UHorizontalBox* raiders_hb_2;                                               // 0x0528 (size: 0x8)
    class UTextBlock* recruit_txt;                                                    // 0x0530 (size: 0x8)
    class UTextBlock* recruit_txt_1;                                                  // 0x0538 (size: 0x8)
    class UmenuButton_C* return_button;                                               // 0x0540 (size: 0x8)
    class UButton* returnOld;                                                         // 0x0548 (size: 0x8)
    class UVerticalBox* RIGHT_VB;                                                     // 0x0550 (size: 0x8)
    class UVerticalBox* RIGHT_VB_1;                                                   // 0x0558 (size: 0x8)
    class UMLDefaultSpinner_C* setting_aggressiveness;                                // 0x0560 (size: 0x8)
    class UMLDefaultSpinner_C* setting_approval;                                      // 0x0568 (size: 0x8)
    class UMLDefaultSpinner_C* setting_armamentDelivery;                              // 0x0570 (size: 0x8)
    class UMLDefaultSpinner_C* setting_banditCamps_initial;                           // 0x0578 (size: 0x8)
    class UMLDefaultSpinner_C* setting_banditCamps_max;                               // 0x0580 (size: 0x8)
    class UMLDefaultSpinner_C* setting_baron;                                         // 0x0588 (size: 0x8)
    class UMLDefaultSpinner_C* setting_goals;                                         // 0x0590 (size: 0x8)
    class UMLDefaultSpinner_C* setting_raiders;                                       // 0x0598 (size: 0x8)
    class UMLDefaultSpinner_C* setting_raiders_2;                                     // 0x05A0 (size: 0x8)
    class UMLDefaultSpinner_C* setting_requirements;                                  // 0x05A8 (size: 0x8)
    class UMLDefaultSpinner_C* setting_resourceRandomization;                         // 0x05B0 (size: 0x8)
    class UMLDefaultSpinner_C* setting_startingDay;                                   // 0x05B8 (size: 0x8)
    class UMLDefaultSpinner_C* setting_startingDay_2;                                 // 0x05C0 (size: 0x8)
    class UMLDefaultSpinner_C* setting_startingKingsTaxVal;                           // 0x05C8 (size: 0x8)
    class UMLDefaultSpinner_C* setting_startingResourcesMul;                          // 0x05D0 (size: 0x8)
    class UMLDefaultSpinner_C* setting_tutorialQuests;                                // 0x05D8 (size: 0x8)
    class UMLDefaultSpinner_C* setting_water;                                         // 0x05E0 (size: 0x8)
    class UMLDefaultSpinner_C* setting_weather;                                       // 0x05E8 (size: 0x8)
    class UTextBlock* title_coats_txt;                                                // 0x05F0 (size: 0x8)
    FmainMenu_GameSetup_CBeginGame BeginGame;                                         // 0x05F8 (size: 0x10)
    void beginGame();
    FmainMenu_GameSetup_CGoBackToBanner goBackToBanner;                               // 0x0608 (size: 0x10)
    void goBackToBanner();
    bool tempPresetWhenChangingDifficulty;                                            // 0x0618 (size: 0x1)
    float lastSettingHoverSfxTime;                                                    // 0x061C (size: 0x4)

    ENaviHandleMethod HandleInput(ENaviUiIntent Key);
    void changeVictoryConditionsOptionsBasedOnAIPresence(bool AI_is_present);
    void animateHoverTransparencySettings(float A);
    void settingsWereCustomized();
    void settingModeChangedTheDifficultyProbablyToMedium(EGameDifficulty newDifficulty);
    void updateSettingsAfterPresetChanged(bool reselectDiffculty);
    void Update Selected Game Preset After Clicked(bool reselectDiffculty, bool reselectSpinnerValues);
    void getCurrentGameSetup(FGameSetupPreset& Game Setup);
    void repopulateGamePresets();
    void Translate();
    void Set AI Behaviour DEPREC(FString selection);
    void updateSpinnerTooltips();
    void updateSpinnerValuesFromGameInstance();
    void BndEvt__mainMenu_GameSetup_setting_baron_K2Node_ComponentBoundEvent_14_buttonPressed__DelegateSignature(FString Value);
    void BndEvt__mainMenu_GameSetup_setting_startingDay_K2Node_ComponentBoundEvent_15_buttonPressed__DelegateSignature(FString Value);
    void BndEvt__mainMenu_GameSetup_setting_resourceRandomization_K2Node_ComponentBoundEvent_16_buttonPressed__DelegateSignature(FString Value);
    void BndEvt__mainMenu_GameSetup_setting_water_K2Node_ComponentBoundEvent_17_buttonPressed__DelegateSignature(FString Value);
    void BndEvt__mainMenu_GameSetup_setting_raiders_K2Node_ComponentBoundEvent_18_buttonPressed__DelegateSignature(FString Value);
    void BndEvt__mainMenu_GameSetup_setting_startingResourcesMul_K2Node_ComponentBoundEvent_19_buttonPressed__DelegateSignature(FString Value);
    void BndEvt__mainMenu_GameSetup_setting_approval_K2Node_ComponentBoundEvent_20_buttonPressed__DelegateSignature(FString Value);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__mainMenu_GameSetup_setting_weather_K2Node_ComponentBoundEvent_21_buttonPressed__DelegateSignature(FString Value);
    void Construct();
    void BndEvt__mainMenu_GameSetup_setting_raiders_2_K2Node_ComponentBoundEvent_22_buttonPressed__DelegateSignature(FString Value);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__mainMenu_GameSetup_setting_approval_1_K2Node_ComponentBoundEvent_23_buttonPressed__DelegateSignature(FString Value);
    void BndEvt__main_menu_gameSettings_play_button_K2Node_ComponentBoundEvent_0_onReleased__DelegateSignature();
    void BndEvt__mainMenu_GameSetup_setting_banditCamps_1_K2Node_ComponentBoundEvent_2_buttonPressed__DelegateSignature(FString Value);
    void BndEvt__mainMenu_GameSetup_setting_startingResourcesMul_1_K2Node_ComponentBoundEvent_8_buttonPressed__DelegateSignature(FString Value);
    void BndEvt__mainMenu_GameSetup_setting_startingDay_1_K2Node_ComponentBoundEvent_12_buttonPressed__DelegateSignature(FString Value);
    void BndEvt__mainMenu_GameSetup_setting_banditCamps_K2Node_ComponentBoundEvent_24_buttonPressed__DelegateSignature(FString Value);
    void BndEvt__main_menu_gameSettings_return_button_K2Node_ComponentBoundEvent_1_onReleased__DelegateSignature();
    void BndEvt__mainMenu_GameSetup_setting_aggr_K2Node_ComponentBoundEvent_25_buttonPressed__DelegateSignature(FString Value);
    void BndEvt__mainMenu_GameSetup_setting_startingKingsTaxVal_K2Node_ComponentBoundEvent_3_SpinnerSelectionChanged__DelegateSignature(FString Value);
    void BndEvt__mainMenu_GameSetup_HorizontalRadioSelect_69_K2Node_ComponentBoundEvent_11_RadioSelectedSignature__DelegateSignature(FString Value);
    void ExecuteUbergraph_mainMenu_GameSetup(int32 EntryPoint);
    void goBackToBanner__DelegateSignature();
    void beginGame__DelegateSignature();
}; // Size: 0x620

#endif
