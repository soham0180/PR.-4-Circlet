#include<stdio.h>
int main()
{
    for(int i = 5;i>=1;i--)
    {
        for(int space = 1; space< i;space ++)
        printf(" ");
        for(int j = i ; j<=5;j++)
        printf("%d",j);
        for(int j=4;j>=i;j--)
        printf("%d",j);
        printf("\n");

    }
    return 0;
}