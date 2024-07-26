#include <stdio.h>
#include "e_b_header.h"

int main()
{
    int units;
    printf("Enter the no of units consumed\n");
    scanf("%d",&units);
    printf("Total electricity bill is %f",electricity_consumed(units));

    return 0;
}
