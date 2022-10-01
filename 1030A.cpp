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
 
    
    long long int n;
    cin>>n;int count1=0;int count2=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x==1) count1++;
        else     count2++;
    }
    if(count1>=1) cout<<"HARD\n";
    else     cout<<"EASY\n";
 
}