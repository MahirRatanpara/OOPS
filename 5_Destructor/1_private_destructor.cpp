//various scenarios where private destructor will or won't give compilation error!!

//Case-1: Not Creating Object

//#include <bits/stdc++.h>
//using namespace std;
//
//class Test {
//private:
//    ~Test() {}
//};
//
//int main() {
//}
//

//Case-2: Creating A Static Object

//#include <iostream>
//using namespace std;
//
//class Test {
//private:
//    ~Test() {}
//};
//int main()
//{
//    Test t;
//}

//Case-3: There is no object being constructed, the program just creates a pointer of type “Test *”, so nothing is destructed.

//#include <iostream>
//using namespace std;
//
//class Test {
//private:
//    ~Test() {}
//};
//int main()
//{
//    Test* t;
//}

//Case-4: When something is created using dynamic memory allocation, it is programmer’s responsibility to delete it.

//#include <iostream>
//using namespace std;
//
//class Test {
//private:
//    ~Test() {}
//};
//int main()
//{
//    Test* t = new Test;
//}


//Case-5: Creating  Dynamic Object using malloc

//#include <bits/stdc++.h>
//using namespace std;
//
//class Test {
//public:
//    Test() // Constructor
//    {
//        cout << "Constructor called\n";
//    }
//
//private:
//    ~Test() // Private Destructor
//    {
//        cout << "Destructor called\n";
//    }
//};
//
//int main()
//{
//    Test* t = (Test*)malloc(sizeof(Test));
//    return 0;
//}


//Case-6: Manual Deletion of the dynamic object will be calling a private destructor.

//#include <iostream>
//using namespace std;
//
//class Test {
//private:
//    ~Test() {}
//};
//int main()
//{
//    Test* t = new Test;
//    delete t;
//}

//Case-7: Creating a friend class can access a private members and thus can handel above cases very well
//#include <iostream>
//
//// A class with private destuctor
//class Test {
//private:
//    ~Test() {}
//public:
//    friend void destructTest(Test*);
//};
//
//// Only this function can destruct objects of Test
//void destructTest(Test* ptr)
//{
//    delete ptr;
//}
//
//int main()
//{
//    // create an object
//    Test* ptr = new Test;
//
//    // destruct the object
//    destructTest(ptr);
//
//    return 0;
//}
