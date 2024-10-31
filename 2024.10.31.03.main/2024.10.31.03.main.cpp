#include <iostream>
using namespace std;
class Rectangle {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double getArea() {
        return width * height;
    }

    void printInfo() {
        cout << "Rectangle with width " << width << " and height " << height << endl;
    }
};

int main() {
    Rectangle rect(5.0, 3.0);

    rect.printInfo();

    cout << "acreage : " << rect.getArea() << endl;

    return 0;
}
