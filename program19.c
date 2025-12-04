#include <stdio.h>
int main() {
int ageYears, ageMonths, ageDays;
// assign value
ageYears = 20; // <-- your age here
// processing
ageMonths = ageYears * 12;
ageDays = ageYears * 365;
// output
printf("Age in years = %d\n", ageYears);
printf("Age in months = %d\n", ageMonths);
printf("Age in days = %d\n", ageDays);
return 0;
}