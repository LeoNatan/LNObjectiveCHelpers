//
//  NSObject+AttachedObjects.h
//  LNObjectiveCHelpers
//
//  Created by Leo Natan on 10/21/18.
//  Copyright © 2017-2021 Leo Natan. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (AttachedObjects)

- (void)ln_attachObject:(nullable id)value forKey:(const void*)key;
- (nullable id)ln_attachedObjectForKey:(const void*)key;

@end

NS_ASSUME_NONNULL_END
