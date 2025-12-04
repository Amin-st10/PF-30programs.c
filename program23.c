#include <stdio.h>
#define PI 3.14159 // defining constant value of π
int main() {
float radius, area, circumference;
// Input
printf("Enter the radius of the circle: ");
scanf("%f", &radius);
// Processing
area = PI * radius * radius; // formula for area
circumference = 2 * PI * radius; // formula for circumference
// Output
printf("\nArea of the circle = %.2f\n", area);
printf("Circumference of the circle = %.2f\n", circumference);
return 0;
}