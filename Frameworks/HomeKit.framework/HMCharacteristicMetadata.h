/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMCharacteristicMetadata : NSObject <NSSecureCoding> {
    NSString *_format;
    NSString *_manufacturerDescription;
    NSNumber *_maxLength;
    NSNumber *_maximumValue;
    NSNumber *_minimumValue;
    NSNumber *_stepValue;
    NSString *_units;
}

@property (nonatomic, readonly, copy) NSString *format;
@property (nonatomic, readonly, copy) NSString *manufacturerDescription;
@property (nonatomic, readonly) NSNumber *maxLength;
@property (nonatomic, readonly) NSNumber *maximumValue;
@property (nonatomic, readonly) NSNumber *minimumValue;
@property (nonatomic, readonly) NSNumber *stepValue;
@property (nonatomic, readonly, copy) NSString *units;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)format;
- (id)initWithCoder:(id)arg1;
- (id)manufacturerDescription;
- (id)maxLength;
- (id)maximumValue;
- (id)minimumValue;
- (id)stepValue;
- (id)units;

@end