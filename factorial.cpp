/*SBA
210314*/
#include <stdio.h>
int main()
{
    int n,i,j,k;
    i = 1;
    printf("This calculator will you give you the factorial of your desired number\n\nEnter the number:\n");
    scanf("%d",&n);
    for(j=1;j<n+1;j++ )
        {
            k = i*j;
            i = k ;

        }
    printf("%d! is: %d",n,k);


    return 0;
}
