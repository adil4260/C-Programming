#include <stdio.h>
int main()
{
    float age;

    printf("Enter your age: ");
    scanf("%f", &age); // scanf() variable-এর memory address চায়, তাই &age লিখি।

    printf("Your age is %f", age);
    return 0;
}