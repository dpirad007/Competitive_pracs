#include <bits/stdc++.h>
using namespace std;

int xor1(long long l,long long r){
    long long res=0;
    for(int i=l;i<=r;++i){
        res^=i;
    
    }
return res;
}


int main() {
    long long n,l,r,fin;
    cin>>n;
    while(n--){
        cin>>l>>r;
        fin=xor1(l,r);
        //cout<<fin<<endl;
        if(fin%2==0){
            cout<<"Even"<<endl;
        }else{
            cout<<"Odd"<<endl;
        }
    }
    

    return 0;
}