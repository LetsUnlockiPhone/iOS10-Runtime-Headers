/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSBlockPredicate : NSPredicate {
    id /* block */  _block;
}

- (id /* block */)_predicateBlock;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (bool)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (id)initWithBlock:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)predicateFormat;
- (id)predicateWithSubstitutionVariables:(id)arg1;
- (bool)supportsSecureCoding;

@end
