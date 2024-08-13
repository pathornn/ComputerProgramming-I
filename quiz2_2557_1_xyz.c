#include<stdio.h>

int main() {
    int N, i = 0, x, y, z;
    scanf("%d", &N);
    
    while(i < N){
        scanf("%d %d %d", &x, &y, &z);
        
        if(x > y && x > z){
            printf("x");
        }else if(x == y && x > z){
            printf("xy");
        }else if(x != y && x == z){
            printf("xz");
        }else if(y > z){
            printf("z");
        }else if(y == z){
            printf("yz");
        }else
        i++;
    }
    return 0;
}
