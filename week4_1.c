#include<stdio.h>
int n,x,y;

int main()
{
    scanf("%d",&n);
    x=(2*n)-1;
    for(int i =1;i<=(2*n)-1;i++)
    {
        for(int j=1;j<=y;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=x;j++)
        {
            printf("*");
        }
        printf("\n");
        if(i<n)
        {
            x-=2;
            y++;
        }
        else
        {
            x+=2;
            y--;
        }
    }

  return 0;
}

