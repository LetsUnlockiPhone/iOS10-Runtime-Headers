/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPGraphicsState : NSObject  {
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } mPageTransform;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } mWorldTransform;
}


- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })worldTransform;
- (void)removeTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })pageTransform;
- (id)initWithGraphicsState:(id)arg1;
- (void)setPageTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)multiplyWorldTransformBy:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1 order:(int)arg2;
- (void)setWorldTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (id)initWithDefaults;
- (void)dealloc;
- (id).cxx_construct;

@end