//
//  NSString+FileNames.h
//  LNObjectiveCHelpers
//
//  Created by Leo Natan on 12/07/2017.
//  Copyright © 2017-2021 Leo Natan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (FileNames)

@property (nonatomic, copy, readonly) NSString* ln_stringBySanitizingForFileName;

@end
