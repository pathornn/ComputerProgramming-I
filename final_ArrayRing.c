#include <stdio.h>

int main()
{
    int k;
    scanf("%d", &k);

    int matrix[k][k];
    for(int i=0; i<k; i++){
        for(int ii=0; ii<k; ii++){
            scanf("%d", &matrix[i][ii]);                            //รับค่า
        }
    }

    int ring=0, sumInside=0, sumAll=0;                              //กำหนดขอบ, ผลรวมภายใน (ไม่นับขอบ) , ผลรวมทั้งหมด
    for(int i=0; i<k/2 + 1; i++){
        for(int ii=k/2 - ring; ii <= k/2 + ring; ii++){
            for(int iii=k/2 - ring; iii <= k/2 + ring; iii++){
                sumAll += matrix[ii][iii];
                //printf("%d ", matrix[ii][iii]);
            }
            //printf("\n");
        }
        printf("%d\n", sumAll - sumInside);                         // ทั้งหมด - ข้างใน จะได้แค่ขอบนอก
        sumInside = sumAll;                                         //ให้ ข้างใน เป็นทั้งหมด เพื่อเอาไปคำนวณ loop ถัดไป
        sumAll=0;                                                   //รีเซ็ตค่า
        ring++;                                                     //เพิ่มเพื่อกำหนดขอบเขตให้กว้างขึ้น
    }

    return 0;
}
