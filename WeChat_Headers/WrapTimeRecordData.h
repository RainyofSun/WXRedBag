//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@interface WrapTimeRecordData : MMObject
{
    unsigned long long m_caseID;
    struct timeval m_msCurTime;
}

+ (id)recordDataWithTime:(struct timeval)arg1 onCase:(unsigned long long)arg2;
@property(nonatomic) struct timeval m_msCurTime; // @synthesize m_msCurTime;
@property(nonatomic) unsigned long long m_caseID; // @synthesize m_caseID;
- (id)initWithTime:(struct timeval)arg1 onCase:(unsigned long long)arg2;

@end

