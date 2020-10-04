/* Program to calculate an Air ticket after discount */
// nested-if-statement ..
#include <stdio.h>
 main()
{
    int age;
    char gender;
    float fare;

    puts("************************************************************");
    puts("\nDiscount Rules : ");
    puts("1. If Passenger is below or equal 14 years than 30% discount on fare.");
    puts("2. If Passenger is female & below/equal 14 years , Extra 10% discount on fare.");
    puts("3. If Passenger is male then there is no extra discount on fare.");
    puts("4. If Passenger is above 14 years (male or female) then 20% discount on fare. \n");
    puts("************************************************************");

    printf("\n Enter Your Age : ");
    scanf("%d" , &age);
    printf("\n Enter your gender(m/f) :\n ");
    scanf ("%c" , &gender);
    printf ("\n Enter the ticket fare : ");
    scanf("%f" , &fare);

     if (age<=14)
    {
        printf("\n Press Enter to get the Discount\n");
        getch();
        if (gender=='f')
             {
                 fare = fare-fare*0.4; // 30%+10% discount
                 puts("\n You are eligible to get 30% + 10% extra discount.");
                 printf ("\n Air Ticket Fare after discount is Rs.%0.2f\n" , fare );
             }
       if (gender=='m')
             {
                   fare = fare-fare*0.3;
                   puts("\n You are eligible to get 30% extra discount.");
                   printf ("\n Air Ticket Fare after discount is Rs.%0.2f\n" , fare );
              }
    }

    if (age>14)
    {
                    fare=fare-fare*0.20;
                    printf("\n Air Ticket Fare after discount is Rs.%0.2f\n" , fare);
    }
         return 1;
}


