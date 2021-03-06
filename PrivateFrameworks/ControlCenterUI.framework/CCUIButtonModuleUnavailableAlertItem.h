/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUIButtonModuleUnavailableAlertItem : SBAlertItem {
    CCUIButtonModule * _module;
}

@property (nonatomic, retain) CCUIButtonModule *module;

+ (bool)presentAlertItemForButtonModule:(id)arg1;

- (void).cxx_destruct;
- (bool)allowMenuButtonDismissal;
- (void)configure:(bool)arg1 requirePasscodeForActions:(bool)arg2;
- (bool)dismissOnLock;
- (id)module;
- (void)setModule:(id)arg1;
- (bool)shouldShowInLockScreen;
- (bool)supportsAlertController;

@end
