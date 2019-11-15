//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FavoritesDownloadCDNInfo, FavoritesItem, NSString;

@protocol FavoritesDownloaderDelegate <NSObject>
- (_Bool)deleteDownloadCdnInfoByFavoritesItemFavCheckId:(NSString *)arg1;
- (FavoritesDownloadCDNInfo *)getNextDownloadCdnInfoByFavCheckId:(NSString *)arg1;
- (_Bool)updateDownloadCdnInfo:(FavoritesDownloadCDNInfo *)arg1;
- (void)onDownloadFavItemFail:(FavoritesItem *)arg1 LocalDataId:(NSString *)arg2 errCode:(int)arg3;
- (void)onDownloadFavItemSuccess:(FavoritesItem *)arg1 LocalDataId:(NSString *)arg2;
- (void)onDownloadFavItem:(FavoritesItem *)arg1 LocalDataId:(NSString *)arg2 FinishedLength:(int)arg3 TotalLength:(int)arg4;
- (void)onDownloadFail:(FavoritesItem *)arg1 ErrCode:(int)arg2;
- (void)onDownloadFinished:(FavoritesItem *)arg1;
@end

