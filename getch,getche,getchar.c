/* Uses the function of getch, getche, getchar*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
   char a;
   printf("\nEnter a Value: ");
   a = getchar();
   printf("You Entered: %C" , a);

    printf("\n\nEnter a Value: ");
   a = getche();
   printf("\nYou Entered: %C" , a);

    printf("\n\nEnter a Value: ");
   a = getch();
   printf("\nYou Entered: %C" , a);
}
