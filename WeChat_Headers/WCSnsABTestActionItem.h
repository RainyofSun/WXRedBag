//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WCSnsABTestTitle;

@interface WCSnsABTestActionItem : NSObject
{
    NSString *showTitleFormat;
    _Bool hasUserNameKey;
    _Bool hasSexKey;
    NSString *maleKey;
    NSString *femailKey;
    NSString *richTextKey;
    WCSnsABTestTitle *abtestTitle;
    int actionType;
    NSString *actionIndex;
    NSString *jumpUrl;
    NSString *nextTipIndex;
}

@property(retain, nonatomic) WCSnsABTestTitle *abtestTitle; // @synthesize abtestTitle;
@property(retain, nonatomic) NSString *nextTipIndex; // @synthesize nextTipIndex;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl;
@property(retain, nonatomic) NSString *actionIndex; // @synthesize actionIndex;
@property(nonatomic) int actionType; // @synthesize actionType;
- (void).cxx_destruct;
- (long long)compareActionItemAscending:(id)arg1;
- (id)description;
- (id)init;

@end

