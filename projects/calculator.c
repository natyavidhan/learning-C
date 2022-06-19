#include<stdio.h>

void add(int a, int b){
    printf("Answer: %d\n\n", a+b);
}

void subtract(int a, int b){
    printf("Answer: %d\n\n", a-b);
}

void multiply(int a, int b){
    printf("Answer: %d\n\n", a*b);
}

void divide(int a, int b){
    printf("Answer: %f\n\n", (double)a/(double)b);
}

int main(){
    int run = 1;
    while (run==1){
        printf("Enter 1st number: ");
        int a;
        scanf("%d", &a);
        
        printf("Enter 2nd number: ");
        int b;
        scanf("%d", &b);
        
        printf("Select method by entering the corresponding serial number: \n(1) Addition \n(2) Subtraction \n(3) Multiplication \n(4) Division \n(5) Exit\n");
        int method;
        scanf("%d", &method);
        
        switch (method) {
            case 1: add(a, b);
                    break;
            case 2: subtract(a, b);
                    break;
            case 3: multiply(a, b);
                    break;
            case 4: divide(a, b);
                    break;
            default: run = 0;
        }
    }
    
    return 0;
}