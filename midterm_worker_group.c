#include <stdio.h>
#include <stdlib.h>

int main()
{
    //input each labour AND table
    int labour_big, labour_small, big, small;
    scanf("%d %d", &labour_big, &labour_small);
    scanf("%d %d", &big, &small);

    //workload AND day for work
    int workload_big, workload_small, day_big, day_small;

    if(big > 0 && small > 0 && labour_big > 0 && labour_small > 0){                 //if costumer want all and factory have all

        workload_big = labour_big*6;
        workload_small = labour_small*10;
        day_big = (big + workload_big - 1)/workload_big;
        day_small = (small + workload_small - 1)/workload_small;

        if(day_big >= day_small){
            printf("%d", day_big);
        } else{
            printf("%d", day_small);
        }
    } else if(big > 0 && labour_big > 0 && (small == 0 && labour_small == 0)){     //if costumer want big and factory have big

        workload_big = labour_big*6;
        day_big = (big + workload_big - 1)/workload_big;

        printf("%d", day_big);
    } else if(small > 0 && labour_small > 0 && (big == 0 && labour_big == 0)){      //if costumer want small and factory have small

        workload_small = labour_small*10;
        day_small = (small + workload_small - 1)/workload_small;

        printf("%d", day_small);
    } else{                                                                         //if customer want but factory don't have
        printf("Unable to finish order");
    }

    return 0;
}
