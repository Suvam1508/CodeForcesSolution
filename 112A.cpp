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
	 string s;
    cin>>s;
    
    if(s[0]>=97 && s[0]<=122)
    {
        s[0]=s[0]-32;
    }
    cout<<s<<endl;
}