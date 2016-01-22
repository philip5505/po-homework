#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int bit;

    scanf("%d",&a);

    if(a < 0 || a > 7)
    {
        return 1;
    }

    scanf("%d",&b);

    if(b < 0 || b > 200)
    {
        return 1;
    }

    bit = b & (1 << a);

    if(bit == 0)
    {
        printf("%d",bit);
    }
    else
    {
        bit = 1;
        printf("%d",bit);
    }

    return 0;
}

