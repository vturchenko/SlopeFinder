//
//  AppDelegate.h
//  SlopeFinder
//
//  Created by Vlad Turchenko on 7/13/16.
//  Copyright © 2016 Vlad Turchenko. All rights reserved.
//

#import <UIKit/UIKit.h>
@class SlopeData;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (nonatomic, strong) SlopeData *slopeData;


@end

