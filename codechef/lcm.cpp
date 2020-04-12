#include <bits/stdc++.h>
using namespace std;

int xor1(long long l,long long r){
    long long res=0;
    for(int i=l;i<=r;++i){
        res^=i;
    
    }
return res;
}

int sumDigits(int n) 
{ 
    int digit_sum = 0; 
    while (n) { 
        digit_sum += n % 10; 
        n /= 10; 
    } 
    return digit_sum; 
} 

// int solve(long long no1,long long no2){

// }

int main() {
    
    long long t,no1,no2,nf1,nf2;
    cin>>t;
    //for(int i=0;i<3;++i){
        cin>>no1>>no2;
        string s1 = to_string(no1); 
        string s2 = to_string(no2);  
        string s = s1 + s2;  
        int c = stoi(s); 
  
        nf1=sumDigits(c);
        //nf2=sumDigits(no2);
        cout<<nf1<<endl;

    //}
    

    return 0;
}