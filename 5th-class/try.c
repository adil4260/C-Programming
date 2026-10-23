#include <stdio.h>
int main()
{
    int sum = 0;
    int n[3] = {10, 20, 30};
    // printf("Your numbers are: \n", n[3]);
    for (int i = 0; i < 3; i++)
    {
        sum = sum + n[i];
    }
    printf("Total: %d", sum);
    return 0;
}