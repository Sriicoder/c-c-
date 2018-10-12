#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
int n,i,j,k=0,l=0;
cout<<"enter a number :"<<endl;
cin>>n;
for(i=0,j=n;i<n;i++,j=j/10)
{
l=l+j;
if(n%i==0)
k=k+i;
}
if(l==k)
cout<<"entered number is a smith number"<<endl;
else
cout<<"entered number is not a smith number"<<end;
return 0;
}

