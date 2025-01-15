#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float marks[3];
};

int main() {
    struct Student s1;
    float sum = 0.0, avg;

    printf("Enter student ID: ");
    scanf("%d", &s1.id);
    printf("Enter student name: ");
    scanf("%s", s1.name);
    for(int i = 0; i < 3; i++) {
        printf("Enter marks for subject %d: ", i+1);
        scanf("%f", &s1.marks[i]);
        sum += s1.marks[i];
    }
    avg = sum / 3;
    printf("Average Marks: %.2f\n", avg);
    return 0;
}
