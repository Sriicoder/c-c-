#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a[5][5],r,c,i,j,min,max,k,l;

    printf("enter no. of rows : \n");
    scanf("%d",&r);
    printf("enter no. of columns : \n");
    scanf("%d",&c);
    printf("enter array elements : \n");

    for(i=0;i<r;i++)
    {
    for(j=0;j<r;j++)
    {
    scanf("%d",&a[i][j]);
    }
    }

    //Saddle point logic


    for(i=0;i<r;i++)                        //main i loop
    {
    min = a[i][j];
    for(j=0;j<c;j++)
    {
    if(min>a[i][j])
    {
    min = a[i][j];
    k=j;
    }
    }
    max = a[0][k];
    for(l=0;l<r;l++)
    {
    if(max<a[l][k])
    max = a[l][k];
    }

    if(max == min)
    {
    printf("matrix elements are : \n");
    for(i=0;i<r;i++)
    {
    for(j=0;j<c;j++)
    {
    printf("  %d  ",a[i][j]);
    }
    printf("\n");
    }
    printf("saddle point is : \n %d",max);
    break;
    }
    }
}
