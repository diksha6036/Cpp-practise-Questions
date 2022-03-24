#include<iostream>
using namespace std;
int main()  {
     int prize;
     int cost;
     cout<<"We give 10% dicount if someone buy a stuff which costs more than 1000RS \n";
     cout<<"Your budget\n";
     cin>>prize;
     if (prize>=1000){
      cost=prize/10;

      cout<<cost<<endl;
     }
      else

      cout<<prize;
      


}