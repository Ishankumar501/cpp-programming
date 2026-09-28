#include <iostream>
#include <cstring>
using namespace std;

class Person {
    char name[64];
    int age;
    char address[64];
    float basic, hra, da, total;

public:
    Person(char n[], int a, char ad[], float b, float h, float d) {
        strcpy(name, n);
        age = a;
        strcpy(address, ad);
        basic = b;
        hra = h;
        da = d;
        total = basic + hra + da;
    }

    void salarySlip() {
        cout << "\n========== SALARY SLIP ==========\n";
        cout << "Name       : " << name << endl;
        cout << "Age        : " << age << endl;
        cout << "Address    : " << address << endl;
        cout << "Basic      : " << basic << endl;
        cout << "HRA        : " << hra << endl;
        cout << "DA         : " << da << endl;
        cout << "Total Salary: " << total << endl;
        cout << "=================================\n";
    }
};

int main() {
    char name[64], address[64];
    int age;
    float basic, hra, da;

    cout << "Enter Name: ";
    cin.getline(name, 64);

    cout << "Enter Age: ";
    cin >> age;

    cin.ignore();

    cout << "Enter Address: ";
    cin.getline(address, 64);

    cout << "Enter Basic Salary: ";
    cin >> basic;

    cout << "Enter HRA: ";
    cin >> hra;

    cout << "Enter DA: ";
    cin >> da;

    Person p(name, age, address, basic, hra, da);

    p.salarySlip();

    return 0;
}