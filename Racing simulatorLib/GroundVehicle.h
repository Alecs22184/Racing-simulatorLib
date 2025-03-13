#pragma once
#ifdef LIBRARYDYNAMIC_EXPORTS
#define LIBRARY_API __declspec(dllexport)
#else
#define LIBRARY_API __declspec(dllimport)
#endif

//Наземные ТС


#ifndef GROUND_VEHICLE_H
#define GROUND_VEHICLE_H

#include "Vehicle.h"

class GroundVehicle : public Vehicle {
public:
    virtual double getRestTime(int restCount) const = 0;
};

#endif // GROUND_VEHICLE_H