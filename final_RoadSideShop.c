#include <stdio.h>
#include <limits.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int road[10000];
    for(int i=0; i<n; i++){
        scanf("%d", &road[i]);
    }

    int maxCostumer = INT_MIN, sum=0;
    for(int i=k; i<n-k; i++){
        for(int ii=i-k; ii<=i+k; ii++){
            sum += road[ii];
        }
        if(sum > maxCostumer) maxCostumer = sum;
        sum=0;
    }

    printf("%d", maxCostumer);
    return 0;
}
