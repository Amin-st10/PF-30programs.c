#include <stdio.h>
int main() {
char name[50];
int age;
float height;
char gender;
// Input
printf("Enter name: ");
scanf("%s", name);

printf("Enter age: ");
scanf("%d", &age);
printf("Enter height (in cm): ");
scanf("%f", &height);
printf("Enter gender (M/F): ");
scanf(" %c", &gender); // space before %c to consume newline

// Output
printf("\n--- Student Data ---\n");
printf("Name : %s\n", name);
printf("Age : %d years\n", age);
printf("Height : %.2f cm\n", height);
printf("Gender : %c\n", gender);
return 0;
}