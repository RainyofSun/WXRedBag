//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "IAddressBookMgrExt-Protocol.h"
#import "IContactMgrExt-Protocol.h"
#import "MMService-Protocol.h"

@class NSMutableDictionary, NSString;

@interface AutoSetRemarkMgr : MMService <MMService, IContactMgrExt, IAddressBookMgrExt>
{
    NSMutableDictionary *m_dicMobileRemarkList;
    NSMutableDictionary *m_dicStrangerRemarkList;
    NSMutableDictionary *m_dicGoogleRemarkList;
    NSMutableDictionary *m_dicStrangerAttributeList;
    NSMutableDictionary *m_dicWaitToSetRemark;
}

+ (id)GetPathOfStrangerAttributeList;
+ (id)GetPathOfGoogleRemarkList;
+ (id)GetPathOfStrangerRemarkList;
+ (id)GetPathOfVerifyList;
- (void).cxx_destruct;
- (void)onModifyContactProcessPhone:(id)arg1;
- (void)onModifyContactProcessTagName:(id)arg1;
- (void)onModifyContactProcessDesc:(id)arg1;
- (void)onModifyContactProcessRemark:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)OnAddressBookLoadedComplete;
- (void)autoSetRemark:(id)arg1;
- (void)clearRemark:(id)arg1;
- (id)getAndClearMobileIdentify:(id)arg1;
- (id)getAndClearGoogleRemark:(id)arg1;
- (id)getAndClearStrangerRemark:(id)arg1;
- (void)SetRemark:(id)arg1;
- (id)GetStrangerRemark:(id)arg1;
- (void)SetDesc:(id)arg1;
- (void)AutoSetStrangerAttribute:(id)arg1 AttributeName:(int)arg2;
- (void)ClearStrangerAttribute:(id)arg1 AttributeName:(int)arg2;
- (id)GetStrangerAttribute:(id)arg1 AttributeName:(int)arg2;
- (void)SetStrangerAttributeByName:(id)arg1 AttributeName:(int)arg2 Value:(id)arg3;
- (void)SetStrangerAttribute:(id)arg1 AttributeName:(int)arg2 Value:(id)arg3;
- (void)SetStrangerRemark:(id)arg1 Remark:(id)arg2;
- (void)InternalSetStrangerAttribute:(id)arg1 ObjValue:(id)arg2;
- (void)InternalSetStrangerAttribute:(id)arg1 StringValue:(id)arg2;
- (void)InternalSetStrangerRemark:(id)arg1 Remark:(id)arg2;
- (void)AddVerifyUsr:(id)arg1 MobileIdentify:(id)arg2;
- (void)SetGoogleRemark:(id)arg1 Remark:(id)arg2;
- (void)SaveGoogleData;
- (void)SaveStrangerData;
- (void)SaveMobileData;
- (void)LoadData;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

