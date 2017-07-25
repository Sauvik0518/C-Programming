//the sum of all the multiples of 3 and 5 under 1000

#include<stdio.h>
int main(void)
{
    int sum = 0;

    for(int i=0;i<1001;i++){
        if(i%3==0 && i%5==0){
            sum = sum+i;
        }
    }
    printf("The sum is: %d",sum);

    return 0;
}
