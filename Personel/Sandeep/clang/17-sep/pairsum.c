#include <stdio.h>
int main()
void Pair(int arr[], int n, int sum)
{
	int arr[100], sum,n,i,c ;
    printf("enter n val:\n");
    scanf("%d",&n);
    printf("enter sum val:\n");
    scanf("%d",&sum);
    printf("enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    Pair(arr, n, sum);

	return 0;
}
void Pair(int arr[], int n, int sum)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] + arr[j] == sum)
			{
				printf("Pair found at index %d and %d", i, j);
				return ;
			}
		}
	}
	printf("Pair not found");
}