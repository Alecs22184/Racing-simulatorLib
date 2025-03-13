#pragma once
#ifdef LIBRARYDYNAMIC_EXPORTS
#define LIBRARY_API __declspec(dllexport)
#else
#define LIBRARY_API __declspec(dllimport)
#endif
//(Кентавр)


#ifndef CENTAUR_H
#define CENTAUR_H

#include "GroundVehicle.h"

class Centaur : public GroundVehicle {
public:
    double getSpeed() const override;
    double getRaceTime(double distance) const override;
    double getRestTime(int restCount) const override;
    std::string getName() const override;
};

#endif // CENTAUR_H