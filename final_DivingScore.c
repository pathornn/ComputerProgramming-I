#include <stdio.h>
#include <limits.h>

int main() {
    int referee;
    scanf("%d", &referee);

    int score[referee], sum=0;
    for(int i=0; i<referee; i++){\
        scanf("%d", &score[i]);
        sum += score[i];                    //หาผลรวม
    }

    int max=INT_MIN, min=INT_MAX;
    for(int i=0; i<referee; i++) if(score[i] < min) min = score[i];     //หาค่ามากสุดและน้อยสุด
    for(int i=0; i<referee; i++) if(score[i] > max) max = score[i];

    int result=sum;                             //
    if(referee > 3) result = sum - min - max;   // ถ้ามากกว่า 3 ให้ ลบด้วยค่ามากสุดและน้อยสุด
    printf("%d", result);                       //

    return 0;
}
