#include "Broomstick.h"

double Broomstick::getSpeed() const { return 20.0; }

double Broomstick::getRaceTime(double distance) const {
    double reducedDistance = distance * getDistanceReduction(distance);
    return reducedDistance / getSpeed();
}

double Broomstick::getDistanceReduction(double distance) const {
    double reductionFactor{};
    reductionFactor = 1.0 - (distance) / 1000 * 0.01;


    return reductionFactor;
}

std::string Broomstick::getName() const { return "Метла"; }