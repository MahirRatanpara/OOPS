// C++ program to illustrate
// Constructor overloading
#include <iostream>

using namespace std;

class construct {

public:
    float area;

    // Constructor with no parameters
    construct() {
        area = 0;
    }

    construct(int a, float b) {
        area = a*b;
    }

    // Constructor with two parameters
    construct(int a, int b) {
        area = a * b;
    }

    void disp() {
        cout << area << endl;
    }
};

int main() {
    // Constructor Overloading
    // with three different constructors
    // of class name
    //it will recognise it with the help of difference in arguments
    construct o;
    construct o1(10, (float )2);
    construct o2(10, 20);

    o.disp();
    o1.disp();
    o2.disp();
    return 1;
}
