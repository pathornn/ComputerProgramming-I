#include <stdio.h>
#include <stdlib.h>

int main()
{
    //input
    int speed, hour, minute;
    scanf("%d %d %d", &speed, &hour, &minute);

    //convert minute
    double time = (double)hour + (double)minute/60;

    //distance
    double distance = speed*time;

    //output
    if(distance >= 0){
        printf("%.1lf", distance);
    } else{
        printf("%.1lf\nreverse", distance*(-1));
    }
    return 0;
}
