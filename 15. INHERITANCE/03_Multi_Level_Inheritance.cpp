// Write a program to input Roll No, Subject-1, Subject-2, and Add Total marks then print using Multi-level Inheritance.

#include<iostream>
#include<cstring>
using namespace std;
class student{
    protected:
    int roll;

    public:
    void getroll(){
        cout<<"Enter Roll Number: ";
        cin>>roll;
    }

    void putroll(){
        cout<<"Your Roll Number is "<<roll<<endl;
    }
};

class name : public student{
    protected:
    char n[50];

    public:
    void St_name(){
        cout<<"Enter Your Name : ";
        cin>>n;
    }

    void print(){
        cout<<"Your Name is "<<n<<endl;
    }
};

class test : public name{
    protected:
    int sub1, sub2;

    public:
    void getmarks(){
        cout<<"Enter Marks One : ";
        cin>>sub1;
        cout<<"Enter Marks Two : ";
        cin>>sub2;
    }

    void putmarks(){
        cout<<"Total Marks = "<<sub1 + sub2<<endl;
    }
};

class result : public test{
    float total;

    public:
    void display(){
        total = sub1 + sub2;
        putroll();
        print();
        cout<<"Total Marks = "<<total;
    }
};

int main(){
    result obj;
    obj.getroll();
    obj.St_name();
    obj.getmarks();
    cout<<"\n*** STUDENT DETAILS ***"<<endl;
    obj.display();

    return 0;
}