/*선형 겁색 : 배열의 인덱스르 처음 부터끝까지 증가하면서 방문하여 그 값이 속하는 지 확인
의 사코드 
For i form 0 to n-1
    if i'th element is 50
    retrun true
return false
*/
#include <stdio.h>

int main(void)
{
    int search_num = 0;
    int num1;
    long f = 0;

    printf("검색할 숫자를 입력 하시오:");
    scanf("%d", &search_num);

    FILE *fp = fopen("test.txt", "r");

    while (1)
    {
        if (feof(fp) != 0)
        {
            printf("이 파일에 %d 없음\n", search_num);
            break;
        }
        else
        {
            fscanf(fp, "%d", &num1);
            //printf("%d\n", num1);
            if (num1 == search_num)
            {
                printf("이 파일에 %d 존재\n", search_num);
                break;
            }
        }
    }

    fclose(fp);

    return 0;
}
