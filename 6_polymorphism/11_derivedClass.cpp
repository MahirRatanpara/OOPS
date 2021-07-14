// C++ program to illustrate
// Base & Derived Class

#include <iostream>
using namespace std;

// Declare Base Class
class Base {
public:
    int a;
};

// Declare Derived Class
class Derived : public Base {
public:
    int b;
};

// Driver Code
int main()
{
    // Initialise a Derived class geeks
    Derived geeks;

    // Assign value to Derived class variable
    geeks.b = 3;

    // Assign value to Base class variable
    // via derived class
    geeks.a = 4;

    cout << "Value from derived class: "
         << geeks.b << endl;

    cout << "Value from base class: "
         << geeks.a << endl;

    return 0;
}
