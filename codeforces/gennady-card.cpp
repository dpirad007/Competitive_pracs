#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n,c;
    char val1,val2;
    cin>>n;
    vector<char> v;
    vector<char> v1;
    
    for(int i=0;i<2;i++)
    {
        v.push_back(n[i]);
    }
    val1=v[0];
    val2=v[1];

    for(int i=0;i<5;i++)
    {
        cin>>c;
        for(int i=0;i<2;i++)
        {
            v1.push_back(c[i]);
        }
    }
    int flag=0;

    for(int i=0;i<10;i++)
    {
        if(v1[i]==val1 || v1[i]==val2)
        {
            flag=1;
            break;
        }
        else
        {
            flag=0;
        }
        
    }

    if(flag==1)
    {
        cout<<"YES";
    }
    else
{
    cout<<"NO";
}
    // for(auto x:v)
    // {
    //     cout<<x<<endl;
    // }
    

    return 0;
}