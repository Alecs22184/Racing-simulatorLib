#pragma once
#ifdef LIBRARYDYNAMIC_EXPORTS
#define LIBRARY_API __declspec(dllexport)
#else
#define LIBRARY_API __declspec(dllimport)
#endif
//(Метла)

#ifndef BROOMSTICK_H
#define BROOMSTICK_H

#include "AirVehicle.h"

class Broomstick : public AirVehicle {
public:
    double getSpeed() const override;
    double getRaceTime(double distance) const override;
    double getDistanceReduction(double distance) const override;
    std::string getName() const override;
};

#endif // BROOMSTICK_H