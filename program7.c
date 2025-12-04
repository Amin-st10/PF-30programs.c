#include <stdio.h>
int main() {
int rollNo;
int pf, ic, cg; // marks of three subjects
int total;
float average;
// input
printf("Enter Roll No: ");
scanf("%d", &rollNo);
printf("Enter marks in Programming Fundamentals: ");
scanf("%d", &pf);
printf("Enter marks in Introduction to Computing: ");
scanf("%d", &ic);
printf("Enter marks in Computer Graphics: ");
scanf("%d", &cg);
// processing
total = pf + ic + cg;
average = total / 3.0; // divide by 3 to get average
// output
printf("\nRoll No: %d\n", rollNo);
printf("Programming Fundamentals: %d\n", pf);
printf("Introduction to Computing: %d\n", ic);
printf("Computer Graphics: %d\n", cg);
printf("Total Marks = %d\n", total);
printf("Average Marks = %.2f\n", average);
return 0;
}