#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1){
        int num;
        scanf("%d", &num);

        if(num == 0){
            break;
        }

        for(int i=1; i<num; i++){
            if(i%5 == 0){
                printf("X");
            } else{
                printf("*");
            }
        }
        printf("%d\n", num%10);
    }


    return 0;
}
