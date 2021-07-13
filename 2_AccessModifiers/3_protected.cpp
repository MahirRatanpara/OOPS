#include <bits/stdc++.h>
using namespace std;

class keepsPrivate{
protected:
    int x;
    int y;
};


int main()
{
    keepsPrivate objA;
//    compile time error because only that base class and all its childrens
    cout<<objA.x;


}