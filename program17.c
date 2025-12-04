#include <stdio.h>
#include <math.h> // for floor() function
int main() {
float num = 15.58971;
int integralPart;
float fractionalPart;
// processing
integralPart = (int)num; // type casting to int
fractionalPart = num - integralPart; // subtract integral part
// output
printf("Number = %.5f\n", num);
printf("Integral Part = %d\n", integralPart);
printf("Fractional Part = %.5f\n", fractionalPart);
return 0;
}