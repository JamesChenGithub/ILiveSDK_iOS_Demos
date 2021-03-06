//
//  RecvCallViewModel.h
//  ILiveCall
//
//  Created by tomzhu on 16/9/14.
//  Copyright © 2016年 AlexiChen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ViewModelAble.h"
#import "EngineHeaders.h"

@interface RecvCallViewModel : NSObject<RecvCallAble,TCILiveManagerDelegate>
@property(nonatomic,weak) id<RecvCallListener> listener;
@property(nonatomic,strong) TCICallCMD * callCmd;

- (instancetype)initWithType:(CallType)type peerId:(NSString*)userId;

@end
