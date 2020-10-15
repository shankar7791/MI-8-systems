#include<iostream>
#include<string>
#include<bits/stdc++.h>
#include<vector>
#include<array>
using namespace std;
class animal
{
    string name;
    string cls;
    vector<animal>an;
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
    void insert()
    {
           cout<<"enter the name to insert:";
           cin>>name;
           cout<<"enter the class :";
           cin>>cls;
           cout<<"\ndata is updated\n";
    }
};
class dog:public animal
{
    string type;
    string food;
    int i;
    vector<dog>dg1;
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
        for(i=0;i<dg1.size();i++)
        {
            dg1[i].display();
        }
    }
    void insert()
    {
       animal::insert();
       cout<<"enter domestic/wild:";
       cin>>type;
       cout<<"food:";
       cin>>food;
       cout<<"data is updated";
    }
};
class lion:public animal
{
    string mammal;
    int i;
    vector<lion>l1;
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
        for(i=0;i<l1.size();i++)
        {
            l1[i].display();
        }
    }
    void insert()
    {
       animal::insert();
       cout<<"lion is a king of beast(yes/no):";
       cin>>mammal;
       cout<<"\ndata is updated\n";
    }
};
class cat:public animal 
{
    string vision;
    int i;
    vector<cat>c1;
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
        for(i=0;i<c1.size();i++)
        {
            c1[i].display();
        }
    }
    void insert()
    {
       animal::insert();
       cout<<"night vision in cat(yes/no):";
       cin>>vision;
       cout<<"data is updated";
    }
};
class bird:public animal
{
    string beaks;
    string nest;
    string name;
    int i;
    vector<bird>b1;
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
        for(i=0;i<b1.size();i++)
        {
            b1[i].display();
        }

    }
    void insert()
    {
       cout<<"\nenter name to be update:";
       cin>>name;
       cout<<"color of the bird:";
       cin>>beaks;
       cout<<"\ndata is updated";
    }
};

class peacock:public bird 
{
    string color;
    vector<peacock>p1;
    int i;
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
        for(i=0;i<p1.size();i++)
        {
            p1[i].display();
        }
    }
    void insert()
    {
       animal::insert();
       cout<<"night vision in peacock(yes/no):";
       cin>>color;
       cout<<"data is updated";
    }
};
class crow:public bird 
{
    string color;
    string tail;
    int i;
    vector<crow>c1;
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
        for(i=0;i<c1.size();i++)
        {
            c1[i].display();
        }
    }
    void insert()
    {
       bird::insert();
       cout<<"\nupdate color:";
       cin>>color;
       cout<<"data is updated";
    }
};
class sparrow:public bird 
{
    string speed;
    int i;
    vector<sparrow>s1;
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
        for(i=0;i<s1.size();i++)
        {
            s1[i].display();
        }
    }
    void insert()
    {
       bird::insert();
       cout<<"\nupdate speed:";
       cin>>speed;
       cout<<"\ndata is updated";
    }
};

int main()
{
    animal a;bird b;lion l;dog d;cat c;sparrow s;peacock p;
    crow r;
    int opt,a1,a2,a3,a4,a5,a6,a7;
    do
    {  
        cout<<"1.ADD\n2.UPDATE\n3.DISPLAY\n4.EXIT\n"<<endl;
        cout<<"\nenter your choice:";
        cin>>opt;
        if(opt==4)
        {
            cout<<"terminating program.....";
        }
        else 
        {
            if(opt==1)
            {
                cout<<"1.animal\t2.bird\t3.exit\nenter your choice:";
                cin>>a1;
                switch(a1)
                {
                    case 1:
                    cout<<"\nadd data for:\n1.lion\t2.dog\t3.cat\n";
                    cout<<"\nenter your choice:";
                    cin>>a2;
                    switch(a2)
                    {
                        case 1:
                        cout<<"get data for lion:\n";
                        l.getdata();
                        break;
                        case 2:
                        cout<<"get data for dog:\n";
                        d.getdata();
                        break;
                        case 3:
                        cout<<"get data for cat:\n";
                        c.getdata();
                        break;
                        case 4:
                        default:
                        cout<<"invalid entry";
                        exit(0);
                    }break;
                    case 2:
                    cout<<"\nadd data for bird:\n1.peacock\t2.sparrow\t3.crow\nenter your choice:";
                    cin>>a3;
                    switch(a3)
                    {
                        case 1:
                        cout<<"get data for peacock:\n";
                        p.getdata();
                        break;
                        case 2:
                        cout<<"get data for sparrow:\n";
                        s.getdata();
                        break;
                        case 3:
                        cout<<"get data for crow:\n";
                        r.getdata();
                        break;
                        case 4:
                        default:
                        cout<<"invalid option";
                        exit(0);
                    }break;
                    case 3:
                    default:
                    cout<<"enter valid option";
                    exit(0);
                }
            }else if(opt==2)
            {
                cout<<"\nData to be updated for: ";
                cout<<"\n1.LION\t2.DOG\t3.CAT\n4.PEACOCK\t5.SPARROW\t6.CROW\n";
                cout<<"\nenter your choice:";
                cin>>a4;
                switch(a4)
                {
                    case 1:
                    cout<<"update data for lion:\n";
                    l.insert();
                    break;
                    case 2:
                    cout<<"update data for dog:\n";
                    d.insert();
                    break;
                    case 3:
                    cout<<"update data for cat:\n";
                    c.insert();
                    break;
                    case 4:
                    cout<<"update data for peacock:\n";
                    p.insert();
                    break;
                    case 5:
                    cout<<"update data for sparrow\n";
                    s.insert();
                    break;
                    case 6:
                    cout<<"update data for crow\n";
                    r.insert();
                    break;
                    case 7:
                    default:
                    cout<<"\ninavlid entry";
                    exit(0);
                }
            }
            else if(opt==3)
            {
                cout<<"\nDisplay data for\n1.LION\t2.DOG\t3.CAT\n4.PEACOCK\t5.SPARROW\t6.CROW\nenter your choice:";
                cin>>a5;
                switch(a5)
                {
                    case 1:
                    cout<<"\ndisplay data for lion:";
                    l.display();
                    break;
                    case 2:
                    cout<<"display data for dog:";
                    d.display();
                    break;
                    case 3:
                    cout<<"display data for cat:\n";
                    c.display();
                    break;
                    case 4:
                    cout<<"\ndisplay data for peacock\n";
                    p.display();
                    break;
                    case 5:
                    cout<<"display data for sparrow:\n";
                    s.display();
                    break;
                    case 6:
                    cout<<"display data for crow\n";
                    r.display();
                    break;
                    case 7:
                    default:
                    cout<<"invalid option";
                    exit(0);
                }
            }
        }cout<<"........................"<<endl;
    } while (opt!=4);

     return 0;
}
    

            
            