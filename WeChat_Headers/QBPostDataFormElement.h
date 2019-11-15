//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "QBPostDataProtocol-Protocol.h"

@class NSArray, NSData, NSInputStream, NSMutableArray, NSString;

@interface QBPostDataFormElement : NSObject <QBPostDataProtocol>
{
    int _dataPostType;
    NSString *_postBoundaryString;
    _Bool _dataReady;
    long long _randomString;
    NSMutableArray *_elementArray;
    unsigned long long _streamRead;
    unsigned long long _suffixRead;
    unsigned long long _fileRead;
    NSMutableArray *_streamFiles;
    NSData *_streamData;
    _Bool _dataSorted;
    NSInputStream *_fileInput;
    unsigned long long _currentFileIndex;
    unsigned char _buffer[32768];
}

@property long long randomString; // @synthesize randomString=_randomString;
@property _Bool dataReady; // @synthesize dataReady=_dataReady;
@property(nonatomic) int dataPostType; // @synthesize dataPostType=_dataPostType;
- (void).cxx_destruct;
- (unsigned long long)dataSize;
- (unsigned long long)contentInfoStringLength:(id)arg1;
- (unsigned long long)contentBoundayStringLength;
- (_Bool)readFilesStreamFinished:(id)arg1;
- (void)getStreamData;
- (void)multipartFormDataStream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)URLEncodedDataStream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (id)createInputStreamForPost;
- (void)sortContentElement;
- (id)streamFiles;
- (_Bool)shouldUseStreamToSendData;
- (id)finalPostData;
- (id)archiveURLEncodedData;
- (id)archiveMultipartFormData;
- (void)resetElements:(id)arg1;
- (void)fillDataFromAnotherInstance:(id)arg1;
- (id)contentData;
- (id)contentBoundaryString;
@property(readonly, copy) NSArray *elements;
- (void)addElement:(id)arg1;
- (id)initWithElements:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSString *filePath;
@property(readonly) unsigned long long fileSize;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

