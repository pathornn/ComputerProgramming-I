#include<stdio.h>

int main() {
    int num, sum = 0;

    while (1) {
        scanf("%d", &num);
        if (num%10 == 0){
            break;
        }

        if (num%3 == 0 || num%5 == 0){
            sum = sum + num;
        }
    }
    printf("%d", sum);

    return 0;
}
