#include <stdio.h>
#include <stdlib.h>

int main()
{
    //input
    int a, b, c, sum = 0, series = 0;
    scanf("%d %d %d", &a, &b, &c);

    //series
    sum += a;
    series = a*c;
    sum += series;
    while(series*c <= b){
        series = series*c;
        sum += series;
    }
    if(series*c > b){
        while(1){
            series = series/c;
            sum += series;
            if(series == a){
                break;
            }
        }
    }
    printf("%d", sum);
    return 0;
}
