#include <stdio.h>
int main () {
const float PI = 3.1416; // constant value of pi
float radius, height, volume;
// input
printf("Enter radius of cylinder: ");
scanf("%f", &radius);
printf("Enter height of cylinder: ");
scanf("%f", &height);
// processing
volume = PI * radius * radius * height;
// output
printf("Volume of cylinder = %.2f\n", volume);
return 0;
}