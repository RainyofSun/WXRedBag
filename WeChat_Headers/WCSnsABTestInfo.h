//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABTestItem, NSMutableDictionary, NSString, WCSnsABTestTipData;

@interface WCSnsABTestInfo : NSObject
{
    ABTestItem *abtestItem;
    NSString *language;
    unsigned long long experType;
    NSMutableDictionary *dicTipData;
    WCSnsABTestTipData *firstTipData;
}

@property(retain, nonatomic) WCSnsABTestTipData *firstTipData; // @synthesize firstTipData;
@property(retain, nonatomic) NSMutableDictionary *dicTipData; // @synthesize dicTipData;
@property(nonatomic) unsigned long long experType; // @synthesize experType;
@property(retain, nonatomic) NSString *language; // @synthesize language;
@property(retain, nonatomic) ABTestItem *abtestItem; // @synthesize abtestItem;
- (void).cxx_destruct;
- (id)init;

@end

