//
//  NSMapTable+Subscripting.m
//  LNObjectiveCHelpers
//
//  Created by Leo Natan on 11/27/18.
//  Copyright © 2017-2021 Leo Natan. All rights reserved.
//

#import "NSMapTable+Subscripting.h"

@implementation NSMapTable (Subscripting)

- (id)objectForKeyedSubscript:(id)key
{
	return [self objectForKey:key];
}

- (void)setObject:(id)obj forKeyedSubscript:(id)key
{
	if (obj != nil) {
		[self setObject:obj forKey:key];
	} else {
		[self removeObjectForKey:key];
	}
}

@end
