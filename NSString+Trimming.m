//
//  NSString+Trimming.m
//  LNObjectiveCHelpers
//
//  Created by Leo Natan on 3/4/19.
//  Copyright © 2017-2021 Leo Natan. All rights reserved.
//

#import "NSString+Trimming.h"

@implementation NSString (Trimming)

- (NSString*)ln_stringByTrimmingWhiteSpace
{
	return [self stringByTrimmingCharactersInSet:NSCharacterSet.whitespaceCharacterSet];
}

@end
