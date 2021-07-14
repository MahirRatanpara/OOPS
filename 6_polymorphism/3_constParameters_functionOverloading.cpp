// C++ allows functions to be overloaded on the basis of const-ness of parameters only
// if the const parameter is a reference or a pointer. That is why the program 1 failed
// in compilation, but the program 2 worked fine. This rule actually makes sense.
// In program 1, the parameter ‘i’ is passed by value, so ‘i’ in fun() is a copy of ‘i’ in main().
// Hence fun() cannot modify ‘i’ of main(). Therefore, it doesn’t matter whether ‘i’ is received
// as a const parameter or normal parameter.
// When we pass by reference or pointer, we can modify the value referred or pointed,
// so we can have two versions of a function, one which can modify the referred or pointed value, other which can not.


// PROGRAM 1 (Fails in compilation)
#include<iostream>

using namespace std;

void fun(const int i) {
    cout << "fun(const int) called ";
}

void fun(int i) {
    cout << "fun(int ) called ";
}

int main() {
    const int i = 10;
    fun(i);
    return 0;
}


// PROGRAM 2 (Compiles and runs fine)
//#include<iostream>
//
//using namespace std;
//
//void fun(char *a) {
//    cout << "non-const fun() " << a;
//}
//
//void fun(const char *a) {
//    cout << "const fun() " << a;
//}
//
//int main() {
//    const char *ptr = "GeeksforGeeks";
//    fun(ptr);
//    return 0;
//}
//


// PROGRAM 2 (Compiles and runs fine)
//#include<iostream>
//
//using namespace std;
//
//void fun(const int &i) {
//    cout << "fun(const int &) called ";
//}
//
//void fun(int &i) {
//    cout << "fun(int &) called ";
//}
//
//int main() {
//    const int i = 10;
//    fun(i);
//    return 0;
//}
