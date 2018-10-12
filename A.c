#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],n,i,j,k;
printf("enter the size of array : \n");
scanf("%d",&n);
printf("enter array elements : \n");
for(i=0;i<n;i++)
scanf("%d",a[i]);

//main code

for(i=0;i<n;i++)
{
for(j=1;j<n;j++)
{
if(a[i]==a[j])
{
a[i] == a[j];
k++;
}
}
}
n=n-k;
printf("final array ; \n");
for(i=0;i<n;i++)
printf("%d",a[i]);
getch();

}
