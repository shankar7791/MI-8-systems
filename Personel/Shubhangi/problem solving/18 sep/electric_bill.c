#include <stdio.h>
// program on calcultaion of electric bill
int main()
{
    int unit, cust_id;
    char cust_name[20];
    float total_amount, surcharge, amount;
    
    // 1-100 unit = 8 Rs/unit
    // 101-200 unit = 12 Rs/unit
    // 200-400 unit = 16 Rs/uni     
    //  400 and above =20 Rs/unit

    printf("Please enter the customer id:\n");
    scanf("%d", &cust_id);
    printf("Please enter the customer name:\n");
    scanf("%s", &cust_name);
    printf("Enter the number of units you have cosumed:\n");
    scanf("%d", &unit);

    if (unit <= 100)
    {
        amount = unit * 8;
    }
    else if (unit > 100 && unit < 200)
    {
        amount = unit * 12;
    }
    else if (unit > 200 && unit < 400)
    {
        amount = unit * 16;
    }
    else
    {
        amount = unit * 20;
    }

    /*
     * Calculate total electricity bill
     * after adding surcharge
     */
    surcharge = total_amount * 0.20;
    total_amount = amount + surcharge;

    printf("\n\n **********Electricity Bill***********\n\n");



    printf("Customer Id             :      %d\n", cust_id);
    printf("Customer Name           :      %s\n", cust_name);
    printf("Units consumed          :      %d\n", unit);
    printf("Total electricity bill  :      %f\n", total_amount);
    printf("Surchage Amount         :      %f\n", surcharge);

    printf("\n Rates per unit are as follows\n");

    printf("\n 1-100 unit = 8 Rs/unit \n");
    printf("\n 101-200 unit = 12 Rs/unit\n");
    printf("\n 200-400 unit = 16 Rs/unit\n");
    printf("\n More than 400 =20 Rs/unit\n");
}
