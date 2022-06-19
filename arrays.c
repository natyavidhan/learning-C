#include <stdio.h>

int main(){
    int marks[] = {38, 32, 35, 36, 34, 39};
    int full = 40;
    int length = sizeof(marks) / sizeof(int);
    int total;
    for (int i = 0; i < length; i++){
        total = total + marks[i];
    }
    printf("Lenght of Array Marks: %d\n", length);
    printf("Total Marks: %d/%d\n", total, full*length);
    return 0;
}