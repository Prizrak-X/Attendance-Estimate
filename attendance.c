#include<stdio.h>
#include<stdlib.h>
int AttendanceFull, AttendanceDone;
float Percent, Absent, Miss, Minimum;
void main()
{
    printf("Hours Conducted: ");
    scanf("%d", &AttendanceFull);
    printf("\n");
    printf("Hours Attended: ");
    scanf("%d", &AttendanceDone);
    Percent = (float)AttendanceDone / AttendanceFull*100.0;
    printf("Percentage: %.2f%%",Percent);
    printf("\n");
    Absent = AttendanceFull - AttendanceDone;
    printf("Absent: %.0f Hours",Absent);
    Minimum = AttendanceFull * 0.85;
    Miss = Minimum - AttendanceDone;
    if (Miss > 0)
    {
        printf("\n");
         printf("You have to Attend: %.0f Hours to Keep Minimum", Miss);
    }
    else
    {    
        Miss = Miss*-1;
        printf("\n");
        printf("You can miss: %.0f Hours To Keep Minimum", Miss);
    }
}
