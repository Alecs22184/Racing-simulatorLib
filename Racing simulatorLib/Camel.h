#pragma once
#ifdef LIBRARYDYNAMIC_EXPORTS
#define LIBRARY_API __declspec(dllexport)
#else
#define LIBRARY_API __declspec(dllimport)
#endif

//Верблюд


#ifndef CAMEL_H
#define CAMEL_H

#include "GroundVehicle.h"

class Camel : public GroundVehicle {
public:
    double getSpeed() const override;
    double getRaceTime(double distance) const override;
    double getRestTime(int restCount) const override;
    std::string getName() const override;
};

#endif // CAMEL_H