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
  double sum=0.0,ans=0.0;
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
      sum+=a[i];
  }
  ans=sum/n;
  cout<<fixed<<setprecision(12)<<ans<<"\n";
}