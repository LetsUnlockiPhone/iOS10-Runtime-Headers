/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSDictionary;

@interface PKSecureElementConsistencyData : NSObject  {
    unsigned long long _backoffLevel;
    NSDictionary *_secureElementCardStateByAID;
    NSDictionary *_passStateByAID;
    NSDictionary *_cleanupActionsByAID;
}

@property unsigned long long backoffLevel;
@property(retain) NSDictionary * secureElementCardStateByAID;
@property(retain) NSDictionary * passStateByAID;
@property(retain) NSDictionary * cleanupActionsByAID;
@property(readonly) NSDictionary * dictionary;

+ (id)consistencyDataWithPaymentApplications:(id)arg1 secureElementCards:(id)arg2 cleanupActions:(id)arg3;

- (void)setCleanupActionsByAID:(id)arg1;
- (void)setPassStateByAID:(id)arg1;
- (void)setSecureElementCardStateByAID:(id)arg1;
- (void)setBackoffLevel:(unsigned long long)arg1;
- (unsigned long long)backoffLevel;
- (id)cleanupActionsByAID;
- (id)secureElementCardStateByAID;
- (id)passStateByAID;
- (id)dictionary;

@end