// Write a program to Find the Area of Rectangle

#include<iostream>
using namespace std;
class area{
    private:
    float l, b, a;
    
    public:
    void rect(){
        cout<<"Enter length and breadth of rectangle: ";
        cin>>l>>b;
    }
    
    void find(){
        a=l*b;
        cout<<"area of rectangle = "<<a<<endl;
    }
    friend void sum(area);

    
};
int main(){
    area obj;
    obj.rect();
    obj.find();
    return 0;
}