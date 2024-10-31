#include <iostream>
using namespace std;
class Calculator {
private:
    int firstNumber;
    int secondNumber;

public:
    // Конструктор по умолчанию
    Calculator() : firstNumber(0), secondNumber(0) {}

    // Методы для установки чисел
    void setFirstNumber(int number) {
        firstNumber = number;
    }

    void setSecondNumber(int number) {
        secondNumber = number;
    }

    // Методы для вычислений
    int add() {
        return firstNumber + secondNumber;
    }

    int subtract() {
        return firstNumber - secondNumber;
    }

    int multiply() {
        return firstNumber * secondNumber;
    }

    double divide() {
        if (secondNumber == 0) {
            cerr << "Error: Division by zero!" << endl;
            return 0.0;
        }
        else {
            return static_cast<double>(firstNumber) / secondNumber;
        }
    }
};

int main() {
    Calculator calculator;
    calculator.setFirstNumber(5);
    calculator.setSecondNumber(3);


    cout << "Sum: " << calculator.add() << endl;
    cout << "Difference: " << calculator.subtract() << endl;
    cout << "Product: " << calculator.multiply() << endl;
    cout << "Dividing: " << calculator.divide() << endl;

    return 0;
}
