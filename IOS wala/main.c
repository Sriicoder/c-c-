#include <stdio.h>
#include<conio.h>

int main()
{
    int a[50],n,i,k,j;

    printf ("enter size of array : \n");
    scanf("%d",&n);
    printf("enter array elements : \n");
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);


    //Main body

    for(i=0;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            if (a[i] == a[j])
            {
               a[i] = a[j];
               k++;
            }
        }
    }

    n = n-k;
    cout<<endl;
    cout<<"final array is :"<<endl;
    for(i=0;i<n;i++)
        cout<<endl;
        cout<<a[i];

        return 0;

}
