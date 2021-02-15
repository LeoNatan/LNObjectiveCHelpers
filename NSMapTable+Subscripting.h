//
//  NSMapTable+Subscripting.h
//  LNObjectiveCHelpers
//
//  Created by Leo Natan on 11/27/18.
//  Copyright © 2017-2021 Leo Natan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSMapTable (Subscripting)

- (id)objectForKeyedSubscript:(id)key;
- (void)setObject:(id)obj forKeyedSubscript:(id)key;

@end
