// Write a program to take input from user and print.

#include<iostream>
#include<cstring>
using namespace std;
struct employee
{
    int id;
    char name[50];
    float salary;
};

int main(){
    struct employee a;
    cout<<"Enter emp_Id: ";
    cin>>a.id;

    cout<<"Enter Emp_Name: ";
    cin>>(a.name);

    cout<<"Enter Emp_Salary: ";
    cin>>a.salary;

    cout<<"\n********************* \n"<<endl;

    cout<<"Employee Id = "<<a.id<<endl;
    cout<<"Employee Name = "<<a.name<<endl;
    cout<<"Employee Salary = "<<a.salary<<endl;

    return 0;

}


    
