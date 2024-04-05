#include <stdio.h>

int main()
{
    int dan;
    printf("입력:\n원하는 단을 입력하세요");
    scanf("%d", &dan);
    
    for (int i=1; i<=9; i++)
    {
        printf("%d * %d = %d\n", dan, i, dan*i);
    }
}