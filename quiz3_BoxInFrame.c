#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);


    //print ************
    for(int i=0; i<n; i++){
        printf("*");
    }
    printf("\n");

    //print *           *
    for(int i=1; i<=n; i++){
        if(i == 1 || i == n){
            printf("*");
        } else{
            printf(" ");
        }
    }
    printf("\n");

    //print * ********* *
    for(int i=3; i<=n-2; i++){
        for(int i=1; i<=n; i++){
            if(i == 2 || i == n-1){
                printf(" ");
            } else{
                printf("*");
            }
        }
        printf("\n");
    }

    //print *           *
    for(int i=1; i<=n; i++){
        if(i == 1 || i == n){
            printf("*");
        } else{
            printf(" ");
        }
    }
    printf("\n");

    //print ************
    for(int i=0; i<n; i++){
        printf("*");
    }
    printf("\n");

    return 0;
}
