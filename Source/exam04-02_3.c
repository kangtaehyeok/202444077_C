#include <stdio.h>

int main()
{
    int i, sum=0;
    for (int i=1; i<=10; i+=1)
    {
        sum+=i;
        printf("%d\n", sum);
    }
}