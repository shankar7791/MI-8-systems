#include <bits/stdc++.h>
using namespace std;
int getMostFrequent(int arr[], int n)
{
    unordered_map<int, int> myMap;
    for (int i = 0; i < n; i++)
        myMap[arr[i]]++;
    int maxCount = 0, result = INT_MIN;
    for (auto value : myMap)
    {
        if (maxCount < value.second)
        {
            result = value.first;
            maxCount = value.second;
        }
    }
    return result;
}
int main()
{
    int arr[] = { 2, 5, 2, 3, 3, 2, 1 };
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << getMostFrequent(arr, n);
    return 0;
}