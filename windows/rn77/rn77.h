#pragma once

#include "pch.h"
#include "resource.h"

#if __has_include("codegen/NativeRn77DataTypes.g.h")
  #include "codegen/NativeRn77DataTypes.g.h"
#endif
#include "codegen/NativeRn77Spec.g.h"

#include "NativeModules.h"

namespace winrt::rn77
{

REACT_MODULE(Rn77)
struct Rn77
{
  using ModuleSpec = rn77Codegen::Rn77Spec;

  REACT_INIT(Initialize)
  void Initialize(React::ReactContext const &reactContext) noexcept;

  REACT_SYNC_METHOD(multiply)
  double multiply(double a, double b) noexcept;

  REACT_SYNC_METHOD(hello)
  std::string hello(std::string a) noexcept;

private:
  React::ReactContext m_context;
};

} // namespace winrt::rn77