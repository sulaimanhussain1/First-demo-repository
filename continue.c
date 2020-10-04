#include <stdio.h>
int main(int argc, char const *argv[])
{
     int i , age ;
    for (i=0; i < 10; ++i)
    {
        printf("%d\nEnter your age\n " , i+1);
        scanf("%d" , &age);
        if (age < 15) 
        {
               continue;
        }
        printf("we use continue statement\n");
        printf("SULAIMAN HUSSAIN\n");
        printf("JHANGEER HUSSAIN\n");
    }
    return 0;
}
