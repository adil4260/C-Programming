#include <stdio.h>
int main()
{
    int n;
    printf("your number is:");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("Event number");
    }
    else
    {
        printf("Odd number");
    }
    return 0;
}