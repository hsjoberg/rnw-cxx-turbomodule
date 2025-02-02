#include "pch.h"
#include "rn77-jsi.h"

namespace facebook::react {

double Rn77::multiply(jsi::Runtime &rt, double a, double b) {
    return 1234;
}

std::string Rn77::hello(jsi::Runtime &rt, jsi::String a) { 
    std::string r = a.utf8(rt);
    std::reverse(r.begin(), r.end());
    return r;
}

} // namespace facebook::react