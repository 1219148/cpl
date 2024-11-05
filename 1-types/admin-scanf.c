//
// Created by Qian on 24-9-26.
//
#include <ctype.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    char first_name[10];
    char last_name[10] ;
    char gender ;
    int birth_year ;
    int birth_month ;
    int birth_day ;
    char weekday[10] ;
    int c_score  ;
    int music_score  ;
    int medical_score ;
    double mean ;
    double sd ;
    int rank ;
    scanf("%9s%9s %c%d-%d-%d%9s%d%d%d%*lf%*lf%d",
    first_name,last_name,&gender,
    &birth_day,&birth_month,&birth_year,weekday,
    &c_score,&music_score,&medical_score,
    &rank);
    mean = (c_score + music_score + medical_score) / 3.0;
    sd = sqrt((pow(c_score - mean,2) + pow(music_score - mean,2)+pow(medical_score-mean,2) )/ 3.0);
    printf("%s\t%s\t%c\n"
        "%.2d-%.2d-%.4d\t%.3s.\n"
        "%d\t%d\t%d\n"
        "%.1f\t%.2f\t%d%\n",
        first_name,last_name,toupper(gender),
        birth_day,birth_month,birth_year,weekday,
        c_score,music_score,medical_score,
        mean,sd,rank);
  return 0;
}
