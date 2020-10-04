// difference between gets and scanf function
// In gets function we can use "space" between the name ..e.g:- Sulaiman Hussain

#include <stdio.h>
#include <stdlib.h>

int main()
{
   char name [50];
   char fullname [50];
   printf("Enter your name: ");
   gets (fullname);
   printf ("\n Your name is %s \n \n " , fullname);

   printf("Enter your name : ");
   scanf("%s" , &fullname);
   printf("\n Your name is %s \n" , fullname);

   return 0;
}
