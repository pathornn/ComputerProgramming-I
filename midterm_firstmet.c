#include <stdio.h>
#include <stdlib.h>

int main()
{
    //input x,y
    int x, y, input;
    scanf("%d %d", &x, &y);

    while(1){
        //input
        scanf("%d", &input);

        //check break
        if(input < 0){
            printf("%d", input);
            break;
        }

        //divided by x, y
        if(input%x == 0 && input%y == 0){
            printf("%d\n2", input);
            break;
        } else if(input%x == 0){
            printf("%d\n0", input);
            break;
        } else if(input%y == 0){
            printf("%d\n1", input);
            break;
        }
    }
    return 0;
}
