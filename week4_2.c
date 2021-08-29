#include<stdio.h>
int n;
int main()
{
    scanf("%d",&n);
    for(int i =1;i<=n;i++)
    {
        for(int j=1;j<=(2*n)-1;j++)
        {
            if(j>i-1&&j<=(2*n)-i)
            {
                printf("*");
            }
            else
            {

                printf(" ");
            }
        }
        printf("\n");

    }
    for(int i =1;i<=n-1;i++)
    {
        for(int j=1;j<=(2*n)-1;j++)
        {
            if(j>n-i-1&&j<=(2*n)-(n-i))
            {
                printf("*");
            }
            else
            {

                printf(" ");
            }
        }
        printf("\n");
    }



  return 0;
}

