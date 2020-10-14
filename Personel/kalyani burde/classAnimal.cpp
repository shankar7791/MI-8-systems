
#include <iostream>
#include <string>
using namespace std;
class Animal
{
private:
    string color;

public:
    void type()
    {
        cout << "I am " << type << endl;
    }

    void sleep()
    {
        cout << "I can sound!" << endl;
    }

    void setColor(string clr)
    {
        color = clr;
    }

    string getColor()
    {
        return color;
    }
};

class Mammal : public Animal
{
public:
    // constructors
    ~Mammal() {}
    //accessors
    int Gettype() const { return itstype; }
    void Settype(int type) { itstype = type; }
    int Getcolor() const { return itscolor; }
    void Setcolor(int color) { itscolor = color; }
    int Getsound() const { return itssound; }
    void Setsound(int sound) { itssound = sound; }

    //Other methods
    void Speak() const { cout << "Mammal sound!\n"; }
private:
    int itscolor;
    int itssound;
    int itstype;
};

class Dog : public Mammal
{
public:
    void displayInfo(string c)
    {
        cout << "I am " << type << endl;
        cout << "My color is " << c << endl;
    }

    void bark()
    {
        cout << "I can create sound!!" << endl;
    }

private:
    string Breed;
};

class cat : public Mammal
{
public:
    void displayInfo(string c)
    {
        cout << "I am " << type << endl;
        cout << "My color is " << c << endl;
    }

    void bark()
    {
        cout << "I can create sound!!" << endl;
    }

private:
    string Meows;
};
class lion : public Mammal
{
public:
    void displayInfo(string c)
    {
        cout << "I am" << type << endl;
        cout << "My color is " << c << endl;
    }

    void bark()
    {
        cout << "I can create sound!!" << endl;
    }

private:
    string purrs;
};
class Birds : public Animal
{
public:
    // constructors
    ~Birds() {}
    //accessors
    int Gettype() const { return itstype; }
    void Settype(int type) { itstype = type; }
    int Getcolor() const { return itscolor; }
    void Setcolor(int color) { itscolor = color; }
    int Getsound() const { return itssound; }
    void Setsound(int sound) { itssound = sound; }

    //Other methods
    void Speak() const { cout << "Birds sound!\n"; }
private:
    int itscolor;
    int itssound;
    int itstype;
};

class Crow : public Birds
{
public:
    void displayInfo(string c)
    {
        cout << "I am a " << type << endl;
        cout << "My color is " << c << endl;
    }

    void bark()
    {
        cout << "I can create sound!!" << endl;
    }

private:
    string craw;
};
class parrot : public Birds
{
public:
    void displayInfo(string c)
    {
        cout << "I am" << type << endl;
        cout << "My color is " << c << endl;
    }

    void bark()
    {
        cout << "I can create sound!!" << endl;
    }

private:
    string whistles;
};
class bat : public Birds
{
public:
    void displayInfo(string c)
    {
        cout << "I am" << type << endl;
        cout << "My color is " << c << endl;
    }

    void bark()
    {
        cout << "I can create sound!!" << endl;
    }

private:
    string pings;
};
int main()
{
    animal a;Bird b;Lion l;Dog d;Cat c;bat s;parrot p;
    Crow r;
    int a, b, a1, a2, opt1, opt2;
}
while ()
{
    cout << "1.Mammal \n2.Birds\n3.Exit\nEnter choice:";
    cin > a;
    switch (opt1)
    {
    case 1:
        cout << "\n1.Dog\n2Cat\n3.Lion\n4exit\nEnter choice:";
        cout << "\nEnter your choice:";
        switch (a1)
        {
        case 1:
            for (i = 0; i < m; i++)
            {
                cout << "Enter type:";
                dog1[i].create();
                dog1[i].print();
            }
            break;
        case 2:
            for (i = 0; i < m; i++)
            {
                cout << "Enter type:";
                cat1[i].create();
                cat1[i].print();
            }
            break;
        case 3:
            for (i = 0; i < m; i++)
            {
                cout << "Enter type:";
                lion1[i].create();
                lion1[i].print();
            }
            break;
        };
        break;
    }
    switch (opt2)
    {
    case 2:
        cout << "1.Mammal \n2.Birds\n3.Exit\nEnter choice:";
        cin > b;
        switch (a2)
        {
            cout << "\n1.Crow\n2Parrot\n3.Bat\n4exit\nEnter choice:";
            cout << "\nEnter your choice:";
        case 1:
            for (i = 0; i < m; i++)
            {
                cout << "Enter type:";
                Crow1[i].create();
                Crow1[i].print();
            }
            break;
        case 2:
            for (i = 0; i < m; i++)
            {
                cout << "Enter Details:";
                Parrot1[i].create();
                Parot1[i].print();
            }
            break;
        case 3:
            for (i = 0; i < m; i++)
            {
                cout << "Enter Details:";
                Bat1[i].create();
                Bat1[i].print();
            }
            break;
        };
        break;
    case3:
        exit(0);
    default:
        cout << "invalid option:\n";
        break;
    }
    while (opt != 3)
        return 0;
};