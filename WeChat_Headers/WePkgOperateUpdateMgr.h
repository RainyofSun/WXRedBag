//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface WePkgOperateUpdateMgr : MMObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (void)performBlockAndWait:(CDUnknownBlockType)arg1;
- (void)operateUpdateForPkgId:(id)arg1 AtomicPart:(_Bool)arg2 NonAtomicPart:(_Bool)arg3 completeBlock:(CDUnknownBlockType)arg4;
- (_Bool)operateUpdateNonAtomicPart:(id)arg1 RegularConfig:(id)arg2 VersionChanged:(_Bool *)arg3;
- (_Bool)operateUpdateAtomicPart:(id)arg1 RegularConfig:(id)arg2 VersionChanged:(_Bool *)arg3;
- (id)init;

@end

