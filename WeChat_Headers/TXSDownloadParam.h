//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TXSDownloadParam : NSObject
{
    _Bool _enableNearestIP;
    int _rtmpChannelType;
    long long _mode;
    long long _format;
    long long _reconnectLimit;
    double _reconnectInterval;
}

@property(nonatomic) int rtmpChannelType; // @synthesize rtmpChannelType=_rtmpChannelType;
@property(nonatomic) _Bool enableNearestIP; // @synthesize enableNearestIP=_enableNearestIP;
@property(nonatomic) double reconnectInterval; // @synthesize reconnectInterval=_reconnectInterval;
@property(nonatomic) long long reconnectLimit; // @synthesize reconnectLimit=_reconnectLimit;
@property(nonatomic) long long format; // @synthesize format=_format;
@property(nonatomic) long long mode; // @synthesize mode=_mode;

@end

