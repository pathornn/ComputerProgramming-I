#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);

    int number[N];
    for(int i=0; i<N; i++){
        scanf("%d", &number[i]);
    }

    int target;
    scanf("%d", &target);

    int count=0;
    for(int i=0; i<N; i++){
        if(number[i] == target){
            printf("%d ", i+1);
            count++;
        }
    }

    if(count == 0){
        printf("0");
    }
    return 0;
}
