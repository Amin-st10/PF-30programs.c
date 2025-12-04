#include <stdio.h>
int main() {
int hours, minutes, seconds, totalSeconds;
// Input
printf("Enter time in hours, minutes and seconds: ");
scanf("%d %d %d", &hours, &minutes, &seconds);
// Processing: convert into total seconds
totalSeconds = (hours * 3600) + (minutes * 60) + seconds;
// Output
printf("Total time in seconds = %d\n", totalSeconds);
return 0;
}