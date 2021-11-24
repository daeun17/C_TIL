#include <stdio.h>

int main(int argc, char* argv[]) // main함수도 입력을 받을 수 있다.
{
    //argc는 main함수가 받은 입력의 개수, argv는 main함수가 받은 입력이다. 
    //argv의 첫번쨰 입력은 실행파일의 경로이다.
    printf("%s\n",argv[0]);
    if(argc == 2)//argv의 1번쨰 
    {
        printf("hello, %s\n",argv[1]);
    }else
    {
        printf("hello,world\n");
    }
    return 0; 
    //main 함수는 기본적으로0을 반환 한다 => 이는 프로그램이 문제 없이 작동 했음을 의미한다.
    
}
