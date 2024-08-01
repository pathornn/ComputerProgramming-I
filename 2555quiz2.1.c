#include<stdio.h>

int main() {
    int K, N, i = 1, amount, sum_amount = 0;
    scanf("%d", &K);
    scanf("%d", &N);
    K = K*100;

    while (i <= N && N <= 10000 && K <= 100000) {
        scanf("%d", &amount);

        sum_amount = sum_amount + amount;

        printf("%d\n", (sum_amount + K - 1)/K);

        i++;
    }
    return 0;
}
