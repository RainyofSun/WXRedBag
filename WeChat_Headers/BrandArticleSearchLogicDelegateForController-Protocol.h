//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CContact, NSDictionary, NSString;

@protocol BrandArticleSearchLogicDelegateForController <NSObject>
- (void)onOpenMoreDetailWithParams:(NSDictionary *)arg1;
- (void)onSetSearchText:(NSString *)arg1;
- (void)onOpenMsgSession:(CContact *)arg1;
- (void)onOpenBrandProfile:(CContact *)arg1 withParams:(NSDictionary *)arg2;
- (void)onOpenUrl:(NSString *)arg1 withParams:(NSDictionary *)arg2;
@end

