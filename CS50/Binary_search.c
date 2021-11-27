/* 이진 검색 : 배열리 정렬 되어 있느 경우 중간인덱스에서 시작하여 비교하면 이동하면서 그 값이 있는지 확인
 의사코드
 if no items
     retrun false
 if middle item is 50
    return true
 else if 50 < middle item
    search left half
else if 50 > middle item
    search right half
*/
#include <stdio.h>
#include <stdlib.h>

int compsre(const void * a, const void *b)
{
    int num1 = *(int *)a;
    int num2 = *(int *)b;

    if(num1 < num2)
    {
        return -1;
    }
    if(num1 > num2)
    {
        return 1;
    }
    return 0;
}

int main(void)
{
    int arr[100] = {0};
    int arr_l = 0;
    int num = 0;
    FILE * fp = fopen("test.txt","r");

    while(1)
    {
        if(feof(fp) != 0)
        {
            break;
        }
        //printf("start\n");

        fscanf(fp,"%d", &num);
        arr[arr_l] = num;
        
        //printf("%d",arr[arr_l]);
        arr_l++;
    }

    //printf("end\n");

    arr_l -= 1;
    qsort(arr, arr_l, sizeof(int), compsre);

    int i = arr_l / 2;
    int search_num;

    printf("sarch num: ");
    scanf("%d",&search_num);

    while(1)
    {
        if(i < 1 || i > arr_l)
        {
            printf("no item \n");
            break;
        }
        else if(arr[i] == search_num)
        {
            printf("item exist\n");
            break;
        }
        else if(arr[i] > search_num)
        {
            i = i + (i/2);
        }
        else if(arr[i] < search_num)
        {
            if(i == 1)
            {
                
            }
            i = i - (i/2);
        }
    }

    fclose(fp);
    return 0;
}
