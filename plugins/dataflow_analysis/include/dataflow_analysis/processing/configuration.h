#pragma once

#include "hal_core/defines.h"

namespace hal
{
    namespace processing
    {
        struct Configuration
        {
            u32 pass_layers;
            u32 num_threads;
        };

    }    // namespace processing
}    // namespace hal
