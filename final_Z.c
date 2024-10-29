#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int count=0, space=0;
    for(int i=0; i<n; i++){
        printf("%d ", count);
        count++;
        space++;

        if(count > 9){
            count=0;
        }
    }
    printf("\n");
    for(int i=0; i<n-2; i++){
        for(int ii=0; ii<space-2; ii++){
            printf("  ");
        }
        printf("%d", count);
        count++;
        space--;
        printf("\n");

        if(count > 9){
            count=0;
        }
    }

    for(int i=0; i<n; i++){
        printf("%d ", count);
        count++;
        space++;

        if(count > 9){
            count=0;
        }
    }
    return 0;
}
