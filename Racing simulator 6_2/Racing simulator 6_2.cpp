// Racing simulator 6_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Race.h"
#include "Camel.h"
#include "FastCamel.h"
#include "Centaur.h"
#include "AllTerrainBoots.h"
#include "MagicCarpet.h"
#include "Eagle.h"
#include "Broomstick.h"
#include <windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::cout << "Добро пожаловать в гоночный симулятор ! " << std::endl;

    char choice;
    int out{};
    do {
        std::cout << " 1.Гонка для наземного транспорта\n 2.Гонка для воздушного транспорта\n 3.Гонка для наземного и воздушного транспорта\n ";
        std::cout << " Выберите тип гонки :";

        int raceType;

        std::cin >> raceType;

        double distance;
        std::cout << "Укажите длину дистанции (она должна быть положительна) : ";
        std::cin >> distance;
        Race race(distance);

        int registeredVehicles = 0;
        std::cout << "Должно быть зарегистрированно хотя бы два транспортных срдедства.\n";
        while (true) {

            if (raceType == 1 || raceType == 3) {
                std::cout << "1. Верблюд\n2. Верблюд-быстроход\n3. Кентавр\n4. Ботинки вездеходы\n";
            }
            if (raceType == 2 || raceType == 3) {
                std::cout << "5. Ковер самолет\n6. Орел\n7. Метла\n0.Закончить регистрацию\n";
            }
            std::cout << "Выберите транспорт или 0 для окончания процесса регистрации :\n";

            int vehicleChoice;
            std::cin >> vehicleChoice;

            if (vehicleChoice == 0)
            {
                if (registeredVehicles < 2)
                {
                    std::cout << "Должно быть зарегистрированно хотя бы два транспортных срдедства." << std::endl;

                    continue;
                }
                break;
            }

            switch (vehicleChoice) {
            case 1:if (raceType != 2) race.registerVehicle(new Camel());std::cout << "Верблюд успешно зарегистрирован " << std::endl; break;
            case 2:if (raceType != 2) race.registerVehicle(new FastCamel());std::cout << "Верблюд-быстроход успешно зарегистрирован " << std::endl; break;
            case 3:if (raceType != 2) race.registerVehicle(new Centaur());std::cout << "Кентавр успешно зарегистрирован " << std::endl; break;
            case 4:if (raceType != 2) race.registerVehicle(new AllTerrainBoots());std::cout << "Ботинки вездеходы успешно зарегистрированы " << std::endl; break;
            case 5:if (raceType != 1) race.registerVehicle(new MagicCarpet());std::cout << "Ковер-самолет успешно зарегистрирован " << std::endl; break;
            case 6:if (raceType != 1) race.registerVehicle(new Eagle());std::cout << "Орел успешно зарегистрирован " << std::endl; break;
            case 7:if (raceType != 1) race.registerVehicle(new Broomstick());std::cout << "Метла успешно зарегистрирована " << std::endl; break;
            default: std::cout << "Попытка зарегистрировать не правильный тип транспортного средства !\n"; continue;
            }
            registeredVehicles++;
        }


        std::cout << (raceType == 1 ? "Гонка для наземного транспорта" : raceType == 2 ? "Гонка для воздушного транспорта " : "Гонка для наземного и воздушного транспорта") << ".";
        std::cout << "Расстояние: " << distance << " km\n";
        std::cout << "Зарегистрированные транспортные средства :";
        race.displayRegisteredVehicles();


        std::cout << "\nСтарт гонки...\n";
        race.startRace();

        std::cout << "1. Провести еще одну гонку \n2. Выйти\nВыберите действие : ";

        std::cin >> out;

    } while (out != 2);

    return 0;
}