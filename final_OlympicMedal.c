#include <stdio.h>
#include <limits.h>

struct olympic{
    int countryId;
    int gold;
    int silver;
    int copper;
} typedef OLYPIC;

int main()
{
    int n;
    scanf("%d", &n);

    OLYPIC country[n];
    for(int i=0; i<n; i++){
        country[i].countryId = 0;
        country[i].gold = 0;
        country[i].silver = 0;
        country[i].copper = 0;
    }

    for(int i=0; i<n; i++){
        scanf("%d %d %d %d", &country[i].countryId, &country[i].gold, &country[i].silver, &country[i].copper);
    }


    int goldMax=INT_MIN, goldCountry;
    for(int i=0; i<n; i++) if(country[i].gold > goldMax) goldMax = country[i].gold;

    int silverMax=INT_MIN, silverCountry;
    for(int i=0; i<n; i++) if(country[i].silver > silverMax) silverMax = country[i].silver;

    int copperMax=INT_MIN, copperCountry;
    for(int i=0; i<n; i++) if(country[i].copper > copperMax) copperMax = country[i].copper;

    int overallMax = INT_MIN, overall[n], overallCountry;
    for(int i=0; i<n; i++){
        overall[i] = country[i].gold + country[i].silver + country[i].copper;
        if(overall[i] > overallMax){
            overallMax = overall[i];
            overallCountry = i;
        }
    }

    int input, valid=0;
    while(1){
        scanf("%d", &input);

        for(int i=0; i<n; i++){
            if(input == country[i].countryId) printf("%d %d %d %d\n", country[i].gold, country[i].silver, country[i].copper, overall[i]), valid=1;
        }

        if(input <= 0){
            printf("good bye\n");
            break;
        } else if(input == 1001){
            for(int i=0; i<n; i++){
                if(goldMax == country[i].gold) printf("%d ", country[i].countryId);
            } printf("\n");
        } else if(input == 1002){
            for(int i=0; i<n; i++){
                if(silverMax == country[i].silver) printf("%d ", country[i].countryId);
            } printf("\n");
        } else if(input == 1003){
            for(int i=0; i<n; i++){
                if(copperMax == country[i].copper) printf("%d ", country[i].countryId);
            } printf("\n");
        } else if(input == 2000){
            for(int i=0; i<n; i++){
                if(overall[i] == overallMax) printf("%d ", country[i].countryId);
            } printf("\n");
        } else if(input == 3000){
            for(int i=0; i<n; i++){
                if(overall[i] >= 1) printf("%d ", country[i].countryId);
            } printf("\n");
        } else if(valid == 0){
            printf("invalid code\n");
        }

        valid = 0;
    }
    return 0;
}
