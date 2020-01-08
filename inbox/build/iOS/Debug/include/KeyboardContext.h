#pragma once

#ifdef __OBJC__

#include <UIKit/UIKit.h>
#include <Uno-iOS/AppDelegate.h>
#include <Uno-iOS/Uno-iOS.h>

#include <Uno.Rect.h>

@interface uKeyboardContext : NSObject
- (void)uKeyboardWillChangeFrame:(NSNotification *)notification;
@end

#endif
