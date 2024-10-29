#include <stdio.h>

int main()
{
    int base[12];                               //ตัวเฉลย เป็นเลขทั้งหมด
    int game[12];                               //ตัวที่ใช้ทาย เซ็ตให้เป็น -1 แล้วเอาไปแปลงเป็น "_" ทีหลัง
    for(int i=0; i<12; i++){
        scanf("%d", &base[i]);
        game[i] = -1;
    }
    for(int ii=0; ii<12; ii++){                 //แสดงผลเกมก่อนเล่น
        if(game[ii] == -1){
            printf("_ ");
        }
    }
    printf("\n");

    int num, count, mistake[5], mistakeCount=0, score=0;    //กำหนดเลขที่จะระบุ , นับจำนวนเลขซ้ำ, ตัวเลขที่ผู้เล่นทายผิด, จำนวนครัเงที่ผู้เล่นทายผิด, คะแนนที่ผู้เล่นได้
    for(int i=0; i<5; i++){
        scanf("%d", &num);                                  //รับเลขจากแป้นพิมพ์

        count=0;                                            //กำหนดจำนวนตัวเลขซ้ำ = 0
        for(int ii=0; ii<12; ii++){
            if(num == base[ii]){
                game[ii] = num;
                count++;
                score++;                                    //คะแนนเพิ่มขึ้นถ้าทายถูก
            }
        }
        if(count == 0){                                     //ถ้าไม่มีตัวเลขซ้ำเลย แสดงว่าผู้ใช้ทายเลขผิด
            mistake[mistakeCount] = num;
            mistakeCount++;
        }

        for(int ii=0; ii<12; ii++){                         //
            if(game[ii] == -1){                             //
                printf("_ ");                               //แสดงผล ถ้าเลขไม่ตรงจะแสดง "_"
            } else{                                         //
                printf("%d ", game[ii]);                    //
            }                                               //
        }                                                   //
        //printf("mistakeCount = %d\n", mistakeCount);      //แสดงผลว่าทายเลขผิดอะไรบ้าง
        for(int ii=0; ii<mistakeCount; ii++){               //
            printf("%d ", mistake[ii]);                     //
        }                                                   //
                                                            //
        printf("\n");                                       //

    }

    printf("%d", score);                                    //สรุปคะแนนรวม
    return 0;
}
