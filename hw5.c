#include <stdio.h>

int main(void)
{
    int num[5];
    int i;
    
    printf("5개의 정수를 입력하세요: ");
    for(i = 0; i < 5; i++)
        scanf("%d", &num[i]);
    
    printf("홀수 출력 : ");
    for(i = 0; i < 5; i++)
    {
        if(num[i] % 2 == 1)
        {
            printf("%d ", num[i]);
        }
    }
    
    printf("\n짝수 출력 : ");
    for(i = 0; i < 5; i++)
    {
        if(num[i] % 2 == 0)
        {
            printf("%d ", num[i]);
        }
    }
}
