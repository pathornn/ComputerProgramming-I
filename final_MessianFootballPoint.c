#include <stdio.h>

int main()
{
    int team;
    char result[1001][38];          //กำหนดให้มี 1000 ทีม ทีมละ 38 การแข่งขัน
    scanf("%d", &team);

    int win, draw, lose, oldScore, recentScore, NewScore;
    for(int i=0; i<team; i++){
        scanf("%s", result[i]);

        win=0, draw=0, lose=0;
        for(int ii=0; ii<38; ii++){                     //นับจำนวนการแพ้ - ชนะ
            if(result[i][ii] == 'W'){
                win++;
            } else if(result[i][ii] == 'D'){
                draw++;
            } else if(result[i][ii] == 'L'){
                lose++;
            }
        }

        oldScore = win*2 + draw;                        //คำนวณระบบการนับคะแนนตามโจทย์
        recentScore = win*3 + draw;
        NewScore = win*5 + draw + lose*(-1);

        printf("%d %d %d %d %d %d\n", win, draw, lose, oldScore, recentScore, NewScore);        //แสดงผล

    }

    return 0;
}
