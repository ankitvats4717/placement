#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    unordered_set<int> us(a,a+n);
    for(int i=0;i<n;i++)
    {
        if(us.find(b[i])!=us.end())
        {
           cout<<b[i];
        }
    }

}
