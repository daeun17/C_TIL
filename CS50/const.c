#include <stdio.h>

const int N =3;

int main(void)
{
    int scores2[N];

    scores2[0] = 72;
    scores2[1] = 73;
    scores2[2] = 74;


    //N = 4;// error 전역변수는 한번 값을 저장한 후 변경이 불가능 하다.
     printf("Average: %i \n", (scores2[0] + scores2[1] + scores2[2])/N);

}
