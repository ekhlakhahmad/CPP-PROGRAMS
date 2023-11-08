// Write a program to input marks of Three Subject and find the Total marks and percentage.

#include<iostream>
using namespace std;
class marksheet{
    private:
    int math, comp, eng, total;
    float per;
    public:
    void getdata(){
        cout<<"Enter your Math Marks: ";
        cin>>math;

        cout<<"Enter Your Computer Marks: ";
        cin>>comp;
        
        cout<<"Enter Your English Marks: ";
        cin>>eng;
    }
    void putdata(){
        total = math + comp + eng;
        per = float(total * 100) / 300;
        cout<<"Your total mark is "<<total<<endl;
        cout<<"Percentage is "<<per<<endl;
    }
};
int main(){
    marksheet obj;
    obj.getdata();
    obj.putdata();
    return 0;
}