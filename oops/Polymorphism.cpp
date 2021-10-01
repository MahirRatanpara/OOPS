// work method shows polymorphism here in the code

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

    virtual void work()
    {
        cout<<Name<<" is doing some work";
    }
};


//child class:parent class
class Developers: public Employee // by default it is private inheritnce that means employee inherted functions can't be accessed outsode developer class. we can make it available by applying public before employee and then we can use the employee function developer objects
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

    void work()
    {
        cout<<Name<<" iswriting code"<<endl;
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
    void work()
    {
        cout<<Name<<" is teaching"<<endl;
    }
};

int main()
{
    Employee emp1;
    emp1=Employee("Akshya","YT-codebeauty",25);
    
    Employee emp2("Aks","hola",35);
   
    //Developer D;//here we need to provide constructor to derived classes as well

    Developers D=Developers("Akshya","YT-codebeauty",25,"c++");

 

    Teacher t=Teacher("mam","jdnf",12,"oop");
    D.work();
    t.work();


    // the most common use of polymorphism is when a parent class reference is used 
    //to refer to a child 

    Employee* e1=&D;// we can initialise it because deep down developer is employee
    Employee* e2=&t;

    e1->work();
    e2->work();
    // now if we make our function virtual  in employee class work 
}

// whenever virtual function is invoked then that function says hey can you check if there is implentation of that function 
// in derived classes then please execute that instead.