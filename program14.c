#include <stdio.h>
int main() {
float millimeters, inches;
// input
printf("Enter length in millimeters: ");
scanf("%f", &millimeters);
// processing (conversion)
inches = millimeters / 25.4;
// output
printf("%.2f millimeters = %.2f inches\n", millimeters, inches);
return 0;

}
