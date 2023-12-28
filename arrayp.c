#include<stdio.h>
void main()
// {
//     int a1[4],a2[4],a3[4],i;
//     printf("For Array 1\n");
//     for(i=0;i<=3;i++)
//     {
//         scanf("%d",&a1[i]);
//     }
//     printf("For Array 2\n");
//     for(i=0;i<=3;i++)
//     {
//         scanf("%d",&a2[i]);
//     }
//     for(i=0;i<=3;i++)
//     {
//         a3[i]=a1[i]+a2[i];
//     }
//     printf("For Array 3\n");
//     for(i=0;i<=3;i++)
//     {
//         printf("%d ",a3[i]);
//     }

// }
{
    int a1[5],a2[5],a3[5],i;
    printf("for array 1\n");
    for(i=0;i<=4;i++)
    {
    scanf("%d",&a1[i]); 
    }
    printf("for array 2 \n ");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a2[i]);
    }
    for(i=0;i<=4;i++)
    {
        a3[i]=a1[i]+a2[i];
    }
    printf("for array 3\n");
    for(i=0;i<=4;i++)
    {
    printf("%d ",a3[i]);
    }
}
