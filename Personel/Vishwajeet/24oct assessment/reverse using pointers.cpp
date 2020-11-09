#include <iostream> 
using namespace std; 

void swap(int* a, int* b) 
{ 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
} 

void reverse(int array[], int array_size) 
{ 
    int *p1 = array, 
        *p2 = array + array_size - 1; 
    while (p1 < p2) { 
        swap(p1, p2); 
        p1++;
        p2--; 
    } 
} 

void print(int* array, int array_size) 
{ 

    int *length = array + array_size, 
        *position = array; 
    cout << "Array = "; 
    for (position = array; position < length; position++) 
        cout << *position << " "; 
}

int main() 
{ 
    int array[] = { 6,9,5,1,0,3 }; 
    cout << "Original "; 
    print(array, 6); 
    cout << "Reverse "; 
    reverse(array, 6); 
    print(array, 6); 
    return 0; 
} 