//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@interface MMMapUtil : MMObject
{
}

+ (double)normalizeZoomLevel:(double)arg1;
+ (struct CLLocationCoordinate2D)convertWGS84toGCJ02:(struct CLLocationCoordinate2D)arg1;
+ (struct CLLocationCoordinate2D)convertGCJ02toWGS84:(struct CLLocationCoordinate2D)arg1;
+ (_Bool)QCoordinateRegion:(CDStruct_b7cb895d)arg1 ContainsPoint:(CDStruct_c3b9c2ee)arg2;
+ (double)convertSpeedToKMH:(double)arg1;
+ (CDStruct_02837cd9)QMapRect:(CDStruct_02837cd9 *)arg1 MakeCenterUnionPoint:(CDStruct_c3b9c2ee)arg2;
+ (CDStruct_02837cd9)QMapRect:(CDStruct_02837cd9 *)arg1 KeepCenterUnionPoint:(CDStruct_c3b9c2ee)arg2;
+ (CDStruct_02837cd9)QMapRectForCoordinateRegion:(CDStruct_b7cb895d)arg1;

@end

