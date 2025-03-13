#include "MagicCarpet.h"

double MagicCarpet::getSpeed() const { return 10.0; }

double MagicCarpet::getRaceTime(double distance) const {
    double reducedDistance = distance * getDistanceReduction(distance);
    return reducedDistance / getSpeed();
}

double MagicCarpet::getDistanceReduction(double distance) const {
    if (distance < 1000) return 1.0;
    if (distance < 5000) return 0.97;
    if (distance < 10000) return 0.90;
    return 0.95;
}

std::string MagicCarpet::getName() const { return "Ковер самолет"; }