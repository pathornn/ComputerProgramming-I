#include <stdio.h>

int main() {
    int count=0, n[501];
    while(1){
        scanf("%d", &n[count]);

        if(n[count] > 9 || n[count] < 0) break;

        count++;
    }

    int space = count-1, num=1;
    for(int i=0; i<count; i++){
        for(int ii=0; ii<space; ii++) printf(" ");
        for(int ii=0; ii<num; ii++) printf("%d", n[i]);
        printf("\n");
        space--; num++;
    }
    return 0;
}
