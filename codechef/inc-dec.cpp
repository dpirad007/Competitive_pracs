#include <bits/stdc++.h>
using namespace std;

int main(){

    long long n;
    cin>>n;
    if(n%4==0){
        n++;
        cout<<n;
    }else
    {
        n--;
        cout<<n;
    }
    

    return 0;
}