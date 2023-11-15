
#include <stdio.h>
#include <math.h>

int main()
{
    int i, sum, temp;

    printf("Cac so Armstrong co 3 chu so la: ");

    for(i = 100; i <= 999; i++)
    {
        int a = i / 100;
        int b = (i / 10) % 10;
        int c = i % 10;

        sum = pow(a, 3) + pow(b, 3) + pow(c, 3);

        if(sum == i)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
