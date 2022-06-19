#include<stdio.h>

void AFunction() {
    printf("Hello From A Function\n");
}

void AnotherFunction() {
    printf("Hello From Another Function\n");
}

int main() {
    printf("Hello from main function\n");
    AFunction();
    AnotherFunction();
    return 0;
}