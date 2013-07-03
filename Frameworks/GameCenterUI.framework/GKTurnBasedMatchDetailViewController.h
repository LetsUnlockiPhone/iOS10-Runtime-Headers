/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class NSObject<GKTurnBasedMatchDetailViewControllerDelegate>, GKTurnBasedMatch, NSString, UIBarButtonItem, GKTurnBasedParticipantsDataSource, GKTurnBasedMatchDetailHeaderView;

@interface GKTurnBasedMatchDetailViewController : GKBasicCollectionViewController <SKStoreProductViewControllerDelegate> {
    BOOL _isInGame;
    BOOL _didFloatInBubbles;
    BOOL _didTransition;
    NSObject<GKTurnBasedMatchDetailViewControllerDelegate> *_delegateWeak;
    GKTurnBasedMatch *_match;
    GKTurnBasedParticipantsDataSource *_participantsDataSource;
    UIBarButtonItem *_rightBarButtonItem;
    GKTurnBasedMatchDetailHeaderView *_headerView;
}

@property(retain) GKTurnBasedMatch * match;
@property BOOL isInGame;
@property NSObject<GKTurnBasedMatchDetailViewControllerDelegate> * delegate;
@property(retain) GKTurnBasedParticipantsDataSource * participantsDataSource;
@property(readonly) NSString * playingWithString;
@property(retain) UIBarButtonItem * rightBarButtonItem;
@property(retain) GKTurnBasedMatchDetailHeaderView * headerView;
@property BOOL didFloatInBubbles;
@property BOOL didTransition;


- (void)productViewControllerDidFinish:(id)arg1;
- (void)setDidTransition:(BOOL)arg1;
- (BOOL)didTransition;
- (void)setDidFloatInBubbles:(BOOL)arg1;
- (BOOL)didFloatInBubbles;
- (void)setParticipantsDataSource:(id)arg1;
- (id)participantsDataSource;
- (void)setIsInGame:(BOOL)arg1;
- (BOOL)isInGame;
- (id)playingWithString;
- (void)animateOutBubbleWithFocus:(int)arg1 completion:(id)arg2;
- (void)quitMatch:(id)arg1;
- (void)declineInvitation:(id)arg1;
- (void)acceptInvitation:(id)arg1;
- (void)removeMatch:(id)arg1;
- (void)chooseMatch:(id)arg1;
- (void)buyButtonPressed:(id)arg1;
- (void)handleTurnBasedEvent:(id)arg1;
- (void)configureViewFactories;
- (void)configureDataSource;
- (void)didUpdateModel;
- (void)setMatch:(id)arg1;
- (id)match;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)setHeaderView:(id)arg1;
- (id)headerView;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)rightBarButtonItem;
- (void)setRightBarButtonItem:(id)arg1;

@end