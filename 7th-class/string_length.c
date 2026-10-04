#include <stdio.h>
#include <string.h> //String-এর বিভিন্ন built-in function ব্যবহার করার জন্য এই header লাগে।

int main()
{
    char name[] = "Adil";
    int lengthhh = strlen(name);

    printf("Length = %d", lengthhh);
    return 0;
}