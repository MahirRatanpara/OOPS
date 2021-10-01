#include<iostream>
using namespace std;
#define ll long long
class Employee
{
    public:
    string  Name;
    string Company;
    int Age;

    Employee(string name, string company, int age)
    {
        Name=name;
        Company=company;
        Age=age;
    }

};

int main()
{
    Employee emp1=Employee("Akshya","YT-codebeauty",25);
    cout<<emp1.Name<<endl;
    Employee emp2("Aks","hola",35);
    cout<<emp2.Name<<endl;

}