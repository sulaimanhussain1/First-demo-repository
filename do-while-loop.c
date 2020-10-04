#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num , a = 0;
    printf("Enter a num: ");
    scanf("%d" , &num);

    do
    {
        printf("%d\n" , a + 2);
        a = a + 2;
    }while (a < num);
    {
        printf("REST OF THE LOOP!");
    }
    
    return 0;
}
