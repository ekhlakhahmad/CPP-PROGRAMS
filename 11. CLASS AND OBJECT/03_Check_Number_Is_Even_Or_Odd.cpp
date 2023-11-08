//Write a program to Check the number is Even number or Odd Number.

#include<iostream>
using namespace std;
class check{
	int a;
	public:
	void read();
	
	void op();
	
	
};
void check::read()
	{
		cout<<"Enter any Number: ";
		cin>>a;
	}
void check::op()
	{
		if(a % 2== 0)
			cout<<"Even number"<<endl;
		else
			cout<<"Odd number"<<endl;
	}
int main()
{
	check ob;
	ob.read();
	ob.op();
	return 0;
}