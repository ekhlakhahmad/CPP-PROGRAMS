// Write a program to print given number to one from the user.

#include<iostream>
using namespace std;
class givennoone{
    private:
    int n;

    public:
    void getdata(){
        cout<<"Enter any Number: ";
        cin>>n;
    }

    void putdata(){
        for(int i = n; i >= 1; i--)
            cout<<i<<endl;
    }
};

int main(){
    givennoone obj;
    obj.getdata();
    obj.putdata();
    return 0;
}