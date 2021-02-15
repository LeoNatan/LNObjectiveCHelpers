//
//  NSString+QuotedStringForJS.h
//  LNObjectiveCHelpers
//
//  Created by Leo Natan on 4/22/19.
//  Copyright © 2017-2021 Leo Natan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (LNQuotedStringForJS)

@property (nonatomic, copy, readonly) NSString* ln_quotedStringRepresentationForJS;

@end
