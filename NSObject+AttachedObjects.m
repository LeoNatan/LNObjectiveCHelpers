//
//  NSObject+AttachedObjects.m
//  LNObjectiveCHelpers
//
//  Created by Leo Natan on 10/21/18.
//  Copyright © 2017-2021 Leo Natan. All rights reserved.
//

#import "NSObject+AttachedObjects.h"
@import ObjectiveC;

LN_DIRECT_MEMBERS
@implementation NSObject (AttachedObjects)

- (void)ln_attachObject:(nullable id)value forKey:(const void*)key;
{
	objc_setAssociatedObject(self, key, value, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

- (nullable id)ln_attachedObjectForKey:(const void*)key;
{
	return objc_getAssociatedObject(self, key);
}

@end
