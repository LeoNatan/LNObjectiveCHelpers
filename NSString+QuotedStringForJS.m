//
//  NSString+LNQuotedStringForJS.m
//  LNObjectiveCHelpers
//
//  Created by Leo Natan on 4/22/19.
//  Copyright © 2017-2021 Leo Natan. All rights reserved.
//

#import "NSString+QuotedStringForJS.h"

LN_DIRECT_MEMBERS
@implementation NSString (LNQuotedStringForJS)

- (NSString*)ln_quotedStringRepresentationForJS
{
	NSMutableString* rv = [[self valueForKey:@"quotedStringRepresentation"] mutableCopy];
	[rv replaceOccurrencesOfString:@"\\U" withString:@"\\u" options:0 range:NSMakeRange(0, rv.length)];
	
	return rv;
}

@end
