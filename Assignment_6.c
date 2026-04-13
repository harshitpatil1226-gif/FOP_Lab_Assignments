//Program to accept student details and display that result using an array of structures
#include <stdio.h>
struct student
{
    int usn;
    char name[20];
    int marks1,marks2,marks3;
    float avg;
};
int main() {
    struct student s[5];
    for(int i=0;i<5;i++){
        printf("Enter details of student %d\n",i+1);
        printf("USN: ");
        scanf("%d",&s[i].usn);
        printf("Name: ");
        scanf("%s",s[i].name);
        printf("Marks in subject 1: ");
        scanf("%d",&s[i].marks1);
        printf("Marks in subject 2: ");
        scanf("%d",&s[i].marks2);
        printf("Marks in subject 3: ");
        scanf("%d",&s[i].marks3);
        s[i].avg=(s[i].marks1+s[i].marks2+s[i].marks3)/3.0;
    }
    printf("\nStudent Details:\n");
    for(int i=0;i<5;i++){
        printf("USN: %d\n",s[i].usn);
        printf("Name: %s\n",s[i].name);
        printf("Marks in subject 1: %d\n",s[i].marks1);
        printf("Marks in subject 2: %d\n",s[i].marks2);
        printf("Marks in subject 3: %d\n",s[i].marks3);
        printf("Average Marks: %.2f\n",s[i].avg);
        printf("\n");
    }
    return 0;
}
