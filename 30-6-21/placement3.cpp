#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> v;
    int max=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
        if(max<a)
        {
            max=a;
        }
    }
    int d;
    cin>>d;
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]!=max){
            if(v[i]+d>max){
            c=c+1;
           }
        }
    }
    cout<<c;


}
