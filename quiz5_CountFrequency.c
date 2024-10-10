#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(){
    int n;
    scanf("%d", &n);

    int num[50001];
    for(int i=0; i<n; i++){
        scanf("%d", &num[i]);
    }

    int output[50001][2], count=0;                  // array 0 เก็บเลข, array 1 เก็บความถี่
    for(int i=0; i<n; i++){
        output[i][1] = INT_MIN;
    }

    for(int i=0; i<n; i++){
        for(int ii=0; ii<n; ii++){
            if(num[i] == num[ii] && num[i] != INT_MIN){   //ถ้าเจอจำนวนซ้ำ และจำนวนนั้นไม่เป็น 0
                output[i][0] = num[i];
                if(count > 0){                      //ถ้านับจำนวนแรกแล้ว จำนวนที่ซ้ำกันหลังจากนั้นให้เป็น 0
                    num[ii] = INT_MIN;
                }
                count++;                            //นับความถี่
            }
        }
        output[i][1] = count;                       //เก็บความถี่
        count=0;
    }

    for(int i=0; i<n; i++){
        if(output[i][1] != 0){                      //นับจำนวนความถี่ที่ไม่เป็น 0
            count++;
        }
    }

    printf("%d\n", count);
    for(int i=0; i<n; i++){
        if(output[i][1] != 0){
            printf("%d %d\n", output[i][0], output[i][1]);
        }
    }

    return 0;
}
