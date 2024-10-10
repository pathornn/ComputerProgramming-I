#include <stdio.h>
#include <stdlib.h>


int main(){
    int row, col;
    scanf("%d %d", &row, &col);

    int chessBoard[row][col];
    for(int i=0; i<row; i++){
        for(int ii=0; ii<col; ii++){
            scanf("%d", &chessBoard[i][ii]);
        }
    }

    int input;
    scanf("%d", &input);

    for(int i=0; i<row; i++){
        for(int ii=0; ii<col; ii++){
            if((i + ii)%2 != 0){
                chessBoard[i][ii] += input;
            }
        }
    }

    for(int i=0; i<row; i++){
        for(int ii=0; ii<col; ii++){
            printf("%d ", chessBoard[i][ii]);
        }
        printf("\n");
    }
    return 0;
}
