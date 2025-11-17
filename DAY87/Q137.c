/*Q137 (Enum)
Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.*/

#include <stdio.h>
#include <string.h>

enum Role { ADMIN, USER, GUEST };

int main() {
    char r[20];
    enum Role role;

    printf("Enter role (ADMIN / USER / GUEST): ");
    scanf("%s", r);

    if(strcmp(r, "ADMIN") == 0)
        role = ADMIN;
    else if(strcmp(r, "USER") == 0)
        role = USER;
    else
        role = GUEST;

    if(role == ADMIN)
        printf("Welcome Admin!\n");
    else if(role == USER)
        printf("Welcome User!\n");
    else
        printf("Welcome Guest!\n");

    return 0;
}
