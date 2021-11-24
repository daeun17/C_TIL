#include <stdio.h>

int main (void)
{
    int counter = 0;
    int x = 3, y = 4 ;
    int i = 0;

    counter = counter + 1;
    counter += 1;
    counter++;
    //if문을 사용 하여 비교 가능
    if(x<y)
    {
        printf("x is less than y \n");
    }
    //if문을 사용 하여 비교 한 후 나머지 결과를 else로 처리
    if(x<y)
    {
        printf("x is less than y \n");
    }else
    {
        printf("x is not less than y \n");
    }
    // if문의 중첩을 통해 여러개의 조건을 줄 수 있다.
    if(x<y)
    {
        printf("x is less than y \n");
    }else if(x>y)
    {
        printf("x is not less than y \n");
    }else if(x==y)
    {
        printf("x is equal to y \n");
    }
    // x<y x>y 비교 후 남는 조건은 x==y 밖에 없으므로 생략을 통해 코드를 간결하게 할 수 있다
    if(x<y)
    {
        printf("x is less than y \n");
    }else if(x>y)
    {
        printf("x is not less than y \n");
    }else
    {
        printf("x is equal to y \n");
    }

    //무한 루프
    while(1)//CS50 에서는 true를 넣었는 데 C언어는 boolean형이 없다
    {
        printf("hello world\n");
    }
    //특정 횟수 만큼의 반복
    while(i < 50)
    {
        printf("hello world\n");
        i = i + 1; // or i += 1; or i++
    }
    // 위의 코드를 for문을 이용하면 간단하게 작성 가능
    for(i = 0; i < 50; i++)
    {
        printf("hello world\n");
    }
    return 0;
}