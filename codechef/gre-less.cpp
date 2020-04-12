#include <bits/stdc++.h>

using namespace std;

int main(){
    long long t,no1,no2;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>no1>>no2;
        if(no1>no2){
            cout<<">";

        }else if(no1<no2){
            cout<<"<";

        }else
        {
            cout<<"=";
        }
        
    }


    return 0;
}
