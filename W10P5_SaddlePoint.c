#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int r, c;                                      //INPUT ROW & COLUMN 
    scanf("%d %d", &r, &c);                        //ระบุค่า แถว กับ หลัก

    int area[r][c];                                //INPUT AREA 
    for(int i=0; i<r; i++){                        //ระบุเลขในพื้นที่ทั้งหมด
        for(int ii=0; ii<c; ii++){
            scanf("%d", &area[i][ii]);
        }
    }

    int col_max=0, col_min = INT_MAX, count=0, streak=0;
    for(int i=0; i<r; i++){                                    //
        for(int ii=0; ii<c; ii++){                             //
            if(col_max < area[i][ii]){                         // FIND MAX NUMBER OF EACH ROW 
                col_max = area[i][ii];                         // หาเลขมากสุดในแต่ละหลัก
            }                                                  //
            if(col_min > area[i][ii]){                         // FIND MIN NUMBER OF EACH ROW
                col_min = area[i][ii];                         // หาเลขน้อยสุดในแต่ละหลัก
            }                                                  //
        }
        //printf("%d", col_min);

        for(int ii=0; ii<c; ii++){
            if(col_max == area[i][ii]){                         //IF NUMBER IN COLUMN == MAX NUMBER CHECK MIN NUMBER IN THAT ROW
                for(int iii=0; iii<r; iii++){                   //ถ้าหากเลขในหลัก เท่ากับ เลขมากสุด ต่อไปก็หาเลขที่เล็กที่สุดในแต่ละแถว
                    if(col_max <= area[iii][ii]){
                        count++;
                    }

                    if(count == r){                                    //IF ALL NUMBER ARE LESS THAN TARGET NUMBER >> "PRINT"
                        printf("(%d, %d) = %d\n", i, ii, col_max);     //ถ้าเช็คแล้วเลขที่เราเลือก เล็กที่สุด ก็จะ print
                        streak++;
                    }
                }
                count = 0;
            }

            if(col_min == area[i][ii]){                          //IF NUMBER IN COLUMN == MIN NUMBER CHECK MAX NUMBER IN THAT ROW
                for(int iii=0; iii<r; iii++){                    //ถ้าหากเลขในหลัก เท่ากับ เลขน้อยสุด ต่อไปก็หาเลขที่ใหญ่ที่สุดในแต่ละแถว
                    if(col_min >= area[iii][ii]){
                        count++;
                    }

                    if(count == r){                                  //IF ALL NUMBER ARE GREATER THAN TARGET NUMBER >> "PRINT"
                        printf("(%d, %d) = %d\n", i, ii, col_min);   //ถ้าเช็คแล้วเลขที่เราเลือก ใหญ่ที่สุด ก็จะ print
                        streak++;
                    }
                }
                count = 0;
            }
        }

        col_max=0; col_min=INT_MAX;                                //IF ALREADY DO ALL TASK SET COLUMN MAX & MIN TO DEFAULT
    }                                                              //ถ้าทำทุกอย่างจบแล้วก็ให้ปรับค่า เลขมากและน้อยสุดในแต่ละหลัก กลับไปเป็นค่าเดิม

    if(streak == 0){
        printf("None");
    }
    return 0;
}
