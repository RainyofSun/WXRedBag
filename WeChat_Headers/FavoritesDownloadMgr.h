//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "CNetworkStatusExt-Protocol.h"
#import "FavoritesDownloaderDelegate-Protocol.h"

@class FavDataItemWrap, FavoritesDownloadCDNInfoDB, FavoritesDownloader, FavoritesItemDB, NSMutableArray, NSString;
@protocol FavoritesDownloadMgrDelegate;

@interface FavoritesDownloadMgr : MMObject <CNetworkStatusExt, FavoritesDownloaderDelegate>
{
    NSMutableArray *_downloadingQueue;
    NSMutableArray *_failQueue;
    NSMutableArray *_activeQueue;
    FavDataItemWrap *_priorDataWrap;
    _Bool _isDownloading;
    FavoritesItemDB *_favItemDB;
    FavoritesDownloadCDNInfoDB *_favCdnDB;
    FavoritesDownloader *_favDownloader;
    id <FavoritesDownloadMgrDelegate> _delegate;
}

@property(nonatomic) __weak id <FavoritesDownloadMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)onDownloadFavItemFail:(id)arg1 LocalDataId:(id)arg2 errCode:(int)arg3;
- (void)onDownloadFavItemSuccess:(id)arg1 LocalDataId:(id)arg2;
- (void)onDownloadFavItem:(id)arg1 LocalDataId:(id)arg2 FinishedLength:(int)arg3 TotalLength:(int)arg4;
- (void)onDownloadFail:(id)arg1 ErrCode:(int)arg2;
- (void)onDownloadFinished:(id)arg1;
- (id)getDownloadPausedItemList;
- (id)getDownloadingItemList;
- (void)changeToNoWifi;
- (_Bool)startDownloadDataWrapPrior:(id)arg1;
- (void)stopDownloadAllFavItem;
- (_Bool)pauseDownloadFavoritesItem:(id)arg1;
- (_Bool)startDownloadItem:(id)arg1 IsPriority:(_Bool)arg2;
- (_Bool)deleteDownloadCdnInfoByFavoritesItemFavCheckId:(id)arg1;
- (_Bool)updateDownloadCdnInfo:(id)arg1;
- (void)TryStartDownload;
- (void)checkAndTryStartDownload;
- (id)getNextDownloadCdnInfoByFavCheckId:(id)arg1;
- (void)setItemDownloadFail:(id)arg1 ErrCode:(int)arg2;
- (_Bool)delDownloadItem:(id)arg1;
- (_Bool)addDownloadItem:(id)arg1;
- (_Bool)loadFailedQueue;
- (_Bool)loadDownloadingQueue;
- (void)dealloc;
- (void)initDB:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

