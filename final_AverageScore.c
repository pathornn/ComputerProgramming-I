#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int score;
    double sum=0;
    for(int i=0; i<n; i++){
        scanf("%d", &score);

        sum += score;
    }

    double avg = sum / (double)n;
    printf("%lf", avg);
    return 0;
}
