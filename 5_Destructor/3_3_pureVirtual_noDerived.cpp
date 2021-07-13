#include <iostream>

class Test
{
public:
    virtual ~Test()=0; // Test now becomes abstract class
};
Test::~Test() { }

int main()
{
    Test p;
    Test* t1 = new Test;
    return 0;
}
