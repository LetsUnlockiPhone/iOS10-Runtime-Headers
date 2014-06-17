/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@class NSLock, BSDispatchSource;

@interface BSPortDeathWatcher : NSObject  {
    NSLock *_lock;
    BSDispatchSource *_source;
    unsigned int _port;
}

@property(readonly) unsigned int port;


- (bool)isWatchingValidPort;
- (id)initWithPort:(unsigned int)arg1 deathHandler:(id)arg2;
- (id)initWithPort:(unsigned int)arg1 queue:(id)arg2 deathHandler:(id)arg3;
- (id)init;
- (unsigned int)port;
- (void)invalidate;
- (void)dealloc;

@end