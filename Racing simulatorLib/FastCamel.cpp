#include "FastCamel.h"

double FastCamel::getSpeed() const { return 40.0; }

double FastCamel::getRaceTime(double distance) const {
    double moveTime = 10.0;
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

double FastCamel::getRestTime(int restCount) const {
    if (restCount == 0) return 5.0;
    if (restCount == 1) return 6.5;
    return 8.0;
}

std::string FastCamel::getName() const { return "Верблюд-быстроход"; }