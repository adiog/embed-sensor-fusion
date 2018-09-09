// This file is a part of embed-sensor-fusion project.
// Copyright 2018 Aleksander Gajewski <adiog@brainfuck.pl>.

#include <SensorFusion.h>
#include <TimeDelta.h>

namespace sensorFusion {
struct Static : public SensorFusion
{
    void initialize(const SensorData &sensorData) override
    {
    }

    FusionData apply(const SensorData &sensorData) override
    {
        //return {{getRoll(sensorData.accelerometer), getPitch(sensorData.accelerometer), 0, 0}};
        return {{sensorData.accelerometer[0],
                 sensorData.accelerometer[1],
                 sensorData.accelerometer[2],
                 0}};
    }
};
}
