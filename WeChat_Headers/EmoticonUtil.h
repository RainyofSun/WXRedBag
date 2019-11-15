//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface EmoticonUtil : NSObject
{
}

+ (void)reportMigrationStateWithKey:(int)arg1;
+ (_Bool)migrationEmoticonForEmoticonList:(id)arg1 isCustomEmoticon:(_Bool)arg2;
+ (_Bool)renameFileOldPath:(const char *)arg1 toNewPath:(const char *)arg2;
+ (void)renameOldDirToAutoCleanDir;
+ (_Bool)hasOldEmoticonDir;
+ (id)fileTimeStateForMd5:(id)arg1;
+ (void)resetAllFileToOldDir;
+ (id)GetDownloadingPathOfEmoticonInTempDirForMd5:(id)arg1;
+ (id)GetPathOfEmoticonInTempDirForMd5:(id)arg1;
+ (id)GetPathOfTempEmoticonDir;
+ (id)pathOfCleanableDirWithWxAM:(_Bool)arg1;
+ (id)pathOfNotCleanDirWithWxAM:(_Bool)arg1;
+ (id)pathOfCleanableDir;
+ (id)pathOfNotCleanDir;
+ (id)pathOfAutoCleanDir;
+ (id)pathOfOldDir;
+ (id)fileNameForMd5:(id)arg1 isWxAM:(_Bool)arg2;
+ (void)cleanFileWithMd5:(id)arg1 isWxAM:(_Bool)arg2;
+ (_Bool)InternalMoveToTargetPath:(id)arg1 originPath:(id)arg2 originData:(id)arg3;
+ (_Bool)InternalMoveToEmoticonDirForMd5:(id)arg1 originPath:(id)arg2 originData:(id)arg3 isCleanable:(_Bool)arg4;
+ (_Bool)migrationEmoticonForMd5:(id)arg1 toDirIsCleanable:(_Bool)arg2;
+ (_Bool)moveFileToEmoticonDirForMd5:(id)arg1 originPath:(id)arg2 isCleanable:(_Bool)arg3;
+ (_Bool)saveEmoticonToEmoticonDirForMd5:(id)arg1 data:(id)arg2 isCleanable:(_Bool)arg3;
+ (id)loadDataOfEmoticonForMd5:(id)arg1 offset:(unsigned int)arg2 maxLen:(unsigned int)arg3;
+ (id)dataOfEmoticonForMd5:(id)arg1 needUpdateTime:(_Bool)arg2 ignoreWxAM:(_Bool)arg3;
+ (id)dataOfEmoticonForMd5:(id)arg1 needUpdateTime:(_Bool)arg2;
+ (id)dataOfEmoticonForMd5:(id)arg1;
+ (_Bool)removeFileOfEmoticonForMd5:(id)arg1;
+ (_Bool)fileExistInNotCleanDirOfEmoticonForMd5:(id)arg1 includeOldDir:(_Bool)arg2;
+ (_Bool)fileExistOfEmoticonForMd5:(id)arg1;
+ (long long)fileSizeOfEmoticonForMd5:(id)arg1;
+ (id)pathOfEmoticonForMd5:(id)arg1 needUpdateTime:(_Bool)arg2 ignoreWxAM:(_Bool)arg3;
+ (id)pathOfEmoticonToSaveForMd5:(id)arg1;
+ (id)pathOfThumbDir;
+ (id)thumbPathOfEmoticonToSaveForMd5:(id)arg1;
+ (id)thumbPathOfEmoticonForMd5:(id)arg1;
+ (id)imageWithData:(id)arg1 scale:(double)arg2;
+ (id)imageWithData:(id)arg1;
+ (_Bool)isSingleFrameWithData:(id)arg1;
+ (_Bool)isWxAMData:(id)arg1;
+ (_Bool)isEnableToDownloadWxAM;
+ (_Bool)isSupportWxAM;
+ (void)setWxAMConfig:(id)arg1;
+ (_Bool)FileExist:(id)arg1 byUtime:(_Bool)arg2;
+ (unsigned long long)getEmotionTotalSize;
+ (_Bool)isInGetDetailBlockListForProductId:(id)arg1;
+ (id)extInfoForAppid:(id)arg1 DesignerId:(id)arg2 activityId:(id)arg3 thumbImgUrl:(id)arg4;
+ (_Bool)unZipRes:(id)arg1 toPath:(id)arg2;
+ (unsigned int)GetSearchTemplateVesionFromConfigFileInDir:(id)arg1;
+ (id)GetPathOfRewardTipsStatisticsDataFile;
+ (id)getEmotionRewardInfoCacheForPid:(id)arg1;
+ (id)getEmotionRewardInfoCacheDir;
+ (id)getUserEmotionCommonDataDir;
+ (id)GetEmojiEggConfigDir;
+ (id)GetEmojiSuggestConfigDir;
+ (id)GetEmojiPanelConfigDir;
+ (id)GetNewEmojiConfigDir;
+ (id)GetTempPathOfUnZipDir;
+ (id)GetDownloadPathOfEmotionSearchDir;
+ (id)GetDownloadPathOfEmotionSearchTempDir;
+ (id)GetDefaultPathOfEmotionSearchDir;
+ (id)getEmotionActivityDecodeFilePathForActivityId:(id)arg1;
+ (id)getEmotionActivityDecodeDir;
+ (id)getEmotionDesignerIdDecodeFilePath;
+ (id)getEmotionPersonalDesignerFilePathForUin:(unsigned int)arg1;
+ (id)getEmotionPersonalDesignerDir;
+ (id)getEmotionCommonCacheDir;

@end

