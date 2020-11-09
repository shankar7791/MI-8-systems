#include<iostream>
#include<string>
using namespace std;
class animal
{
    char name[100];
    string cls;
    public:
    void getdata()
    {
        cout<<"name:";
        cin>>name;
        cout<<"class:";
        cin>>cls;
    }
    void display()
    {
        cout<<"name:"<<name<<endl;
        cout<<"class:"<<cls<<endl;
    }
};
class dog:public animal
{
    string type;
    string food;
    public:
    void getdata()
    {
        animal::getdata();
        cout<<"domestic/wild:";
        cin>>type;
        cout<<"food(omnivorous/carnivorous):";
        cin>>food;
    }
    void display()
    {
        animal::display();
        cout<<"domestic/wild:"<<type<<endl;
        cout<<"food:"<<food<<endl;
    }
};
class lion:public animal
{
    string mammal;
    public:
    void getdata()
    {
        animal::getdata();
        cout<<"king of beast(yes/no):";
        cin>>mammal;   
    }
    void dispaly()
    {
        animal::display();
        cout<<"king of beast:"<<mammal<<endl;
    }
};
class cat:public animal 
{
    string vision;
    public:
    void getdata()
    {
        animal::getdata();
        cout<<"night vision(yes/no):";
        cin>>vision;
    }
    void display()
    {
        animal::display();
        cout<<"night vision:"<<vision<<endl;
    }
};
class bird:public animal
{
    string beaks;
    string nest;
    string name;
    public:
    void getdata()
    {
        cout<<"name:";
        cin>>name;
        cout<<"beaks(short/pointed/flat):";
        cin>>beaks; 
        cout<<"nest type:";
        cin>>nest; 
    }
    void display()
    {
        cout<<"name of bird:"<<name<<endl;
        cout<<"bird's beak:"<<beaks<<endl;
        cout<<"nest type:"<<nest<<endl;
    }
};

class peacock:public bird 
{
    string color;
    public:
    void getdata()
    {
        bird::getdata();
        cout<<"color:";
        cin>>color;
    }
    void display()
    {
        bird::display();
        cout<<"color of peacock:"<<color<<endl;
    }
};
class crow:public bird 
{
    string color;
    string tail;
    public:
    void getdata()
    {
        bird::getdata();
        cout<<"color:";
        cin>>color;
        cout<<"short or long tail bird:";
        cin>>tail;
    }
    void display()
    {
        bird::display();
        cout<<"color:"<<color<<endl;
        cout<<"short or long tail bird:"<<tail<<endl;
    }
};
class sparrow:public bird 
{
    string speed;
    public:
    void getdata()
    {
        bird::getdata();
        cout<<"speed in Km/H:";
        cin>>speed;
    }
    void display()
    {
        bird::display();
        cout<<"speed in Km/h:"<<speed<<endl;
    }
};
int main()
{
    animal a;bird b;lion l;dog d;cat c;sparrow s;peacock p;
    crow r;
    int opt,opt1,a1,a2,a3,a4,a5;
    do
    {   
        cout<<"\n1.animal\n2.bird\n3.exit\n";
        cout<<"enter your choice:";
        cin>>opt;
        switch(opt)
        {
            case 1:
            cout<<"\n1.lion     2.dog    3.cat    4.exit:\n";
            cin>>a1;
            switch(a1)
            {
                case 1:
                cout<<"animal lion:\n";
                l.getdata();
                cout<<"\ndisplay data:\n";
                l.display();
                break;
                case 2:
                cout<<"animal dog:\n";
                d.getdata();
                cout<<"\ndisplay data:\n";
                d.display();
                break;
                case 3:
                cout<<"animal cat:\n";
                c.getdata();
                cout<<"\ndisplay:\n";
                c.display();
                break;
                case 4:
                exit(0);
                default:
                cout<<"invalid choice";
                break;
            }break;
            case 2:
            cout<<"\n1.sparrow      2. peacock    3. crow   4. exit\n";
            cout<<"enter your choice:";
            cin>>a2;
            switch(a2)
            {
                case 1:
                cout<<"bird sparrow:\n";
                s.getdata();
                cout<<"\ndisplay data:\n";
                s.display();
                break;
                case 2:
                cout<<"bird peacock:\n";
                p.getdata();
                cout<<"\ndisplay data\n";
                p.display();
                break;
                case 3:
                cout<<"bird crow:\n";
                r.getdata();
                cout<<"\ndisplay data:\n";
                r.display();
                break;
                case 4:
                exit(0);
                default:
                cout<<"invalid choice";
                break;
            }break;
            case 3:
            exit(0);
            default:
            cout<<"invalid option:\n";
            break;
        }
    } while (opt!=3);

    return 0;
}