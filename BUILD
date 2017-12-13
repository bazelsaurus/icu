# Public domain

package(default_visibility = ["//visibility:public"])

cc_library(
  name = "icu",
  srcs = glob([
    "source/common/*.h",
    "source/common/*.cpp",
    "source/i18n/*.h",
    "source/i18n/*.cpp",
    "source/io/*.h",
    "source/io/*.cpp",
    # For now stub the data load
    # Figure how to add data whenever.
    "source/stubdata/stubdata.cpp",
  ]),
  hdrs = glob([
    "source/common/unicode/*.h",
    "source/i18n/unicode/*.h",
    "source/io/unicode/*.h",
  ]),
  includes = [
    "source/common",
    "source/i18n",
    "source/io",
  ],
  defines = [
    "U_USING_ICU_NAMESPACE=0",
    "U_CHARSET_IS_UTF8=1",
    "U_NO_DEFAULT_INCLUDE_UTF_HEADERS=1",
    "_REENRANT=1",
#    "U_HAVE_STRTOD_L=1", # does not work with android
    "U_STATIC_IMPLEMENTATION",
    "U_COMMON_IMPLEMENTATION",
    "U_IO_IMPLEMENTATION",
    "U_I18N_IMPLEMENTATION",
  ],
  copts = [
    "-Wno-deprecated-declarations",
    "-Wno-unused-function",
  ],
  linkopts = [
    "-ldl",
    "-fno-exceptions",
  ],
  linkstatic = True,
)


cc_binary(
  name = "spinorx_icu_test",
  srcs = [
    "spinorx_icu_test/main.cc",
  ],
  deps = [
    ":icu",
  ],
)
