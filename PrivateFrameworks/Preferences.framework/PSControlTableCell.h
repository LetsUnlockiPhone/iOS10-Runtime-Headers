/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class UIControl;

@interface PSControlTableCell : PSTableCell  {
    UIControl *_control;
}

@property(retain) UIControl * control;

+ (void)_initializeSafeCategory;
+ (id)_initializeSafeCategoryFromValidationManager;

- (id)controlValue;
- (void)controlChanged:(id)arg1;
- (void)setControl:(id)arg1;
- (id)newControl;
- (id)valueLabel;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (BOOL)canReload;
- (id)control;
- (void)dealloc;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)accessibilityLabel;

@end