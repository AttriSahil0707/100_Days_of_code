/*Q134 (Enum)
Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
*/

#include <stdio.h>
#include <string.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main() {
    char s[20];
    enum Status state;

    printf("Enter status (SUCCESS / FAILURE / TIMEOUT): ");
    scanf("%s", s);

    if(strcmp(s, "SUCCESS") == 0)
        state = SUCCESS;
    else if(strcmp(s, "FAILURE") == 0)
        state = FAILURE;
    else
        state = TIMEOUT;

    if(state == SUCCESS)
        printf("Operation successful\n");
    else if(state == FAILURE)
        printf("Operation failed\n");
    else
        printf("Operation timed out\n");

    return 0;
}
