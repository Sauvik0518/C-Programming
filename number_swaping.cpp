/*SBA
210314*/

#include <stdio.h>
int main()
{
    int num,mod,quotient,new_num;

    printf("Enter a number :");
    scanf("%d",&num);

    mod = num%10;
    quotient = num/10;
    new_num = (mod*10)+quotient ;
    printf("\n%d = %d",num,new_num);

    return 0;
}
