//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString, WePkgNonAtomicSingleFileConfigExt;

@interface WePkgNonAtomicSingleFileConfigTable : MMObject <WCTTableCoding>
{
    unsigned int _pkgType;
    NSString *_pkgId;
    NSString *_appId;
    NSString *_entranceDomain;
    NSString *_currentEnabledVersion;
    NSString *_charSet;
    WePkgNonAtomicSingleFileConfigExt *_ext;
}

+ (const struct WCTProperty *)ext;
+ (const struct WCTProperty *)charSet;
+ (const struct WCTProperty *)currentEnabledVersion;
+ (const struct WCTProperty *)entranceDomain;
+ (const struct WCTProperty *)pkgType;
+ (const struct WCTProperty *)appId;
+ (const struct WCTProperty *)pkgId;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(retain, nonatomic) WePkgNonAtomicSingleFileConfigExt *ext; // @synthesize ext=_ext;
@property(retain, nonatomic) NSString *charSet; // @synthesize charSet=_charSet;
@property(retain, nonatomic) NSString *currentEnabledVersion; // @synthesize currentEnabledVersion=_currentEnabledVersion;
@property(retain, nonatomic) NSString *entranceDomain; // @synthesize entranceDomain=_entranceDomain;
@property(nonatomic) unsigned int pkgType; // @synthesize pkgType=_pkgType;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *pkgId; // @synthesize pkgId=_pkgId;
- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

