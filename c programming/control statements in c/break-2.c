#include <stdio.h>

int main()
{
    int i, j;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            printf("%d %d\n", i, j);
            if (i == 2 && j == 2)
            {
                break; //This will teminate the control out of inner for loop
            }
        }
    }

    return 0;
}