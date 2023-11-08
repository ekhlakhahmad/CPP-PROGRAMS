// Write a program to Add three subject marks using Hybrid Inheritance.

#include<iostream>
using namespace std;
class student{
    protected:
    int roll;

    public:
    void getroll(){
        cout<<"Enter Roll No.: ";
        cin>>roll;
    }

    void putroll(){
        cout<<"Your Roll Number is "<<roll<<endl;
    }
};

class test : public student{
    protected:
    float sub1, sub2, total;

    public:
    void getdata(){
        cout<<"Enter First mark = ";
        cin>>sub1;
        cout<<"Enter Second mark = ";
        cin>>sub2;
    }

    void putdata(){
        total = sub1 + sub2;
    }
};

class extraSub{
    protected:
    float sub3;

    public:
    void input(){
        cout<<"Enter Extra Subject marks = ";
        cin>>sub3;
    }
};

class result : public test, public extraSub{
    float full;

    public:
    void display(){
        full = sub1 + sub2 + sub3;
        putdata();
        putroll();
        cout<<"Your Full Marks = "<<full<<endl;
    }
};

int main(){
    result obj;
    obj.getroll();
    obj.getdata();
    obj.input();
    obj.display();

    return 0;
}