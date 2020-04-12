#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector <long long> v;
    string s;
    cin>>s;
    //cout<<s[0];
    //cout<<s[2];
    for(int i=0;i<s.size();i++)
    {
        if(i%2==0)
        {
            v.push_back(s[i]);
        }
        else
        {
            continue;
        }
        
        
    }

   

    sort(v.begin(),v.end());

    for(int i=0;i<v.size();i++)
    {
        if(i==v.size()-1)
        {
            v[i]-=48;
            cout<<v[i];
        }
        else
        {
             
        v[i]-=48;
        cout<<v[i]<<"+";     
        }
       
    }

    return 0;
}