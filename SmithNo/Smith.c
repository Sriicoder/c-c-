#include<stdio.h>

void main()
{
int n,i,j,k=0,l=0,q,c=1;
printf("enter a number : \n");
scanf("%d",&n);

for(j=n;j!=0;j=j/10)
{
l=l+j%10;
}

for(i=2;i<n;i++)
{
while((n%i == 0) && (c<=n))
{
k = k+i;
c=c*i;
}
}
if(l==k)
printf("entered number is a smith number !");
else
printf("entered number is not a smith number !");
}

