#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    vector<long long> ve,vo;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        
        //v.push_back(a);
        if(i%2==0)
        {
            ve.push_back(a);
        }
        else
        {
            vo.push_back(a);
        }
        
    }
    
    int sum=INT_MIN,a1=0,tote;
    for(auto x:ve)
    {
        
        a1+=x;
        sum=max(a1,sum);
        a1=max(a1,0);
        
    }
    tote=sum;

    int sumo=INT_MIN,a2=0,toto;
    for(auto x:vo)
    {
        a2+=x;
        sumo=max(a2,sum);
        a2=max(a2,0);
    }
    toto=sumo;
    if(sum>sumo)
        cout<<sum;
    else
        cout<<sumo;
    
    
    
    return 0;
}