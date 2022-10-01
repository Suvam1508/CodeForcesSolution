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
   string s,t;
   cin>>s>>t;
   int start=0,end=s.length()-1;
   while(start<=end)
   {
       swap(s[start],s[end]);
       start++;end--;
   }
   if(s==t) cout<<"YES\n";
   else  cout<<"NO\n";
}