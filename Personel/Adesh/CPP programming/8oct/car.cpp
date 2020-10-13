#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
class Car
{

public:
    //Name, model, year of manufacturing, color, number of doors, top speed
    string name;
    int year;
    string color;
    int no_door;
    int speed;

    void add()
    {   
        cout <<"Enter Details:\n";
        cout << "Enter Car Name :";
        cin >> name;
        cout << "Enter Car Year of manufacturing :";
        cin >> year;
        cout << "Enter Car Color :";
        cin >> color;
        cout << "Enter Car Number of Doors :";
        cin >> no_door;
        cout << "Enter Car Top Speed :";
        cin >> speed;
    }

    void update(char ch1)
    {
        switch (ch1)
        {

        case 'n':
        case 'N':
            cout << "Enter Name to update:";
            cin >> name;
            cout << name <<"\n";
            break;

        case 'y':
        case 'Y':
            cout << "\nEnter Year of manufacturing:";
            cin >> year;
            break;

        case 'c':
        case 'C':
            cout << "\nEnter color:";
            cin >> color;
            break;

        case 'd':
        case 'D':
            cout << "Enter Number of Doors:";
            cin >> no_door;
            break;

        case 's':
        case 'S':
            cout << "Enter Top Speed:";
            cin >> speed;
        }
        cout << "\nUPDATED\n";
    }

    /*void del()
    {
        delete this ;
    }*/
    void printname()
    {
        
        cout << "Car Name :" << name << endl;
        cout << "Car Year of manufacturing :" << year << endl;
        cout << "Car Color :" << color << endl;
        cout << "Car Number of Doors :" << no_door << endl;
        cout << "Car Top Speed :" << speed << endl;
    }
};

void help()
{
    cout << "1 . Add" << endl;
    cout << "2 . Delete" << endl;
    cout << "3 . Update" << endl;
    cout << "4 . Print" << endl;
    cout << "5 . Exit" << endl;
}
int main()
{

    Car* obj = new Car[10];
    int n, m, i = 0, j, cnt = 0, flag = 0;
    string ch;
    char ch1;
    //help();

    while (1)
    {
        help();
        cout << "Enter Choice:";
        cin >> n;
        switch (n)
        {
        case 1:
            cout << "\nHow Many Record You wanted to Add?";
            cin >> m;
            cnt = cnt + m;
            for (; i < m; i++)
            {
                
                obj[i].add();
            }
            break;

        case 2:
            cout << "Enter Car name to Delete:";
            cin >> ch;

            for (j = 0; j < m; j++)
            {
                if ((obj[j].name).compare(ch) == 0)
                {
                    cout << "in delete";
                    //delete obj[j]);
                   //obj[j].del();
                }
            }
            break;

        case 3:
            cout << "Enter Car name to Update:";
            cin >> ch;
            flag = 0;
            for (j = 0; j < m; j++)
            {
                if ((obj[j].name).compare(ch) == 0)
                {
                    flag = 1;
                    cout << "\nWhich data you want to update:";
                    cout << "\nn Name \ny Year of manufacturing \nc Color\nd Doors\ns Speed";
                    cout << "\nEnter Choice:";
                    cin >> ch1;
                    obj[j].update(ch1);
                }
            }
            if(flag==0)
                cout <<"Invalide Name ! \n";
            break;

        case 4:
            for (j = 0; j < cnt; j++)
            {
                obj[j].printname();
                cout <<endl;
                cout <<endl;
            }
            break;

        case 5:
            exit(0);
        default:
            cout <<"Invalide Choice !";
            help();
            break;
        }
    }
    return 0;
}