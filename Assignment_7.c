#include <stdio.h>
#include <string.h>

#define MAX 50

struct Student {
    int    roll_no;
    char   name[50];
    float  marks[3];   // marks for 3 subjects
    float  total;
    float  percentage;
    char   grade;
};

char getGrade(float p) {
    if (p >= 90) return 'A';
    if (p >= 75) return 'B';
    if (p >= 60) return 'C';
    if (p >= 50) return 'D';
    return 'F';
}

void inputStudents(struct Student s[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Roll No: ");  scanf("%d", &s[i].roll_no);
        printf("Name: ");     scanf(" %[^\n]", s[i].name);

        s[i].total = 0;
        for (int j = 0; j < 3; j++) {
            printf("Marks in Subject %d (out of 100): ", j + 1);
            scanf("%f", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }

        s[i].percentage = s[i].total / 3.0;
        s[i].grade = getGrade(s[i].percentage);
    }
}

void displayResults(struct Student s[], int n) {
    printf("\n%-6s %-20s %-8s %-8s %-8s %-10s %-10s %-5s\n",
           "Roll", "Name", "Sub1", "Sub2", "Sub3", "Total", "Percentage", "Grade");
    printf("%-6s %-20s %-8s %-8s %-8s %-10s %-10s %-5s\n",
           "----", "----", "----", "----", "----", "-----", "----------", "-----");

    for (int i = 0; i < n; i++) {
        printf("%-6d %-20s %-8.1f %-8.1f %-8.1f %-10.1f %-10.2f %-5c\n",
               s[i].roll_no, s[i].name,
               s[i].marks[0], s[i].marks[1], s[i].marks[2],
               s[i].total, s[i].percentage, s[i].grade);
    }
}

int main() {
    struct Student students[MAX];
    int n;

    printf("Enter number of students (max %d): ", MAX);
    scanf("%d", &n);

    inputStudents(students, n);
    displayResults(students, n);

    return 0;
}
