#include <bits/stdc++.h>

using namespace std;

int main()
{   
    //int asciiValue = 97;
    int t,tem,flag=0;
    long long k,x;
    string s;
    cin>>t;
    
    while (t--)
    {   
        vector<long long> v;
        int count [26]={0};
        int sum=0;
        cin>>s;
        cin>>k>>x;
        for( int i=0;i<s.size();i++)
        {   
            tem=s[i]-97;
            count[tem]+=1;
            if(count[tem]<=x )
            {   flag=1;
                v.push_back(s[i]);
            }
            if(count[tem]-k<=x)
                continue;
            else
                break;
        }
        for(int x: v)
        { 
            sum++;
        }
        cout<<sum<<endl;
    }
    return 0;
}