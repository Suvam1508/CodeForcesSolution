#include<iostream>
#include<bits/stdc++.h>
typedef long long int  ll;
typedef long double lld;
typedef unsigned long long ull;
#define read_array(arr, len) for (int i = 0; i < len && cin >> arr[i]; i++)
#define pb push_back
#define vi vector<int>
const int size=1e7;
const ll mod=998244353;
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
    long long int t;
   // cin>>t;
    //while(t--)
    //{
    solve();
    //}
    return 0; 
}
bool isVowel(char c)
{
    
    if(c=='a'|| c=='e' || c=='i' || c=='o' || c=='u'||c=='y'|| c=='Y'||c=='A'|| c=='E' || c=='I' || c=='O' || c=='U') return true;
    else return false;
}
void solve()
{
    string s;
    cin>>s;
    string res="";
    for(int i=0;i<s.size();i++)
    {
        if(!isVowel(s[i]) && isupper(s[i])) {res+="."; char ch=tolower(s[i]);res+=ch;}
        else if(!isVowel(s[i]) && islower(s[i])) {res+="."; res+=s[i]; }
        else if(isVowel(s[i])) continue;
    }
    cout<<res<<endl;
    
}