#include <stdio.h>
#include <stdlib.h>

int main()
{
    //input x, y
    int x, y, input, status = -1, sum_x = 0, sum_y = 0;
    scanf("%d %d", &x, &y);

    while(1){
        //input
        scanf("%d", &input);

        //check break
        if(input <= 0){
            break;
        }

        //divided by x, y
        if(input%x == 0 && input%y == 0){
            //first time
            if(status == -1){
                status = 2;
            }
            sum_x++;
            sum_y++;
        } else if(input%x == 0){
            //first time
            if(status == -1){
                status = 0;
            }
            sum_x++;
        } else if(input%y == 0){
            //first time
            if(status == -1){
                status = 1;
            }
            sum_y++;
        }
    }
    printf("%d\n%d\n", sum_x, sum_y);

    switch (status){
    case 0:
        printf("x");
        break;
    case 1:
        printf("y");
        break;
    case 2:
        printf("xy");
        break;
    }

    return 0;
}
