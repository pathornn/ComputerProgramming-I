#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    char studentId[10000][6];
    int score[10000];
    double sum=0;
    for(int i=0; i<n; i++){
        scanf("%s %d", studentId[i], &score[i]);

        sum += score[i];
    }

    double avg = sum / (double)n;

    int count=0;
    for(int i=0; i<n; i++) if(score[i] >= avg) count++;
    printf("%d\n", count);
    for(int i=0; i<n; i++) if(score[i] >= avg) printf("%s\n", studentId[i]);

    return 0;
}
