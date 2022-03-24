#include <iostream>
using namespace std;
 
int main(){
    int arr[100], count, i, nCount=0, pCount=0 ;
       
    cout << "Enter Number of Elements in Array\n";
    cin >> count;
     
    cout << "Enter " << count << " numbers \n";
      
    for(i = 0; i < count; i++){
        cin >> arr[i];
    }
    for(i = 0; i < count; i++){
        if(arr[i] < 0) {
            nCount++;
        } else if(arr[i] > 0) {
            pCount++;
 } 
    }
      
    cout << "Negative Numbers : " << nCount << endl;
    cout << "Positive Numbers : " << pCount << endl;
     
    return 0;
}
