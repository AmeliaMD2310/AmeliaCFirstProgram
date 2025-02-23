/* 
Amelia MacDonald
W0467922
Assignment 1 - Student Grade Management System
Programming in C
February 16, 2025
*/
#include <stdio.h>

int main() {
       
       printf("\n====================================\n");
       printf("  Student Grade Management System  \n");
       printf("====================================\n\n");

    // Declare variables
    char name[50], choice;  
    int grades[3], total, student_count = 0;  
    float average, overall_average = 0.0;  

    do {
        // Get student name
        printf("Enter student name: ");
        scanf(" %[^\n]", name);
        
        total = 0;  

        // Loop to input grades for 3 subjects
        for (int i = 0; i < 3; i++) {
            do {
                // Prompt for grade input
                printf("Enter grade for subject %d (0-100): ", i + 1);
                scanf("%d", &grades[i]);
                
                // Validate grade input
                if (grades[i] < 0 || grades[i] > 100) {
                    printf("Error: Grade must be between 0 and 100. Please re-enter.\n");
                }
            } while (grades[i] < 0 || grades[i] > 100);  
            
            total += grades[i];  
        }

        // Calculate average
        average = total / 3.0;
        overall_average += average;  
        student_count++;  

        // Display student results
        printf("\nStudent: %s\nTotal: %d\nAverage: %.2f\n", name, total, average);
        
        // Determine pass or fail
        if (average >= 50) {
            printf("Result: Pass\n");
        } else {
            printf("Result: Fail\n");
        }

        // Ask if user wants to enter another student
        printf("\nEnter another student? (y/n): ");
        scanf(" %c", &choice);
        
    } while (choice == 'y' || choice == 'Y');  
    
    // Display summary if at least one student was processed
    if (student_count) {
        printf("\nTotal Students: %d\nOverall Average: %.2f\n", student_count, overall_average / student_count);
    }
    
    return 0;
}
