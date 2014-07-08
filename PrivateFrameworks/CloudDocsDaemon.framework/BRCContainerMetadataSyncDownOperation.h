/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class NSMutableDictionary, BRCContainerMetadataSyncPersistedState, BRCContainerScheduler, NSMutableArray;

@interface BRCContainerMetadataSyncDownOperation : BRCOperation <BRCOperationSubclass> {
    BRCContainerScheduler *_scheduler;
    BRCContainerMetadataSyncPersistedState *_state;
    NSMutableArray *_recordIDsForDesiredAssets;
    NSMutableArray *_desiredKeysForDesiredAssets;
    NSMutableDictionary *_recordIDsToVersionETagsForDesiredAssets;
}


- (void)performAfterCreatingZoneIfNeeded:(id)arg1;
- (void)performAfterSubscribingToZoneIfNeeded:(id)arg1;
- (void)performAfterFetchingRecordChanges:(id)arg1;
- (void)performAfterFetchingAssetContents:(id)arg1;
- (id)initWithContainerScheduler:(id)arg1 state:(id)arg2;
- (bool)shouldRetryForError:(id)arg1;
- (void)main;
- (void).cxx_destruct;

@end