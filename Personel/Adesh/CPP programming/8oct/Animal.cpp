#include <bits/stdc++.h>
#include <iostream>
#include <string>
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
        cout << " Color:" << color << endl;
        cout << " Legs:" << legs << endl;
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
        cout << " Color:" << color << endl;
        cout << " Egg:" << egg << endl;
    }

    ~Bird() {}
};

class Dog : public Mammal
{
private:
    string breed;

public:
    Dog() {}
    void create()
    {
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
    Cat() {}
    void create()
    {
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
    Lion() {}
    void create()
    {
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
    Peocock() {}
    void create()
    {
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
    Crow() {}

    void create()
    {
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
    Sparrow() {}
    void create()
    {
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
        Bird::print();
        cout << "Flying Hight :" << fly_high << endl;
    }
    ~Sparrow() {}
};

int main()
{
    Dog *dog1 = new Dog[10];
    Cat *cat1 = new Cat[10];
    Lion *lion1 = new Lion[10];
    Peocock *peocock1 = new Peocock[10];
    Crow *crow1 = new Crow[10];
    Sparrow *sparrow1 = new Sparrow[10];
    int a, b, c, m, n, cnt1 = 0, cnt2 = 0, cnt3 = 0, i, x, y;

    while (1)
    {
        cout << "1.Mammal \n2.Birds\n3.Exit\nEnter choice:";
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
                    cin >> m;
                    cnt1 = cnt1 + m;
                    for (i = 0; i < m; i++)
                    {
                        cout << "Enter Datails:\n";
                        dog1[i].create();
                    }
                    break;
                case 2:
                    for (i = 0; i < m; i++)
                    {

                        dog1[i].print();
                    }
                    break;
                case 3:
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
                    cin >> m;
                    cnt1 = cnt1 + m;
                    for (i = 0; i < m; i++)
                    {
                        cout << "Enter Datails:\n";
                        cat1[i].create();
                    }
                    break;
                case 2:
                    for (i = 0; i < m; i++)
                    {

                        cat1[i].print();
                    }
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
                    cin >> m;
                    cnt1 = cnt1 + m;
                    for (i = 0; i < m; i++)
                    {
                        cout << "Enter Datails:\n";
                        lion1[i].create();
                    }
                    break;
                case 2:
                    for (i = 0; i < m; i++)
                    {

                        lion1[i].print();
                    }
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
                    cin >> m;
                    cnt1 = cnt1 + m;
                    for (i = 0; i < m; i++)
                    {
                        cout << "Enter Datails:\n";
                        peocock1[i].create();
                    }
                    break;
                case 2:
                    for (i = 0; i < m; i++)
                    {

                        peocock1[i].print();
                    }
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
                    cin >> m;
                    cnt1 = cnt1 + m;
                    for (i = 0; i < m; i++)
                    {
                        cout << "Enter Datails:\n";
                        crow1[i].create();
                    }
                    break;
                case 2:
                    for (i = 0; i < m; i++)
                    {

                        crow1[i].print();
                    }
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
                    cin >> m;
                    cnt1 = cnt1 + m;
                    for (i = 0; i < m; i++)
                    {
                        cout << "Enter Datails:\n";
                        sparrow1[i].create();
                    }
                    break;
                case 2:

                    for (i = 0; i < m; i++)
                    {

                        sparrow1[i].print();
                    }
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
