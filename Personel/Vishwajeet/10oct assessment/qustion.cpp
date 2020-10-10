/*Program to print the Lucas series for n terms.*/

#include <iostream>
using namespace std;

int main()
{
	int n, i, t1 = 2, t2 = 1, tn;
	cout << "Enter the number of terms desired in the lucas series: ";
	cin >> n;
	
	if (n == 1)
		cout << endl << 2 << endl;
	else if (n == 2)
		cout << endl << 2 << endl << 1 << endl;
	else if (n > 2)
	{
		cout <<endl<<"Lucas series for "<< n<< " terms is:"<<endl<< t1 << endl << t2 << endl;
		for (i = 0; i < n-2; i++)
		{
			tn = t1 + t2;
			cout << tn << endl;
			t1 = t2;
			t2 = tn;

		}
	}

	return 0;
}

