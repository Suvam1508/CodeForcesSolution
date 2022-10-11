#include<iostream>
#include<bits/stdc++.h>
typedef long long int  ll;
typedef long double lld;
typedef unsigned long long ull;
#define read_array(arr, len) for (int i = 0; i < len && cin >> arr[i]; i++)
#define print_array(arr,len) for(int i=0;i<len;i++) cout<<arr[i]<<" "; cout<<endl;
#define f(arr,len) for(int i=1;i<len;i++)
#define pb push_back
#define vi vector<int>
#define vll vector<long long>
const int size=1e7;
const ll mod=1000000007;
bool check[size];
ll a[size][2];
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
    ll t;
    cin>>t;
    while(t--)
    {
    solve();
    }
    return 0; 
}
// bool isVowel(char c)
// {
//     if(c=='a'|| c=='e' || c=='i' || c=='o' || c=='u'||c=='y'|| c=='Y'||c=='A'|| c=='E' || c=='I' || c=='O' || c=='U') return true;
//     else return false;
// }
ll maxSubArraySum(vector<ll> a, int n)
{
    ll max_tot = INT_MIN, m = 0;
 
    for (int i = 0; i < n; i++) {
        m = m + a[i];
        if (max_tot < m)
            max_tot = m;
 
        if (m < 0)
            m = 0;
    }
    return max_tot;
}
void solve()
{
    ll n;
 priority_queue<ll>pq;
        cin>>n;
        for(ll i=n; i>=1; i--){
            pq.push(i);
        }
        ll a,b,c;
        cout<<2<<endl;
        while(pq.size() > 1){
            a = pq.top();
            pq.pop();
            b = pq.top();
            pq.pop();
            cout<<a<<" "<<b<<endl;
            c = a + b;
            if(c & 1)c++;
            c /= 2;
            pq.push(c);
        }
}