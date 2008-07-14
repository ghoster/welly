//
//  TYGrowlBridge.h
//  Welly
//
//  Created by aqua9 on 20/3/2008.
//  Copyright 2008 TANG Yang. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <Growl-WithInstaller/GrowlApplicationBridge.h>

@protocol GrowlApplicationBridgeDelegate;
@interface TYGrowlBridge : NSObject <GrowlApplicationBridgeDelegate>

+ (void)setup;

// iconData:nil priority:0 isSticky:NO
+ (void)notifyWithTitle:(NSString *)title
            description:(NSString *)description
       notificationName:(NSString *)notifName;

// clickContext can be any object, not restricted to plist-encodable
+ (void)notifyWithTitle:(NSString *)title
            description:(NSString *)description
       notificationName:(NSString *)notifName
               iconData:(NSData *)iconData
               priority:(signed int)priority
               isSticky:(BOOL)isSticky
           clickContext:(id)clickContext
          clickSelector:(SEL)clickSelector
             withObject:(id)object;

@end
