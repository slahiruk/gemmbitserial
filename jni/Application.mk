NDK_TOOLCHAIN_VERSION :=
APP_STL := c++_static
APP_ABI := arm64-v8a
APP_CPPFLAGS := -frtti -fexceptions -O3 -std=c++11 -Wall -Wextra -pedantic -Wno-unused-variable -Wno-unused-parameter -I.
APP_LDFLAGS := -L$(SYSROOT)/usr/lib -lstdc++ -latomic
APP_PIE := true
