#include<iostream>
using namespace std;
int main(){
int arr[3][3] = {{2,2,2}, {5,8,5}, {4,3,6}};
 

for(int i=0;i<3;i++) 
{
    for(int j=0;j<3;j++)
    { 
        cout<<arr[i][j]<<" ";   
    }
    cout<<"\n";  
}
return 0;
}