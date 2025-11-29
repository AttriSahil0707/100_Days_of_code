/*
Q147 (Enum)
Store employee data in a binary file using fwrite() and read using fread().*/

#include <stdio.h>
struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e1, e2;
    FILE *fp;

    scanf("%s", e1.name);
    scanf("%d", &e1.id);
    scanf("%f", &e1.salary);

    fp = fopen("employee.bin", "wb");
    fwrite(&e1, sizeof(e1), 1, fp);
    fclose(fp);

    fp = fopen("employee.bin", "rb");
    fread(&e2, sizeof(e2), 1, fp);
    fclose(fp);

    printf("Name: %s | ID: %d | Salary: %.2f", e2.name, e2.id, e2.salary);

    return 0;
}
