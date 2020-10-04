#include <stdio.h>
#include <conio.h>
int add (int , int);    // function type
int main(int argc, char const *argv[])
{
    int a,b,ans;
    printf("\nEnter two numbers: ");
    scanf("%d %d" , &a , &b);
    ans= add (a,b);     //function called
                        // a and b are actual arguments
    printf ("Addition : %d\n" , ans);
}

/* function declaration */
int add (int n, int m)       // n and m are formal argument
{
    int c;
    c = n + m;
    return(c);
}
