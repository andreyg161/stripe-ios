//
//  STPSource+Private.h
//  Stripe
//
//  Created by Ben Guo on 2/17/17.
//  Copyright © 2017 Stripe, Inc. All rights reserved.
//

#import "STPSource.h"
#import "STPInternalAPIResponseDecodable.h"

NS_ASSUME_NONNULL_BEGIN

@interface STPSource () <STPInternalAPIResponseDecodable>

+ (STPSourceType)typeFromString:(NSString *)string;
+ (nullable NSString *)stringFromType:(STPSourceType)type;

+ (STPSourceFlow)flowFromString:(NSString *)string;
+ (nullable NSString *)stringFromFlow:(STPSourceFlow)flow;

+ (STPSourceStatus)statusFromString:(NSString *)string;
+ (nullable NSString *)stringFromStatus:(STPSourceStatus)status;

+ (STPSourceUsage)usageFromString:(NSString *)string;
+ (nullable NSString *)stringFromUsage:(STPSourceUsage)usage;

@end

NS_ASSUME_NONNULL_END
