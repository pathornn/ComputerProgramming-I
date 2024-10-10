#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);

    char flag[n][n];
    for(int i=0; i<n; i++){
        for(int ii=0; ii<n; ii++){
            flag[i][ii] = ' ';
        }
    }

    for(int i=0; i<1; i++){
        for(int ii=0; ii<n; ii++){
            flag[i][ii] = '*';
        }
    }

    int spaceLeft = 0, spaceRight = n-3;
    for(int i=1; i<(n-7)/2 + 1; i++){
        for(int ii=0; ii<1; ii++){
            flag[i][ii] = '*';
        }

        for(int ii=spaceLeft; ii<spaceLeft+3; ii++){
            flag[i][ii] = '*';
        }
        spaceLeft++;

        for(int ii=n/2 - 2; ii<n/2 + 3; ii++){
            flag[i][ii] = '*';
        }

        for(int ii=spaceRight; ii<spaceRight+3; ii++){
            flag[i][ii] = '*';
        }
        spaceRight--;

        for(int ii=n-1; ii<n; ii++){
            flag[i][ii] = '*';
        }
    }

    for(int i=(n-7)/2 + 1; i<(n-7)/2 + 6; i++){
        for(int ii=0; ii<n; ii++){
            flag[i][ii] = '*';
        }
    }

    spaceLeft = n/2 - 4; spaceRight = n/2 + 2;
    for(int i=(n-7)/2 + 6; i<n-1; i++){
        for(int ii=0; ii<1; ii++){
            flag[i][ii] = '*';
        }

        for(int ii=spaceLeft; ii<spaceLeft+3; ii++){
            flag[i][ii] = '*';
        }
        spaceLeft--;

        for(int ii=n/2 - 2; ii<n/2 + 3; ii++){
            flag[i][ii] = '*';
        }

        for(int ii=spaceRight; ii<spaceRight+3; ii++){
            flag[i][ii] = '*';
        }
        spaceRight++;

        for(int ii=n-1; ii<n; ii++){
            flag[i][ii] = '*';
        }
    }

    for(int i=n-1; i<n; i++){
        for(int ii=0; ii<n; ii++){
            flag[i][ii] = '*';
        }
    }

    //PRINT
    for(int i=0; i<n; i++){
        for(int ii=0; ii<n; ii++){
            printf("%c", flag[i][ii]);
        }
        printf("\n");
    }
    return 0;
}
