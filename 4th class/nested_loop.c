// নেস্টেড লুপ (Nested Loop) ব্যবহার করা হয়েছে। নেস্টেড লুপের মানে হলো একটি লুপের ভেতর আরেকটি লুপ থাকা।

#include <stdio.h>
int main()
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}