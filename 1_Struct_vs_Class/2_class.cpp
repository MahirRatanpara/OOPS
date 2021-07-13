#include <stdio.h>

class Base {
public:
    int x;
};

class Derived : Base { }; // is equilalent to class Derived : private Base {}

int main()
{
    Derived d;
    d.x = 20; // works fine because inheritance is public
    getchar();
    return 0;
}