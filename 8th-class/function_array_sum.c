#include <stdio.h>

int arraySum(int arr[], int size)
{

    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}

int main()
{

    int numbers[] = {10, 20, 30, 40, 50};

    int result = arraySum(numbers, 5);

    printf("Sum = %d", result);

    return 0;
}