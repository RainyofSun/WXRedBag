//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class BaseRequest, NSString, SKBuiltinBuffer_t;

@interface UploadVideoRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *aeskey; // @dynamic aeskey;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int cameraType; // @dynamic cameraType;
@property(retain, nonatomic) NSString *cdnthumbAeskey; // @dynamic cdnthumbAeskey;
@property(nonatomic) int cdnthumbImgHeight; // @dynamic cdnthumbImgHeight;
@property(nonatomic) int cdnthumbImgSize; // @dynamic cdnthumbImgSize;
@property(nonatomic) int cdnthumbImgWidth; // @dynamic cdnthumbImgWidth;
@property(retain, nonatomic) NSString *cdnthumbUrl; // @dynamic cdnthumbUrl;
@property(retain, nonatomic) NSString *cdnvideoUrl; // @dynamic cdnvideoUrl;
@property(retain, nonatomic) NSString *clientMsgId; // @dynamic clientMsgId;
@property(nonatomic) unsigned int crc32; // @dynamic crc32;
@property(nonatomic) int encryVer; // @dynamic encryVer;
@property(retain, nonatomic) NSString *fromUserName; // @dynamic fromUserName;
@property(nonatomic) unsigned int funcFlag; // @dynamic funcFlag;
@property(nonatomic) unsigned int hitMd5; // @dynamic hitMd5;
@property(nonatomic) unsigned int msgForwardType; // @dynamic msgForwardType;
@property(retain, nonatomic) NSString *msgSource; // @dynamic msgSource;
@property(nonatomic) unsigned int networkEnv; // @dynamic networkEnv;
@property(nonatomic) unsigned int playLength; // @dynamic playLength;
@property(nonatomic) unsigned int reqTime; // @dynamic reqTime;
@property(nonatomic) unsigned int source; // @dynamic source;
@property(retain, nonatomic) NSString *statExtStr; // @dynamic statExtStr;
@property(retain, nonatomic) NSString *streamVideoAdUxInfo; // @dynamic streamVideoAdUxInfo;
@property(retain, nonatomic) NSString *streamVideoPublishId; // @dynamic streamVideoPublishId;
@property(retain, nonatomic) NSString *streamVideoThumbUrl; // @dynamic streamVideoThumbUrl;
@property(retain, nonatomic) NSString *streamVideoTitle; // @dynamic streamVideoTitle;
@property(nonatomic) unsigned int streamVideoTotalTime; // @dynamic streamVideoTotalTime;
@property(retain, nonatomic) NSString *streamVideoUrl; // @dynamic streamVideoUrl;
@property(retain, nonatomic) NSString *streamVideoWebUrl; // @dynamic streamVideoWebUrl;
@property(retain, nonatomic) NSString *streamVideoWording; // @dynamic streamVideoWording;
@property(retain, nonatomic) SKBuiltinBuffer_t *thumbData; // @dynamic thumbData;
@property(nonatomic) unsigned int thumbStartPos; // @dynamic thumbStartPos;
@property(nonatomic) unsigned int thumbTotalLen; // @dynamic thumbTotalLen;
@property(retain, nonatomic) NSString *toUserName; // @dynamic toUserName;
@property(retain, nonatomic) SKBuiltinBuffer_t *videoData; // @dynamic videoData;
@property(nonatomic) int videoFrom; // @dynamic videoFrom;
@property(retain, nonatomic) NSString *videoMd5; // @dynamic videoMd5;
@property(retain, nonatomic) NSString *videoNewMd5; // @dynamic videoNewMd5;
@property(nonatomic) unsigned int videoStartPos; // @dynamic videoStartPos;
@property(nonatomic) unsigned int videoTotalLen; // @dynamic videoTotalLen;

@end

