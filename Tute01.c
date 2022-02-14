/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int sub1,sub2;
   float tot,avg;
   
   printf("Enter 1st subject mark:");
   scanf("%d",&sub1);
   
   printf("Enter 2nd subject mark:");
   scanf("%d",&sub2);
   
   tot=sub1+sub2;
   avg=tot/2.0;
   
   printf("Your average mark is %.2f",avg);
  
  return 0;
}

