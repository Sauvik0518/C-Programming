#include <stdio.h>
int main(void)
{
    int a,b,c ;

    a = 0; b = 1;
    printf("%d\n%d\n",a,b);

    for(int i = 0;i < 10;i++ )
    {
        c = a + b;
        printf("%d\n",c);

        a = b;
        b = c;
    }

    return 0;
}

