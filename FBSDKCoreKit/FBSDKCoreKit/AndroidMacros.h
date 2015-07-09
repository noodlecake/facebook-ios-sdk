#ifndef ANDROID_MACROS
#define ANDROID_MACROS

#ifndef NS_DESIGNATED_INITIALIZER
#if __has_attribute(objc_designated_initializer)
#define NS_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
#else
#define NS_DESIGNATED_INITIALIZER
#endif
#endif

typedef struct {
        NSInteger majorVersion;
            NSInteger minorVersion;
                NSInteger patchVersion;
} NSOperatingSystemVersion;

#endif
