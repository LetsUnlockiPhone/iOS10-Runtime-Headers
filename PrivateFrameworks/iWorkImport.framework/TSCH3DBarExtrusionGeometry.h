/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DBarExtrusionGeometry : TSCH3DExtrusionGeometry {
    float mBottomCapScale;
    struct BarExtrusionSetting { 
        float size; 
        BOOL hasTopBevel; 
        BOOL hasBottomBevel; 
        BOOL isCylindrical; 
        BOOL isStackedBar; 
        struct BarExtrusionDetails { 
            struct BarExtrusionCrossSectionDetails { 
                float detail; 
                float tension; 
                float adaptiveThreshold; 
                float creaseAngle; 
                int crossType; 
            } crossSection; 
            struct BarExtrusionSpineDetails { 
                float bevelHeight; 
                int bevelSlices; 
                int stride; 
                float creaseAngle; 
            } spine; 
        } details; 
    } mExtrusionSetting;
    TSCH3DNormalDirectionMapper *mNormalDirectionMapper;
    struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > { 
        struct tvec3<float> {} *__begin_; 
        struct tvec3<float> {} *__end_; 
        struct __compressed_pair<glm::detail::tvec3<float> *, std::__1::allocator<glm::detail::tvec3<float> > > { 
            struct tvec3<float> {} *__first_; 
        } __end_cap_; 
    } mNormalizedSpine;
    float mScaleMappingStartingHeight;
}

@property (nonatomic, readonly) float bottomCapScale;
@property (nonatomic) struct BarExtrusionSetting { float x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; struct BarExtrusionDetails { struct BarExtrusionCrossSectionDetails { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; int x_1_2_5; } x_6_1_1; struct BarExtrusionSpineDetails { float x_2_2_1; int x_2_2_2; int x_2_2_3; float x_2_2_4; } x_6_1_2; } x6; } extrusionSetting;
@property (nonatomic, readonly) BOOL hasBottomBevel;
@property (nonatomic, readonly) BOOL hasTopBevel;
@property (nonatomic, readonly) BOOL isCylindrical;
@property (nonatomic, readonly) TSCH3DNormalDirectionMapper *normalDirectionMapper;
@property (nonatomic, readonly) float scaleMappingStartingHeight;
@property (nonatomic, readonly) float size;

+ (id)namedBevelInterpolationShaderFunction;

- (id).cxx_construct;
- (void).cxx_destruct;
- (float)bottomCapScale;
- (int)capCount;
- (unsigned int)capOffset;
- (void)dealloc;
- (void)debug_printDataPoints;
- (struct BarExtrusionSetting { float x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; struct BarExtrusionDetails { struct BarExtrusionCrossSectionDetails { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; int x_1_2_5; } x_6_1_1; struct BarExtrusionSpineDetails { float x_2_2_1; int x_2_2_2; int x_2_2_3; float x_2_2_4; } x_6_1_2; } x6; })extrusionSetting;
- (void)generateArrays;
- (int)geometryCount;
- (unsigned int)geometryOffset;
- (BOOL)hasBottomBevel;
- (BOOL)hasTopBevel;
- (id)init;
- (BOOL)isCylindrical;
- (id)normalDirectionMapper;
- (void)p_insertCrossPointsIntoVector:(struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> {} *x1; struct tvec2<float> {} *x2; struct __compressed_pair<glm::detail::tvec2<float> *, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> {} *x_3_1_1; } x3; }*)arg1;
- (void)p_updateNormalizedSpineScaleMappingsUsingTransform:(const struct tmat4x4<float> { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1[4]; }*)arg1 forSpineGenerator:(id)arg2;
- (float)scaleMappingStartingHeight;
- (id)selectionKnobPositions;
- (void)setExtrusionSetting:(struct BarExtrusionSetting { float x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; struct BarExtrusionDetails { struct BarExtrusionCrossSectionDetails { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; int x_1_2_5; } x_6_1_1; struct BarExtrusionSpineDetails { float x_2_2_1; int x_2_2_2; int x_2_2_3; float x_2_2_4; } x_6_1_2; } x6; })arg1;
- (float)size;

@end