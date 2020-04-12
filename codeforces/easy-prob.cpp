#include <bits/stdc++.h>
using namespace std;

int main(){
   int n,no,flag=0;
   cin>>n;
   for(int i=0;i<n;i++){
       cin>>no;
       if(no==1){
           cout<<"HARD";
           flag=1;
           break;
       }
   }
   if(flag!=1)
        cout<<"EASY";

    return 0;
}