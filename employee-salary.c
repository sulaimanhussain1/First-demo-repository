// Program to calculate the net-salary of an employee..
// Using if statement ;;

#include <stdio.h>
#include <stdlib.h>

int main()
{
  float  tax, gross_salary , net_salary;
  printf("Enter a gross salary of an employee: ");
  scanf("%f" , &gross_salary);
  printf("Employee gross salary is %8.2f \n" , gross_salary);
  if(gross_salary<10000)
    net_salary = gross_salary;
  if(gross_salary>=10000)
  {
      tax = gross_salary*0.15;
      net_salary = gross_salary - tax ;
  }
  printf("Tax : %26.2f" , tax);
  printf("\nNet Salary Rs. %16.2f \n" , net_salary);
  
  return 0;
}