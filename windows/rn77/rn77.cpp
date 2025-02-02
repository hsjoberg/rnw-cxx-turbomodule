#include "pch.h"

#include "rn77.h"

namespace winrt::rn77
{

// See https://microsoft.github.io/react-native-windows/docs/native-modules for details on writing native modules

void Rn77::Initialize(React::ReactContext const &reactContext) noexcept {
  m_context = reactContext;
}

double Rn77::multiply(double a, double b) noexcept {
  return a * b;
}

std::string Rn77::hello(std::string a) noexcept {
  return "Hello from C++ TurboModule!";
}

} // namespace winrt::rn77