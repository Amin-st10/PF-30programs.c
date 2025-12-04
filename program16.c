#include <stdio.h>

int main() {
int a, b, c, product;
// multiple assignment
a = b = c = 3;
// processing
product = a * b * c;
// output
printf("a = %d, b = %d, c = %d\n", a, b, c);
printf("Product = %d\n", product);
return 0;
}