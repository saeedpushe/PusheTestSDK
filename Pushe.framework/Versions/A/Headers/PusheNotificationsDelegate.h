//
//  PusheNotificationsDelegate.h
//  Pushe
//
//  Created by Saeid Scafee on 11/8/18.
//  Copyright © 2018 Saeid Scafee. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol PusheNotificationsDelegate <NSObject>

@required

- (void)pushe:(NSString *)pusheMessage didReceiveRemoteNotification:(NSDictionary<NSString *, id> *)notification;

@optional

- (void)pushe:(BOOL)isRejected withError:(NSError * _Nullable) error;

@end

NS_ASSUME_NONNULL_END
