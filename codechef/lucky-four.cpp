#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t,n;
    cin>>t;
    
    vector<long long> v;


    for(int i=0;i<t;i++){
        int c=0;
        cin>>n;
        while(n!=0){
            int no = n%10;
            n=n/10;
            v.push_back(no);
        }
        
    
    for(int i=0;i<v.size();i++){
        if(v[i]==4){
            c++;;
        }
    
    }
    }
    // for(int x: v){
    //     cout<<x;
    // }
    //cout<<c<<endl;
    return 0;
}