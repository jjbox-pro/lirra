#ifndef LIRRA_GLOBAL_H
#define LIRRA_GLOBAL_H

#if defined(_MSC_VER) || defined(WIN64) || defined(_WIN64) || defined(__WIN64__) || defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)
#  define Q_DECL_EXPORT __declspec(dllexport)
#  define Q_DECL_IMPORT __declspec(dllimport)
#  define LIRRA_PLATFORM_WINDOWS
#else
#  define Q_DECL_EXPORT     __attribute__((visibility("default")))
#  define Q_DECL_IMPORT     __attribute__((visibility("default")))
#endif

#if defined(LIRRA_LIBRARY)
#  define LIRRA_API Q_DECL_EXPORT
#else
#  define LIRRA_API Q_DECL_IMPORT
#endif

#include <iostream>

#endif // LIRRA_GLOBAL_H
