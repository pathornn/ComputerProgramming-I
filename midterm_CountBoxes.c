#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    //input
    int num, x, y, z, box1 = 0, box2 = 0, box3 = 0, use1 = 0, use2 = 0, use3 = 0;
    scanf("%d", &num);

    for(int i; i<num; i++){
        //input size : x, y,z
        scanf("%d %d %d", &x, &y, &z);

        //condition
         if(x <= 15 && y <= 10 && z <= 8){
            printf("1\n");
            box1 += 15*10*8 - x*y*z;
            use1++;
        } else if(x <= 25 && y <= 15 && z <= 12){
            printf("2\n");
            box2 += 25*15*12 - x*y*z;
            use2++;
        } else if(x <= 50 && y <= 40 && z <= 20){
            printf("3\n");
            box3 += 40*50*20 - x*y*z;
            use3++;
        } else if((x*y*z < 10*15*8) && (x > 15 || y > 10 || z > 8)){
            printf("Oversize product\n");
        } else if ((x*y*z < 25*15*12) && (x > 25 || y > 15 || z > 12)){
            printf("Oversize product\n");
        } else if ((x*y*z < 50*40*20) && (x > 50 || y > 40 || z > 20)){
            printf("Oversize product\n");
        } else {
            printf("Oversize product\n");
        }
    }
    printf("%d %d\n", use1, box1);
    printf("%d %d\n", use2, box2);
    printf("%d %d\n", use3, box3);

    return 0;
}
