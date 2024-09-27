#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);

    int input[N];
    for(int i=0; i<N; i++){
        scanf("%d", &input[i]);
    }

    int number[10001];
    for(int i=1; i<10001; i++){
        number[i] = 0;
    }

    for(int i=0; i<N; i++){
        for(int ii=1; ii<=input[i]; ii++){
            if(ii == input[i]){
                number[ii] = input[i];
            }
        }
    }

    for(int i=0; i<10001; i++){
        if(number[i] > 0){
            printf("%d ", number[i]);
        }
    }
    return 0;
}
