#include <stdio.h>

float average(int lenght, int array[]);

int main(void)
{
    int n;
    int num = 0;
    scanf("%d",&n);

    int scores[n];
    for(int i = 0; i < n ; i++)
    {
        scanf("%d", &num);
        scores[i] = num;
    }

    printf("Average: %.1f",average(n,scores));
}

float average(int lenght, int array[])
{
    int sum =0;
    for(int i = 0; i < lenght; i++)
    {
        sum += array[i];
    }
    return (float)sum/(float)lenght;
}