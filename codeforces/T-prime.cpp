#include<bits/stdc++.h>
using namespace std;

void soe(int n)
{
    vector<float> v;
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) 
    { 
        // If prime[p] is not changed, then it is a prime 
        if (prime[p] == true) 
        { 
            // Update all multiples of p 
            for (int i=p*2; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
  

  
    // Print all prime numbers 
    for (int p=2; p<=n; p++) 
       if (prime[p]) 
        {
            v.push_back(p);
        }

   float ans;
   ans=sqrt(n);
   if(find(v.begin(),v.end(),ans) != v.end())
   {
       cout<<"YES"<<endl;
   }
   else
   {
       cout<<"NO"<<endl;
   }
   

    
 }







int main() 
{   
    long long t;
    cin>>t;
    for(int i=0;i<t;i++)
    {

    long long n;
    cin>>n;
    soe(n);
    }
    return 0;
}
