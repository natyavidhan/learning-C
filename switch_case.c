#include <stdio.h>

int main(){
    int day;

    printf("Enter Day number: ");
    scanf("%d", &day);
    printf("Its A ");

    switch (day) {
        case 1: printf("Monday");
                break;
        case 2: printf("Tuesday");
                break;
        case 3: printf("Wednesday");
                break;
        case 4: printf("Thursday");
                break;
        case 5: printf("Friday");
                break;
        case 6: printf("Saturday");
                break;
        case 7: printf("Sunday");
                break;
        default: printf("OUT_OF_RANGE");
    }
    return 0;
}