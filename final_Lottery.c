#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    char lottery[50000][7];             //กำหนดจำนวน lottery และขนาด
    for(int i=0; i<n; i++){
        scanf("%s", lottery[i]);        //รับข้อมูล
    }

    int lucky;
    scanf("%d", &lucky);
    char luckyNum[20][4];               //กำหนดจำนวนและขนาดของเลขท้าย
    for(int i=0; i<lucky; i++){
        scanf("%s", luckyNum[i]);       //รับข้อมูล
    }

    int count=0;
    for(int i=0; i<n; i++){
        for(int ii=0; ii<lucky; ii++){
            if(lottery[i][3] == luckyNum[ii][0] && lottery[i][4] == luckyNum[ii][1] && lottery[i][5] == luckyNum[ii][2]){   //ใช้วิทีการนับจากจำนวนใน array ตัวที่ใน lottery ตัวที่ 4-6 ต้องซ้ำกับเลชท้าย 1-3 แต่การนับแบบ array จะได้ 3-5 จับกับ 0-2
                count++;                                                                                                    //นับจำนวนที่ตรงกัน
            }
        }
    }

    printf("%d", count);                //แสดงผล
    return 0;
}
