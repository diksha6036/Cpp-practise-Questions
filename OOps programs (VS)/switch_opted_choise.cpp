#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Please choose a number (0,1,2,3) : ";
    cin>>n;
    switch(n)
    {
    case 0:
        cout<<"Student opted course 'OS' ";
        break;
    case 1:
        cout<<"Student opted course 'DMBS' ";
        break;
    case 2:
        cout<<"Student opted course 'OOPS' ";
        break;
    case 3:
        cout<<"Student opted course 'DS' ";
        break;
    default:
        cout<<"Student not registered";
        break;
    }
    return 0;
}
