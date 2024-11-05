//
// Created by Qian on 24-9-26.
//
#include <ctype.h>
#include <math.h>
#include <stdio.h>
int main(void)
{
    char first_name[] = "Dayou";
    char last_name[] = "Luo";
    char gender = 'm';
    int birth_year = 1954;
    int birth_month = 7;
    int birth_day = 20;
    char weekday[] = "Tuesday";
    int c_score = 50;
    int music_score = 90;
    int medical_score = 80;
    double mean = (c_score + music_score + medical_score) / 3.0;
    double sd = sqrt((pow(c_score - mean,2) + pow(music_score - mean,2)+pow(medical_score-mean,2) )/ 3.0);
    int rank = 10;
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