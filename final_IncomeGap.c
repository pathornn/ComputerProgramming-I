#include <stdio.h>
#include <limits.h>

int main()
{
    int group;
    scanf("%d", &group);                 //ระบุจำนวนกลุ่ม

    int x[5], max, min, diff[group];    //ภายในกลุ่มๆนึง จะมี 5 คน, กำหนดจำนวนมากสุด น้อยสุด และผลต่างระหว่างจำนวน
    for(int i=0; i<group; i++){
        max=INT_MIN, min = INT_MAX;
        for(int ii=0; ii<5; ii++){
            scanf("%d", &x[ii]);
            if(x[ii] > max) max = x[ii];        //เทียบหาจำนวนมากสุด
            if(x[ii] < min) min = x[ii];        //เทียบหาจำนวนน้อยสุด
        }
        diff[i] = max - min;                    //ผลต่างของจำนวนในแต่ละกลุ่ม
    }

    max=INT_MIN, min = INT_MAX;
    for(int i=0; i<group; i++) if(diff[i] > max) max = diff[i];     //หาจำนวนที่มากที่สุดของแต่ละกลุ่ม
    for(int i=0; i<group; i++) if(diff[i] < min) min = diff[i];     //หาจำนวนที่น้อยที่สุดของแต่ละกลุ่ม

    printf("%d %d %d", max, min, max-min);                          //จากนั้นก็นำมาแสดงผล

    return 0;
}
