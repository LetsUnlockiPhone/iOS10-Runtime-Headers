/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@class NSLock;

@interface SCRCThreadedWeakLinkedObject : NSObject  {
    NSLock *_releaseLock;
    int _referenceCount;
    BOOL _calledDealloc;
}


- (void)invalidateThreadsWithWeakLinks;
- (id)init;
- (void)dealloc;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;

@end