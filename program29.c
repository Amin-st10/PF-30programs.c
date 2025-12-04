#include <stdio.h>
int main() {
int n;
// Input
printf("Enter a number: ");
scanf("%d", &n);
// Condition check
if (n > 100) {
printf("The value of n is greater than 100.\n");
}

// Otherwise, program does nothing (ignores)
return 0;
}