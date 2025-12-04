#include <stdio.h>
int main() {
int n;
// Input
printf("Enter an integer: ");
scanf("%d", &n);
// Processing & Output using simple if
if (n % 2 == 0) {
printf("%d is Even\n", n);
}
if (n % 2 != 0) {
printf("%d is Odd\n", n);
}
return 0;
}