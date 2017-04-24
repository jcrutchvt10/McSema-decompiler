#pragma once

#if defined _WIN32 || defined __CYGWIN__
    #ifdef MCSEMA_EXPORT_SYMBOLS
        #define MCSEMA_PUBLIC_SYMBOL __declspec(dllexport)
    #else
        #define MCSEMA_PUBLIC_SYMBOL __declspec(dllimport)
    #endif

    #define MCSEMA_PRIVATE_SYMBOL

#else
    #define MCSEMA_PUBLIC_SYMBOL __attribute__((visibility("default")))
    #define MCSEMA_PRIVATE_SYMBOL __attribute__((visibility("hidden")))
#endif
