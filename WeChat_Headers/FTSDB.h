//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, WCTDatabase, WCTTable;
@protocol FTSDBDelegate;

@interface FTSDB : NSObject
{
    NSString *_tokenizerName;
    WCTDatabase *m_db;
    WCTTable *m_tableFav;
    NSDictionary *m_dicTableMessage;
    WCTTable *m_tableMsgUserNameID;
    id <FTSDBDelegate> _delegate;
}

@property(nonatomic) __weak id <FTSDBDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCTTable *m_tableMsgUserNameID; // @synthesize m_tableMsgUserNameID;
@property(retain, nonatomic) NSDictionary *m_dicTableMessage; // @synthesize m_dicTableMessage;
@property(retain, nonatomic) WCTTable *m_tableFav; // @synthesize m_tableFav;
@property(retain, nonatomic) WCTDatabase *m_db; // @synthesize m_db;
@property(readonly, nonatomic) NSString *tokenizerName; // @synthesize tokenizerName=_tokenizerName;
- (void).cxx_destruct;
- (_Bool)isFTSDB:(unsigned int)arg1;
- (void)recoverDB;
- (void)closeDBBeforeInit;
- (void)closeDB;
- (_Bool)reloadDB;
- (_Bool)initDB;
- (void)dealloc;
- (id)init;
- (id)msgTableWithIndex:(unsigned int)arg1;
- (unsigned int)validMsgTableIndex:(unsigned int)arg1;
- (id)msgTableNameWithIndex:(unsigned int)arg1;
- (_Bool)createAllMsgTable;
- (id)queryMsgItemOmitMsg:(id)arg1 tableIndex:(unsigned int)arg2 limitUsrIds:(id)arg3 limit:(unsigned int)arg4 maxTime:(unsigned int)arg5;
- (id)queryMsgItemOmitMsg:(id)arg1 tableIndex:(unsigned int)arg2 limitUsrIds:(id)arg3;
- (_Bool)deleteInvalidRowsInChatTable:(id)arg1 limit:(int)arg2;
- (_Bool)deleteRowInChatTable:(id)arg1 arrMsgWrap:(id)arg2;
- (_Bool)deleteRowInChatTable:(id)arg1 msgWrap:(id)arg2;
- (_Bool)insertRowsInChatTable:(id)arg1 arrMsgWrap:(id)arg2;
- (unsigned int)MsgTableCount;
- (unsigned int)tableIdFromUserName:(id)arg1;
- (_Bool)createUserNameIdTable;
- (_Bool)deleteRowInUserNameIDTable:(unsigned int)arg1;
- (_Bool)updateUserPreCursorMesId:(unsigned int)arg1 cursorMesId:(unsigned int)arg2;
- (_Bool)updateUserNextCursorMesId:(unsigned int)arg1 cursorMesId:(unsigned int)arg2;
- (_Bool)updateUserNameInvalid:(unsigned int)arg1;
- (_Bool)insertNewRowInUserNameIDTable:(id)arg1 lastMsg:(id)arg2;
- (id)getUserNameIdWithLimit:(unsigned int)arg1 where:(const struct WCTExpr *)arg2;
- (id)getValidIndexItemByUserNameId:(unsigned int)arg1;
- (id)getValidIndexItemByUserName:(id)arg1;
- (_Bool)CreateMessageTable;
- (id)queryTextInFavTable:(id)arg1 limit:(int)arg2 searchAll:(id *)arg3;
- (id)queryTextInFavTable:(id)arg1;
- (_Bool)deleteAllRowsInFavTable;
- (_Bool)deleteRowsInFavTable:(id)arg1;
- (_Bool)deleteRowInFavTable:(unsigned int)arg1;
- (_Bool)updateRowsInFavTable:(id)arg1;
- (_Bool)updateRowInFavTable:(id)arg1;
- (_Bool)insertRowsInFavTable:(id)arg1;
- (_Bool)insertRowInFavTable:(id)arg1;
- (_Bool)createFavTable;

@end

