#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);

    int area[r][c];
    for(int i=0; i<r; i++){
        for(int ii=0; ii<c; ii++){
            scanf("%d", &area[i][ii]);
        }
    }

    int zone1=0, zone2=0, zone3=0, zone4=0;
    for(int i=0; i<r/2; i++){
        for(int ii=0; ii<c/2; ii++){
            zone1 += area[i][ii];
        }
        for(int ii=c/2; ii<c; ii++){
            zone2 += area[i][ii];
        }
    }
    printf("%d %d\n", zone1, zone2);

    for(int i=r/2; i<r; i++){
        for(int ii=0; ii<c/2; ii++){
            zone3 += area[i][ii];
        }
        for(int ii=c/2; ii<c; ii++){
            zone4 += area[i][ii];
        }
    }
    printf("%d %d\n", zone3, zone4);
    return 0;
}
