#include "Race.h"



#include <iostream>
#include <algorithm>

Race::Race(double dist) : distance(dist) {}

Race::~Race() {
    for (auto vehicle : vehicles) {
        delete vehicle;
    }
}

void Race::registerVehicle(Vehicle* vehicle) {
    vehicles.push_back(vehicle);
}

void Race::displayRegisteredVehicles() const {
    for (const auto& vehicle : vehicles) {
        std::cout << vehicle->getName() << " ";
    }
}

void Race::startRace() const {
    std::vector<std::pair<std::string, double>> results;

    for (const auto& vehicle : vehicles) {
        results.push_back({ vehicle->getName(), vehicle->getRaceTime(distance) });
    }

    std::sort(results.begin(), results.end(),
        [](const auto& a, const auto& b) { return a.second < b.second; });

    std::cout << "\nРезультаты гонки :\n";
    for (const auto& result : results) {
        std::cout << result.first << " - " << result.second << " ч\n";
    }
}
