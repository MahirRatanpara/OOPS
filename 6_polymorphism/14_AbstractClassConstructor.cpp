#include<iostream>
using namespace std;

// An abstract class with constructor
class Base
{
protected:
    int x;
public:
    virtual void fun() = 0;
    Base(int i) {
        x = i;
        cout<<"Constructor of base called\n";
    }
};

class Derived: public Base
{
    int y;
public:
    Derived(int i, int j):Base(i) { y = j; }
    void fun() { cout << "x = " << x << ", y = " << y<<'\n'; }
};

int main(void)
{
    Derived d(4, 5);
    d.fun();

//object creation using pointer of base class
    Base *ptr=new Derived(6,7);
    ptr->fun();
    return 0;
}
