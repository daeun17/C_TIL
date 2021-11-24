#include <stdio.h>

void cough(void)
{
    printf("cough\n");
}

int cough2(int);

int main(void)
{
    for(int i = 0; i < 3 ; i++)
    {
        cough();
        cough2(i);
    }
}

int cough2(int a)
{
    printf("cough2\n");
    return 1;
}