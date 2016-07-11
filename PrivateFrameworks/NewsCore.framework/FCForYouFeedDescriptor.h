/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCForYouFeedDescriptor : FCMultiTagFeedDescriptor <FCFeedPaginating> {
    long long  _trendingAndSavedStoriesCount;
    NSArray * _unreadSavedStories;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) long long trendingAndSavedStoriesCount;
@property (nonatomic, copy) NSArray *unreadSavedStories;

- (void).cxx_destruct;
- (id)editionAtDate:(id)arg1;
- (id)editionFollowingEdition:(id)arg1;
- (long long)feedFilterOptions;
- (id)feedGroupEmitters;
- (id)feedPaginator;
- (long long)feedSortMethod;
- (id)iAdFeedID;
- (id)initWithIdentifier:(id)arg1 trendingAndSavedStoriesCount:(long long)arg2;
- (id)name;
- (void)setTrendingAndSavedStoriesCount:(long long)arg1;
- (void)setUnreadSavedStories:(id)arg1;
- (long long)trendingAndSavedStoriesCount;
- (id)unreadSavedStories;

@end