#include <iostream>
#include<stdio.h>

using namespace std;


void tower(int n,char beg, char aux, char end)
{
    if(n==1)
        cout<<beg<<endl<<end;
    else
    {
        tower(n-1,beg,end,aux);
        tower(1,beg,aux,end);
        tower(n-1,aux,beg,end);
    }

}

int main()
{
    int n;
    cout<<"enter the no. of discs : "<<endl;
    cin>>n;
    tower(n,'A','B','C');
    return 0;
}
