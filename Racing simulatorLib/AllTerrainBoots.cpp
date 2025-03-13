#include "AllTerrainBoots.h"

double AllTerrainBoots::getSpeed() const { return 6.0; }

double AllTerrainBoots::getRaceTime(double distance) const {
    double moveTime = 60.0;
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

double AllTerrainBoots::getRestTime(int restCount) const {
    return restCount == 0 ? 10.0 : 5.0;
}

std::string AllTerrainBoots::getName() const { return "Ботинки вездеходы"; }