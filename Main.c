/* 
Amelia MacDonald 
W0467922
January 22, 2025
Programming in C
Exercise 3
*/

#include<stdio.h>

int main() {
    // Declaring an integer variable 
    int x;
    printf("Enter Integer Value for X :");
    scanf("%i" , &x );
    // Declaring a float variable 
    float y;
    printf("Enter Float Value for Y :");
    scanf("%f" , &y );
    // Declaring a double variable z
    double z;
    printf("Enter Double Value for Z :");
    scanf("%f" , &z );
    // Printing the values of x, y, and z
    printf("The Value of x %i is y is %f z is %f ", x,y,z);


  // add two int
   float a = 5.0;
   float b= 10.0;
   // Calculating the sum, Subtraction result, multiplication result, and Division result of a and b
   float additionResult = a + b ;
   float subtractionResult = a - b ;
   float multiplicationResult = a *b ;
   float divisionResult = a / b ;
   // Declaring a character variable
   char letter = 'Z' ;

    // Part 1: Displaying arithmetic operation results
    puts (" ---------------------------Part 1 ----------------------------");
    printf("The Sum of %.2f and  %.2f is %.2f \n", a,b,additionResult);
    printf("The Subtraction Result of  %.2f and %.2f is %.2f \n", a,b,subtractionResult);
    printf("The Multiplication Result of  %.2f and  %.2f is %.2f \n", a,b,multiplicationResult);
    printf("The Division Result of  %.2f and  %.2f is %.2f \n", a,b,divisionResult);
    // Part 2: Calculating and displaying the modulus of two integers
    puts (" -------------------------Part 2 ----------------------------");
    printf("The Result of modulus 6 and 5 is %d \n", 6%5);
    // Part 3: Displaying a character and its ASCII value
    puts (" -------------------------Part 3 ----------------------------");
    printf("The Letter is %c and the equivelent ASCII for it is %d \n", letter , letter );
    // Part 4: Reading additional inputs and displaying them
    puts("---------------------------Part 4------------------------------");
    int c;
    printf("Enter Integer value for C :");
    scanf("%i" , &c );


    float d;
    printf("Enter Float value for D :");
    scanf("%f" , &d );
    printf("You Entered %i for the Integer and %f for the float number \n", c , d );
    // Part 5: Demonstrating pre-increment and post-increment operations
    puts("------------------------------Part 5----------------------------"); 

    int value = 5;
   // Displaying the initial value
   printf("The Initial Value is %d \n", value ); 
   // Displaying the  pre-increment value
   printf("The Pre Increment Value is %d \n", ++value); 
   // Displaying the post-increment value
   printf("The Post Increment Value is %d \n", value++);
   // Displaying the final value
   printf("The Final Value is %d \n", value ); 
   
   puts("------------------------------The End!!!!----------------------------");   
   puts("----------------------That is Exercise 3 completed-------------------");

   return 0; 
}
   
