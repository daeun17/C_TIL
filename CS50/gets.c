/*CS50 code
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string answer = get_string("What's ypur name? \n");
    printf("hello, %s \n",answer);
}
C언어의 변수형에는 string이 없다 => 문자열 저장을 위해서는 문자 배열 or 문자형 포인터 에 저장해야한다
get_string 함수 또한 없다
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char str1[] = "This is string";
    char * str2 = "string";

    printf("What's your name? \n");
    scanf("%s",&str1);
    
    printf("How old are you? \n");
    str2 = malloc(sizeof(char) * 10);
    scanf("%s",str2);
    //str2에 저장된 메모리 주소는 읽기만 할 수 있고 쓰기는 불가능하다(읽기전용 메모리에 할당)
    // => malloc 함수를 통해 메모리를 할당한 뒤 문자열을 저장해야 한다.
    
    printf("%s \n", str1);
    printf("%s \n", str2);

    free(str2);//동적메모리 해제
}