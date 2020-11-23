#include<iostream>

using namespace std;
union student
{
    char name[20];
    int roll_no;
    float marks;
};
int main()
{
     student s;

    cout << "Enter full Name:";
    cin >> s.name;
    cout << "Enter roll_no:";
    cin >> s.roll_no;
    cout << "Enter marks:";
    cin >> s.marks;

    cout<<"\n\nstudent Name:"<<s.name;
    cout<<"\n\nstudent roll_no:"<<s.roll_no;
    cout<<"\n\nstudent marks:"<<s.marks;
    
    return 0;
};