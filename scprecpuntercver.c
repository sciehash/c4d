#include <stdio.h>
#include <stdlib.h>
int main()
{
    int correct=4;
    int wrong=-1;
    int unanswered=0;
    int anna_score;
    int dean_score;
    int grace_score;
    int score_comparison;
    int true;

    printf("Anna, Dean, and Grace participated in Math Competition. \nNow, the examiners should count their score to know who would win the competition.");
    printf("\nAnna got 30 questions right and 8 wrong, Dean got 25 correct and 25 wrong, \nwhereas Grace got only 10 correct and 15 wrong.");
    printf("\nTheir teacher predict that Dean will score the highest.");
    printf("\nBased on provided info, count their score and find the accuracy of the teacher's prediction!");

    anna_score=correct*30+wrong*8;
    dean_score=correct*25+wrong*15;
    grace_score=correct*10+wrong*15;

    printf("\nAnna's score is %d .",anna_score);
    printf("\nDean's score is %d .",dean_score);
    printf("\nGrace's score is %d .",grace_score);
    printf("\nScore Prediction: false");

    return(0);

}
/* Simple score counter to count olympiad participant's score, C version */
