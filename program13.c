#include <stdio.h>
#define PI 3.1416 // define constant value of pi
int main() {
float radius, area;
// input
printf("Enter radius of circle: ");
scanf("%f", &radius);
// processing
area = PI * radius * radius;
// output
printf("Area of circle = %.2f\n", area);
return 0;
}