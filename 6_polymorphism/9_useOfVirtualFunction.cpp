//Consider an employee management software for an organization.
//Let the code has a simple base class Employee ,
// the class contains virtual functions like raiseSalary(), transfer(), promote(), etc.
// Different types of employees like Manager, Engineer, etc. may have their own implementations
// of the virtual functions present in base class Employee.

#include <iostream>

using namespace std;

class Employee {
public:
    virtual void raiseSalary()
    {
        /* common raise salary code */
    }

    virtual void promote() { /* common promote code */ }
};

class Manager : public Employee {
    virtual void raiseSalary()
    {
        /* Manager specific raise salary code, may contain
        increment of manager specific incentives*/
    }

    virtual void promote()
    {
        /* Manager specific promote */
    }
};

// Similarly, there may be other types of employees

// We need a very simple function
// to increment the salary of all employees
// Note that emp[] is an array of pointers
// and actual pointed objects can
// be any type of employees.
// This function should ideally
// be in a class like Organization,
// we have made it global to keep things simple
void globalRaiseSalary(Employee* emp[], int n)
{
    for (int i = 0; i < n; i++)

        // Polymorphic Call: Calls raiseSalary()
        // according to the actual object, not
        // according to the type of pointer
        emp[i]->raiseSalary();
}


int main(void) {

    return 0;
}
