#include <stdio.h>
int main() {
float rupees = 12000; // given amount in rupees
float dollarRate = 60; // 1 dollar = Rs. 60
float dollars;
// Conversion
dollars = rupees / dollarRate;
// Output
printf("Amount in Rupees: %.2f\n", rupees);
printf("Converted amount in Dollars: %.2f\n", dollars);
return 0;
}