#include <stdio.h>

int main()
{
    int units;
    float total_bill;

    // Taking input for total units consumed
    printf("Enter total units consumed: ");
    scanf("%d", &units);

    // Calculating bill based on the given conditions
    if (units <= 100)
    {
        total_bill = units * 5;
    }
    else if (units <= 200)
    {
        total_bill = (100 * 5) + ((units - 100) * 7);
    }
    else
    {
        total_bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    }

    // Printing the total bill
    printf("Total bill = %.0f\n", total_bill);

    return 0;
}