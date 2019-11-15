//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface EnterpriseBrandAttr : MMObject <WCTTableCoding>
{
    _Bool _chatOpen;
    _Bool _showConfirm;
    _Bool _bannerUsePreset;
    unsigned int _qyUin;
    unsigned int _userUin;
    unsigned int _userFlag;
    unsigned int _wwExposeTimes;
    unsigned int _wwMaxExposeTimes;
    unsigned int _wwUserType;
    unsigned int _unreadCnt;
    NSString *_userName;
    unsigned long long _wwCorpId;
    unsigned long long _wwUserVid;
}

+ (const struct WCTProperty *)wwUserVid;
+ (const struct WCTProperty *)wwCorpId;
+ (const struct WCTProperty *)wwMaxExposeTimes;
+ (const struct WCTProperty *)wwExposeTimes;
+ (const struct WCTProperty *)userFlag;
+ (const struct WCTProperty *)userUin;
+ (const struct WCTProperty *)qyUin;
+ (const struct WCTProperty *)userName;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(nonatomic) _Bool bannerUsePreset; // @synthesize bannerUsePreset=_bannerUsePreset;
@property(nonatomic) _Bool showConfirm; // @synthesize showConfirm=_showConfirm;
@property(nonatomic) unsigned int unreadCnt; // @synthesize unreadCnt=_unreadCnt;
@property(nonatomic) _Bool chatOpen; // @synthesize chatOpen=_chatOpen;
@property(nonatomic) unsigned int wwUserType; // @synthesize wwUserType=_wwUserType;
@property(nonatomic) unsigned long long wwUserVid; // @synthesize wwUserVid=_wwUserVid;
@property(nonatomic) unsigned long long wwCorpId; // @synthesize wwCorpId=_wwCorpId;
@property(nonatomic) unsigned int wwMaxExposeTimes; // @synthesize wwMaxExposeTimes=_wwMaxExposeTimes;
@property(nonatomic) unsigned int wwExposeTimes; // @synthesize wwExposeTimes=_wwExposeTimes;
@property(nonatomic) unsigned int userFlag; // @synthesize userFlag=_userFlag;
@property(nonatomic) unsigned int userUin; // @synthesize userUin=_userUin;
@property(nonatomic) unsigned int qyUin; // @synthesize qyUin=_qyUin;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

