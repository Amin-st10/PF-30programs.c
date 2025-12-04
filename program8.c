#include <stdio.h>
int main() {

float fahrenheit, celsius;
// input
printf("Enter temperature in Fahrenheit: ");
scanf("%f", & fahrenheit);
// processing (conversion formula)
celsius = (5.0 / 9.0) * (fahrenheit - 32);
// output
printf("Temperature in Celsius = %.2f\n", celsius);
return 0;
}