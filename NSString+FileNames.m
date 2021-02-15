//
//  NSString+FileNames.m
//  LNObjectiveCHelpers
//
//  Created by Leo Natan on 12/07/2017.
//  Copyright © 2017-2021 Leo Natan. All rights reserved.
//

#import "NSString+FileNames.h"

@implementation NSString (FileNames)

+ (NSString *)_ln_sanitizeFileNameString:(NSString *)fileName {
	NSCharacterSet* illegalFileNameCharacters = [NSCharacterSet characterSetWithCharactersInString:@":/\\?%*|\"<>"];
	return [[fileName componentsSeparatedByCharactersInSet:illegalFileNameCharacters] componentsJoinedByString:@"_"];
}

- (NSString *)ln_stringBySanitizingForFileName
{
	return [NSString _ln_sanitizeFileNameString:self];
}

@end
