#include <stdio.h>
int main()
{
    int numbers[2][3] = {
        {10, 20, 30},
        {40, 50, 60}};

    int sum = 0;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum = sum + numbers[i][j];
        }
    }
    printf("Sum: %d\n", sum);
    return 0;
}