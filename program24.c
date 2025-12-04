#include <stdio.h>
int main() {
int sub1, sub2, sub3, sub4, sub5;
int total;
float average;
// Input
printf("Enter marks of 5 subjects (out of 100 each):\n");
scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);
// Processing
total = sub1 + sub2 + sub3 + sub4 + sub5;
average = total / 5.0; // use 5.0 for float division
// Output
printf("\nTotal Marks = %d\n", total);
printf("Average Marks = %.2f\n", average);
return 0;
}
