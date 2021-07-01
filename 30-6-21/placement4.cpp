#include <bits/stdc++.h>
using namespace std;
int main() {
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++)
      {
          cin>>a[i];
      }
      int sum=0;
      unordered_map<int,int> um;
      for(int i=0;i<n;i++)
      {
          cout<<a[i]<<":";
          sum+=um[a[i]]++;
          cout<<sum<<endl;
      }
      cout<<sum;
}
