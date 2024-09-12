#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, space=0;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        for(int i=1; i<=space; i++){
            printf(" ");
        }
        for(int i=1; i<=n/3; i++){
            printf("*  ");
        }
        printf("\n");
        space++;
        if(space == 3){
            space = 0;
        }
    }

    return 0;
}
