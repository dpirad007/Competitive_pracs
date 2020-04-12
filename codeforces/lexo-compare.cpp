#include<bits/stdc++.h>

using namespace std;

int main()
{
    //string s1,s2;
    char s1[100];
    char s2[100];
    //vector<string> s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<strlen(s1);i++)
    {
        s1[i]=tolower(s1[i]);
        //cout<<s1[i];
    }
    for(int j=0;j<strlen(s2);j++)
    {
        s2[j]=tolower(s2[j]);
        //cout<<s2[j];
    }
    //cout<<strlen(s1);

    
    //transform(s1.begin,s1.end(),s1.begin(),::tolower);
    // int res=strcmp("abcdefg","abcdeff");
    // cout<<res;

    if(strcmp(s1,s2)>0)
    {
        cout<<1<<endl;
    }
    else if(strcmp(s1,s2)==0)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
    

    return 0;
}