#include <stdio.h>
int facto(int number)
{
    if(number == 0  || number == 1)
    {
        return(1);
    }
    else
    {
        return (number * facto(number - 1));
    }
    
}
int main(int argc, char const *argv[])
{
    int i;
    printf("Enter any number.To find a factorial:\n ");
    scanf("%d" , &i);
    printf("The factorial of %d is %d", i , facto(i));
    return 0;
}
