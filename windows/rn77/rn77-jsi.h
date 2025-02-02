#pragma once

#include "codegen-jsi/rn77JSI.h"

#include <winrt/Microsoft.ReactNative.h>
#include <winrt/Windows.Foundation.Collections.h>
#include <TurboModuleProvider.h>

namespace facebook::react {

struct Rn77 : public NativeRn77CxxSpec<Rn77> {
    Rn77(std::shared_ptr<CallInvoker> jsInvoker) 
        : NativeRn77CxxSpec<Rn77>(std::move(jsInvoker)) {}

    double multiply(jsi::Runtime &rt, double a, double b);
    std::string hello(jsi::Runtime &rt, jsi::String a);
};

struct Rn77PackageProvider
    : winrt::implements<Rn77PackageProvider, winrt::Microsoft::ReactNative::IReactPackageProvider> {
    void CreatePackage(winrt::Microsoft::ReactNative::IReactPackageBuilder const &packageBuilder) noexcept {
        winrt::Microsoft::ReactNative::AddTurboModuleProvider<Rn77>(packageBuilder, L"Rn77Cxx");
    }
};

}
