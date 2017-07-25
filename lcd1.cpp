#include <stdio.h>

int main(void)
{
    int num,a,b;
    printf("Enter the number: ");

    scanf("%d",&num);

    while(num%2 != 0){
        a = num/2;
        b = num%2;

        printf("%d  %d\n",a,b);
    }

    return 0;
}
