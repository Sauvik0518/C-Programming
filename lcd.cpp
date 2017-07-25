#include <stdio.h>
int main(void)
{
    int a;
    for (int i=0;i<=a;i++)
    {
        if(a%2==0)
        {
            a=a/2;
            if(a/2==1)
            {
                printf("%d",a);
            }
        }
        else if(a%3==0)
        {
            a=a/3;
            if(a/3==1)
            {
                printf("%d",a);
            }

        }
    }
}
