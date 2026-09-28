#include <iostream>
#include <cstring>
using namespace std;

class Person {
    char name[64];
    int age;
    char address[64];
    float salary;

public:
    Person() {
        strcpy(name, "");
        age = 0;
        strcpy(address, "");
        salary = 0;
    }

    Person(char n[], int a, char ad[], float s) {
        strcpy(name, n);
        age = a;
        strcpy(address, ad);
        salary = s;
    }

    inline int getAge() {
        return age;
    }

    inline void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Person p[10];
    int n, youngest = 0, eldest = 0;

    cout << "Enter number of persons: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        char name[64], address[64];
        int age;
        float salary;

        cout << "\nEnter name: ";
        cin >> ws;
        cin.getline(name, 64);

        cout << "Enter age: ";
        cin >> age;

        cout << "Enter address: ";
        cin >> ws;
        cin.getline(address, 64);

        cout << "Enter salary: ";
        cin >> salary;

        p[i] = Person(name, age, address, salary);
    }

    for (int i = 1; i < n; i++) {
        if (p[i].getAge() < p[youngest].getAge())
            youngest = i;

        if (p[i].getAge() > p[eldest].getAge())
            eldest = i;
    }

    cout << "\nYoungest Person:\n";
    p[youngest].display();

    cout << "\nEldest Person:\n";
    p[eldest].display();

    return 0;
}