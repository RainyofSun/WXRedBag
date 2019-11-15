//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GameJumpInfo, NSString;

@interface GameCenterMsgUserInfo : NSObject
{
    NSString *_username;
    NSString *_iconUrl;
    NSString *_nickname;
    NSString *_badgeIconUrl;
    NSString *_profileUrl;
    GameJumpInfo *_userJumpInfo;
}

@property(retain, nonatomic) GameJumpInfo *userJumpInfo; // @synthesize userJumpInfo=_userJumpInfo;
@property(retain, nonatomic) NSString *profileUrl; // @synthesize profileUrl=_profileUrl;
@property(retain, nonatomic) NSString *badgeIconUrl; // @synthesize badgeIconUrl=_badgeIconUrl;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (id)getProfileUrl;
- (id)getXmlSectionString;

@end

