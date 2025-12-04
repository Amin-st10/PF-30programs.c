#include <stdio.h>
int main() {
int a, b, c, disc;
// Input values of a, b, c
printf("Enter values of a, b and c: ");
scanf("%d %d %d", &a, &b, &c);
// Calculate discriminant
disc = (b * b) - (4 * a * c);
// Output result
printf("The value of discriminant (disc) = %d\n", disc);
return 0;
}