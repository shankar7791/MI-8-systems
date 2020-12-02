#include <iostream>

using namespace std;
int main()
{
    int i, n;
    float arr[50];
    cout << "Enter total number of element(1 to 50):";
    cin >> n;
    // store no entered by th user //

    for (i = 0; i < n; i++)
    {
        cout << "Enter number" << i + 1 << ":";
        cin >> arr[i];
    };
    // loop to store largest number to arr[0]//
    for (i = 1; i < n; i++)
    {
        if (arr[0] < arr[i])
            arr[0] = arr[i];
    }
    cout << "largest element=" << arr[0] ;
    return 0;
}