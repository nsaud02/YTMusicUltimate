#import <Foundation/Foundation.h>
#import <rootless.h>
#import "../Utils/NSBundle+YTMU.h"
#import "ABCSwitch.h"

// Prevent missing translations from crashing settings.
static inline NSString *YTMULocalizedString(NSString *key) {
    if (!key) return @"";

    NSBundle *bundle = NSBundle.ytmu_defaultBundle;
    return [bundle localizedStringForKey:key
                                  value:key
                                  table:nil] ?: key;
}

#define LOC(key) YTMULocalizedString(key)
