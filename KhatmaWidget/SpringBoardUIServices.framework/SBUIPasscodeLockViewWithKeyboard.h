/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@class SBPasscodeKeyboard, SBUIAlphanumericPasscodeEntryField, SBUIRingViewLabelButton, UILabel, UIView;

@interface SBUIPasscodeLockViewWithKeyboard : SBUIPasscodeLockViewBase <SBUIPasscodeEntryFieldDelegate> {
    SBUIAlphanumericPasscodeEntryField *_alphaEntryField;
    BOOL _disableAnimationsDuringMinMax;
    SBUIRingViewLabelButton *_emergencyCallButton;
    UIView *_emergencyCallLeftFiller;
    UIView *_emergencyCallRightFiller;
    UIView *_emergencyCallToTopFiller;
    UIView *_entryFieldToBottomFiller;
    BOOL _isAnimating;
    SBPasscodeKeyboard *_keyboard;
    BOOL _previousKeyboardShowedInlineCandidates;
    UILabel *_statusField;
    UIView *_statusFieldBackground;
    UIView *_statusFieldToTopOrEmergencyCallBottomFiller;
    UILabel *_statusSubtitleView;
    BOOL _triedToMinMaxWhileRotating;
    BOOL _wasMinimizedWhenAnimationStarted;
}

@property(retain) UILabel * statusField;
@property(retain) UILabel * statusSubtitleView;

- (void)_acceptOrCancelReturnKeyPress;
- (BOOL)_canMinMaxKeyboard;
- (void)_geometryChanged:(id)arg1;
- (void)_handleDidRotateNotification:(id)arg1;
- (void)_handleWillAnimateNotification:(id)arg1;
- (void)_handleWillRotateNotification:(id)arg1;
- (void)_hardwareReturnKeyPressed:(id)arg1;
- (BOOL)_isMinimized;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_keyboardFrameForInterfaceOrientation:(int)arg1;
- (float)_keyboardToEntryFieldOffset;
- (void)_layoutForMinimizationState:(BOOL)arg1;
- (void)_luminanceBoostDidChange;
- (void)_maximize;
- (void)_minimize;
- (id)_newStatusField;
- (id)_newStatusSubtitleView;
- (void)_notifyDelegatePasscodeCancelled;
- (void)_notifyDelegatePasscodeEntered;
- (void)_notifyDelegateThatEmergencyCallButtonWasPressed;
- (void)_setMinimized:(BOOL)arg1;
- (float)_statusFieldHeight;
- (float)_statusTitleWidth;
- (void)_toggleForEmergencyCall;
- (void)_toggleForStatusField;
- (void)_updateStatusText:(id)arg1 subtitle:(id)arg2 animated:(BOOL)arg3;
- (float)backgroundAlpha;
- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (id)init;
- (void)layoutSubviews;
- (id)passcode;
- (BOOL)passcodeEntryField:(id)arg1 shouldInsertText:(id)arg2;
- (void)passcodeEntryFieldDidAcceptEntry:(id)arg1;
- (void)passcodeEntryFieldDidCancelEntry:(id)arg1;
- (void)passcodeEntryFieldTextDidChange:(id)arg1;
- (BOOL)resignFirstResponder;
- (void)setBackgroundAlpha:(float)arg1;
- (void)setCustomBackgroundColor:(id)arg1;
- (void)setShowsEmergencyCallButton:(BOOL)arg1;
- (void)setShowsStatusField:(BOOL)arg1;
- (void)setStatusField:(id)arg1;
- (void)setStatusSubtitleView:(id)arg1;
- (id)statusField;
- (id)statusSubtitleView;

@end
