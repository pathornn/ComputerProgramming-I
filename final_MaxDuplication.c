#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);

    unsigned long int num[500];                //เอาไว้รองรับตัวเลข 1- 1 พันล้าน
    for(int i=0; i<n; i++){
        scanf("%lu", &num[i]);                  //รับ ตัวเลข long unsigned
    }

    int countDuplicate[n];                    //
    for(int i=0; i<n; i++){                   // สร้างตัวนับจำนวนซ้ำเอาไว้ โดยตั้งไว้ให้ = 1
        countDuplicate[i] = 1;                //
    }

    for(int i=0; i<n; i++){                        //
        for(int ii=i+1; ii<n; ii++){               //
            if(num[i] == num[ii] && num[i] != 0){  //ถ้าซ้ำ ให้ +1 และให้ตัวที่ซ้ำ = 0 (เวลาขยับไปที่เลขตัวที่ซ้ำจะได้ไม่ต้องทำงานอีก)
                countDuplicate[i]++;               //
                num[ii] = 0;                       //
            }
        }
    }

    int maxDuplicate=0, maxNum=0;                  //กำหนดค่าจำนวนซ้ำมากสุด และตัวน้นเป็นเลขอะไร (ใหญ่ที่สุด)
    for(int i=0; i<n; i++) if(countDuplicate[i] > maxDuplicate) maxDuplicate = countDuplicate[i];
    for(int i=0; i<n; i++) if(maxDuplicate == countDuplicate[i]) if(num[i] > maxNum) maxNum = num[i];
    /*
    for(int i=0; i<n; i++){
        printf("%lu ", num[i]);
    }
    */

    printf("%d\n%d", maxNum, maxDuplicate);
    return 0;
}
