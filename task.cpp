#include <iostream>
using namespace std;

// �������� 1: ��������� ��� ������������ ��������
struct Arithmetic {
    double a;
    double b;
};

// �������� 2: ��������� "���������"
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
    // �������� 1
    Arithmetic arith;
    cout << "������ ��� �����: ";
    cin >> arith.a >> arith.b;

    cout << "����: " << arith.a + arith.b << endl;
    cout << "г�����: " << arith.a - arith.b << endl;
    cout << "��������: " << arith.a * arith.b << endl;
    if (arith.b != 0) {
        cout << "ĳ�����: " << arith.a / arith.b << endl;
    }
    else {
        cout << "�������: ������ �� ����!" << endl;
    }

    // �������� 2
    Car car;

    cout << "������ ������� ���������: ";
    cin >> car.length;

    cout << "������ ������ ���������: ";
    cin >> car.clearance;

    cout << "������ ��'�� �������: ";
    cin >> car.engineVolume;

    cout << "������ ��������� �������: ";
    cin >> car.enginePower;

    cout << "������ ������ ����: ";
    cin >> car.wheelDiameter;

    cout << "������ ���� ���������: ";
    cin >> car.color;

    cout << "������ ��� ������� �������: ";
    cin >> car.transmission;

    cout << "\n���������:" << endl;
    cout << "�������: " << car.length << " �" << endl;
    cout << "������: " << car.clearance << " ��" << endl;
    cout << "��'�� �������: " << car.engineVolume << " �" << endl;
    cout << "��������� �������: " << car.enginePower << " �.�." << endl;
    cout << "ĳ����� ����: " << car.wheelDiameter << " �����" << endl;
    cout << "����: " << car.color << endl;
    cout << "��� ������� �������: " << car.transmission << endl;
}
