#pragma once
#ifdef LIBRARYDYNAMIC_EXPORTS
#define LIBRARY_API __declspec(dllexport)
#else
#define LIBRARY_API __declspec(dllimport)
#endif
//Ковёр-самолёт

#ifndef MAGIC_CARPET_H
#define MAGIC_CARPET_H

#include "AirVehicle.h"

class MagicCarpet : public AirVehicle {
public:
    double getSpeed() const override;
    double getRaceTime(double distance) const override;
    double getDistanceReduction(double distance) const override;
    std::string getName() const override;
};

#endif // MAGIC_CARPET_H