#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long n;
   
   
   cin>>n;
   for(int i=0;i<n;i++)
   {   
       long long count=0,a;
       string s; 
       vector<char> v;
       cin>>s;
       for(int j=0;j<s.size();j++)
       {
           count++;
           v.push_back(s[j]);
           //cout<<s[j]<<endl;
       }

       

       if(count>10)
       {
           a=s.size();
           cout<<v[0]<<count-2<<v[a-1]<<endl;
       }
       else if(count<=10)
       {
           for(auto x:v)
           {
               cout<<x;
           }
           cout<<endl;
       }
       




   }

    return 0;
}