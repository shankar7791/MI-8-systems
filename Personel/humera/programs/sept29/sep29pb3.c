/* cprogram for representation of date(bitfield)*/
#include <stdio.h>
struct date {
        unsigned int d : 5;
        unsigned int m : 4;
        unsigned int y;
};
int main()
{
    printf("size of date is %lu bytes\n",sizeof(struct date));
    struct date dt = { 29, 9, 2020 };
    printf("date is %d /%d/ %d ", dt.d,dt.m,dt.y);
    return 0;
}
