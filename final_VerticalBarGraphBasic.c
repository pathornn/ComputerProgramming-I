#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);

    int num[100];
    for(int i=0; i<n; i++){
        scanf("%d", &num[i]);
    }

    int max=INT_MIN;
    for(int i=0; i<n; i++) if(num[i] > max) max = num[i];

    int countMax=max;
    for(int i=0; i<max; i++){
        for(int ii=0; ii<n; ii++){
            if(num[ii] >= countMax){
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
        countMax--;
    }
    return 0;
}
