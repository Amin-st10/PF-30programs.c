#include <stdio.h>
int main() {
int a = 10, b = 20; // declaration & initialization
float average;
// processing
average = (a + b) / 2.0; // use 2.0 to avoid integer division
// output
printf("First number = %d\n", a);
printf("Second number = %d\n", b);
printf("Average = %.2f\n", average);
return 0;
}