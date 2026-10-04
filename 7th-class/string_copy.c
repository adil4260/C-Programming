#include <stdio.h>
#include <string.h>
int main()
{
    char name[] = "Adil";
    char copy[20];

    strcpy(copy, name); // name-এর String → copy-তে copy করো।

    printf("%s", copy);

    return 0;
}