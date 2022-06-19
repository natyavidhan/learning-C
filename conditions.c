#include<stdio.h>

int main(){
    int guess;
    scanf("%d", &guess);

    if (guess >= 100){
        printf("Your guess is larger than 100\n");
    } else if (guess <= 0) {
        printf("Your guess is smaller than 0\n");
    } else {
        printf("Your Guess is between 0 and 100\n");
    }
    return 0;
}