#pragma once
#ifdef LIBRARYDYNAMIC_EXPORTS
#define LIBRARY_API __declspec(dllexport)
#else
#define LIBRARY_API __declspec(dllimport)
#endif

//ֱûסענûי גונבכ‏ה

#ifndef FAST_CAMEL_H
#define FAST_CAMEL_H

#include "GroundVehicle.h"

class FastCamel : public GroundVehicle {
public:
    double getSpeed() const override;
    double getRaceTime(double distance) const override;
    double getRestTime(int restCount) const override;
    std::string getName() const override;
};

#endif // FAST_CAMEL_H