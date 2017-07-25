#include <stdio.h>
int main(void)
{
    float first_number , second_number ;
    float result;
    printf("Enter the values of the numbers : \n");
    printf("First number : \n");
    scanf("%f",&first_number);
    printf("Second number : \n");
    scanf("%f",&second_number);

    result = first_number + second_number ;

    printf("Result is : %f",result);

    return 0;

}
