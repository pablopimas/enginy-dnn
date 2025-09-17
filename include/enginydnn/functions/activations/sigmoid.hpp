#pragma once

#include "enginydnn/types.hpp"
#include <xtensor.hpp>

namespace enginydnn {
    inline Tensor sigmoid(const Tensor& x) {
        // element by element with xtensor
        return 1.0 / (1.0 + xt::exp(-x));
    }
}