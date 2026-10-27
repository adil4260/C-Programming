#include <stdio.h>

// int main()
// {
//     int a = 5, b = 2;
//     printf("%d", a / b);
//     // একটি data type-কে অন্য data type-এ রূপান্তর করাকে Type Casting বলে। output-2 ,,কারণ দুইটি operand-ই int; তাই ভগ্নাংশের অংশ বাদ যায়।
// }

int main()
{
    int a = 5, b = 2;

    float result = (float)a / b;

    printf("%f", result); // a-এর মানকে হিসাবের সময় float হিসেবে ব্যবহার করছে।

    পরীক্ষার নিয়ম : শুধু ফলাফল float variable - এ রাখলেই integer division - এর সমস্যা ঠিক হয় না। Division - এর আগে অন্তত একটি operand - কে floating - point type - এ রূপান্তর করতে হবে।
}