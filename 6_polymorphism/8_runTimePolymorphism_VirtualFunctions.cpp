#include <iostream>

using namespace std;

// Base class
class Shape {
public:
    Shape(int l, int w) {
        length = l;
        width = w;
    } // default constructor

//    comment line 14 and uncomment 15 and see the diff
    virtual int get_Area()
//    int get_area()
    {
        cout << "This is call to parent class area" << endl;
        return 0;
    }

protected:
    int length, width;
};

// Derived class
class Square : public Shape {
public:
    Square(int l = 0, int w = 0)
            : Shape(l, w) {
    } // declaring and initializing derived class
    // constructor
    int get_Area() {
        cout << "Square area: " << length * width << endl;
        return (length * width);
    }
};

// Derived class
class Rectangle : public Shape {
public:
    Rectangle(int l = 0, int w = 0)
            : Shape(l, w) {
    } // declaring and initializing derived class
    // constructor
    int get_Area() {
        cout << "Rectangle area: " << length * width
             << endl;
        return (length * width);
    }
};

int main(void) {
    Shape *s;
    Square sq(5, 5); // making object of child class Square
    Rectangle rec(
            4, 5); // making object of child class Rectangle

    s = &sq;
    s->get_Area();
    s = &rec;
    s->get_Area();

    return 0;
}
