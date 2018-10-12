#include <iostream.h>
#include<math.h>

using namespace std;

int main()
{
    int a[100][100],i,j,num,c=1,k=2;
    cout<<"enter the no. upto which you want spiral :"<<endl;
    cin>>num;
    temp=num;
    while(1)

    for(i=5,k=2;i<100;i++,k++)
    {
        for(int l=1,j=50;l<num;j++)
        {
            c++;
           if(c<=k)
            a[i][j]= l;
        }
    }
    //display
    for(i=0;i<100;i++)
    {
        for(j=0;j<100;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}

