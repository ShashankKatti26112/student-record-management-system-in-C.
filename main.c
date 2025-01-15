#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to store student details
struct Student {
    int id;
    char name[50];
    float marks;
};

// Function to add a student record
void add_student_record(struct Student students[], int *count) {
    printf("Enter student ID: ");
    scanf("%d", &students[*count].id);
    
    printf("Enter student Name: ");
    scanf(" %49[^\n]", students[*count].name);
    
    printf("Enter student Marks: ");
    scanf("%f", &students[*count].marks);
    
    (*count)++;
    printf("Student record added successfully.\n");
}

// Function to delete a student record
void delete_student_record(struct Student students[], int *count) {
    int id, i, found = 0;
    printf("Enter student ID to delete: ");
    scanf("%d", &id);
    
    for (i = 0; i < *count; i++) {
        if (students[i].id == id) {
            found = 1;
            break;
        }
    }
    
    if (found) {
        for (; i < *count - 1; i++) {
            students[i] = students[i + 1];
        }
        (*count)--;
        printf("Student record deleted successfully.\n");
    } else {
        printf("Student ID not found.\n");
    }
}

// Function to display all student records
void display_students_record(struct Student students[], int count) {
    int i;
   
    if (count == 0) {
        printf("No records available.\n");
        return;
    }

    printf("ID\tName\t\tMarks\n");
    printf("---------------------------------\n");
    
    for (i = 0; i < count; i++) {
        printf("%d\t%s\t\t%.2f\n", students[i].id, students[i].name, students[i].marks);
    }
}

// Main function
int main() {
    struct Student students[100];
    int count = 0, choice;

    while (1) {
        printf("\n1. Add student record\n2. Delete student record\n3. Display student records\n4. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_student_record(students, &count);
                break;
            case 2:
                delete_student_record(students, &count);
                break;
            case 3:
                display_students_record(students, count);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}