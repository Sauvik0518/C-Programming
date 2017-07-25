#include<stdio.h>
int main(void)
{
    int num = 40;
    int n,ary[n];
    n = 0;

    for(int i=0;i<41;i++){
        if(num%i == 0){
           /* ary[n]=i;
            n++;*/
            printf("the factor is: %d\n",i);
        }
    }
    //printf("%d\n",ary[n]);

    return 0;
}
