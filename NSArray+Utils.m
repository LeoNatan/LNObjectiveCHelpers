//
//  NSArray+Utils.m
//  LNObjectiveCHelpers
//
//  Created by Leo Natan on 5/18/20.
//  Copyright © 2017-2021 Leo Natan. All rights reserved.
//

#import "NSArray+Utils.h"

LN_DIRECT_MEMBERS
@implementation NSArray (Utils)

- (instancetype)ln_mapObjectsUsingBlock:(id (^)(id obj, NSUInteger idx))block
{
    NSMutableArray *result = [NSMutableArray arrayWithCapacity:[self count]];
    [self enumerateObjectsUsingBlock:^(id obj, NSUInteger idx, BOOL *stop) {
        [result addObject:block(obj, idx)];
    }];
    return result;
}

@end
