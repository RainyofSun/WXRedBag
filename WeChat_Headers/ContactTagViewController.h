//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TagViewController.h"

#import "ContactTagEditLogicDelegate-Protocol.h"
#import "IContactLabelMgrExt-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class CContact, ContactTagEditLogic, NSString;

@interface ContactTagViewController : TagViewController <IContactLabelMgrExt, UIAlertViewDelegate, ContactTagEditLogicDelegate>
{
    CContact *m_contact;
    ContactTagEditLogic *m_TagEditLogic;
    _Bool _bIsNeedReloadView;
    _Bool isAlreadyDisMissSelf;
}

+ (id)genContactTagProfileButton:(id)arg1 Height:(double)arg2;
+ (id)genContactTagButton:(id)arg1 Height:(double)arg2;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
- (void).cxx_destruct;
- (void)onAllContactLabelUpdated:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)reloadCurrentTags;
- (void)reloadAllTags;
- (void)buildContactTagsData:(id)arg1;
- (void)buildAllTagsData:(id)arg1;
- (void)onJobForTagEditRet:(int)arg1;
- (void)InternalDisMissSelfAnimated:(_Bool)arg1;
- (void)editDone:(id)arg1;
- (void)editCancel;
- (id)getContactTagNameList;
- (id)getAllTagNameList;
- (void)initView;
- (void)initData;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)OnMyCancel;
- (void)onTouchView:(id)arg1;
- (void)dealloc;
- (id)initWithContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

