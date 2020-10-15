#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Animal
{
private:
    /* data */
public:
    Animal(/* args */) {}
    ~Animal() {}
};

class Mammal : public Animal
{
private:
    string name;
    string color;
    int legs;

public:
    Mammal(/* args */) {}
    void create()
    {
        cout << "Enter Name :";
        cin >> name;
        cout << "Enter color:";
        cin >> color;
        cout << "Enter legs:";
        cin >> legs;
    }

    void update(int n)
    {
        switch (n)
        {

        case 1:
            cout << "Enter Name to update:";
            cin >> name;
            cout << name << "\n";
            break;

        case 2:
            cout << "\nEnter color:";
            cin >> color;
            break;

        case 3:
            cout << "\nEnter legs:";
            cin >> legs;
            break;

        default:
            cout << "\nInvalid Option !\n";
            break;
        }
        cout << "\nUPDATED\n";
    }

    void print()
    {
        cout << "Name :" << name << endl;
        cout << "Color:" << color << endl;
        cout << "Legs:" << legs << endl;
    }
    ~Mammal() {}
};

class Bird : public Animal
{
private:
    string name;
    string color;
    int egg;

public:
    Bird(/* args */) {}
    void create()
    {
        cout << "Enter Name :";
        cin >> name; 
        cout << "Enter color:";
        cin >> color;
        cout << "Enter egg:";
        cin >> egg;
    }

    void update(int n)
    {
        switch (n)
        {

        case 1:
            cout << "Enter Name to update:";
            cin >> name;
            cout << name << "\n";
            break;

        case 2:
            cout << "\nEnter color:";
            cin >> color;
            break;

        case 3:
            cout << "\nEnter Eggs:";
            cin >> egg;
            break;

        default:
            cout << "\nInvalid Option !\n";
            break;
        }
        cout << "\nUPDATED\n";
    }

    void print()
    {
        cout << "Name :" << name << endl;
        cout << "Color:" << color << endl;
        cout << "Egg:" << egg << endl;
    }

    ~Bird() {}
};

class Dog : public Mammal
{
private:
    
    string breed;

public:
    int id;
    Dog() {}
    void create()
    {
        cout <<"Enter id:";
        cin>>id;
        Mammal::create();
        cout << "Enter Breed :";
        cin >> breed;
    }

    void update(int n)
    {
        if (n < 4)
        {
            Mammal::update(n);
        }

        else if (n == 4)
        {
            cout << "Enter Breed:";
            cin >> breed;
            cout << "\nUPDATED\n";
        }

        else
            cout << "\nInvalid Option !\n";
    }

    void print()
    {
        cout << "ID :" << id << endl;
        Mammal::print();
        cout << "Breed :" << breed << endl;
    }
    ~Dog() {}
};

class Cat : public Mammal
{
private:
    string breed;

public:
    int id;
    Cat() {}
    void create()
    {
        cout <<"Enter id:";
        cin>>id;
        Mammal::create();
        cout << "Enter Breed :";
        cin >> breed;
    }

    void update(int n)
    {
        if (n < 4)
        {
            Mammal::update(n);
        }

        else if (n == 4)
        {
            cout << "Enter Breed:";
            cin >> breed;
            cout << "\nUPDATED\n";
        }

        else
            cout << "\nInvalid Option !\n";
    }

    void print()
    {
        cout << "ID :" << id << endl;
        Mammal::print();
        cout << "Breed :" << breed << endl;
    }
    ~Cat() {}
};

class Lion : public Mammal
{
private:
    string breed;

public:
    int id;
    Lion() {}
    void create()
    {
        cout <<"Enter id:";
        cin>>id;
        Mammal::create();
        cout << "Enter Breed :";
        cin >> breed;
    }

    void update(int n)
    {
        if (n < 4)
        {
            Mammal::update(n);
        }

        else if (n == 4)
        {
            cout << "Enter Breed:";
            cin >> breed;
            cout << "\nUPDATED\n";
        }

        else
            cout << "\nInvalid Option !\n";
    }

    void print()
    {
        cout << "ID :" << id << endl;
        Mammal::print();
        cout << "Breed :" << breed << endl;
    }
    ~Lion() {}
};

class Peocock : public Bird
{
private:
    int fly_high;

public:
    int id;
    Peocock() {}
    void create()
    {
        cout <<"Enter id:";
        cin>>id;
        Bird::create();
        cout << "Enter Flying Hight :";
        cin >> fly_high;
    }

    void update(int n)
    {
        if (n < 4)
        {
            Bird::update(n);
        }

        else if (n == 4)
        {
            cout << "Enter Hight of flying:";
            cin >> fly_high;
            cout << "\nUPDATED\n";
        }

        else
            cout << "\nInvalid Option !\n";
    }
    void print()
    {
        cout << "ID :" << id << endl;
        Bird::print();
        cout << "Flying Hight :" << fly_high << endl;
    }
    ~Peocock() {}
};

class Crow : public Bird
{
private:
    int fly_high;

public:
    int id;
    Crow() {}

    void create()
    {
        cout <<"Enter id:";
        cin>>id;
        Bird::create();
        cout << "Enter Flying Hight :";
        cin >> fly_high;
    }

