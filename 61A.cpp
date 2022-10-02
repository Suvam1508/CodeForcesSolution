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
    string s, t; cin >> s >> t;
	string ans;
	for(int i=0;i<s.size();i++){
		if(s[i]==t[i]) ans.push_back('0');
		else ans.push_back('1');
	}
	cout << ans << endl;
}