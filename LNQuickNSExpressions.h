//
//  LNQuickNSExpressions.h
//  LNObjectiveCHelpers
//
//  Created by Leo Natan on 1/16/19.
//  Copyright © 2017-2021 Leo Natan. All rights reserved.
//

#ifndef LNQuickNSExpressions_h
#define LNQuickNSExpressions_h

#import <Foundation/Foundation.h>

static LN_ALWAYS_INLINE NSExpression* LNKeyPathExpression(NSString* keyPath)
{
	return [NSExpression expressionForKeyPath:keyPath];
}

static LN_ALWAYS_INLINE NSExpression* LNFunctionExpression(NSString* function, NSArray* arguments)
{
	return [NSExpression expressionForFunction:function arguments:arguments];
}

#endif /* LNQuickNSExpressions_h */
