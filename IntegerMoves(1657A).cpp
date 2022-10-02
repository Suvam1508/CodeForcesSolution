#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve();


int32_t  main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long  t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    cin.clear();
    cin.get();
   return 0; 
}
void solve()
{
    int x, y;
    cin >> x >> y;
    int d = x * x + y * y;
    int r = 0;
    while (r * r < d) ++r;
    int ans = 2;
    if (r * r == d) ans = 1;
    if (x == 0 && y == 0) ans = 0; 
    cout << ans << '\n'; 
}