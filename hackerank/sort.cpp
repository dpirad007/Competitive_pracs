#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int> v;
    while (cin >> n)
        v.push_back(n);
    sort(v.begin(),v.end());
    for(int x: v){
        cout<<x<<" ";
    }
    return 0;
}
