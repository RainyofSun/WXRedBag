//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GameJumpInfo, NSString;

@interface GameCenterMsgSender : NSObject
{
    NSString *_msgSenderHeadIconUrl;
    NSString *_msgSenderName;
    NSString *_msgSenderBadgeIconUrl;
    GameJumpInfo *_msgSenderJumpInfo;
}

@property(retain, nonatomic) GameJumpInfo *msgSenderJumpInfo; // @synthesize msgSenderJumpInfo=_msgSenderJumpInfo;
@property(retain, nonatomic) NSString *msgSenderBadgeIconUrl; // @synthesize msgSenderBadgeIconUrl=_msgSenderBadgeIconUrl;
@property(retain, nonatomic) NSString *msgSenderName; // @synthesize msgSenderName=_msgSenderName;
@property(retain, nonatomic) NSString *msgSenderHeadIconUrl; // @synthesize msgSenderHeadIconUrl=_msgSenderHeadIconUrl;
- (void).cxx_destruct;

@end

