#include <bits/stdc++.h>
using namespace std;
struct Test {

    int x; // x is public
};
int main()
{
    Test t;
    t.x = 20; // works fine because x is public
    getchar();
    return 0;
}