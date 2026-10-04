#include <stdio.h>
#include <string.h>
int main()
{
    char name1[] = "Adil";
    char name2[] = "Adil";

    if (strcmp(name1, name2) == 0)
    {
        printf("Same");
    }
    else
    {
        printf("Different");
    }
    return 0;
}