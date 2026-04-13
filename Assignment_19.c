#include <stdio.h>
#include <string.h>

struct EMPLOYEE {
    char name[50];
    char designation[50];
    char gender[10];
    char doj[20];
    float salary;
};

// a) Total number of employees
void totalEmployees(int n) {
    printf("\nTotal Employees = %d\n", n);
}

// b) Count male and female
void countGender(struct EMPLOYEE emp[], int n) {
    int male = 0, female = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(emp[i].gender, "Male") == 0)
            male++;
        else
            female++;
    }
    printf("\nMale Employees   = %d\n", male);
    printf("Female Employees = %d\n", female);
}

// c) Employees with salary > 10000
void highSalary(struct EMPLOYEE emp[], int n) {
    printf("\nEmployees with Salary > 10,000:\n");
    for (int i = 0; i < n; i++) {
        if (emp[i].salary > 10000)
            printf("  %s (%.2f)\n", emp[i].name, emp[i].salary);
    }
}

// d) Employees with designation "Asst Manager"
void asstManager(struct EMPLOYEE emp[], int n) {
    printf("\nAsst Managers:\n");
    for (int i = 0; i < n; i++) {
        if (strcmp(emp[i].designation, "Asst Manager") == 0)
            printf("  %s\n", emp[i].name);
    }
}

int main() {
    int n;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct EMPLOYEE emp[n];

    for (int i = 0; i < n; i++) {
        printf("\n--- Employee %d ---\n", i + 1);
        printf("Name        : "); scanf("%s", emp[i].name);
        printf("Designation : "); scanf("%s", emp[i].designation);
        printf("Gender      : "); scanf("%s", emp[i].gender);
        printf("Date of Join: "); scanf("%s", emp[i].doj);
        printf("Salary      : "); scanf("%f", &emp[i].salary);
    }

    totalEmployees(n);
    countGender(emp, n);
    highSalary(emp, n);
    asstManager(emp, n);

    return 0;
}
