#include <stdio.h>

int main(void)
{
    int n;
    printf("Ener input: ");
    scanf("%d",&n);
    if(n!=1 && n%2==1){

        n = 3*n + 1;
        printf("\n%d",n);

    }
    else
        printf("\n%d",n);


    return 0;
}