    void update(int n)
    {
        if (n < 4)
        {
            Bird::update(n);
        }

        else if (n == 4)
        {
            cout << "Enter Hight of flying:";
            cin >> fly_high;
            cout << "\nUPDATED\n";
        }

        else
            cout << "\nInvalid Option !\n";
    }

    void print()
    {
        cout << "ID :" << id << endl;
        Bird::print();
        cout << "Flying Hight :" << fly_high << endl;
    }
    ~Crow() {}
};

class Sparrow : public Bird
{
private:
    int fly_high;

public:
    int id;
    Sparrow() {}
    void create()
    {
        cout <<"Enter id:";
        cin>>id;
        Bird::create();
        cout << "Enter Flying Hight :";
        cin >> fly_high;
    }

    void update(int n)
    {
        if (n < 4)
        {
            Bird::update(n);
        }

        else if (n == 4)
        {
            cout << "Enter Hight of flying:";
            cin >> fly_high;
            cout << "\nUPDATED\n";
        }

        else
            cout << "\nInvalid Option !\n";
    }

    void print()
    {
        cout << "ID :" << id << endl;
        Bird::print();
        cout << "Flying Hight :" << fly_high << endl;
    }
    ~Sparrow() {}
};

int main()
{
    vector<Dog> dog1;
    vector<Cat> cat1;
    vector<Lion> lion1;
    vector<Peocock> peocock1;
    vector<Crow> crow1;
    vector<Sparrow> sparrow1;
    
    int a, b, c, m1, m2, m3, m4, m5, m6, n,z,id,flag=0;
    int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0, cnt5 = 0, cnt6 = 0, i,j, x, y;
    
    while (1)
    {
        cout << "\n\n1.Mammal \n2.Birds\n3.Exit\nEnter choice:";
        cin >> a;
        switch (a)
        {
        case 1:
            cout << "\n1.Dog\n2.Cat\n3.Lion\n4.exit\nEnter choice:";
            cin >> b;
            switch (b)
            {
            case 1:
                cout << "\n1.Create\n2.Print\n3.Update\nEnter choice:";
                cin >> x;
                switch (x)
                {
                case 1:
                    cout << "\nHow Many Record You wanted to Add?";
                    cin >> m1;
                    cnt1 = cnt1 + m1;
                    for (i = 0; i < m1; i++)
                    {
                        cout << "\nEnter Datails:\n";
                        Dog dog;
                        dog.create();
                        dog1.push_back(dog);
                    }
                    break;
                case 2:
                    for (i = 0; i < m1; i++)
                    {

                        dog1[i].print();
                    }
                    break;
                case 3:
                    cout << "Enter ID to Update:";
                    cin >> id;
                    flag=0;
                    for (j = 0; j < m1; j++)
                    {
                        if ((dog1[j].id) == id)
                        {
                            flag=1;
                            cout << "\nWhich data you want to update:";
                            cout << "\n1. Name \n2. Color\n3. Legs\n4. Breed";
                            cout << "\nEnter Choice:";
                            cin >> z;
                            dog1[j].update(z);
                        }
                    }
                    if(flag==0)
                    cout <<"\nInvalide ! \n";
                    break; 
                default:
                    cout << "Invalid Choice\n";
                    break;
                }

                break;

            case 2:
                cout << "\n1.Create\n2.Print\n3.Update\nEnter choice:";
                cin >> x;
                switch (x)
                {
                case 1:
                    cout << "\nHow Many Record You wanted to Add?";
                    cin >> m2;
                    cnt2 = cnt2 + m2;
                    for (i = 0; i < m2; i++)
                    {
                        cout << "\nEnter Datails:\n";
                        Cat cat;
                        cat.create();
                        cat1.push_back(cat);
                    }
                    break;
                case 2:
                    for (i = 0; i < m2; i++)
                    {

                        cat1[i].print();
                    }
                    break;

                case 3: 
                    cout << "Enter ID to Update:";
                    cin >> id;
                    flag=0;
                    for (j = 0; j < m2; j++)
                    {
                        if ((cat1[j].id) == id)
                        {
                            flag=1;
                            cout << "\nWhich data you want to update:";
                            cout << "\n1. Name \n2. Color\n3. Legs\n4. Breed";
                            cout << "\nEnter Choice:";
                            cin >> z;
                            cat1[j].update(z);
                        }
                    }
                    if(flag==0)
                    cout <<"\nInvalide ! \n";
                    break;    
                default:
                    cout << "Invalid Choice\n";
                    break;
                }

                break;

            case 3:
                cout << "\n1.Create\n2.Print\n3.Update\nEnter choice:";
                cin >> x;
                switch (x)
                {
                case 1:
                    cout << "\nHow Many Record You wanted to Add?";
                    cin >> m3;
                    cnt3 = cnt3 + m3;
                    for (i = 0; i < m3; i++)
                    {
                        cout << "\nEnter Datails:\n";
                        Lion lion;
                        lion.create();
                        lion1.push_back(lion);
                    }
                    break;
                case 2:
                    for (i = 0; i < m3; i++)
                    {

                        lion1[i].print();
                    }
                    break;

                case 3:
                    cout << "Enter ID to Update:";
                    cin >> id;
                    flag=0;
                    for (j = 0; j < m3; j++)
                    {
                        if ((lion1[j].id) == id)
                        {
                            flag=1;
                            cout << "\nWhich data you want to update:";
                            cout << "\n1. Name \n2. Color\n3. Legs\n4. Breed";
                            cout << "\nEnter Choice:";
                            cin >> z;
                            lion1[j].update(z);
                        }
                    }
                    if(flag==0)
                    cout <<"\nInvalide ! \n";
                    break;    
                default:
                    cout << "Invalid Choice\n";
                    break;
                }
                break;

            case 4:
                exit(0);
            default:
                cout << "Invalid Choice\n";
                break;
            }

            break;

        case 2:
            cout << "\n1.Peocock\n2.Crow\n3.Sparrow\n4.exit\nEnter choice:";
            cin >> c;
            switch (c)
            {
            case 1:
                cout << "\n1.Create\n2.Print\n3.Update\nEnter choice:";
                cin >> x;
                switch (x)
                {
                case 1:
                    cout << "\nHow Many Record You wanted to Add?";
                    cin >> m4;
                    cnt4 = cnt4 + m4;
                    for (i = 0; i < m4; i++)
                    {
                        cout << "\nEnter Datails:\n";
                        Peocock peocock;
                        peocock.create();
                        peocock1.push_back(peocock);
                    }
                    break;
                case 2:
                    for (i = 0; i < m4; i++)
                    {

                        peocock1[i].print();
                    }
                    break;

                case 3:
                    cout << "Enter ID to Update:";
                    cin >> id;
                    flag=0;
                    for (j = 0; j < m4; j++)
                    {
                        if ((peocock1[j].id) == id)
                        {
                            flag=1;
                            cout << "\nWhich data you want to update:";
                            cout << "\n1. Name \n2. Color\n3. Eggs\n4. Flying Hight";
                            cout << "\nEnter Choice:";
                            cin >> z;
                            peocock1[j].update(z);
                        }
                    }
                    if(flag==0)
                    cout <<"\nInvalide ! \n";
                    break;
                default:
                    cout << "Invalid Choice\n";
                    break;
                }

                break;

            case 2:
                cout << "\n1.Create\n2.Print\n3.Update\nEnter choice:";
                cin >> x;
                switch (x)
                {
                case 1:
                    cout << "\nHow Many Record You wanted to Add?";
                    cin >> m5;
                    cnt5 = cnt5 + m5;
                    for (i = 0; i < m5; i++)
                    {
                        cout << "\nEnter Datails:\n";
                        Crow crow;
                        crow.create();
                        crow1.push_back(crow);
                    }
                    break;
                case 2:
                    for (i = 0; i < m5; i++)
                    {

                        crow1[i].print();
                    }
                    break;

                case 3:
                    cout << "Enter ID to Update:";
                    cin >> id;
                    flag=0;
                    for (j = 0; j < m5; j++)
                    {
                        if ((crow1[j].id) == id)
                        {
                            flag=1;
                            cout << "\nWhich data you want to update:";
                            cout << "\n1. Name \n2. Color\n3. Eggs\n4. Flying Hight";
                            cout << "\nEnter Choice:";
                            cin >> z;
                            crow1[j].update(z);
                        }
                    }
                    if(flag==0)
                    cout <<"\nInvalide ! \n";
                    break;    
                default:
                    cout << "Invalid Choice\n";
                    break;
                }

                break;

            case 3:
                cout << "\n1.Create\n2.Print\n3.Update\nEnter choice:";
                cin >> x;
                switch (x)
                {
                case 1:
                    cout << "\nHow Many Record You wanted to Add?";
                    cin >> m6;
                    cnt6 = cnt6 + m6;
                    for (i = 0; i < m6; i++)
                    {
                        cout << "\nEnter Datails:\n";
                        Sparrow sparrow;
                        sparrow.create();
                        sparrow1.push_back(sparrow);
                    }
                    break;
                case 2:

                    for (i = 0; i < m6; i++)
                    {

                        sparrow1[i].print();
                    }
                    break;

                case 3:
                    cout << "Enter ID to Update:";
                    cin >> id;
                    flag=0;
                    for (j = 0; j < m6; j++)
                    {
                        if ((sparrow1[j].id) == id)
                        {
                            flag=1;
                            cout << "\nWhich data you want to update:";
                            cout << "\n1. Name \n2. Color\n3. Eggs\n4. Flying Hight";
                            cout << "\nEnter Choice:";
                            cin >> z;
                            sparrow1[j].update(z);
                        }
                    }
                    if(flag==0)
                    cout <<"\nInvalide ! \n";
                    break;    
                default:
                    cout << "Invalid Choice\n";
                    break;
                }
                break;

            case 4:
                exit(0);
            default:
                cout << "Invalid Choice\n";
                break;
            }

            break;

        case 3:
            exit(0);
        default:
            cout << "Invalid Choice\n";
            break;
        }
    }
    return 0;
}
