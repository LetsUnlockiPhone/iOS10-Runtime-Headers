/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLPixelImageBuffer : BLImageBuffer  {
}

+ (id)bufferWithImage:(id)arg1 colorManagement:(int)arg2;
+ (id)bufferWithSize:(struct CGSize { double x1; double x2; })arg1 colorManagement:(int)arg2;

- (void)drawInContext:(struct CGContext { }*)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)accessPixelsByAddressInBlock:(id)arg1;
- (void)accessPixelsByContextInBlock:(id)arg1;
- (id)image;

@end