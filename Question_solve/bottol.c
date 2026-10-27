#include <stdio.h>

int main()
{
    int total_bottles, friends;
    int bottles_per_friend, remaining_bottles;

    // Taking inputs
    scanf("%d", &total_bottles);
    scanf("%d", &friends);

    // Calculating bottles per friend and remaining bottles
    bottles_per_friend = total_bottles / friends;
    remaining_bottles = total_bottles % friends;

    // Printing the output
    printf("Each friend gets %d bottles\n", bottles_per_friend);
    printf("Remaining bottles = %d\n", remaining_bottles);

    return 0;
}