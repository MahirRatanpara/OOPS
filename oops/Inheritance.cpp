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
    
    string Company;
    int Age;

    protected:// makes available in child class
    string  Name;
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


//child class:parent class
class Developers:Employee // by default it is private inheritnce that means employee inherted functions can't be accessed outsode developer class. we can make it available by applying public before employee and then we can use the employee function developer objects
{
    public:

    string favprogram;
    Developers(string name, string company, int age,string lang)
    :Employee(name,company,age)
    {
        favprogram=lang;
    }

    void fixbug()
    {
        cout<<getname()<<" is fixing bugs";
        cout<<Name<<" is fixing bugs";
    }


};
class Teacher:public Employee
{
    public:
    string Subject;
    Teacher(string name, string company, int age, string subject)
    :Employee(name,company,age)
    {
        Subject=subject;
    }
    
    void PrepareLesson()
    {
        cout<<Name<<" is preparing "<<Subject<<"'s lesson";
    }
};

int main()
{
    Employee emp1;
    emp1=Employee("Akshya","YT-codebeauty",25);
    
    Employee emp2("Aks","hola",35);
   
    //Developer D;//here we need to provide constructor to derived classes as well

    Developers D=Developers("Akshya","YT-codebeauty",25,"c++");

    D.fixbug();

    Teacher t=Teacher("mam","jdnf",12,"oop");
    t.setname("as");
    cout<<t.getname();

}