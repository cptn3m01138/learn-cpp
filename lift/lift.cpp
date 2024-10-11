#include <iostream>
#include <vector>
using namespace std;

class Lift {
private:
    int lowerFloor;
    int upperFloor;

public:
    // Конструктор
    Lift(int lower, int upper) : lowerFloor(lower), upperFloor(upper) {
        if (lower > upper) {
            throw invalid_argument("The lower floor cannot be larger than the upper one");
        }
    }

    // Геттер для нижнего этажа
    int getLowerFloor() const {
        return lowerFloor;
    }

    // Геттер для верхнего этажа
    int getUpperFloor() const {
        return upperFloor;
    }

    // Сеттер для нижнего этажа
    void setLowerFloor(int lower) {
        if (lower > upperFloor) {
            throw invalid_argument("The lower floor cannot be larger than the upper one");
        }
        lowerFloor = lower;
    }

    // Сеттер для верхнего этажа
    void setUpperFloor(int upper) {
        if (upper < lowerFloor) {
            throw invalid_argument("The top floor cannot be smaller than the bottom floor");
        }
        upperFloor = upper;
    }

    // Метод для работы с пользователем
    void operate() {
        while (true) {
            int currentFloor, destinationFloor;

            cout << "What floor are you on? (0 to exit): ";
            cin >> currentFloor;

            // Выход из программы
            if (currentFloor == 0) {
                break;
            }

            if (currentFloor < lowerFloor || currentFloor > upperFloor) {
                cout << "Incorrect floor. Please select floor from "
                    << lowerFloor << " to " << upperFloor << "." << endl;
                continue;
            }

            cout << "Which floor do you need? ";
            cin >> destinationFloor;

            if (destinationFloor < lowerFloor || destinationFloor > upperFloor) {
                cout << "Incorrect floor. Please select floor from "
                    << lowerFloor << " to " << upperFloor << "." << endl;
                continue;
            }

            // Обработка движения лифта
            if (currentFloor == destinationFloor) {
                cout << "You are already on this floor." << endl;
            }
            else {
                cout << "The elevator passes the floors: ";
                if (currentFloor < destinationFloor) {
                    for (int i = currentFloor + 1; i <= destinationFloor; ++i) {
                        cout << i << (i < destinationFloor ? ", " : "");
                    }
                }
                else {
                    for (int i = currentFloor - 1; i >= destinationFloor; --i) {
                        cout << i << (i > destinationFloor ? ", " : "");
                    }
                }
                cout << endl;
            }
        }
    }
};



int main() {
    try {
        Lift myLift(1, 10);
        myLift.operate(); 
    }
    catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
