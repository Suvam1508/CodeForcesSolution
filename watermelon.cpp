#include<bits/stdc++.h>
using namespace std;
void solve();
int32_t main(void)
{
    
    long long int t=1;
    cin>>t;

    while(t--)
    {
        solve();
    }
    return 0;
}
void solve()
{
    string s;
    cin>>s;

    if(s.size()<=10)
    {
        cout<<s<<"\n";
    }
    else
    {
        long long int count=0;
        for(int i=1;i<s.size()-1;i++)
        {
            count++;
        }
        cout<<s[0]<<count<<s[s.size()-1]<<"\n";
    }
}