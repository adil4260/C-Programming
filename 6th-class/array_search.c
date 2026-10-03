#include <stdio.h>
int main()
{
    int numbers[5];
    int search;
    int found = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }
    printf("Search: ");
    scanf("%d", &search);
    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] == search)
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
    {
        printf("Found");
    }
    else
    {
        printf("Not Found");
    }
    return 0;
}