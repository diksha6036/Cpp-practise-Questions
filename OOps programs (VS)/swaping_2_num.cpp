#include<iostream>
using namespace std;

int main() {
    int a,b;
    cout<<"Enter two numbers:"<<endl;
    cin>>a;
    cin>>b;
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<"Numbers after swapping are: " <<a<<" and "<<b ;
    return 0;
}