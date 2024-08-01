#include<stdio.h>

int main() {
    int option, num, i = 1, sum = 0, diff = 0, total = 0, isum = 0, idiff = 0;
    while (i <= 100000){
        scanf("%d", &option);
        if (option == 0){
            break;
        }
        scanf("%d", &num);

        if (option == 1){
            sum = sum + num;
            isum++;
        } else if (option == 2){
            diff = diff + num;
            idiff++;
        }
    }
    printf("%d %d\n%d %d %d", isum, idiff, sum, diff, sum - diff);

    return 0;
}
