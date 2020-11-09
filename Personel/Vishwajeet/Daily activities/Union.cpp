#include <iostream>

using namespace std;

struct student1 {
  	int roll_no;
  	char name[40];
  	int phone_number;
};

union student2 {
	int roll_no;
  	char name[40];
  	int phone_number;
};

int main()
{
	struct student1 s1;
	union student2 u1;
	cout << "size of structure : " << sizeof(s1) << endl;
	cout << "size of union : " << sizeof(u1) << endl;
	return 0;
}