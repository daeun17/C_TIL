#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    //strlen
    char * string;
    string = malloc(sizeof(char)*20);
    scanf("%s",string);

    for(int i = 0, n = strlen(string); i < n ; i++ )
    {
        printf("%c\n",string[i]);
    }

    //소문자 대분자로 바꾸기
    for(int i = 0, n =strlen(string); i < n ;i++)
    {
        if(string[i] >= 'a' && string[i] <= 'z')
        {
            printf("%c",string[i] - 32);
        }else
        {
            printf("%c",string[i]);
        }
    }
    printf("\n");
    //toupper
    for(int i = 0, n =strlen(string); i < n ; i++)
    {
        printf("%c",toupper(string[i]));
    }
    printf("\n");
}