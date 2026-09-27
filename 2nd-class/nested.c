#include <stdio.h>
int main()
{
    int age;
    scanf("%d", &age);
    if (age >= 18)
    {
        if (age <= 60)
        {
            printf("Adult");
        }
    }
    else
    {
        printf("Under 18");
    }
    return 0;
}