#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    for (int i = 0 ; i < 8 ; ++i )
    {
        printf("%d\n" , i );
        for (int j = 0 ; j < 8 ; ++j) {
            printf("Enter a number.Press 0 for exit.");
            scanf ("%d" , &num);
            if (num == 0){
                goto end;
            }
        }
    }
    end:
    return 0;
}
