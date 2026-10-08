#include <stdio.h>
void add(int a, int b)
{
    int sum = a + b;
    printf("the sum is %d", sum);
}
int main()
{
    add(10, 20);
    return 0;
}