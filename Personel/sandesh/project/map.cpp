#include <iostream>
#include<iterator>
#include <string>
#include <map> 

using namespace std;
int main()
 {

	map<int, string> Students;
	

	Students.insert(std::pair<int, string>(1201, "sandesh"));
	
	Students.insert(std::pair<int, string>(1202, "hrushikesh"));

    Students.insert(std::pair<int, string>(1203, "chetan"));

	Students.insert(std::pair<int, string>(1204, "kalyani"));

	cout << "Map size is: " << Students.size() << endl;

	cout << endl << "student database  is:\n " << endl;

	cout << "ID\tNAME\n";
	
	
	for (map<int, string>::iterator it = Students.begin(); it != Students.end(); ++it)
	 {

		cout << (*it).first << ": " << (*it).second << endl;
	}

	cout <<"\n";
	cout <<"SEARCHNG ID \n";

	std::map<int, string>::iterator it = Students.find(1204);
	if (it != Students.end())
	 {
		std::cout << endl << "ID 1204 has the value: => "<< Students.find(1204)->second << '\n';
	}
	cout <<"\n";
	cout <<"AFTER DELETING ID \n";
	
	cout << "ID\tNAME\n";
	Students.erase(it);

	for (map<int, string>::iterator it = Students.begin(); it != Students.end(); ++it)

		cout << (*it).first << ": " << (*it).second << endl;
		return 0;
 }	