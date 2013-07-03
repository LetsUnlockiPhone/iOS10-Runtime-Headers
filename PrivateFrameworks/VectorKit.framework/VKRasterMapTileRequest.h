/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRasterMapTileRequest : NSObject <NSCopying> {
    BOOL _localizeLabels;
    int _mapType;
    unsigned int _scale;
    struct VKRasterTileKey { 
        unsigned int x; 
        unsigned int y; 
        unsigned int z; 
        unsigned int pointSize; 
    } _tileKey;
}

@property struct VKRasterTileKey { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } tileKey;
@property int mapType;
@property unsigned int scale;
@property BOOL localizeLabels;
@property(readonly) struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; } tk;
@property(readonly) const struct VKRasterTileKey { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }* tileKeyPtr;
@property(readonly) struct VKCacheKey { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } cacheKey;


- (struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; })tk;
- (const struct VKRasterTileKey { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)tileKeyPtr;
- (void)setTileKey:(struct VKRasterTileKey { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg1;
- (void)setMapType:(int)arg1;
- (void)setLocalizeLabels:(BOOL)arg1;
- (BOOL)localizeLabels;
- (int)mapType;
- (struct VKRasterTileKey { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })tileKey;
- (void)setScale:(unsigned int)arg1;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct VKCacheKey { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })cacheKey;
- (unsigned int)scale;

@end