/*Q143 (Enum)
Find and print the student with the highest marks.*/

#include <stdio.h>
  struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for (i = 0; i < n; i++) {
        printf("Enter name, roll number and marks: ");
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

    int topIndex = 0;

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }

    printf("Topper: %s (Marks: %d)\n", s[topIndex].name, s[topIndex].marks);

    return 0;
}
