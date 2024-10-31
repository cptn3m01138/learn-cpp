#include <iostream>
using namespace std;

class Shape {
public:
    virtual double getArea() = 0; 
    virtual void printInfo() = 0; 
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double getArea() override {
        return 3.14159 * radius * radius;
    }

    void printInfo() override {
        cout << "Circle with radius " << radius << endl;
    }
};


class Square : public Shape {
private:
    double side;

public:
    Square(double s) : side(s) {}

    double getArea() override {
        return side * side;
    }

    void printInfo() override {
        cout << "Square with side " << side << endl;
    }
};

int main() {
    Shape* shapes[] = { new Circle(5), new Square(4) };

    for (int i = 0; i < 2; ++i) {
        cout << "Area of ​​the figure " << i + 1 << ": " << shapes[i]->getArea() << endl;
    }

    for (int i = 0; i < 2; ++i) {
        shapes[i]->printInfo();
    }

    delete shapes[0];
    delete shapes[1];

    return 0;
}
