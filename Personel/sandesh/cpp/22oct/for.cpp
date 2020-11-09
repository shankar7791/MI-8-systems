

    #include<iostream>
    
    using namespace std;
    int main()
    {
    int m;
    int n;
    char op;
    char choice;
    do
    {
     cout<<"enter 1st number";
    cin>>m;
    cout<<"enter 2nd number";
    cin>>n;
    cout<<"enter operator for add '+' || for sub '-' for mul '*' for div '/' ";
 
    cin>>op;
    switch (op)
    {   case'+':
             cout<<"m+n= "<<m+n<<endl;
             break;
        case'-':
              cout<<"m-n= "<<m-n<<endl;
              break;
        case'*':
                cout<<"m*n= "<<m*n<<endl;
                break;
        case'/':
            cout<<"m/n= "<<m/n<<endl;
            break;}
    }
	while(choice=='y');
        cout<<"perform another operation(y/n)"<<endl;
        cin>>choice;
        
    }

