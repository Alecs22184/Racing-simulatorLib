#pragma once
#ifdef LIBRARYDYNAMIC_EXPORTS
#define LIBRARY_API __declspec(dllexport)
#else
#define LIBRARY_API __declspec(dllimport)
#endif
//(Ботинки-вездеходы)

#ifndef ALL_TERRAIN_BOOTS_H
#define ALL_TERRAIN_BOOTS_H

#include "GroundVehicle.h"

class AllTerrainBoots : public GroundVehicle {
public:
    double getSpeed() const override;
    double getRaceTime(double distance) const override;
    double getRestTime(int restCount) const override;
    std::string getName() const override;
};

#endif // ALL_TERRAIN_BOOTS_H
