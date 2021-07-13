#include<iostream>

using namespace std;

class b {
public:
    b() {
        cout << "Constructing base \n";
    }
};

class d : public b {
public:
    d() {
        cout << "Constructing derived \n";
    }
};

int main(void) {
    d obj;
    return 0;
}