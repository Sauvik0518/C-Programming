#include <stdio.h>

int main(){

int element_number;
int i;
int arr[i];
int size;
int value;
printf("Enter the number of elements: ");
scanf("%d\n",&element_number);
size = element_number;

for(i=0;i<size;i++){
    printf("Enter value: ");
    scanf("%d",&value);
    arr[i]=value;
}
printf("The elements are:%d",arr[i]);

return 0;
}
