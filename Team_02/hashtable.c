#include<stdio.h>
//define size 10//
struct data 
{
    int key ;
    int value;
};
struct data*array;
int size=10;
// this function gives a unique hash code to the given key//
int hashcode(int key)
{
    return (key % size);
}
void init()
{
    int i;
    for(i=0;i<size;i++)
    array[i].key=0;
    array[i].value=0;
}
void insert(int value)
{
    int key=value%size;
    if (array[key]=1)
    array[key]=value;
    printf("\n%d has been inserted\n",key);
    else
    {
        printf("\n key (%d)already present ,updating value\n",key);
    }
    else
    {
        printf("\n Element caanot be inserted\n");
    }
}
void delete(int value)
{
    int key= (value % size);
    if (array[key]=1)
    array[key]==1;
    else
    {
        printf("% donot present in hash table\n",value);
        printf("\n key (%d)has been removed\n",key);
    }
    
}
void search(int value)
{
    int i;
    int key= (value % size);
    for(i=0;i<size;i++)
    {
        if (array[key]==0);
        {
            printf("Search found \n");
        }
        else
        {
            printf("Search not found \n");
        }
    }
}
int size_of_hashtable()
{
    return size;
}
void print()
{
     
     int i;
     int key= (value % size);
     for(i=0;i<size;i++)
     int_array[key];
}
int main
{
    printf("\n Implementation of hash table\n";
    printf("\n1.Inserating element in hash table");
    printf("\n2.Removing element from hash table");
    printf("\n3.size of hash table");
    printf("\n4.Display a hash table");
    printf("\n\n please enter your choice-:");
    scanf("%d" , &choice);
    {
        case 1:
        printf(" inserating element in hash table\n");
        printf("enter key:\t");
        scanf("%d",&key);
        insert(key);
        break;
        case 2:
        printf(" Deleting element from hash table \n Enter key to delete:");
        scanf("%d",&key);
        remove_element(key);
        break;
        case3:
        printf("Size of hash table is:%d\n",n);
        break;
        case4:
        display()
        break:
        return 0;

    }

}
