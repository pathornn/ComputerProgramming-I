#include <stdio.h>
#include <stdlib.h>

int main()
{
    int big, small, plank_required, stick_required;
    scanf("%d %d", &big, &small);

    plank_required = big*2 + small*1;
    stick_required = big*6 + small*4;

    printf("%d %d", plank_required, stick_required);

    return 0;
}
