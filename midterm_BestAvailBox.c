#include <stdio.h>
#include <stdlib.h>

int main()
{
    //input amount of products AND maximum amount of boxes AND boxes used
    int amount, max1, max2, max3, box1 = 0, box2 = 0, box3 = 0, x, y, z;
    scanf("%d\n%d %d %d", &amount, &max1, &max2, &max3);

    for(int i=0; i<amount; i++){
        //input size of product : x, y,z
        scanf("%d %d %d", &x, &y, &z);

        //condition
         if((x <= 15 && y <= 10 && z <= 8) && box1 < max1){             /*check size of boxes and check if boxes avaliable */
            printf("1\n");                                              /*output*/
            box1++;                                                     /*box used*/
        } else if((x <= 25 && y <= 15 && z <= 12) && box2 < max2){
            printf("2\n");
            box2++;
        } else if((x <= 50 && y <= 40 && z <= 20) && box3 < max3){
            printf("3\n");
            box3++;
        } else if (x <= 50 && y <= 40 && z <= 20){                      /*if box not available*/
            printf("Box not available\n");
        } else {
            printf("Oversize product\n");                               /*if box don't fit*/
        }
    }
    return 0;
}
