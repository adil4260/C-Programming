#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}

// 9. Nested Loop-এর আসল ব্যবহার

// Pattern শুধু practice-এর জন্য।
// বাস্তবে nested loop ব্যবহার হবে যেমন:
// 2D Array
// Matrix
// Table
// বিভিন্ন searching/comparison problem
// Pattern
// কিছু sorting algorithm