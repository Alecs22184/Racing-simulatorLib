#pragma once
#ifdef LIBRARYDYNAMIC_EXPORTS
#define LIBRARY_API __declspec(dllexport)
#else
#define LIBRARY_API __declspec(dllimport)
#endif
//(Îð¸ë)

#ifndef EAGLE_H
#define EAGLE_H

#include "AirVehicle.h"

class Eagle : public AirVehicle {
public:
    double getSpeed() const override;
    double getRaceTime(double distance) const override;
    double getDistanceReduction(double distance) const override;
    std::string getName() const override;
};

#endif // EAGLE_H