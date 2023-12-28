#include<stdio.h>
void main()
{
    int a1[3][3],a2[3][3],i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a1[i][j]);
        }

    }
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            a2[j][i]=a1[i][j];
        }
    }
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",a2[i][j]);
        }
    printf(" \n");
    }


}