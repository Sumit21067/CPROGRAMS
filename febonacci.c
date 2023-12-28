#include<stdio.h>
void main()
{
    void fabonacci();
    fabonacci();
}
void fabonacci()
{
    int n1,n2,N,i,n3;
    printf("enter the numberof N");
    scanf("%d",&N);
    n1=0;
    n2=1;
    printf("%d %d",n1,n2);
    for(i=3;i<=N;i++)
    {
    n3=n1+n2;
    printf(" %d ",n3);
    n1=n2;
    n2=n3;
    }


}




// #include<stdio.h>
// void main()
// {
// int n1,n2,N,i,n3;
// printf("Enter the Number of N");
// scanf("%d",&N);
// n1=0;
// n2=1;
// printf("%d %d",n1,n2);
// for(i=3;i<=N;i++)
// {
//     n3=n1+n2;
//     printf(" %d",n3);
//     n1=n2;
//     n2=n3;
// }
// }