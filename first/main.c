#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a[50],i,n,k=0,c=0
printf("enter the size of array : \n");
scanf("%d",n);
printf("enter array elements : \n");
for(i=0;i<n;i++)
        scanf("%d",&a[i]);

for(i=0;i<n;i++)
{
    if(a[i]=a[i+1])
    {
        a[i]=a[i+1];
        k++;
    }
}
for(i=0;i<n;i++)
{
    if(a[i]=a[i+1])
    {
        c++;
    }

}
if(c>0)
{
  for(i=0;i<n;i++)
{
    if(a[i]=a[i+1])
    {
        a[i]=a[i+1];
        k++;
    }
}
}
n=n+k;
printf("the final array : \n");
for(i=0;i<n;i++)
    printf("%d",a[i]);
}




