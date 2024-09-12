#include <stdio.h>
#include <stdlib.h>

int main()
{
    int wide, n;
    scanf("%d %d", &wide, &n);

    for(int i=0; i<n; i++){
        for(int i=0; i<=wide; i++){
            printf("*");
        }
    }

    printf("*\n");

    for(int i=0; i<n; i++){
        printf("*");
        for(int i=0; i<wide; i++){
            printf(" ");
        }
    }

    printf("*\n");

    for(int i=0; i<n; i++){
        for(int i=0; i<=wide; i++){
            printf("*");
        }
    }

    printf("*\n");

    return 0;
}
