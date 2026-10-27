// int valu---Integer return করছে।
// void-কোনো value return করছে না।

#include <stdio.h>
int add(int a, int b) // int---> এই function একটা integer value return করবে।
{
    return a + b;
}

int main()
{
    int result = add(10, 20);

    printf("Result is = %d", result);

    return 0;
}