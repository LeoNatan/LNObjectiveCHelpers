//
//  LNAddressInfo.h
//  LNObjectiveCHelpers
//
//  Created by Leo Natan on 07/07/2017.
//  Copyright © 2017-2021 Leo Natan. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LNAddressInfo : NSObject

- (instancetype)initWithAddress:(NSUInteger)address;

@property (nonatomic, readonly) NSUInteger address;
@property (nonatomic, copy, readonly) NSString* image;
@property (nonatomic, copy, readonly) NSString* symbol;
@property (nonatomic, readonly) NSUInteger offset;

- (NSString*)formattedDescriptionForIndex:(NSUInteger)index;

@end

NS_ASSUME_NONNULL_END
