#include <stdio.h>
#include <stdlib.h>

int main()
{
    //input goal day AND goal profit
    int day, profit_goal, income, expense, profit;
    scanf("%d %d", &day, &profit_goal);

    while(1){
        for(int i = 0; i < day; i++){
        //input income AND expense
        scanf("%d %d", &income, &expense);

        profit = profit + income - expense;
        }

        if(profit > 0){
            printf("Profit %d\n", profit);
            if(profit >= profit_goal){                  //positive profit
                printf("Expand\n");                         //if expand break loop while
                break;                                      //if wait and see still in loop while
            } else if(profit >= profit_goal/2){             //if not expand break loop while
                printf("Wait and see\n");
                profit = 0;                                     //reset profit for next loop
            } else{
                printf("Not expand\n");
                break;
            }
        } else if(profit == 0){
            printf("Breakeven\n");
            printf("Not expand\n");
            break;
        } else {
            printf("Loss %d\n", profit*(-1));
            printf("Not expand\n");
            break;
        }


    }

    return 0;
}
