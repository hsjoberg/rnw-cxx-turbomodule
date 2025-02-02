
/*
 * This file is auto-generated from a NativeModule spec file in js.
 *
 * This is a C++ Spec class that should be used with MakeTurboModuleProvider to register native modules
 * in a way that also verifies at compile time that the native module matches the interface required
 * by the TurboModule JS spec.
 */
#pragma once
// clang-format off


#include <NativeModules.h>
#include <tuple>

namespace rn77Codegen {

struct Rn77Spec : winrt::Microsoft::ReactNative::TurboModuleSpec {
  static constexpr auto methods = std::tuple{
      SyncMethod<double(double, double) noexcept>{0, L"multiply"},
      SyncMethod<std::string(std::string) noexcept>{1, L"hello"},
  };

  template <class TModule>
  static constexpr void ValidateModule() noexcept {
    constexpr auto methodCheckResults = CheckMethods<TModule, Rn77Spec>();

    REACT_SHOW_METHOD_SPEC_ERRORS(
          0,
          "multiply",
          "    REACT_SYNC_METHOD(multiply) double multiply(double a, double b) noexcept { /* implementation */ }\n"
          "    REACT_SYNC_METHOD(multiply) static double multiply(double a, double b) noexcept { /* implementation */ }\n");
    REACT_SHOW_METHOD_SPEC_ERRORS(
          1,
          "hello",
          "    REACT_SYNC_METHOD(hello) std::string hello(std::string a) noexcept { /* implementation */ }\n"
          "    REACT_SYNC_METHOD(hello) static std::string hello(std::string a) noexcept { /* implementation */ }\n");
  }
};

} // namespace rn77Codegen
