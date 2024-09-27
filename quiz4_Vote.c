#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, K;
    scanf("%d %d", &N, &K);

    int people[K+1];
    for(int i=1; i<=K; i++){
        scanf("%d", &people[i]);
    }

    int candidate[N+1];
    for(int i=1; i<=N; i++){
        candidate[i] = 0;
    }

    for(int i=1; i<=K; i++){
        for(int ii=1; ii<=people[i]; ii++){
            //printf("people = %d, choose = %d\n", i, people[i]);
            if(ii == people[i]){
                candidate[ii] ++;
                //printf("candidate = %d\n\n", candidate[i]);
            }
        }
    }

    int mostVoteCandidate=0, highestScore=0;
    for(int i=1; i<=N; i++){
        if(candidate[i] > highestScore){
            mostVoteCandidate = i; highestScore = candidate[i];
        }
        //printf("candidate[%d] = %d\n", i, candidate[i]);
    }

    printf("%d\n%d", mostVoteCandidate, highestScore);

    return 0;
}
