#include <iostream>
using namespace std;

// Завдання 1: Структура для арифметичних операцій
struct Arithmetic {
    double a;
    double b;
};

// Завдання 2: Структура "Автомобіль"
struct Car {
    double length;
    double clearance;
    double engineVolume;
    double enginePower;
    double wheelDiameter;
    char color[20];
    char transmission[20];
};

int main() {
    // Завдання 1
    Arithmetic arith;
    cout << "Введіть два числа: ";
    cin >> arith.a >> arith.b;

    cout << "Сума: " << arith.a + arith.b << endl;
    cout << "Різниця: " << arith.a - arith.b << endl;
    cout << "Множення: " << arith.a * arith.b << endl;
    if (arith.b != 0) {
        cout << "Ділення: " << arith.a / arith.b << endl;
    }
    else {
        cout << "Помилка: ділення на нуль!" << endl;
    }

    // Завдання 2
    Car car;

    cout << "Введіть довжину автомобіля: ";
    cin >> car.length;

    cout << "Введіть кліренс автомобіля: ";
    cin >> car.clearance;

    cout << "Введіть об'єм двигуна: ";
    cin >> car.engineVolume;

    cout << "Введіть потужність двигуна: ";
    cin >> car.enginePower;

    cout << "Введіть діаметр коліс: ";
    cin >> car.wheelDiameter;

    cout << "Введіть колір автомобіля: ";
    cin >> car.color;

    cout << "Введіть тип коробки передач: ";
    cin >> car.transmission;

    cout << "\nАвтомобіль:" << endl;
    cout << "Довжина: " << car.length << " м" << endl;
    cout << "Кліренс: " << car.clearance << " см" << endl;
    cout << "Об'єм двигуна: " << car.engineVolume << " л" << endl;
    cout << "Потужність двигуна: " << car.enginePower << " к.с." << endl;
    cout << "Діаметр коліс: " << car.wheelDiameter << " дюймів" << endl;
    cout << "Колір: " << car.color << endl;
    cout << "Тип коробки передач: " << car.transmission << endl;
}
