#include <stdio.h>
/*
   Write a program that will count number of digits, as well as, sum up each digit for a given integer N.
   Sample Input:
   Enter a number: 125
   Sample output:
   The number has 3 digits which sum to 8
*/
int main() {
 int n;
 int sum=0;
  int count = 0;
   printf("Enter a Number : ");
   scanf("%d", &n);
    // For sum
    int x=n;
   while (x != 0) {
        sum = sum + x % 10;
        x = x / 10;
    }
  //For count digit 
   while (n!=0)
   {
      n /= 10;
     ++count;
   }
   
 
   
    printf("The number has %d",count);
    printf(" digits which sum to %d",sum);
 }
