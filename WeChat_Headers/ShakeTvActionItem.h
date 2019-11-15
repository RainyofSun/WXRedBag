//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "PBCoding-Protocol.h"

@class NSMutableArray, NSString, ShakePayItem, ShakeProductItem, ShakeUrlItem, ShakeUserItem;

@interface ShakeTvActionItem : NSObject <PBCoding, NSCoding, NSCopying>
{
    int actionType;
    NSString *commentId;
    NSString *title;
    NSString *url;
    NSString *summary;
    NSMutableArray *thumbUrls;
    ShakeUserItem *userItem;
    ShakePayItem *payItem;
    ShakeProductItem *productItem;
    ShakeUrlItem *urlItem;
}

+ (void)initialize;
@property(retain, nonatomic) ShakeUrlItem *urlItem; // @synthesize urlItem;
@property(retain, nonatomic) ShakeProductItem *productItem; // @synthesize productItem;
@property(retain, nonatomic) ShakePayItem *payItem; // @synthesize payItem;
@property(retain, nonatomic) ShakeUserItem *userItem; // @synthesize userItem;
@property(retain, nonatomic) NSMutableArray *thumbUrls; // @synthesize thumbUrls;
@property(retain, nonatomic) NSString *url; // @synthesize url;
@property(retain, nonatomic) NSString *summary; // @synthesize summary;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(retain, nonatomic) NSString *commentId; // @synthesize commentId;
@property(nonatomic) int actionType; // @synthesize actionType;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

