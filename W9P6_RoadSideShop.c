#include<stdio.h>

int main(){
    int N, k;
    scanf("%d %d", &N, &k);

    int customer[500];
    for(int i=0; i<N; i++){
        scanf("%d", &customer[i]);
    }

    int sum=0, max = 0;
    for(int i=0; i<N; i++){
        sum += customer[i];

        if(i-k < 0){
            for(int j=1; j<=k; j++){
                sum += customer[i+j];
                //printf("1 : %d\n", sum);
            }
        }else if(i+k >= N) {
            for(int j=1; j<=k; j++){
                sum += customer[i-j];
                //printf("2 : %d\n", sum);
            }
        }else{
            for(int j=1; j<=k; j++){
                sum += customer[i+j] + customer[i-j];
                //printf("3 : %d\n", sum);
            }
        }

        if(sum > max){
            max = sum;
        }

        sum = 0;
    }
    printf("%d", max);
    return 0;
}
