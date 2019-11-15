//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSData, NSString;

@interface CDownloadVoiceWrap : NSObject <WCTTableCoding>
{
    NSString *m_nsChatUsrName;
    long long m_n64SvrID;
    unsigned int m_uiLocalID;
    unsigned int m_uiOffset;
    unsigned int m_uiLen;
    unsigned int m_uiCreateTime;
    unsigned int m_uiVoiceLen;
    unsigned int m_uiVoiceTime;
    unsigned int m_uiEndFlag;
    NSData *m_dtVoice;
    unsigned int m_uiRetryCount;
    unsigned int m_uiCancelFlag;
    unsigned int ConIntRes1;
    unsigned int ConIntRes2;
    unsigned int ConIntRes3;
    NSString *ConStrRes1;
    NSString *ConStrRes2;
    NSString *ConStrRes3;
}

+ (const struct WCTProperty *)ConStrRes3;
+ (const struct WCTProperty *)ConStrRes2;
+ (const struct WCTProperty *)ConStrRes1;
+ (const struct WCTProperty *)ConIntRes3;
+ (const struct WCTProperty *)ConIntRes2;
+ (const struct WCTProperty *)ConIntRes1;
+ (const struct WCTProperty *)m_uiRetryCount;
+ (const struct WCTProperty *)m_uiEndFlag;
+ (const struct WCTProperty *)m_uiVoiceTime;
+ (const struct WCTProperty *)m_uiVoiceLen;
+ (const struct WCTProperty *)m_uiCreateTime;
+ (const struct WCTProperty *)m_n64SvrID;
+ (const struct WCTProperty *)m_uiLocalID;
+ (const struct WCTProperty *)m_nsChatUsrName;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(retain, nonatomic) NSString *ConStrRes3; // @synthesize ConStrRes3;
@property(retain, nonatomic) NSString *ConStrRes2; // @synthesize ConStrRes2;
@property(retain, nonatomic) NSString *ConStrRes1; // @synthesize ConStrRes1;
@property(nonatomic) unsigned int ConIntRes3; // @synthesize ConIntRes3;
@property(nonatomic) unsigned int ConIntRes2; // @synthesize ConIntRes2;
@property(nonatomic) unsigned int ConIntRes1; // @synthesize ConIntRes1;
@property(nonatomic) unsigned int m_uiRetryCount; // @synthesize m_uiRetryCount;
@property(nonatomic) unsigned int m_uiEndFlag; // @synthesize m_uiEndFlag;
@property(nonatomic) unsigned int m_uiVoiceTime; // @synthesize m_uiVoiceTime;
@property(nonatomic) unsigned int m_uiVoiceLen; // @synthesize m_uiVoiceLen;
@property(nonatomic) unsigned int m_uiCreateTime; // @synthesize m_uiCreateTime;
@property(nonatomic) long long m_n64SvrID; // @synthesize m_n64SvrID;
@property(nonatomic) unsigned int m_uiLocalID; // @synthesize m_uiLocalID;
@property(retain, nonatomic) NSString *m_nsChatUsrName; // @synthesize m_nsChatUsrName;
@property(nonatomic) unsigned int m_uiCancelFlag; // @synthesize m_uiCancelFlag;
@property(retain, nonatomic) NSData *m_dtVoice; // @synthesize m_dtVoice;
@property(nonatomic) unsigned int m_uiLen; // @synthesize m_uiLen;
@property(nonatomic) unsigned int m_uiOffset; // @synthesize m_uiOffset;
- (void).cxx_destruct;
- (id)description;
- (id)init;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

