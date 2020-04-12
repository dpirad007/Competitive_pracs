  
#include <bits/stdc++.h> 
using namespace std;


int main() {
    int n,i,j;
    int arrs;
    int arr[10000];
    cout<<"enter the number";
    cin>>n;
    
    for(i=0;i<n;i++){
        cin>>arr[i];
    }  

   // arrs =sizeof(arr)/sizeof(arr[0]);
    
    //reverse(arr[0],arr[n-1]);
    for(i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
        
   }
    return 0;
}
