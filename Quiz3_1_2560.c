#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &x);

        if(x%2 == 0){
            for(int i=0; i<x; i++){
                printf("#");
            }
        } else{
            for(int i=0; i<x; i++){
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
