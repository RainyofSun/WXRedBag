//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BackupInfoItem, BakChatMsgList, NSArray, NSMutableArray, NSString;

@interface WXGBackupDataInfo : NSObject
{
    _Bool _needMedia;
    _Bool _fromOldToNew;
    int _dataInfoSize;
    int _limitMsgCount;
    long long _startTime;
    long long _endTime;
    NSString *_sessionName;
    NSString *_msgListID;
    BakChatMsgList *_bakChatMsgList;
    NSArray *_bigDataArray;
    NSArray *_mediaDataArray;
    NSArray *_mediaIDArray;
    NSString *_nickName;
    BackupInfoItem *_backupInfoItem;
    NSMutableArray *_limitMsgTypeArray;
}

@property(nonatomic) _Bool fromOldToNew; // @synthesize fromOldToNew=_fromOldToNew;
@property(nonatomic) _Bool needMedia; // @synthesize needMedia=_needMedia;
@property(retain, nonatomic) NSMutableArray *limitMsgTypeArray; // @synthesize limitMsgTypeArray=_limitMsgTypeArray;
@property(nonatomic) int limitMsgCount; // @synthesize limitMsgCount=_limitMsgCount;
@property(nonatomic) int dataInfoSize; // @synthesize dataInfoSize=_dataInfoSize;
@property(retain, nonatomic) BackupInfoItem *backupInfoItem; // @synthesize backupInfoItem=_backupInfoItem;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSArray *mediaIDArray; // @synthesize mediaIDArray=_mediaIDArray;
@property(retain, nonatomic) NSArray *mediaDataArray; // @synthesize mediaDataArray=_mediaDataArray;
@property(retain, nonatomic) NSArray *bigDataArray; // @synthesize bigDataArray=_bigDataArray;
@property(retain, nonatomic) BakChatMsgList *bakChatMsgList; // @synthesize bakChatMsgList=_bakChatMsgList;
@property(retain, nonatomic) NSString *msgListID; // @synthesize msgListID=_msgListID;
@property(retain, nonatomic) NSString *sessionName; // @synthesize sessionName=_sessionName;
@property(nonatomic) long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;
- (id)init;

@end

