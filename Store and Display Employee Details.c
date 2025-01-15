#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp[3];
    int i;

    for(i = 0; i < 3; i++) {
        printf("Enter employee ID: ");
        scanf("%d", &emp[i].id);
        printf("Enter employee name: ");
        scanf("%s", emp[i].name);
        printf("Enter employee salary: ");
        scanf("%f", &emp[i].salary);
    }

    printf("Employee Details\n");
    for(i = 0; i < 3; i++) {
        printf("ID: %d\nName: %s\nSalary: %.2f\n", emp[i].id, emp[i].name, emp[i].salary);
    }
    return 0;
}
