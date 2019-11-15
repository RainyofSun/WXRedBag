//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface EmotionSendCountWrap : MMObject <PBCoding>
{
    _Bool hasRewarded;
    unsigned int totalSendTimes;
    unsigned int lastShowTipsTime;
    int retryTimes;
}

+ (void)initialize;
@property(nonatomic) _Bool hasRewarded; // @synthesize hasRewarded;
@property(nonatomic) int retryTimes; // @synthesize retryTimes;
@property(nonatomic) unsigned int lastShowTipsTime; // @synthesize lastShowTipsTime;
@property(nonatomic) unsigned int totalSendTimes; // @synthesize totalSendTimes;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool needShowTips;
- (id)init;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

