#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    int pokeID[150], pokeLevel[150][9];
    char pokeName[150][110];
    for(int i=0; i<n; i++){
        scanf("%d", &pokeID[i]);
        scanf("%s", &pokeName[i]);
        for(int ii=1; ii<9; ii++){
            scanf("%d", &pokeLevel[i][ii]);
        }
    }

    int foundNum;
    scanf("%d", &foundNum);
    int count = foundNum;

    //printf("%d", foundNum);

    int foundID[50], foundLevel[9];
    for(int i=0; i<count; i++){
        scanf("%d %d", &foundID[i], &foundLevel[i]);
        for(int ii=0; ii<n; ii++){
            if(pokeID[ii] == foundID[i]){
                printf("%s ", pokeName[ii]);
                for(int iii=0; iii<=8; iii++){
                    if(foundLevel[i] == iii){
                        printf("%d", pokeLevel[ii][iii]);
                        //printf("\n found : %d", count);
                    }
                }
            }
        }
        /*
        for(int ii=0; ii<8; ii++){
            if(foundLevel[i] == ii){
                printf("%d", pokeLevel[][ii-1]);
            }
        }
        */
        printf("\n");
    }
    return 0;
}
