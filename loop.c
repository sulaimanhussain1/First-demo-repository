#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num , i = 0;
    printf("Enter a number: ");
    scanf("%d" , &num);
    for (i=0 ; i < num ; i++)
     {
         printf ("%d\n" , i);
     }

    return 0;
}
 