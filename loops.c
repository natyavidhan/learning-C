#include <stdio.h>

void ForLoop(int limit){
    for (int i; i<limit; i++){
        printf("For Loop %d\n", i+1);
    }
}

void WhileLoop(int limit){
    int i;
    while (i < limit)
    {
        printf("While Loop %d\n", i+1);
        i++;
    }
    
}

void DoWhileLoop(int limit){
    int i;
    do{
        printf("Do While Loop %d\n", i+1);
        i++;
    } while (i < limit);
    
}

int main(){
    int limit;
    int method;

    printf("Enter Limit: ");
    scanf("%d", &limit);

    printf("Enter Method (1 for 'for', 2 for 'while', 3 for 'do while')");
    scanf("%d", &method);

    switch (method) {
        case 1: ForLoop(limit);
                break;
        case 2: WhileLoop(limit);
                break;
        case 3: DoWhileLoop(limit);
                break;
    }

    return 0;
}