/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTCardItem : AceObject <SASTTemplateItem>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SAUIDecoratedText *footnote;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) SAUIDecoratedText *label;
@property (readonly) Class superclass;
@property (nonatomic, retain) SAUIDecoratedText *title;
@property (nonatomic, retain) SAUIColor *titleBackgroundColor;

+ (id)cardItem;
+ (id)cardItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)footnote;
- (id)groupIdentifier;
- (id)label;
- (void)setFootnote:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleBackgroundColor:(id)arg1;
- (id)title;
- (id)titleBackgroundColor;

@end