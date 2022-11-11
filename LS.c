#include<stdio.h>

int main()
{
    int a[20],i,n,x,count = 0;
    printf("Enter size of an array\n");
    scanf("%d",&n);
    printf("Enter an elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array elements\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    // for linear search
    printf("\n Enter an element to be searched\n");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            printf("%d is found at %d index\n",x,i);
            count = 1;
            break;
        }
    }
    if(count == 0)
        printf("element not found\n");
}