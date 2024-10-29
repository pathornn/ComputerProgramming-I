#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int pattern, amount, color;
    double white=0, green=0;
    for(int i=0; i<n; i++){
        scanf("%d", &pattern);
        for(int ii=0; ii<pattern; ii++){
            scanf("%d %d", &amount, &color);
            for(int iii=0; iii<amount; iii++){
                if(color == 0){
                    printf("#");
                    white++;
                } else if(color == 1){
                    printf("-");
                    green++;
                }
            }
        }
        printf("\n");
    }

    printf("%.2lf", white*9.75 + green*8.50);
    return 0;
}
