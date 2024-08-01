#include<stdio.h>

int main() {
    int num, least = 0, great = 0;

    while (1) {
        scanf("%d", &num);
        if (num <= 0) {
            break;
        }

        if (num%2 != 0) {
            if (least == 0){
                least = num;
            } else if (num < least) {
                least = num;
            }
            if (great == 0){
                great = num;
            } else if (num > great) {
                great = num;
            }
        }
    }

    printf("%d\n%d\n%d", great, least, great - least);

    return 0;
}
