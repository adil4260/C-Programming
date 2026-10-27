#include <stdio.h>

int main()
{
    int N, K;

    // Taking N and K as input
    scanf("%d", &N);
    scanf("%d", &K);

    // Loop from 1 to N
    for (int i = 1; i <= N; i++)
    {
        int square = i * i;

        // Check if the square is divisible by K
        if (square % K == 0)
        {
            printf("%d\n", square);
        }
        else
        {
            printf("DIU CSE 71 Batch\n");
        }
    }

    return 0;
}