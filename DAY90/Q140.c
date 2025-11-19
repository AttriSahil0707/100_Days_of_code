/*Q140 (Enum)
Define a struct with enum Gender and print person's gender.*/

#include <stdio.h>
#include <string.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    enum Gender g;
};

int main() {
    char input[20];
    struct Person p;

    scanf("%s", input);

    if (strcmp(input, "Gender=MALE") == 0)
        p.g = MALE;
    else if (strcmp(input, "Gender=FEMALE") == 0)
        p.g = FEMALE;
    else
        p.g = OTHER;

    if (p.g == MALE)
        printf("Male");
    else if (p.g == FEMALE)
        printf("Female");
    else
        printf("Other");

    return 0;
}
