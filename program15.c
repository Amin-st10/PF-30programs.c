#include <stdio.h>
int main() {
int a, b, temp;
// input
printf("Enter first number: ");
scanf("%d", &a);
printf("Enter second number: ");
scanf("%d", &b);
printf("\nBefore swapping: a = %d, b = %d\n", a, b);
// processing (interchange values)
temp = a;
a = b;
b = temp;
// output
printf("After swapping: a = %d, b = %d\n", a, b);

return 0;
}