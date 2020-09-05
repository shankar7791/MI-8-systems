#include<stdio.h>

// print Fahrenheit-Celsius table for fahr=0,20,....,300

void main()
{
    int fahr,celsius;
    int lower,upper,step;

    lower=0;  //lower limit of temperature table
    upper=300; //upper limit
    step=30; //step size

    celsius = lower;
    //Fahrenheit to Celsius
    /* while(fahr<=upper)
     {
        celsius=5*(fahr-32)/9;

         printf("%d\t%d\n",fahr,celsius);
         fahr=fahr+step;
     }*/

     //Celsius to Fahrenheit
    while(celsius<=upper)
    {
        fahr=(celsius*9/5)+32;

        printf("%d\t%d\n",celsius,fahr);
        celsius=celsius+step;
    }
}