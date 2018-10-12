#include <stdio.h>
#include <stdlib.h>

void main()
{
int i,j,l,m,k;
    for(i=1;i<6;i++)
    {
        for(j=5;j>i;j--)
        {
            printf(" ");
        }


        for(k=i;k<=(2*i)-1;k++)
        {
            printf("%d",k);

        }


        for(l=i;l<(2*i)-1;l++)
        {
            m=(2*i)-1;
            printf("%d",m);
            m=m+2;

        }
        printf("\n");
    }
}
