#include <stdio.h>
#include <string.h>
int main()
{
    char first[30] = "Adil ";
    char last[] = "Mahmud";
    strcat(first, last); // মানে last-কে first-এর শেষে যোগ করো।

    printf("%s", first);

    return 0;
}