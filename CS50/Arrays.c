#include <stdio.h>

int main(void)
{
    int score1 =72;
    int score2 = 73;
    int score3 = 74;

    printf("Average: %i \n", (score1 + score2 + score3)/3);
    //점수가 많아 질 경우 많은 수정이 필요

    //배열 사용 => 메모리상에서 연속적으로 저장, 관리 가능
    int scores[3]; // 변수 선언은 위에 모아 놓는 것이 좋음
    scores[0] = 72;
    scores[1] = 73;
    scores[2] = 74;

     printf("Average: %i \n", (scores[0] + scores[1] + scores[2])/3);

}