/*Q145 (Enum)
Return a structure containing top student's details from a function.
*/

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

struct Student getTopStudent(struct Student s[], int n) {
    int i, topIndex = 0;
    for (i = 1; i < n; i++) {
        if (s[i].marks > s[topIndex].marks)
            topIndex = i;
    }
    return s[topIndex];
}

int main() {
    int n = 3;
    struct Student s[3];
    int i;

    for (i = 0; i < n; i++)
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);

    struct Student top = getTopStudent(s, n);

    printf("Top Student: %s | Roll: %d | Marks: %d", top.name, top.roll, top.marks);

    return 0;
}
