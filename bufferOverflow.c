#include <stdio.h>

int main(void){

    char buffer[5];

    printf("Enter your password:");

    gets(buffer);

    puts(buffer);

    return 0;
}
