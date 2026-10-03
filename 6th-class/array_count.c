#include <stdio.h>

int main()
{
    int numbers[5];
    int search;
    int count = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }

    scanf("%d", &search);

    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] == search)
        {
            count++;
        }
    }

    printf("Count = %d", count);

    return 0;
}