#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter any number from 1 to 1000000\n");
    scanf("%d",&b);
    if(b<=1000000){
        for(a=1;a<11;a++){
            int c = b*a;
            printf("%d*%d = %d \n",b,a,c);

        }
    }
    else
        printf("The number is out of the list !!!");

return 0;

}
