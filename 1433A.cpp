#include<iostream>
#include<bits/stdc++.h>
typedef long long int  ll;
typedef long double lld;
typedef unsigned long long ull;
#define read_array(arr, len) for (int i = 0; i < len && cin >> arr[i]; i++)
#define pb push_back
#define vi vector<int>
const int size=1e7;
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
ll n;
cin>>n;int count=0;
int num=n;
int last=n%10;
while(n>0)
{
    count++;
    n/=10;
}
if(count==1) {cout<<((last*10)-10)+1<<endl;}
else if(count==2) {cout<<((last*10)-10)+3<<endl;}
else if(count==3) {cout<<((last*10)-10)+6<<endl;}
else if(count==4) {cout<<((last*10)-10)+10<<endl;}
}