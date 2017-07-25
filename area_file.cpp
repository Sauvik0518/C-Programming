#include <stdio.h>
#define pi 3.1416

int main(void)
{
    int first_choice, second_choice;
    float area,r,b,a,l,w;

    printf("Enter your choice:\n");
    printf("press 1 for AREA \n press 2 for VOLUME\n");

    scanf("%d",&first_choice);

    if(first_choice == 1){
        printf("What do you want?\n");
        printf("press 1 for circle \n press 2 for triangle \n press 3 for square \n press 4 for rectangle\n");

        scanf("%d",&second_choice);
        if(second_choice == 1){
                printf("Enter the radius: ");
                scanf("%f",&r);
                area = (pi*r*r);
                printf("The area of the Circle:%f",area);

        }
        if(second_choice == 2){
                printf("Enter the base and axis: ");
                scanf("%f %f",&b,&a);
                area = (0.5*b*a);
                printf("The area of the triangle:%f",area);

        }
        if(second_choice == 3){
                printf("Enter the length:");
                scanf("%f",&l);
                area = (l*l);
                printf("The area of the square:%f",area);

        }
        if(second_choice == 4){
                printf("Enter the length and the width: ");
                scanf("%f %f",&l,&w);
                area = (l*w);
                printf("The area of the rectangle:%f");

        }
    }
    return 0;
}
