#include<iostream>
 
using namespace std;
 
int main()
{
    int a[100][100],larg=1,n,m,i,j;
    cout<<"Enter no of rows and columns:";
    cin>>m>>n;
    cout<<"Enter the array:\n";
 
    for(i=0;i<m;i++)
        for(j=0;j<n;++j)
            cin>>a[i][j];
 
    for(i=0;i<m;++i)
        for(j=0;j<n;++j)
        {
            if(a[i][j]>larg)
                larg=a[i][j];
        }
 
    cout<<"\nLargest number:"<<larg<<endl;
 
    return 0;
}