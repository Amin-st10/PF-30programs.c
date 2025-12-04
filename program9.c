#include <stdio.h>
int main() {
int a, b, c, d, max;
// input
printf("Enter four numbers: ");
scanf("%d %d %d %d", &a, &b, &c, &d);
// processing: assume 'a' is max initially
max = a;
if (b > max)
max = b;
if (c > max)
max = c;
if (d > max)
max = d;
// output
printf("The maximum number is: %d\n", max);
return 0;
}