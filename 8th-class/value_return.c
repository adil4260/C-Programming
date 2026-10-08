// int valu---Integer return করছে।
// void-কোনো value return করছে না।

#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}

int main()
{
    int result = add(10, 20);

    printf("Result is = %d", result);

    return 0;
}