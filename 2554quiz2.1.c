#include<stdio.h>

int main() {
    int x, y, i, z;
    scanf("%d %d", &x, &y);

    if (y >= x){
        i = x, z = y;
    } else {
        i = y, z = x;
    }

    while (i <= z){
        if (i%4 == 0 || i%7 == 0){
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}
