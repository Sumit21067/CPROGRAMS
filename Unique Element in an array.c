include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int uniqueele(int array[],int n){
    int i,j;
    int count =1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(array[i]==array[j] && i!= j)
            break;
        }
        if(j==n){
            printf("%d\n",array[i]);
            ++count;
        }
    }
    return -1;
    
}
int main()
 {
    int  array[40],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    uniqueele(array,n);
        
    return 0;
}
