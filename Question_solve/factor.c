#include <stdio.h>

int main()
{
    int counter = 0;
    int product = 1;
    int factor = 2; // উদাহরণস্বরূপ factor ঘোষণা করা হলো

    printf("Calculating product...\n");

    for (int i = 0; i < 3; i++)
    {
        product *= (counter + factor);
        counter++;
    }

    printf("Final product: %d\n", product);

    return 0;
}