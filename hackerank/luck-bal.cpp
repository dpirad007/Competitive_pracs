#include<bits/stdc++.h>
using namespace std;

void solve(vector<long long> v1,vector<long long> v2,int c,long long k,int tot)
{
    //int fin=0;
    while(c>k)
    {
        sort(v1.begin(),v1.end());
        //cout<<v1[0];
        tot-=2*v1[0];
        v1.erase(v1.begin());
        c--;

    }
    cout<<tot;
}






int main() 
{   
    long long n,k;
    cin>>n>>k;
     int c=0,sum1,sum2,tot;
    vector <long long> v1,v2;
    for(int i=0;i<n;i++)
    {
        long long l,t;
       
        
        cin>>l>>t;
        if(t==1)
        {
            v1.push_back(l);
            c++;
        }
        if(t==0)
        {
            v2.push_back(l);
        }
        
    }
    sum1=accumulate(v1.begin(),v1.end(),0);
    sum2=accumulate(v2.begin(),v2.end(),0);
    tot=sum1+sum2;
    //cout<<sum1<<" "<<sum2<<" "<<tot<<" "<<c;
    solve(v1,v2,c,k,tot);
    
    
    return 0;
}
