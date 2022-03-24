#include<iostream>

using namespace std;
int main()
{
   int arr[5], i,sum=0;
   cout<<"Enter 5 numbers: ";
   for(i=0; i<5; i++)
      cin>>arr[i];
   cout<<"\nList of Odd Numbers are:\n";
   for(i=0; i<5; i++)
   {
      if(arr[i]%2!=0){
         cout<<arr[i]<<" ";
         sum=sum+arr[i];
      }
   }
   cout<<endl;
   cout<<"Sum of odd numbers of this array is: ";
   cout<<sum<<endl;
   cout<<endl;
   return 0;
}


