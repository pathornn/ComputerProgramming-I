#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    char studentID[n][9], studentName[n][31], studentLastname[n][51];
    float grade[n];

    for(int i=0; i<n; i++){
        scanf("%s %s %s %f", &studentID[i], &studentName[i], &studentLastname[i], &grade[i]);
    }

    float maxGrade=-1;
    int maxGradeStudent;
    for(int i=0; i<n; i++){
        if(maxGrade < grade[i]){
            maxGrade = grade[i];
            maxGradeStudent = i;
        }
    }

    printf("%s %s %s %.2f", studentID[maxGradeStudent], studentName[maxGradeStudent], studentLastname[maxGradeStudent], grade[maxGradeStudent]);
    return 0;
}
