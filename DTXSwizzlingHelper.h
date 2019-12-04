//
//  DTXSwizzlingHelper.h
//  
//
//  Created by Leo Natan (Wix) on 12/4/19.
//

#ifndef DTXSwizzlingHelper_h
#define DTXSwizzlingHelper_h
#if __OBJC__

#import <objc/runtime.h>

#define SetNSErrorFor(FUNC, ERROR_VAR, FORMAT,...)	\
	if (ERROR_VAR) {	\
		NSString *errStr = [NSString stringWithFormat:@"%s: " FORMAT,FUNC,##__VA_ARGS__]; \
		*ERROR_VAR = [NSError errorWithDomain:@"NSCocoaErrorDomain" \
										 code:-1	\
									 userInfo:[NSDictionary dictionaryWithObject:errStr forKey:NSLocalizedDescriptionKey]]; \
	}
#define SetNSError(ERROR_VAR, FORMAT,...) SetNSErrorFor(__func__, ERROR_VAR, FORMAT, ##__VA_ARGS__)

#define GetClass(obj)	object_getClass(obj)

#ifndef DTX_ALWAYS_INLINE
#define DTX_ALWAYS_INLINE inline __attribute__((__always_inline__))
#endif /* DTX_ALWAYS_INLINE */

DTX_ALWAYS_INLINE
static BOOL DTXSwizzleMethod(Class cls, SEL orig, SEL alt, NSError** error)
{
	Method origMethod = class_getInstanceMethod(cls, orig);
	if (!origMethod) {
#if TARGET_OS_IPHONE
		SetNSError(error, @"original method %@ not found for class %@", NSStringFromSelector(orig), [cls class]);
#else /* TARGET_OS_IPHONE */
		SetNSError(error_, @"original method %@ not found for class %@", NSStringFromSelector(origSel_), [cls className]);
#endif /* TARGET_OS_IPHONE */
		return NO;
	}
	
	Method altMethod = class_getInstanceMethod(cls, alt);
	if (!altMethod) {
#if TARGET_OS_IPHONE
		SetNSError(error, @"alternate method %@ not found for class %@", NSStringFromSelector(alt), [cls class]);
#else /* TARGET_OS_IPHONE */
		SetNSError(error_, @"alternate method %@ not found for class %@", NSStringFromSelector(altSel_), [cls className]);
#endif /* TARGET_OS_IPHONE */
		return NO;
	}
	
	class_addMethod(cls, orig, class_getMethodImplementation(cls, orig), method_getTypeEncoding(origMethod));
	class_addMethod(cls, alt, class_getMethodImplementation(cls, alt), method_getTypeEncoding(altMethod));
	
	method_exchangeImplementations(class_getInstanceMethod(cls, orig), class_getInstanceMethod(cls, alt));
	return YES;
}

DTX_ALWAYS_INLINE
static BOOL DTXSwizzleClassMethod(Class cls, SEL orig, SEL alt, NSError** error)
{
	return DTXSwizzleMethod(GetClass((id)cls), orig, alt, error);
}

#endif /* __OBJC__ */
#endif /* DTXSwizzlingHelper_h */
