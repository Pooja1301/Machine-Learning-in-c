#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXWATCHED 800
#define NO_OF_RECOMMENDED 10
#define TOTAL_MOVIE 1682
#define SCORE_LENGTH 100
#define SCORE_INIT 101
#define MAX_USER 944
#define MAX_UNSEEN 1664
#define NSIMILARMOVIE 10
#define TRAININGPERCENT 75/100
#define TESTPERCENT 25/100

struct userinfo
{

   int user_id;
   int watchmovie[MAXWATCHED];
   int rating[MAXWATCHED];
   int mcount;
}user[TOTAL_MOVIE+1];

void parsing(char *);
void recommendation();

