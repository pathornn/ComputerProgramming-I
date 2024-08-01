#include<stdio.h>

int main() {
    int x, y, num, i = 1;
    int sum_x = 0, sum_y = 0, sum_or = 0;
    scanf("%d %d", &x, &y);
    while (i <= 100000) {
        scanf("%d", &num);
        if (num <= 0){
            break;
        }

        if (num%x == 0 && num%y != 0){
            sum_x = sum_x + num;
        }
        if (num%y == 0 && num%x != 0){
            sum_y = sum_y + num;
        }
        if (num%x == 0 || num%y == 0){
            sum_or = sum_or + num;
        }

        i++;
    }
    printf("%d \n%d \n%d", sum_x, sum_y, sum_or);

    return 0;
}
