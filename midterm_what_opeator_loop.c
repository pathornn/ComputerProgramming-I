#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);              //input before checking loop

    while(a != 0 || b != 0 || c != 0){
        if(a + b == c){
            printf("+\n");
        } else if(a - b == c){
            printf("-\n");
        } else if(a*b == c){
            printf("*\n");
        } else if(a/b == c){
            printf("/\n");
        } else if(a%b == c){
            printf("%%\n");
        }

        scanf("%d %d %d", &a, &b, &c);          //input after calculate in loop AND for check 0 0 0
    }


    return 0;
}
