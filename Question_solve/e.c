#include <stdio.h>

int main()
{
    int N, K;

    // Taking N and K as input in the first line
    scanf("%d %d", &N, &K);

    int arr[N];
    // Taking N integers in an array in the second line
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    int count = 0;
    float sum = 0;
    int divisible[N]; // Array to store divisible numbers

    // Checking each element for divisibility by K
    for (int i = 0; i < N; i++)
    {
        if (arr[i] % K == 0)
        {
            divisible[count] = arr[i];
            sum += arr[i];
            count++;
        }
    }

    // Calculating average
    float average = 0;
    if (count > 0)
    {
        average = sum / count;
    }

    // Printing the output in the specified format
    printf("Average = %.2f\n", average);
    printf("Divisible numbers:");
    for (int i = 0; i < count; i++)
    {
        printf(" %d", divisible[i]);
    }
    printf("\n");

    return 0;
}