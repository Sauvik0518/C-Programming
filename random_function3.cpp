#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main()
{
   int n, max, num, c;

   printf("Enter the number of random numbers you want ");
   scanf("%d",&n);

   printf("Enter the maximum value of random number ");
   scanf("%d",&max);

   printf("%d random numbers from 0 to %d are :-\n",n,max);
   int randomize();

   for ( c = 1 ; c <= n ; c++ )
   {
      num = randomize();
      printf("%d\n",num);

   }

   getch();
   return 0;
}
