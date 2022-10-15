#include<iostream>
#include<bits/stdc++.h>
typedef long long int  ll;
typedef long double lld;
typedef unsigned long long ull;
#define read_array(arr, len) for (int i = 0; i < len && cin >> arr[i]; i++)
#define print_array(arr,len) for(int i=0;i<len;i++) cout<<arr[i]<<" "; cout<<endl;
#define f(arr,len) for(int i=0;i<len;i++)
#define pb push_back
#define vi vector<int>
#define vll vector<long long>
const int size=1e7;
const ll mod=1000000007;
bool check[size];
ll a[size][2];
using namespace std;
void solve();

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
// bool isVowel(char c)
// {
//     if(c=='a'|| c=='e' || c=='i' || c=='o' || c=='u'||c=='y'|| c=='Y'||c=='A'|| c=='E' || c=='I' || c=='O' || c=='U') return true;
//     else return false;
// }

int32_t  main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    //cin>>t;
    //while(t--)
   // {
    solve();
    //}
    return 0; 
}

void solve()
{
   ll m,n;ll ans=0;
   cin>>n>>m;
   if(n==m) cout<<0<<endl;
   else if(m%n!=0) cout<<-1<<endl;
   else
   {
       ll d=m/n;
       while(d%2==0)
       {
           d=d/2;
           ans++;
       }
       while(d%3==0)
       {
           d=d/3;
           ans++;
       }
       if(d!=1) ans=-1;
       cout<<ans<<endl;
   }
   
}