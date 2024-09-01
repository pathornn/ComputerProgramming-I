#include <stdio.h>
#include <stdlib.h>

int main()
{
    int big, small, plank_required, stick_required, plank, stick;
    scanf("%d %d", &plank, &stick);         //factory have plank AND stick
    scanf("%d %d", &big, &small);           //customer required

    plank_required = big*2 + small*1;       //change to material
    stick_required = big*6 + small*4;

    if(plank_required <= plank && stick_required <= stick){
        printf("Yes %d %d", plank - plank_required, stick - stick_required);
    } else if(plank_required <= plank){
        printf("No 0 %d", stick_required - stick);
    } else if(stick_required <= stick){
        printf("No %d 0", plank_required - plank);
    } else {
        printf("No %d %d", plank_required - plank, stick_required - stick);
    }

    return 0;
}
