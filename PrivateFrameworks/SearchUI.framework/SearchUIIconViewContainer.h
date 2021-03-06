/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIIconViewContainer : UIView {
    NSArray * _iconViews;
    NSLayoutConstraint * _lastLayoutGuideWidthConstraint;
    NSArray * _spacerLayoutGuideWidthConstraints;
    NSArray * _spacerLayoutGuides;
    NSLayoutConstraint * _trailingConstraint;
}

@property (retain) NSArray *iconViews;
@property (retain) NSLayoutConstraint *lastLayoutGuideWidthConstraint;
@property (retain) NSArray *spacerLayoutGuideWidthConstraints;
@property (retain) NSArray *spacerLayoutGuides;
@property (retain) NSLayoutConstraint *trailingConstraint;

+ (unsigned long long)maximumNumberOfColumns;
+ (unsigned long long)numberOfColumnsForCurrentOrientation;
+ (unsigned long long)numberOfColumnsForLandscape;
+ (unsigned long long)numberOfColumnsForPortrait;

- (void).cxx_destruct;
- (id)iconViews;
- (id)initWithStyle:(unsigned long long)arg1 cell:(id)arg2;
- (id)lastLayoutGuideWidthConstraint;
- (void)setIconViews:(id)arg1;
- (void)setLastLayoutGuideWidthConstraint:(id)arg1;
- (void)setSpacerLayoutGuideWidthConstraints:(id)arg1;
- (void)setSpacerLayoutGuides:(id)arg1;
- (void)setTrailingConstraint:(id)arg1;
- (id)spacerLayoutGuideWidthConstraints;
- (id)spacerLayoutGuides;
- (id)trailingConstraint;

@end
