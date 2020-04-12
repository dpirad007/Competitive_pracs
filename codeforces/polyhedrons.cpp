#include<bits/stdc++.h>
using namespace std;


int main(){
    long long n,tot=0;
    string s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        
        if(s=="Tetrahedron"){
            tot+=4;
        }else if(s=="Cube"){
            tot+=6;
        }else if(s=="Octahedron"){
            tot+=8;
        }else if(s=="Dodecahedron"){
            tot+=12;
        }else
        {
            tot+=20;
        }

        

    }
    cout<<tot;

    return 0;
}