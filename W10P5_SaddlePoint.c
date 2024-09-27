#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int r, c;                                      //INPUT ROW & COLUMN
    scanf("%d %d", &r, &c);

    int area[r][c];                                //INPUT AREA
    for(int i=0; i<r; i++){
        for(int ii=0; ii<c; ii++){
            scanf("%d", &area[i][ii]);
        }
    }

    int col_max=0, col_min = INT_MAX, count=0, streak=0;
    for(int i=0; i<r; i++){                                    //
        for(int ii=0; ii<c; ii++){                             //
            if(col_max < area[i][ii]){                         // FIND MAX NUMBER OF EACH ROW
                col_max = area[i][ii];                         //
            }                                                  //
            if(col_min > area[i][ii]){                         // FIND MIN NUMBER OF EACH ROW
                col_min = area[i][ii];                         //
            }                                                  //
        }
        //printf("%d", col_min);

        for(int ii=0; ii<c; ii++){
            if(col_max == area[i][ii]){                         //IF NUMBER IN COLUMN == MAX NUMBER CHECK MIN NUMBER IN THAT ROW
                for(int iii=0; iii<r; iii++){
                    if(col_max <= area[iii][ii]){
                        count++;
                    }

                    if(count == r){                                    //IF ALL NUMBER ARE LESS THAN TARGET NUMBER >> "PRINT"
                        printf("(%d, %d) = %d\n", i, ii, col_max);
                        streak++;
                    }
                }
                count = 0;
            }

            if(col_min == area[i][ii]){                          //IF NUMBER IN COLUMN == MIN NUMBER CHECK MAX NUMBER IN THAT ROW
                for(int iii=0; iii<r; iii++){
                    if(col_min >= area[iii][ii]){
                        count++;
                    }

                    if(count == r){                                  //IF ALL NUMBER ARE GREATER THAN TARGET NUMBER >> "PRINT"
                        printf("(%d, %d) = %d\n", i, ii, col_min);
                        streak++;
                    }
                }
                count = 0;
            }
        }

        col_max=0; col_min=INT_MAX;                                //IF ALREADY DO ALL TASK SET COLUMN MAX & MIN TO DEFAULT
    }

    if(streak == 0){
        printf("None");
    }
    return 0;
}
