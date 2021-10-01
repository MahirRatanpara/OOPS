#include<iostream>
using namespace std;
#define ll long long
class Employee
{
    private:
    string  Name;
    string Company;
    int Age;


    public:
    void setname(string name)
    {
        Name=name;
    }
    string getname()
    {
        return Name;
    }
    void setcompany(string comp)
    {
        Company=comp;
    }
    string getcompany()
    {
        return  Company;
    }
    void setage(int age)
    {
        Age=age;
    }
    int getage()
    {
        return Age;
    }
    Employee()
    {
        Name="";
        Company="";
        Age=-1;
    }

    Employee(string name, string company, int age)
    {
        Name=name;
        Company=company;
        Age=age;
    }

};

int main()
{
    Employee emp1;
    cout<<emp1.getname()<<endl;
    emp1=Employee("Akshya","YT-codebeauty",25);
    
    Employee emp2("Aks","hola",35);
    emp1.setage(39);
    cout<<emp1.getage()<<endl;

}