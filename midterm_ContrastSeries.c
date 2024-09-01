#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M, N, f = 3, b = 1, temp, sum = 0;
    scanf("%d %d", &M, &N);

    sum += f*b;                             /*sum (3 x 1) before change to (4 x 2)*/

    while(f < M || b < N){
        temp = f;                           /*storage number temporary*/
        f = f + b;                          /*calculate series*/
        b = temp - b;

        sum += f*b;                         /*sum after calculate*/
    }

    printf("%d", sum);
    return 0;
}
