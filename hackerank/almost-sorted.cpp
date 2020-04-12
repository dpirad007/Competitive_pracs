#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,an;
    long long index=0,count=0;
    cin>>n;
    vector<long long> v,v1,i1;

    while(n--)
    {
        cin>>an;
        v.push_back(an);
        v1.push_back(an);
        
    }
    //v.push_back(0);
    //v1.push_back(0);
    sort(v1.begin(),v1.end());

    for(int i=0;i<v.size();++i)
    {
        if(v[i+1]>v[i])
        {
            index=i+1;
            i1.push_back(i+1);
            i1.push_back(i);
            //count+=1;
            //cout<<count<<endl;
            //cout<<index<<endl;

        }
        if(v[i+1]<v[i])
        {
            count++;
        }
        
    }
    for(int x:i1)
    {   
        cout<<x<<endl;
    }
    if(count==1)
    {   
        if(i1.size()<3)
        {
        cout<<"yes"<<endl;
        cout<<"swap"<<" "<<1<<" "<<2<<endl;
        }
        else if(i1.size()>2)
        {   
            cout<<"yes"<<endl;
            cout<<"swap"<<" "<<i1[0]+1<<" "<<i1[3]+1<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
        
        
    }
    else
    {
        cout<<"yes"<<endl;
        cout<<"reverse"<<" "<<i1[0]+1<<" "<<i1[3]+1<<endl;
    }
    
    // cout<<i1[0]+1<<" "<<i1[3]+1<<endl;
    // cout<<count<<endl;
    

    return 0;
}
