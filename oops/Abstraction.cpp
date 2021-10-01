#include<iostream>
using namespace std;
#define ll long long

class AbstractEmployee
{
    virtual void Askforpromotion()=0;
};


class Employee:AbstractEmployee
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
    void Askforpromotion()
    {
        if(Age>35)
        {
            cout<<"Promoted"<<endl;
        }
        else
        {
            cout<<"No promotion for you"<<endl;
        }
    }

};

int main()
{
    Employee emp1;
    emp1=Employee("Akshya","YT-codebeauty",25);
    
    Employee emp2("Aks","hola",35);
   
    emp2.Askforpromotion();



}