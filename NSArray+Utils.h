//
//  NSArray+Utils.h
//  LNObjectiveCHelpers
//
//  Created by Leo Natan on 5/18/20.
//  Copyright © 2017-2021 Leo Natan. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSArray<ObjectType> (Utils)

- (instancetype)ln_mapObjectsUsingBlock:(id (^)(ObjectType obj, NSUInteger idx))block;

@end

NS_ASSUME_NONNULL_END
