#include<iostream>
#include<bits/stdc++.h>
typedef long long int  ll;
typedef long double lld;
typedef unsigned long long ull;
#define read_array(arr, len) for (int i = 0; i < len && cin >> arr[i]; i++)
#define pb push_back
#define vi vector<int>
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
    long long int t;
    cin>>t;
    while(t--)
    {
    solve();
    }
    return 0; 
}
// bool isVowel(char c)
// {
//     if(c=='a'|| c=='e' || c=='i' || c=='o' || c=='u') return true;
//     else return false;
// }
void solve()
{
ll a,b,n;
cin>>a>>b>>n;
ll sum=0,counter =0;
while(sum<=n)
{
    if(a>b)
    {
        b+=a;
        sum=b;
        counter++;
    }
    else
    {
        a+=b;
        sum=a;
        counter++;
    }
    if(sum>n) break;
}
cout<<counter<<endl;
}