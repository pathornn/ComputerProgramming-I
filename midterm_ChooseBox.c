#include <stdio.h>
#include <stdlib.h>

int main()
{
    //input
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    //condition
     if(x <= 15 && y <= 10 && z <= 8){
        printf("1\n%d", 15*10*8 - x*y*z);
    } else if(x <= 25 && y <= 15 && z <= 12){
        printf("2\n%d", 25*15*12 - x*y*z);
    } else if(x <= 50 && y <= 40 && z <= 20){
        printf("3\n%d", 40*50*20 - x*y*z);
    } else if((x*y*z < 10*15*8) && (x > 15 || y > 10 || z > 8)){
        printf("Oversize product\n%d", x*y*z - 10*15*8);
    } else if ((x*y*z < 25*15*12) && (x > 25 || y > 15 || z > 12)){
        printf("Oversize product\n%d", x*y*z - 25*15*12);
    } else if ((x*y*z < 50*40*20) && (x > 50 || y > 40 || z > 20)){
        printf("Oversize product\n%d", x*y*z - 50*40*20);
    } else {
        printf("Oversize product\n%d", x*y*z - 50*40*20);
    }
    return 0;
}
