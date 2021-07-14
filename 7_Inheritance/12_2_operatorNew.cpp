// CPP program to illustrate
// use of operator new
#include<iostream>
#include<stdlib.h>

using namespace std;

class car
{
    string name;
    int num;

public:

    car(string a, int n)
    {
        cout << "Constructor called" << endl;
        this->name = a;
        this->num = n;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Num: " << num << endl;
    }

    void *operator new(size_t size)
    {
        cout << "new operator overloaded" << endl;
        void *p = malloc(size);
        return p;
    }

    void operator delete(void *ptr)
    {
        cout << "delete operator overloaded" << endl;
        free(ptr);
    }
};

int main()
{
    car *p = new car("HYUNDAI", 2012);
    p->display();
    delete p;
}
