#include <bits/stdc++.h>

using namespace std;

class ClassfunctionAsFriend {
public:
    int a = 1;
    int b = 2;

public:
    int AtimePplusBtimesP();
};

class ClassAsFriend {
public:
    int z = 9;
public:
    int mulPandZ();
};

class memfun {
public:
    int x;
    int y;
private:
    int p = 10;
public:
    int multiply(int z) {
        return x * y * z;
    }

    //static function and it can't access any other member of the class
    static void additionXY() {
        cout << "Inside a static Function";
    }

    //const function
    void constFun(int x1, int y1) const {
//        x += x1;
//        y += y1;

        cout << "Changes not done because it's a constant function!!" << endl;

    }

    //making a friend function
    friend void multByPrivate(memfun &obj);

    //making class function as friend
    friend int ClassfunctionAsFriend::AtimePplusBtimesP();

    //whole class as friend
    friend ClassAsFriend;
};

int ClassfunctionAsFriend::AtimePplusBtimesP() {
    memfun ob;
    int lol = ob.p;
    return a * lol + b * lol;
}

int ClassAsFriend::mulPandZ() {
    memfun ob;
    return ob.p * z;
};

void multByPrivate(memfun &obj) {
    obj.x *= obj.p;
    obj.y *= obj.p;
}

int main() {
    memfun obj;
    obj.x = 2;
    obj.y = 3;
    //calling simple member function
    cout << obj.multiply(4) << endl;
    //calling static member function using object
    obj.additionXY();
    cout << endl;
    //calling static member function using class
    memfun::additionXY();
    cout << endl;
    //calling static function
    obj.constFun(2, 1);
    cout << obj.x << " " << obj.y << endl;
    //using friend function of our class
    multByPrivate(obj);
    cout << obj.x << " " << obj.y << endl;

    //class function as a friend
    ClassfunctionAsFriend test;
    cout << test.AtimePplusBtimesP() << endl;

    //class whole as a friend
    ClassAsFriend test1;
    cout << test1.mulPandZ() << endl;
}