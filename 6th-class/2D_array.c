// 2D Array হলো row + column

#include <stdio.h>

int main()
{
    int matrix[2][3] =
        {
            {10, 20, 30},
            {40, 50, 60}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }

        printf("\n");
    }
    return 0;
}