/* Generated by RuntimeBrowser.
 */

@protocol MSVOperationObserver <NSObject>

@required

- (void)operation:(MSVOperation *)arg1 didFinishWithErrors:(NSArray *)arg2;
- (void)operation:(MSVOperation *)arg1 didProduceOperation:(NSOperation *)arg2;
- (void)operationDidStart:(MSVOperation *)arg1;

@end