#pragma once
#ifdef LIBRARYDYNAMIC_EXPORTS
#define LIBRARY_API __declspec(dllexport)
#else
#define LIBRARY_API __declspec(dllimport)
#endif

#ifndef AIR_VEHICLE_H
#define AIR_VEHICLE_H

#include "Vehicle.h"

class AirVehicle : public Vehicle {
public:
    virtual double getDistanceReduction(double distance) const = 0;
};

#endif // AIR_VEHICLE_H