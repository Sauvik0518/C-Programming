#include <stdio.h>

int main(void)
{
    int num, power,temp,result;

    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Give the power: ");
    scanf("%d",&power);

    temp = 1;

    for(int i=0;i<power;i++)
    {
        result = temp*num;
        temp = result;
    }
    printf("The result is:%d",result);

    return 0;
}
