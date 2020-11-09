// selection sort//

// steps for selection sort//
// Let ARR is an array having N elements//
// step1: Read ARR//
// step2: Repeat step 3 to 6 for I=0 o N-1// 
// step3: Set MIN=ARR[I] and Set LOC=I//
// step4: Repeat step 5 for J=I=1 to N//
// step5: If MIN>ARR[J], then 
		(a) Set MIN=ARR[J]
		(b) Set LOC=J
		[End of if]
	[End of step 4 loop]//
// step6: Interchange ARR[I] and ARR[LOC] using temporary variable
		[End of step 2 outer loop]//
// step7: Exit //



#include <stdio.h>

void main()
{
int                                                                                                                                                               
                                                                                   total_count, counter1, counter2, minimum, temp_value;
int a[20];
printf("\n Enter the Number of Elements: ");
scanf("%d", &total_count);

printf("\n Enter %d Elements: ", total_count);
for (counter1=0; counter1 < total_count; counter1++)
{
scanf("%d", &a[counter1]);
}
for (counter1=0; counter1 < total_count-1; counter1++)
{
minimum = counter1;


for (counter2=counter1+1; counter2<total_count; counter2++)





{
if (a[minimum]>a[counter2])
minimum = counter2;
}
if (minimum!=counter1)
{
temp_value = a[counter1];
a[counter1] = a[minimum];
a[minimum] = temp_value;
}
}
printf("\n The Sorted array in ascending order:");
for (counter1=0; counter1<total_count; counter1++)
{
printf("%d", a[counter1]);
}

}
 
 

