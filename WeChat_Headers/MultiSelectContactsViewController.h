//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ContactSelectViewDelegate-Protocol.h"
#import "GroupSelectContactsViewControllerDelegate-Protocol.h"
#import "MMSearchBarDelegate-Protocol.h"
#import "NewContactsSearchPanelViewDelegate-Protocol.h"
#import "SelectTagContactsViewControllerDelegate-Protocol.h"
#import "TipsViewDelegate-Protocol.h"
#import "UISearchDisplayDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class ContactSelectView, NSDictionary, NSIndexPath, NSMutableDictionary, NSString, NewContactsSearchPanelView, TipsView, UIBarButtonItem, UIButton, UIView;
@protocol MultiSelectContactsViewControllerDelegate;

@interface MultiSelectContactsViewController : MMUIViewController <SelectTagContactsViewControllerDelegate, ContactSelectViewDelegate, UISearchDisplayDelegate, MMSearchBarDelegate, WCActionSheetDelegate, NewContactsSearchPanelViewDelegate, GroupSelectContactsViewControllerDelegate, TipsViewDelegate>
{
    id <MultiSelectContactsViewControllerDelegate> m_delegate;
    NSDictionary *m_dicExistContact;
    NSDictionary *m_dicIgnoreContact;
    _Bool m_bShowHistoryGroup;
    _Bool m_bShowRadarCreateRoom;
    NSMutableDictionary *m_dicMultiSelect;
    NSIndexPath *m_indexPathToBeDeleted;
    NewContactsSearchPanelView *m_panelView;
    UIButton *m_panelBtn;
    UIBarButtonItem *m_panelBtnItem;
    unsigned int m_uiGroupScene;
    unsigned long long m_memberCountLimit;
    NSString *m_showTip;
    TipsView *m_tipView;
    _Bool m_tempForbidLayout;
    ContactSelectView *m_selectView;
    int m_commonSearchScene;
    UIView *_tableFooterView;
    NSString *nsCurrentSearchText;
    _Bool _m_bKeepCurViewAfterSelect;
    _Bool _m_onlyChatRoom;
    _Bool _m_bSearchSnsContact;
    int _m_scene;
    NSString *_m_selectedUsername;
}

@property(retain, nonatomic) NSString *m_selectedUsername; // @synthesize m_selectedUsername=_m_selectedUsername;
@property(nonatomic) _Bool m_bSearchSnsContact; // @synthesize m_bSearchSnsContact=_m_bSearchSnsContact;
@property(nonatomic) int m_scene; // @synthesize m_scene=_m_scene;
@property(nonatomic) _Bool m_onlyChatRoom; // @synthesize m_onlyChatRoom=_m_onlyChatRoom;
@property(nonatomic) _Bool m_bKeepCurViewAfterSelect; // @synthesize m_bKeepCurViewAfterSelect=_m_bKeepCurViewAfterSelect;
@property(nonatomic) int m_commonSearchScene; // @synthesize m_commonSearchScene;
@property(retain, nonatomic) NSMutableDictionary *m_dicMultiSelect; // @synthesize m_dicMultiSelect;
@property(retain, nonatomic) NSString *m_showTip; // @synthesize m_showTip;
@property(nonatomic) unsigned long long m_memberCountLimit; // @synthesize m_memberCountLimit;
@property(retain, nonatomic) UIBarButtonItem *m_panelBtnItem; // @synthesize m_panelBtnItem;
@property(retain, nonatomic) UIButton *m_panelBtn; // @synthesize m_panelBtn;
@property(nonatomic) unsigned int m_uiGroupScene; // @synthesize m_uiGroupScene;
@property(nonatomic) _Bool m_bShowRadarCreateRoom; // @synthesize m_bShowRadarCreateRoom;
@property(nonatomic) _Bool m_bShowHistoryGroup; // @synthesize m_bShowHistoryGroup;
@property(retain, nonatomic) NSDictionary *m_dicIgnoreContact; // @synthesize m_dicIgnoreContact;
@property(retain, nonatomic) NSDictionary *m_dicExistContact; // @synthesize m_dicExistContact;
@property(nonatomic) __weak id <MultiSelectContactsViewControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)onSelectDoneWithContacts:(id)arg1;
- (void)cancelSearch;
- (void)doSearch:(id)arg1 Pre:(_Bool)arg2;
- (void)searchTextFieldDidBeginEditing;
- (void)didDeleteLastWithKey:(id)arg1;
- (void)didClickImageAtIndex:(unsigned int)arg1 withKey:(id)arg2;
- (void)onSelectSearchSnsContact:(id)arg1;
- (void)onSelectContact:(id)arg1;
- (_Bool)onShouldSelectContact:(id)arg1;
- (void)doTagSearch:(id)arg1 arrContacts:(id)arg2;
- (void)didSearchViewTableSelect:(id)arg1;
- (double)heightForSearchViewTable:(id)arg1;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (id)makeFiterContactToTagSearchView:(id)arg1;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (void)onSelectRadarCreateRoom;
- (void)onSelectHistoryGroup;
- (void)onContactSelectSearchSections:(id)arg1 sectionTitles:(id)arg2 sectionResults:(id)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tryShowSelectTip:(unsigned long long)arg1 currentSelectCount:(unsigned long long)arg2;
- (void)onTipsViewClick:(id)arg1;
- (unsigned long long)getTotalSelectCount;
- (void)dealloc;
- (void)viewDidUnload;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)updateSelectedHeadImgView;
- (void)viewDidLoad;
- (void)initView;
- (void)initTitleArea;
- (void)onDone:(id)arg1;
- (void)onCancel:(id)arg1;
- (void)updatePanelView:(id)arg1;
- (void)updatePanelBtn;
- (_Bool)isExisted:(id)arg1;
- (_Bool)isIgnore:(id)arg1;
- (void)onGroupMultiSelectContactReturn:(id)arg1;
- (void)onGroupSelectContactReturn:(id)arg1;
- (void)UpdateForChatGroup:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

