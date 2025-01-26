/* 
Amelia MacDonald
W0467922
January 24, 2025
Programming in C
Exercise 2
*/

#include <stdio.h>

int main() {
// Step 1: Use Floating-Point Numbers 
float radius = 4.5; // Declares and initializes a float variable for the radius of a circle 
printf("The Radius is  %.2f  \n" , radius); // Prints the radius with 2 decimal places

const double pi = (float) 22/7; // Declares a constant double variable for the value of pi
printf("Pi is equal to  %f  \n" , pi); // Prints the value of pi

double circumference = 2 * pi * radius ; // Calculates the circumference of the circle
printf("The Circumference is  %.3f  \n" , circumference); // Prints the floating-point circumference with 3 decimal places

// Step 2: Demonstrate Type Conversion
int IntCircumference2 = (int) 2 * pi * radius; //Converts the floating-point circumference to an integer value
printf("IntCircumference2 is  %d  \n" , IntCircumference2); // Prints the integer-converted circumference

// Step 3: Use Scientific Notation
double PlanckConst= 6.626e-34; // Declares and initializes a double variable for Planck's constant in scientific notation
printf("PlanckConst is  %e  \n" , PlanckConst); // Prints Planck's constant using scientific notation format 

printf("That is my completed Exercise 2 :)"); // End of Code

return 0;

}




 
 
 
 