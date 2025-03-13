#pragma once
#ifndef RACE_H
#define RACE_H

#include "Vehicle.h"
#include <vector>

class Race {
private:
    double distance;
    std::vector<Vehicle*> vehicles;
public:
    Race(double dist);
    ~Race();
    void registerVehicle(Vehicle* vehicle);
    void displayRegisteredVehicles() const;
    void startRace() const;
};

#endif // RACE_H