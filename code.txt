#include <stdio.h>

// Define a structure to represent student information
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

// Function to display student information
void displayStudent(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.rollNumber);
    printf("Marks: %.2f\n", s.marks);
    printf("\n");
}

// Function to calculate and display average marks of all students
void calculateAverage(struct Student students[], int size) {
    float totalMarks = 0;

    for (int i = 0; i < size; i++) {
        totalMarks += students[i].marks;
    }

    float average = totalMarks / size;
    printf("Average Marks of All Students: %.2f\n", average);
}

int main(void) {
    // Declare an array of structures to store student marks
    struct Student students[3];

    // Input information for each student
    for (int i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);

        printf("Marks: ");
        scanf("%f", &students[i].marks);

        printf("\n");
    }

    // Display information for each student using the displayStudent function
    for (int i = 0; i < 3; i++) {
        displayStudent(students[i]);
    }

    // Calculate and display the average marks of all students using the calculateAverage function
    calculateAverage(students, 3);

    return 0;
}