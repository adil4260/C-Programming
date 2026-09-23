#include <stdio.h>
// int main()

int add(int a, int b)
{
    int sum = a + b;
    return sum;
}

int main()
{
    int sum = add(3, 5);
    printf("Sum: %d\n", sum);
    return 0;
}
