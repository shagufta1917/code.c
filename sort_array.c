#include<stdio.h>
int main()
{
    int i, j, arr[10],temp;
    printf("enter elements of array:\n");
    for(i=1 ;i<10 ;i++)
    {
        scanf("%d",&arr[i]);

    }
    for(i=0;i<9 ;i++)
    {
        for (j=0;j<9;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
        printf("\n");
    }
    printf("array in ascending order:\n");
    for (i=0;i<10 ;i++)
    {
        printf("%d ",arr[i]);

    }
    for(i=0;i<9;i++)
    {
        for(j=0 ;j<9; j++)
        {
            if (arr[j]<arr[j+1])
            {
                temp =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("array in descending order :\n");
    for(i=0;i<10;i++){
        printf("%d",arr[i]);


    }
    printf("\n");
    return 0 ;
}