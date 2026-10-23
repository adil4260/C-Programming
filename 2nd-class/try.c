#include <stdio.h>
int main()
{
    int x;
    printf("your number is:");
    scanf("%d", &x);
    if (x % 2 == 0)
    {
        printf("Event number");
    }
    else
    {
        printf("Odd number");
    }
    return 0;
}