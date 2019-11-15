//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "InviteFriendLogicDelegate-Protocol.h"
#import "MMTableViewInfoDelegate-Protocol.h"

@class InviteFriendLogic, MMTableViewInfo, NSString;

@interface InviteFriendViewController : MMUIViewController <MMTableViewInfoDelegate, InviteFriendLogicDelegate>
{
    MMTableViewInfo *_tableViewInfo;
    InviteFriendLogic *_inviteLogic;
}

@property(retain, nonatomic) InviteFriendLogic *inviteLogic; // @synthesize inviteLogic=_inviteLogic;
@property(retain, nonatomic) MMTableViewInfo *tableViewInfo; // @synthesize tableViewInfo=_tableViewInfo;
- (void).cxx_destruct;
- (void)makeInviteSourceCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeHeaderView:(id)arg1;
- (void)initTableCells;
- (void)initTableView;
- (void)initView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setupInviteLogic:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

