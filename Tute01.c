/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int m1,m2,total;
  float avg;
  printf("Enter marks of subject 1:");
  scanf("%d",&m1);
  printf("Enter marks of subject 2:");
  scanf("%d",&m2);
  total=m1+m2;
  printf("Total is %d\n",total);
  avg=total/2.0;
  printf("Average is %.2f",avg);
  
  
  return 0;
}

