#include <stdio.h>
void greet(char name[]) // এখানে name সেই value গ্রহণ করছে।
{
    printf("Hello %s", name);
}

int main()
{
    greet("Adil"); //"Adil" হচ্ছে function-এর কাছে পাঠানো value।
    return 0;
}