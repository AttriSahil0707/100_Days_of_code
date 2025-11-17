/*  Q131 (Enum)
Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.
*/

#include <stdio.h>

enum Days { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

int main() {
    enum Days d;

    for(d = SUNDAY; d <= SATURDAY; d++) {
        if(d == SUNDAY) printf("SUNDAY = %d\n", d);
        if(d == MONDAY) printf("MONDAY = %d\n", d);
        if(d == TUESDAY) printf("TUESDAY = %d\n", d);
        if(d == WEDNESDAY) printf("WEDNESDAY = %d\n", d);
        if(d == THURSDAY) printf("THURSDAY = %d\n", d);
        if(d == FRIDAY) printf("FRIDAY = %d\n", d);
        if(d == SATURDAY) printf("SATURDAY = %d\n", d);
    }

    return 0;
}
