/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@class <SBFLegibilitySettingsProvider>, <SBUIPasscodeLockViewDelegate>, <SBUIPasscodeLockViewDelegate_Internal>, NSString, SBUIPasscodeEntryField, UIColor, _UILegibilitySettings;

@interface SBUIPasscodeLockViewBase : UIView <SBUIBiometricEventObserver, SBFLegibilitySettingsProviderDelegate, SBUIPasscodeLockView> {
    BOOL _allowsStatusTextUpdatingOnResignFirstResponder;
    float _backgroundAlpha;
    <SBFLegibilitySettingsProvider> *_backgroundLegibilitySettingsProvider;
    BOOL _becameVisible;
    unsigned int _biometricMatchMode;
    float _currentBacklightLevel;
    UIColor *_customBackgroundColor;
    <SBUIPasscodeLockViewDelegate_Internal> *_delegate;
    SBUIPasscodeEntryField *_entryField;
    _UILegibilitySettings *_legibilitySettings;
    float _luminanceBoost;
    BOOL _mesaLockedOut;
    NSString *_passcode;
    BOOL _playsKeypadSounds;
    BOOL _shouldResetForFailedPasscodeAttempt;
    BOOL _showsEmergencyCallButton;
    BOOL _showsStatusField;
    int _style;
}

@property(getter=_entryField,setter=_setEntryField:,retain) SBUIPasscodeEntryField * _entryField;
@property float backgroundAlpha;
@property(retain) <SBFLegibilitySettingsProvider> * backgroundLegibilitySettingsProvider;
@property unsigned int biometricMatchMode;
@property(retain) UIColor * customBackgroundColor;
@property <SBUIPasscodeLockViewDelegate> * delegate;
@property(getter=_luminosityBoost,setter=_setLuminosityBoost:) float luminosityBoost;
@property(readonly) NSString * passcode;
@property BOOL playsKeypadSounds;
@property BOOL shouldResetForFailedPasscodeAttempt;
@property BOOL showsEmergencyCallButton;
@property BOOL showsStatusField;
@property int style;

- (void)_clearBrightnessChangeTimer;
- (id)_entryField;
- (void)_evaluateLuminance;
- (void)_handleBiometricEvent:(unsigned int)arg1;
- (BOOL)_isBoundsPortraitOriented;
- (void)_luminanceBoostDidChange;
- (float)_luminanceBoostFromDisplayBrightness;
- (float)_luminanceBoostFromLegibility;
- (float)_luminosityBoost;
- (void)_noteScreenBrightnessDidChange;
- (void)_notifyDelegatePasscodeEnteredViaMesa;
- (int)_orientation;
- (void)_resetForFailedMesaAttemptWithEvent:(unsigned int)arg1;
- (void)_resetForFailedPasscode:(BOOL)arg1;
- (void)_resetStatusText;
- (void)_screenBrightnessReallyDidChange;
- (void)_sendDelegateKeypadKeyDown;
- (void)_sendDelegateKeypadKeyUp;
- (void)_setEntryField:(id)arg1;
- (void)_setLegibilitySettings:(id)arg1;
- (void)_setLuminosityBoost:(float)arg1;
- (void)_updateStatusText:(id)arg1 subtitle:(id)arg2 animated:(BOOL)arg3;
- (void)_updateStatusTextForBioEvent:(unsigned int)arg1 animated:(BOOL)arg2;
- (BOOL)_wantsBiometricAuthentication;
- (float)backgroundAlpha;
- (id)backgroundLegibilitySettingsProvider;
- (BOOL)becomeFirstResponder;
- (void)biometricEventMonitor:(id)arg1 handleBiometricEvent:(unsigned int)arg2;
- (unsigned int)biometricMatchMode;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canResignFirstResponder;
- (id)customBackgroundColor;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isFirstResponder;
- (id)passcode;
- (BOOL)playsKeypadSounds;
- (void)providerLegibilitySettingsChanged:(id)arg1;
- (void)reset;
- (void)resetForFailedPasscode;
- (BOOL)resignFirstResponder;
- (void)setAllowsStatusTextUpdatingOnResignFirstResponder:(BOOL)arg1;
- (void)setBackgroundAlpha:(float)arg1;
- (void)setBackgroundLegibilitySettingsProvider:(id)arg1;
- (void)setBiometricMatchMode:(unsigned int)arg1;
- (void)setCustomBackgroundColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPlaysKeypadSounds:(BOOL)arg1;
- (void)setShouldResetForFailedPasscodeAttempt:(BOOL)arg1;
- (void)setShowsEmergencyCallButton:(BOOL)arg1;
- (void)setShowsStatusField:(BOOL)arg1;
- (void)setStyle:(int)arg1;
- (BOOL)shouldResetForFailedPasscodeAttempt;
- (BOOL)showsEmergencyCallButton;
- (BOOL)showsStatusField;
- (int)style;
- (void)willMoveToWindow:(id)arg1;

@end
