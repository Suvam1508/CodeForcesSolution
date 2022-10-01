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
    cin >> s;
    int low = 0, up = 0;
    for (char c : s) {
        if (c >= 'a' && c <= 'z') low++;
        else up++;
    }
    if (low >= up) {
        for (auto& i : s) i = tolower(i);
        cout << s;
    } else {
        for (auto& i : s) i = toupper(i);
        cout << s;
    }
}