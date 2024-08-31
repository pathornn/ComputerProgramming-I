#include <stdio.h>
#include <stdlib.h>

int main()
{
    //input
    int teamA, teamB, scoreA, scoreB;
    int sumScore1 = 0, sumScore2 = 0, sumScore3 = 0, win1 = 0, win2 = 0, win3 = 0, lose1 = 0, lose2 = 0, lose3 = 0;

    for(int i=0; i<6; i++){
        scanf("%d %d %d %d", &teamA, &teamB, &scoreA, &scoreB);

        //home team
        if(teamA == 1){
            if(scoreA > scoreB){
                sumScore1 += 3;
            } else if(scoreA == scoreB){
                sumScore1 += 1;
            }
            win1 += scoreA;
            lose1 += scoreB;
        } else if(teamA == 2){
            if(scoreA > scoreB){
                sumScore2 += 3;
            } else if(scoreA == scoreB){
                sumScore2 += 1;
            }
            win2 += scoreA;
            lose2 += scoreB;
        } else{
            if(scoreA > scoreB){
                sumScore3 += 3;
            } else if(scoreA == scoreB){
                sumScore3 += 1;
            }
            win3 += scoreA;
            lose3 += scoreB;
        }

        //away team
        if(teamB == 1){
            if(scoreB > scoreA){
                sumScore1 += 3;
            } else if(scoreA == scoreB){
                sumScore1 += 1;
            }
            win1 += scoreB;
            lose1 += scoreA;
        } else if(teamB == 2){
            if(scoreB > scoreA){
                sumScore2 += 3;
            } else if(scoreA == scoreB){
                sumScore2 += 1;
            }
            win2 += scoreB;
            lose2 += scoreA;
        } else{
            if(scoreB > scoreA){
                sumScore3 += 3;
            } else if(scoreA == scoreB){
                sumScore3 += 1;
            }
            win3 += scoreB;
            lose3 += scoreA;
        }
    }
    printf("%d %d %d\n", sumScore1, win1, lose1);
    printf("%d %d %d\n", sumScore2, win2, lose2);
    printf("%d %d %d\n", sumScore3, win3, lose3);
    return 0;
}
