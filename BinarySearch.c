#include<stdio.h>

int main()
{
    int a[20],n,i,beg,end,mid,value;
    int count = 0;
    printf("Enter no of elements in an array\n");
    scanf("%d",&n);
    printf("Enter array elements in sorted order only\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("Araay elements are\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n Enter an element to be search\n");
    scanf("%d",&value);
    beg = 0,end = n-1;
    while(beg<=end)
    {
        mid = (beg + end)/2;
        if(value==a[mid])
        {
            printf("%d Element found at %d index",value,mid);
            count = 1;
            break;
        }
        else if(value < a[mid])
        {
            end = mid -1;
        }
        else
        {
            beg = mid +1;
        }
    }
    if(count == 0)
    {
        printf("%d element not found\n",value);
    }
}