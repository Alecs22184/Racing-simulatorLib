#include "Camel.h"

double Camel::getSpeed() const { return 10.0; }

double Camel::getRaceTime(double distance) const {
    double moveTime = 30.0;
    double totalTime = 0.0;
    int restCount = 0;

    while (distance > 0) {
        if (distance <= getSpeed() * moveTime) {
            totalTime += distance / getSpeed();
            break;
        }
        totalTime += moveTime;
        distance -= getSpeed() * moveTime;
        totalTime += getRestTime(restCount++);
    }

    return totalTime;
}

double Camel::getRestTime(int restCount) const {
    return restCount == 0 ? 5.0 : 8.0;
}

std::string Camel::getName() const { return "Верблюд"; }