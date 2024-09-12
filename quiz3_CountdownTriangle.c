#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);



    int space = 0, count = n;
    for(int i=0; i<n; i++){
        for(int i=0; i<space; i++){
            printf(" ");
        }
        for(int i=0; i<count; i++){
            if(count >= 10){
                printf("%d", count%10);
            } else{
                printf("%d", count);
            }

        }
        printf("\n");

        space++; count--;
    }
    return 0;
}
