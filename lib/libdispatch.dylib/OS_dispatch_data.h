/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/usr/lib/system/libdispatch.dylib
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface OS_dispatch_data : _NSDispatchData <OS_dispatch_data> {
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (BOOL)_bytesAreVM;
- (id)initWithBytes:(void*)arg1 length:(unsigned int)arg2 copy:(BOOL)arg3 freeWhenDone:(BOOL)arg4 bytesAreVM:(BOOL)arg5;
- (id)init;
- (id)debugDescription;
- (void)_setTargetQueue:(id)arg1;
- (void)_setFinalizer:(int (*)())arg1;
- (void*)_getContext;
- (void)_setContext:(void*)arg1;
- (void)finalize;
- (void)dealloc;

@end