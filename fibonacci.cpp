#include <stdio.h>
int main(void)
{
    int a,b,c;
        a = 0; b = 1;
        printf("%d\n%d\n");
        for(int i=0;i<10;i++){

        c = a+b;
        printf("%d",c);
        a = b;
        b = c;
        }

        return 0;
}
