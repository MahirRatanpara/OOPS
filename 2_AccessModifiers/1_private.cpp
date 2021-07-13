#include <bits/stdc++.h>
using namespace std;

class keepsPrivate{
private:
    int x;
    int y;
};

int main()
{
    keepsPrivate objA;
//    can't compile because the x in class is private and can't be accessed outside the class directly.
    cout<<objA.x;
}