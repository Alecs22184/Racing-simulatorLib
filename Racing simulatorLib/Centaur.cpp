#include "Centaur.h"

double Centaur::getSpeed() const { return 15.0; }

double Centaur::getRaceTime(double distance) const {
    double moveTime = 8.0;
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

double Centaur::getRestTime(int restCount) const {
    return 2.0;
}

std::string Centaur::getName() const { return "Кентавр"; }