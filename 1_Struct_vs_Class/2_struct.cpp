#include <stdio.h>

class Base {
public:
    int x;
};

struct Derived : Base { }; // is equilalent to struct Derived : public Base {}

int main()
{
    Derived d;
    d.x = 20; // works fine because inheritance is public
    getchar();
    return 0;
}