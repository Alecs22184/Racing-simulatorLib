#pragma once
#pragma once

#ifdef LIBRARYDYNAMIC_EXPORTS
#define LIBRARY_API __declspec(dllexport)
#else
#define LIBRARY_API __declspec(dllimport)
#endif
//Базовый класс


#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

class Vehicle {
public:
    virtual ~Vehicle() = default;
    virtual double getSpeed() const = 0;
    virtual double getRaceTime(double distance) const = 0;
    virtual std::string getName() const = 0;
};

#endif // VEHICLE_H