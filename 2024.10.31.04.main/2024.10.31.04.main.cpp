#include <iostream>
using namespace std;
class Money {
private:
    int dollars;
    int cents;

public:
    
    explicit Money(int d, int c) : dollars(d), cents(c) {}

    void print() {
        cout << dollars << " долларов " << cents << " центов" << endl;
    }
};

int main() {
    
    Money amount1(10, 50);
    amount1.print();

    Money amount3 = static_cast<Money>(20); 
    amount3.print();



    return 0;
}
