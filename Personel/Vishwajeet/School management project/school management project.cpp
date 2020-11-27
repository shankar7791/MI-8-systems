#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>

using namespace std;

struct student
{
 string fname;
 string lname;
 string Registration;
 string classes;
}studentData;

struct teacher
{
 string fst_name;
 string lst_name;
 string qualification;
 string exp;
 string pay;
 string subj;
 string lec;
 string addrs;
 string cel_no;
 string blod_grp;
 string serves;

}tech[50];

int main()
{

int i=0,j;
char choice;
string find;
string srch;

while(1)
{ 
 system("cls");

 cout<<"SCHOOL MANAGEMENT PROGRAM";
 cout<<"MAIN SCREEN"<<endl;
 cout<<"Enter your choice: "<<endl;
 cout<<"1.Students information"<<endl;
 cout<<"2.Teacher information"<<endl;
 cout<<"3.Exit program"<<endl;
 cin>>choice;

system("cls");


switch(choice)
{
 
case '1':
 { 
while(1)
{ 
system("cls");

cout<<"STUDENTS INFORMATION AND BIO DATA SECTION";
cout<<"Enter your choice: "<<endl;
cout<<"1.Create new entry\n";
cout<<"2.Find and display entry\n";
cout<<"3.Jump to main\n";
cin>>choice;

switch (choice)

{
case '1':
{  ofstream f1("student.txt",ios::app);

for( i=0;choice!='n';i++)
{

if((choice=='y')||(choice=='Y')||(choice=='1'))
{
 cout<<"Enter First name: ";
 cin>>studentData.fname;
 cout<<"Enter Last name: ";
 cin>>studentData.lname;
 cout<<"Enter Registration number: ";
 cin>>studentData.Registration;
 cout<<"Enter class: ";
 cin>>studentData.classes;
 
 f1<<studentData.fname<<endl<<studentData.lname<<endl<<studentData.Registration<<endl<<studentData.classes<<endl;
 cout<<"Do you want to enter data: ";
 cout<<"Press Y for Continue and N to Finish:  ";
 cin>>choice;
}
} 
f1.close();
}
continue;

case '2':
{  ifstream f2("student.txt"); 

cout<<"Enter First name to be displayed: ";
cin>>find;
cout<<endl;
int notFound = 0;
for( j=0;(j<i)||(!f2.eof());j++)
{ 

getline(f2,studentData.fname);

if(studentData.fname==find)
{
 notFound = 1;
 cout<<"First Name: "<<studentData.fname<<endl;
 cout<<"Last Name: "<<studentData.lname<<endl;

 getline(f2,studentData.Registration);
 cout<<"Registration No number: "<<studentData.Registration<<endl;
 getline(f2,studentData.classes);
 cout<<"Class: "<<studentData.classes<<endl<<endl;
}

}

if(notFound == 0){

cout<<"No Record Found"<<endl;
}
f2.close();
cout<<"Press any key two times to proceed";

}
continue;

case '3':
{
break;
}
}

break;
}
continue; 
}

case '2':
{ 
while(1)
{ 
system("cls");
cout<<"TEACHERS INFORMATION AND BIODATA SECTION";
cout<<"Enter your choice: "<<endl;
cout<<"1.Create new entry\n";
cout<<"2.Find and display\n";
cout<<"3.Jump to main";
cin>>choice;

switch (choice)
{
case '1':
{ 
ofstream t1("teacher.txt",ios::app);

for(i=0;choice!='n'&& choice!='N';i++)
{
 
 if((choice=='y')||(choice=='Y')||(choice=='1'))
 {
  cout<<"Enter First name: ";
  cin>>tech[i].fst_name;
  cout<<"Enter Last name:: ";
  cin>>tech[i].lst_name;
  cout<<"Enter qualification: ";
  cin>>tech[i].qualification;
  cout<<"Enter experiance(year): ";
  cin>>tech[i].exp;
  cout<<"Enter number of year in this School: ";
  cin>>tech[i].serves;
  cout<<"Enter Subject whos teach: ";
  cin>>tech[i].subj;
  cout<<"Enter Lecture(per Week): ";
  cin>>tech[i].lec;
  cout<<"Enter pay: ";
  cin>>tech[i].pay;
  cout<<"Enter Phone Number: ";
  cin>>tech[i].cel_no;
  cout<<"Enter Blood Group: ";
  cin>>tech[i].blod_grp;
  
  
  t1<<tech[i].fst_name<<endl<<tech[i].lst_name<<endl 
   <<tech[i].qualification<<endl<<tech[i].exp<<endl
   <<tech[i].serves<<endl<<tech[i].subj<<endl<<tech[i].lec
   <<endl<<tech[i].pay<<endl<<tech[i].cel_no<<endl<<tech[i].blod_grp<<endl;
  cout<<"Do you want to enter data: ";
  cin>>choice;
 }
}
system("cls");



t1.close();
}

continue;

case '2':
{ 
ifstream t2("teacher.txt"); 

cout<<"Enter name to be displayed: ";
cin>>find;

cout<<endl;
int notFound = 0;
for( j=0;((j<i)||(!t2.eof()));j++)
{ 
 
 getline(t2,tech[j].fst_name);
 
 if(tech[j].fst_name==find)
 {
  notFound = 1;
  cout<<"First name: "<<tech[j].fst_name<<endl;
  getline(t2,tech[j].lst_name);
  cout<<"Last name: "<<tech[j].lst_name<<endl;
  getline(t2,tech[j].qualification);
  cout<<"Qualification: "<<tech[j].qualification<<endl;
  getline(t2,tech[j].exp);
  cout<<"Experience: "<<tech[j].exp<<endl;

  getline(t2,tech[j].serves);
  cout<<" number of year in this School: "<<tech[j].serves<<endl;

  getline(t2,tech[j].subj);
  cout<<"Subject whos teach: "<<tech[j].subj<<endl;

  getline(t2,tech[j].lec);
  cout<<"Enter Lecture(per Week): "<<tech[j].lec<<endl;
  getline(t2,tech[j].pay);
  cout<<"pay: "<<tech[j].pay<<endl;

  getline(t2,tech[j].addrs);
  cout<<"Address: "<<tech[j].addrs<<endl;

  getline(t2,tech[j].cel_no);
  cout<<"Phone Number: "<<tech[j].cel_no<<endl;

  getline(t2,tech[j].blod_grp);
  cout<<"Bool Group: "<<tech[j].blod_grp<<endl;
 }
 
}
t2.close();
if(notFound == 0){

 cout<<"No Record Found"<<endl;
}
cout<<"Press any key two times to proceed";
}

continue;

case '3':
{
break;
}

}

break;
}

continue;
}


case '3':
{
break;
}
}   
break;
}


}
