#include <stdio.h>
#include <limits.h>

struct{                                         //กำหนด struct
    char name[51];
    int score;
    int goal;
    int goalDiff;
} typedef TEAM;

int main()
{
    int k;
    scanf("%d\n", &k);                          // อย่าลืม \n เพราะ gets รับ "\n" ด้วย
    TEAM team[k+1];                             // +1 ไว้เพื่อให้เลขทีมตรงกับเลข index ใน array

    for(int i=1; i<=k; i++){
        gets(team[i].name);                     //รับ ชื่อเข้ามา
        team[i].score = 0;                      //
        team[i].goal = 0;                       //เซ็ตให้เป็น 0 ทั้งหมด
        team[i].goalDiff = 0;                   //
    }


    int homeTeam, awayTeam, homeGoal, awayGoal;
    for(int i=0; i<k*(k-1); i++){
        scanf("%d %d %d %d", &homeTeam, &awayTeam, &homeGoal, &awayGoal);
        if(homeGoal > awayGoal){
            team[homeTeam].score += 3;
        } else if(awayGoal == homeGoal){                                            //
            team[awayTeam].score += 1;                                              //กำหนดการให้คะแนนตามที่โจทย์บอก
            team[homeTeam].score += 1;                                              //
        } else if(awayGoal > homeGoal){
            team[awayTeam].score += 3;
        }

        team[homeTeam].goal += homeGoal;                                            //จำนวนประตูที่ทำได้
        team[awayTeam].goal += awayGoal;

        team[homeTeam].goalDiff += homeGoal - awayGoal;                             //ผลต่างประตู ได้-เสีย ในแต่ละครั้งรวมกัน
        team[awayTeam].goalDiff += awayGoal - homeGoal;
    }

    /*                                                                              //เอาไว้ test ว่าได้ผลลัพทย์ตรงมั้ย
    for(int i=1; i<=k; i++){
        printf("%s \nscore = %d \ngoal = %d \ngoal diff = %d\n\n", team[i].name, team[i].score, team[i].goal, team[i].goalDiff);
    }
    */

    int maxScore = INT_MIN;
    for(int i=1; i<=k; i++) if(team[i].score > maxScore) maxScore = team[i].score;              //หาคะแนนมากที่สุดก่อน
    for(int i=1; i<=k; i++) if(team[i].score == maxScore) printf("%s\n\n", team[i].name);       //แล้วค่อยไปหาว่าทีมใหนมีคะแนนเท่ากับคะแนนมากที่สุด (เอาไว้รองรับกรณีมีทีมคะแนนเท่ากัน)

    int maxGoal = INT_MIN;
    for(int i=1; i<=k; i++) if(team[i].goal > maxGoal) maxGoal = team[i].goal;                  //
    for(int i=1; i<=k; i++) if(team[i].goal == maxGoal) printf("%s\n\n", team[i].name);         //
                                                                                                //เหมือนกับด้านบน
    int maxDiff = INT_MIN;                                                                      //
    for(int i=1; i<=k; i++) if(team[i].goalDiff > maxDiff) maxDiff = team[i].goalDiff;          //
    for(int i=1; i<=k; i++) if(team[i].goalDiff == maxDiff) printf("%s\n\n", team[i].name);     //

    return 0;
}
