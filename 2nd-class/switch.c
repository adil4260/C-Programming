#include <stdio.h>
int main()
{
    int day;
    scanf("%d", &day);
    switch (day) // day-এর মধ্যে কী value আছে সেটা দেখো।
    {
    case 1: // case keyword মূলত switch statement-এর অংশ হিসেবেই ব্যবহার করবে।
        printf("Saturday");
        break; // এখানেই switch শেষ করো। আর নিচের case-গুলো দেখার দরকার নেই।
    case 2:
        printf("Sunday");
        break;

    case 3:
        printf("Monday");
        break;

    default:
        printf("Invalid");
    }
    return 0;
}