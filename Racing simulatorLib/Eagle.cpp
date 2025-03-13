#include "Eagle.h"

double Eagle::getSpeed() const { return 8.0; }

double Eagle::getRaceTime(double distance) const {
    double reducedDistance = distance * getDistanceReduction(distance);
    return reducedDistance / getSpeed();
}

double Eagle::getDistanceReduction(double distance) const {
    return 0.94;
}

std::string Eagle::getName() const { return "Орел"; }