#include <stdio.h>
int main()
{
    int aarrr[] = {10, 20, 30};
    int *ptr = aarrr;
    for (int i = 0; i < 3; i++)
    {
        printf("Value: %d\n", *(ptr + i));
    }
    return 0;
}
