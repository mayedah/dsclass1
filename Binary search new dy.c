#include<stdio.h>
int binary_search(int a[],int n,int x)
{
    int left,right,mid;
    left=0;
    right=n-1;
    while(left<=right)
    {
        mid=(left+right)/2;
        if(a[mid]==x)
        {
            return mid;
        }
        else if(a[mid]<x)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
        return -1;
    }
}
    int main()
{
    int number,y;
    printf("Enter your array size:");
    scanf("%d",&number);
    int array[number];
    printf("Enter your item:");
    scanf("%d",&y);
    for(int j=0; j<number; j++)
    {
        scanf("%d",&array[j]);
    }
   int result=binary_search(array,number ,y);
    if(result==-1)
    {
        printf("NOT FOUND\n");
    }
    else
    {
        printf("%d",result);
    }

    return 0;
}
