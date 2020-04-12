#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    for(int i=0;i<k;i++){
        //cout<<i<<endl;
        if(n%10==0){
            n/=10;
        }else
        {
            n--;    
        }
        //cout<<n<<endl;
        
        
        

    }
    cout<<n;

    return 0;
}