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
string s;
cin>>s;string a;
int pos1=0,pos2=0,counter=0;
for(int i=0;i<s.length();i++) 
{
    if(s[i]=='1') {pos1=i;break;}
}
for(int i=s.length();i>pos1;i--)
{
    if(s[i]=='1') {pos2=i;break;}
}
for(int i=pos1;i<pos2;i++)
{
    if(s[i]=='0') counter++;
    else a+='1';
}
cout<<counter<<endl;
}