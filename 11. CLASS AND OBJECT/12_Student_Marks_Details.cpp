// Write a program to received marks for a student in three subjects out of 100 each. print the marks along with total, percentage, and final result of the student as for following cateria. if marks are below 40 the result should be fail, 40 to 59 it is pass 60 to 79 it is first, 80 and above marit.

#include <iostream>
using namespace std;

class Student
{
    int marks1, marks2, marks3;
    int total;
    float per;

public:
    void input()
    {
        cout << "Enter three subject marks:";
        cin >> marks1 >> marks2 >> marks3;
    }
    void result()
    {
        total = marks1 + marks2 + marks3;
        per = total / 3;
        cout << "Total Marks is: " << total << endl;
        cout << "Percentage is: " << per << endl;
        if (per <= 40)
        {
            cout << "Fail";
        }
        else if (per >= 40 && per < 59)
        {
            cout << "Pass";
        }
        else if (per >= 60 && per < 80)
        {

            cout << "First";
        }
        else
        {
            cout << "Merit";
        }
    }
};
int main()
{
    Student obj;
    obj.input();
    obj.result();
    return 0;
}