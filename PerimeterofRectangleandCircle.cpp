#include <iostream>
using namespace std;

class Shape {
    float radius, length, width;

public:
    Shape() {
        radius = 0;
        length = 0;
        width = 0;
    }

    Shape(float r) {
        radius = r;
    }

    Shape(float l, float w) {
        length = l;
        width = w;
    }

    void circlePerimeter() {
        cout << "Perimeter of Circle = " << 2 * 3.14159 * radius << endl;
    }

    void rectanglePerimeter() {
        cout << "Perimeter of Rectangle = " << 2 * (length + width) << endl;
    }

    ~Shape() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    float radius, length, width;

    cout << "Enter radius of circle: ";
    cin >> radius;

    Shape circle(radius);
    circle.circlePerimeter();

    cout << "Enter length of rectangle: ";
    cin >> length;

    cout << "Enter width of rectangle: ";
    cin >> width;

    Shape rectangle(length, width);
    rectangle.rectanglePerimeter();

    return 0;
}