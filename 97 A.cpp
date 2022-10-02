#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve();
 
int32_t  main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0; 
}
void solve()
{
  int n;
  cin>>n;
  int a[1000];
  for(int i=1;i<=n;i++)
  {
      int x;
      cin>>x;
      a[x]=i;
  }
  for(int i=1;i<=n;i++)
  {
      cout<<a[i]<<" ";
  }
}