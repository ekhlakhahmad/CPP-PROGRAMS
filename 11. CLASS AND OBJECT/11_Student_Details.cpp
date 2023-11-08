// Write a program to received marks for a student in three subjects out of 100 each. print the marks along with total, percentage, and final result of the student as for following cateria. if marks are below 40 the result should be fail, 40 to 59 it is pass 60 to 79 it is first, 80 and above marit.

#include <iostream>
using namespace std;

class Student
{
    string name;
    int reg;
    int marks[3];
    int total = 0;
    float percentage = 0;

public:
    void getDetails()
    {
        cout << "Enter the name of the student : " << endl;
        cin >> name;
        cout << "Enter the registration number : " << endl;
        cin >> reg;
        for (int i = 0; i < 3; i++)
        {
            cout << "Enter the marks for subject : " << i + 1 << endl;
            cin >> marks[i];
        }
    }
    void showDetails()
    {
        cout << "Name of the student is : " << name << endl;
        cout << "Registration number of the student is : " << reg << endl;
        for (int i = 0; i < 3; i++)
        {
            total += marks[i];
        }
        cout << "Total marks : " << total << endl;
        percentage = total / 3;
        cout << "Percentage of the student : " << percentage << endl;
        if (percentage < 40)
        {
            cout << "Student is having less than 40 percentage,\nhe is failed!" << endl;
        }
        else if (percentage > 40 && percentage < 59)
        {
            cout << "Student is having more than 40 percentage but \nhe is having less than 59, he has passed!" << endl;
        }
        else if (percentage > 60 && percentage < 79)
        {
            cout << "Student is having more than 60 percentage but \nhe is having less than 79, he is First!" << endl;
        }
        else
        {
            cout << "Student is having more than 80 percentage he is merit!" << endl;
        }
    }
};

int main()
{
    Student s1;
    s1.getDetails();
    s1.showDetails();
    return 0;
}