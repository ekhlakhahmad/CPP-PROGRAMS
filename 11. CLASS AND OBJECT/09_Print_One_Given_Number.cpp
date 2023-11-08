// Write a program to print 1 to given number from the user.

#include<iostream>
using namespace std;
class onegivenno{
    private:
    int n;

    public:
    void getdata(){
        cout<<"Enter any Number: ";
        cin>>n;
    }

    void putdata(){
        for(int i = 1; i <= n; i++)
            cout<<i<<endl;
    }
};

int main(){
    onegivenno obj;
    obj.getdata();
    obj.putdata();
    return 0;
}