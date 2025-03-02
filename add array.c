#include<stdio.h>

int main()
 { int i,j;
    int ROWS=3,COLS=3;
    int mat1[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int mat2[ROWS][COLS] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };
int result[3][3];
int ROWS=3,COLS=3;

for(i=0;i<ROWS,i++)
{
    for(j=0;j<COLS;j++)
    {
        result[i][j]=mat1[i][j]+mat2[i][j];

    }
}
printf("addition of two matrix:\n");
for(i=0;i<ROWS;i++)
{
    for(j=0;j<COLS;j++)
    {
        printf("%d",result[i][j]);

    }
    printf("\n");
}
// printf("\n");


    return 0;
}
