#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<vector<int>> vec;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        vector<int> v;
        for(int j=0;j<n;j++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        vec.push_back(v);
    }
    int a=0,max=0;
    for(int i=0;i<n;i++)
    {
       int sum=0;
        for(int j=0;j<n;j++)
        {
           sum=sum+vec[i][j]; 
        }
        if(sum>max)
        {
            max=sum;
            a=i+1;
        }
       
    }
    cout<<a;
}
