//
//  PusheApp.h
//  Pushe
//
//  Created by Saeid Scafee on 11/8/18.
//  Copyright © 2018 Saeid Scafee. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PusheApp : NSObject
+ (instancetype) start;
+ (void) requestAuthentication;
@end

NS_ASSUME_NONNULL_END
