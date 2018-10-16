#include<stdio.h>
int main()
{
    int arr[100],n,k,i,sum=0;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<k;i++)
    {
        sum=sum+arr[i];
    }
    printf("%d",sum);
}