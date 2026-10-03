#include <stdio.h>
int main()
{
    int array[5];
    int search;
    printf("Enter the number: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Search: ");
    scanf("%d", &search);
    for (int i = 0; i < 5; i++)
    {
        if (array[i] == search)
        {
            printf("Found");
            return 0;
        }
    }
    printf("Not Found");
    return 0;
}