#include<stdio.h>
int main ()
{
    for(int i=11;i<=20;i++)
    {
        for(int j=11;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}