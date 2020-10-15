#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Animal
{
    vector<Animal> vec;

private:
    // data//

public:
    Animal(/* data */);
};

class Mammal : public Animal
{
private:
    string color;
    string type;
    int sound;

public:
    void create()
    {
        cout << "I am type" << endl;
        cin >> type;
    }

    void sound()
    {
        cout << "I can sound!" << endl;
        cin >> sound;
    }

    void setColor(string clr)
    {
        color = clr;
        cin >> clr;
    }
    void print()
    {
        cout << "type :" << type << endl;
        cout << " Color:" << color << endl;
        cout << " sound:" << sound << endl;
    }
};
class Birds : public Animal
{
private:
    string color;
    string type;
    int sound;

public:
    void create()
    {
        cout << "I am type" << endl;
        cin >> type;
    }

    void sound()
    {
        cout << "I can sound!" << endl;
        cin >> sound;
    }

    void setColor(string clr)
    {
        color = clr;
        cin >> clr;
    }
    void print()
    {
        cout << "type :" << type << endl;
        cout << " Color:" << color << endl;
        cout << " sound:" << sound << endl;
    }
};
class Dog : public Mammal
{
public:
    void create()
    {
        cout << "I am type" << endl;
        cin >> type;
        cout << "My color is " << endl;
        cin >> color;
    }

    void sound()
    {
        cout << "I can create sound!!" << endl;
        cin >> sound;
    }
    void print()
    {
        Mammal::print();
        cout << "Breed :" << breed << endl;
    }

private:
    string Breed;
};

class Cat : public Mammal
{
public:
    void create()
    {
        cout << "I am type" << endl;
        cin >> type;
        cout << "My color is " << endl;
        cin >> color;
    }

    void sound()
    {
        cout << "I can create sound!!" << endl;
        cin >> sound;
    }
    void print()
    {
        Mammal::print();
        cout << "Meows :" << Meows << endl;
    }

private:
    string Meows;
};
class Lion : public Mammal
{
public:
    void create()
    {
        cout << "I am type" << endl;
        cin >> type;
        cout << "My color is " << endl;
        cin >> color;
    }

    void sound()
    {
        cout << "I can create sound!!" << endl;
        cin >> sound;
    }
    void print()
    {
        Mammal::print();
        cout << "Purrs :" << Purrs << endl;
    }

private:
    string purrs;
};

class Crow : public Birds
{
public:
    void displayInfo(string c)
    {
        cout << "I am type" << endl;
        cin >> type;
        cout << "My color is " << endl;
        cin >> color;
    }

    void sound()
    {
        cout << "I can create sound!!" << endl;
        cin >> sound;
    }
    void print()
    {
        Birds::print();
        cout << "craw :" << craw << endl;
    }

private:
    string craw;
};

class Parrot : public Birds
{
public:
    void displayInfo(string c)
    {
        cout << "I am type" << endl;
        cin >> type;
        cout << "My color is " << endl;
        cin >> color;
    }

    void sound()
    {
        cout << "I can create sound!!" << endl;
        cin >> sound;
    }
    void print()
    {
        Birds::print();
        cout << "whistles :" << whistles << endl;
    }

private:
    string whistles;
};

class Bat : public Birds
{
public:
    void displayInfo(string c)
    {
        cout << "I am type" << endl;
        cin >> type;
        cout << "My color is " << endl;
        cin >> color;
    }

    void sound()
    {
        cout << "I can create sound!!" << endl;
        cin >> sound;
    }
    void print()
    {
        Birds::print();
        cout << "Pings :" << Pings << endl;
    }

private:
    string pings;
};

int main()
{
    vector<Dog> dog1;
    vector<Cat> cat1;
    vector<Lion> lion1;
    vector<Bat> bat1;
    vector<Crow> crow1;
    vector<Parrot> parrot1;
    int obj[100];
    int a, b, c, m1, m2, m3, m4, m5, m6, n, x, i;

    while ()
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
                    cout << "\nEnter your choice:";
                    cin >> m1;
                    for (i = 0; i < m1; i++)
                    {
                        cout << "Enter type:";
                        Dog dog;
                        vector<Dog> dog
                            dog1.create();
                        dog1.push_back(dog);
                    }
                    break;
                case 2:
                    for (i = 0; i < m1; i++)
                    {
                        dog1.print();
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
                    cout << "\nEnter your choice:";
                    cin >> m2;
                    for (i = 0; i < m2; i++)
                    {
                        cout << "Enter type:";
                        Cat cat;
                        vector<Cat> cat
                            cat1
                            create();
                        cat1.push_back(cat);
                    }
                    break;
                case 2:
                    for (i = 0; i < m2; i++)
                    {
                        cat1.print();
                    }
                    break;
                Default:
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
                    cout << "\nEnter your choice:";
                    cin >> m3;
                    for (i = 0; i < m3; i++)
                    {
                        cout << "Enter type:";
                        Lion lion;
                        vector<Lion> lion
                            lion1.create();
                        lion1.push_back(lion);
                    }
                    break;
                case 2:
                    for (i = 0; i < m3; i++)
                    {
                        lion1.print();
                    }
                    break;
                default:
                    cout << "Invalid Choice\n";
                    break;
                }
                break;

            case 2:
                cout << "\n1.Crow\n2.Parrot\n3.Bat\n4.exit\nEnter choice:";
                cin >> c;
                switch (c)
                {
                case 1:
                    cout << "\n1.Create\n2.Print\n3.Update\nEnter choice:";
                    cin >> x;
                    switch (x)
                    {
                    case 1:
                        cout << "\nEnter your choice:";
                        cin >> m4;
                        for (i = 0; i < m4; i++)
                        {
                            cout << "Enter type:";
                            Crow crow;
                            vector<crow> crow
                            
                                crow1.create();
                            crow1.push_back(crow);
                        }
                        break;
                    case 2:
                        for (i = 0; i < m4; i++)
                        {
                            crow.print();
                        }
                        break;
                    };
                case 3:
                default:
                    cout << "Invalid Choice\n";
                    break;
                }

            case 2:
                cout << "\n1.Create\n2.Print\n3.Update\nEnter choice:";
                cin >> x;
                switch (x)
                {
                case 1:
                    cout << "\nEnter your choice:";
                    cin >> m5;
                    for (i = 0; i < m5; i++)
                    {
                        cout << "Enter type:";
                        Parrot parrot;
                        vector<Parrot> parrot
                            parrot1.create();
                        parrot1.push_back(parrot);
                    }
                    break;
                case 2:
                    for (i = 0; i < m5; i++)
                    {
                        parrot.print();
                    }
                    break;
                Default:
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
                    cout << "\nEnter your choice:";
                    cin >> m6;
                    for (i = 0; i < m6; i++)
                    {
                        cout << "Enter type:";
                        Bat bat;
                        vector<Bat> bat
                            bat1.create();
                        bat1.push_back(bat);
                    }
                    break;
                case 2:
                    for (i = 0; i < m6; i++)
                    {
                        bat.print();
                    }
                    break;
                Default:
                    cout << "Invalid Choice\n";
                    break;
                }
                break;
            case 4:
                exit(0);
            Default:
                cout << "Invalid Choice\n";
                break;

                break;
            case 3:
                exit(0);
            Default:
                cout << "Invalid Choice\n";
                break;
                return 0;
            }
        }
    }
};