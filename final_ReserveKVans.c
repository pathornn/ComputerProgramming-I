#include <stdio.h>
#include <limits.h>

int main()
{
    int k, n;
    scanf("%d %d", &k, &n);             //รับจำนวนรถตู้และจำนวนคิว


    int van[k];                         //เคลียร์รถตู้ทั้งหมดให้เหลือ 0 วัน
    for(int i=0; i<k; i++){
        van[i] = 0;
    }

    int dayUse, dayMin, vanMin;         //กำหนด จำนวนวันที่ต้องการใช้, จำนวนวันที่รถตู้ใช้น้อยที่สุด, รถตู้คันใหนใช้วันน้อยที่สุด
    for(int i=0; i<n; i++){
        scanf("%d", &dayUse);           //รับจำนวนวันที่ต้องการใช้
            
        dayMin = INT_MAX;               //
        for(int ii=0; ii<k; ii++){      //
            if(van[ii] < dayMin){       //หาว่ารถตู้คันใหนใช้วันน้อยที่สุด
                dayMin = van[ii];       //
                vanMin = ii;            //
            }
        }
        van[vanMin] += dayUse;          //เพิ่มวันให้รถตู้ที่ใช้น้อยที่สุด
        printf("%d\n", vanMin+1);       //แสดงผล
    }
    
    return 0;
}
