//  OCHamcrest by Jon Reid, http://qualitycoding.org/about/
//  Copyright 2017 hamcrest.org. See LICENSE.txt

#import "HCReturnValueGetter.h"


NS_ASSUME_NONNULL_BEGIN

@interface HCBoolReturnGetter : HCReturnValueGetter

- (instancetype)initWithSuccessor:(nullable HCReturnValueGetter *)successor NS_DESIGNATED_INITIALIZER;
- (instancetype)initWithType:(char const *)handlerType successor:(nullable HCReturnValueGetter *)successor NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
