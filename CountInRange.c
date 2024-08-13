#include<stdio.h>

int main() {
    int x, y, temp = 0, between = 0, greater = 0, lower = 0, input;
    scanf("%d %d", &x, &y);
    if(x > y){
       temp = x, x = y, y = temp;
    }
    while (1) {
        scanf("%d", &input);
        if(input == 0){
            break;
        }else if(input > x && input < y){
            between++;
        }else if(input > x && input > y){
            greater++;
        }else if(input < x && input < y){
            lower++;
        }
    }
    printf("%d\n%d\n%d", between, lower, greater);
    return 0;
}
