//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray;

@interface WXGGetCallStackReportHandler : NSObject
{
    NSMutableArray *m_binaryImages;
    NSDictionary *m_systemInfo;
}

+ (id)p_cleanEmptyString:(id)arg1;
+ (id)p_getNewCrashTextString:(id)arg1;
+ (id)p_getNewCrashReportWithFileHeader:(id)arg1 withBinaryImages:(id)arg2 withSymbolicatedStactArray:(id)arg3;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)getCallStackSymbols;
- (id)p_getSymbolicatedStack:(id)arg1;
- (id)p_getSymbolicatedArray:(id)arg1;
- (id)p_getTextStackArray:(id)arg1;
- (id)interpretText:(id)arg1;
- (id)p_getReportStackArray:(id)arg1;
- (id)p_getReportBinaryImages:(id)arg1;
- (id)p_getReportFileHeader:(id)arg1;
- (id)interpretReportWithFilePath:(id)arg1;
- (unsigned long long)getImageStartAddr:(id)arg1;
- (id)getWeChatBinaryInfo;
- (id)getWeChatImageUUID;
- (id)getReportJsonDataWithCallStackArray:(struct KSStackCursor **)arg1 callStackCount:(unsigned long long)arg2 withReportID:(id)arg3 withDumpType:(unsigned long long)arg4 withScene:(id)arg5;
- (id)getReportJsonDataWithCallStackArray:(struct KSStackCursor **)arg1 callStackCount:(unsigned long long)arg2 withReportID:(id)arg3 withDumpType:(unsigned long long)arg4;
- (void)setupBinaryImages;
- (id)init;

@end

