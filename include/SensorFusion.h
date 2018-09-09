// This file is a part of embed-sensor-fusion project.
// Copyright 2018 Aleksander Gajewski <adiog@brainfuck.pl>.

#pragma once

#include <FusionData.h>
#include <SensorData.h>


namespace sensorFusion {
struct SensorFusion
{
    using Float = float;

    virtual void initialize(const SensorData &sensorData) = 0;
    virtual FusionData apply(const SensorData &sensorData) = 0;

    static Float getRoll(glm::vec3 accelerometer)
    {
        return glm::degrees(atan2f(accelerometer[1], accelerometer[2]));
    }

    static Float getPitch(glm::vec3 accelerometer)
    {
        return glm::degrees(atanf(-accelerometer[0] / sqrtf(accelerometer[1] * accelerometer[1] + accelerometer[2] * accelerometer[2])));
    }

};
}