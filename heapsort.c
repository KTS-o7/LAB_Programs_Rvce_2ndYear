#include <stdio.h>

void heapify(int arr[], int n)
{
    int i,j,k,v,flag;
    for(i=n/2;i>=1;i--)
    {
        k=i;
        v=arr[k];
        flag=0;
        while(!flag && 2*k<=n)
        {
            j=2*k;
            if(j<n)
            {
                if(arr[j]<arr[j+1])
                    j++;
            }
            if(v>=arr[j])
                flag=1;
            else
            {
                arr[k]=arr[j];
                k=j;
            }
        }
        arr[k]=v;
    }
}

int main()
{
    int arr[100],n,i;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=1;i<=n;i++)
        scanf("%d",&arr[i]);
    heapify(arr,n);
    printf("The sorted array is: ");
    for(i=1;i<=n;i++)
        printf("%d ",arr[i]);
    printf("\n");
    return 0;
}