#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int num;
    int rand_max;

    //rand_max = 100;
    char  first_name, second_name;

    printf("Enter the first name:\n");
    scanf("%s",&first_name);

    printf("Enter second name:\n");
    scanf("%s",&second_name);

    //num = rand();

    printf("%s loves %s = %d ",first_name,second_name,rand()%100);

    return 0;


}
