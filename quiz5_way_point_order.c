#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);

    int destination;
    scanf("%d", &destination);

    int cord_y[destination], cord_x[destination], count[destination];
    for(int i=0; i<destination; i++){
        scanf("%d %d", &cord_y[i], &cord_x[i]);
        count[i] = i+1;
    }

    int map[row][col];
    for(int i=0; i<row; i++){
        for(int ii=0; ii<col; ii++){
            map[i][ii] = 0;
        }
    }

    for(int i=0; i<row; i++){
        for(int ii=0; ii<col; ii++){
            for(int iii=0; iii<destination; iii++){
                if(i == cord_y[iii]-1 && ii == cord_x[iii]-1){
                    map[i][ii] = count[iii];
                }
            }
        }
        //printf("\n");
    }

    for(int i=0; i<row; i++){
        for(int ii=0; ii<col; ii++){
            printf("%d ", map[i][ii]);
        }
        printf("\n");
    }
    return 0;
}
