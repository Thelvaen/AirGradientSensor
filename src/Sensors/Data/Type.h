#pragma once

#include "Utils/Enum.h"

namespace AirGradient {

    /**
     * Represent the type of data the sensor can provide. Can be multiple. Used as flag.
     */
    enum class SensorType : uint8_t {
        /**
         * Provide particle measurement (PM 1.0, PM 2.5, etc ...)
         */
        Particle = 1 << 0,
        /**
         * Provide CO2 measurement
         */
        CO2 = 1 << 1,
        /**
         * Provide Temperature measurement
         */
        Temperature = 1 << 2,
        /**
         * Provide humidity measurement
         */
        Humidity = 1 << 3,
        /**
         * Provide the boot time
         */
        BootTime = 1 << 4,
    };

    ENUM_FLAG_OPERATORS(SensorType);
}