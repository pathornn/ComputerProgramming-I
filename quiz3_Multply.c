#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, mult;
    scanf("%d %d %d", &x, &y, &mult);

    int temp=2;
    if(x > y){
        temp = x;
        x = y;
        y = temp;
    }

    //printf("%d %d", x, y);

    int start = x, stop = y;

    for(start; start<=stop; start++){
        printf("%d:", start);

        for(int i=1; i<=mult; i++){
            printf(" %d", start*i);
        }
        printf("\n");
    }
    return 0;
}
