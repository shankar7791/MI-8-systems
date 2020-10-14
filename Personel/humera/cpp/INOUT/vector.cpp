#include<iostream>
#include<string>
#include<vector>
#include<array>
using namespace std;
class animal
{
    string name;
    string cls;
    string data;
    string rn;
    vector <string> myvector;
    public:
    void getdata()
    {     
        cout<<"name:";
        cin>>name;
        cout<<"class:";
        cin>>cls;
        data=name+" "+cls;
        myvector.push_back(data);
        
    }
    void display()
    {
        cout<<"name:"<<name<<endl;
        cout<<"class:"<<cls<<endl;
        cout<<"data:"<<data<<endl;

    }
    void deletedata()
    {
        myvector.clear();
        cout<<"data is deleted\n";
        
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
    string fb,name;
    int opt,a1,a2,a3,a4,a5;
    vector <string> animalarray;
    do
    {  
        cout<<"1.add\n2.delete\n3.display\n4.exit\n"<<endl;
        cout<<"enter your choice:";
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
                    cout<<"add data for:\n1.lion\t2.dog\t3.cat\n";
                    cout<<"enter your choice:";
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
                    cout<<"add data for bird:\n1.peacock\t2.sparrow\t3.crow\nenter your choice:";
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
                cout<<"\nplease enter data to be deleted for: ";
                cout<<"\n1.lion\t2.dog\3.cat\n4.peacock\t5.sparrow\t6.crow\n";
                cout<<"enter your choice:";
                cin>>a4;
                switch(a4)
                {
                    case 1:
                    cout<<"delete data for lion:\n";
                    l.deletedata();
                
                    break;
                    case 2:
                    default:
                    cout<<"inavlid entry";
                    exit(0);

                }
            }
            else if(opt==3)
            {
                cout<<"display data for 1.lion\n2.dog\nenter your choice:";
                cin>>a5;
                switch(a5)
                {
                    case 1:
                    cout<<"display data:";
                    l.display();
                    break;
                    case 2:
                    default:
                    exit(0);
                }

            }
        }cout<<"endl"<<endl;
    } while (opt!=4);
     return 0;
}
    

            
            