#include<stdio.h>
int main()
{int i;
    int arr[5],sum;
    printf("enter 5 elements of array:\n");
    for(i=0 ;i<5;i++)
    {
        scanf("%d",& arr[i]);
        sum+=arr[i];
    }
    printf("sum of array elements are :%d \n ",sum);
    return 0;

}