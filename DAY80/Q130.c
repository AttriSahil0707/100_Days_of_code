// Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};
int main() {
    struct Student s[10];
    int n, i;
    FILE *fp;

    printf("Enter number of students: ");
    scanf("%d", &n);

    fp = fopen("students.txt", "w");

    for(i = 0; i < n; i++) {
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter roll: ");
        scanf("%d", &s[i].roll);
        printf("Enter marks: ");
        scanf("%d", &s[i].marks);

        fprintf(fp, "%s %d %d\n", s[i].name, s[i].roll, s[i].marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");

    printf("\nStudent Records:\n");

    while(fscanf(fp, "%s %d %d", s[0].name, &s[0].roll, &s[0].marks) != EOF) {
        printf("Name: %s | Roll: %d | Marks: %d\n", s[0].name, s[0].roll, s[0].marks);
    }

    fclose(fp);

    return 0;
}

