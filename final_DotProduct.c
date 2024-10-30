#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int num[2][100];
    for(int i=0; i<2; i++){
        for(int ii=0; ii<n; ii++){
            scanf("%d", &num[i][ii]);       //รับค่า matrix ตัวแรกก่อน แล้วรับ matrix ตัวที่สอง
        }
    }

    int sum=0;
    for(int i=0; i<n; i++){
        sum += num[0][i]*num[1][i];         //เอา matrix ตัวแรก คูณ ตัวที่สอง
    }

    printf("%d", sum);

    return 0;
}
