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
   long long int n;int count=0;
   cin>>n;
   while(n>0)
   {
       int rem=n%10;
       if(rem==4 || rem==7) count++;
       n/=10;
   }
   if(count==4 || count==7) cout<<"YES\n";
   else cout<<"NO\n";
}