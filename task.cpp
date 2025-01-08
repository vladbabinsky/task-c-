#include <iostream>
using namespace std;

// Task 1: Structure for arithmetic operations
struct Arithmetic {
    double a;
    double b;
};

// Task 2: Structure "Car"
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
    // Task 1
    Arithmetic arith;
    cout << "Enter two numbers: ";
    cin >> arith.a >> arith.b;

    cout << "Sum: " << arith.a + arith.b << endl;
    cout << "Difference: " << arith.a - arith.b << endl;
    cout << "Multiplication: " << arith.a * arith.b << endl;
    if (arith.b != 0) {
        cout << "Division: " << arith.a / arith.b << endl;
    }
    else {
        cout << "Error: Division by zero!" << endl;
    }

    // Task 2
    Car car;

    cout << "Enter the length of the car: ";
    cin >> car.length;

    cout << "Enter the clearance of the car: ";
    cin >> car.clearance;

    cout << "Enter the engine volume: ";
    cin >> car.engineVolume;

    cout << "Enter the engine power: ";
    cin >> car.enginePower;

    cout << "Enter the wheel diameter: ";
    cin >> car.wheelDiameter;

    cout << "Enter the color of the car: ";
    cin >> car.color;

    cout << "Enter the type of transmission: ";
    cin >> car.transmission;

    cout << "\nCar details:" << endl;
    cout << "Length: " << car.length << " m" << endl;
    cout << "Clearance: " << car.clearance << " cm" << endl;
    cout << "Engine volume: " << car.engineVolume << " L" << endl;
    cout << "Engine power: " << car.enginePower << " HP" << endl;
    cout << "Wheel diameter: " << car.wheelDiameter << " inches" << endl;
    cout << "Color: " << car.color << endl;
    cout << "Transmission type: " << car.transmission << endl;
}
