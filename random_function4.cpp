#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    for(int i=0;i<10;i++)
        printf("The number %d = %d\n",i,rand()%100);

    return 0;
}
