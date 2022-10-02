#include<iostream>
#include<bits/stdc++.h>
#define read_array(arr, len) for (int i = 0; i < len && cin >> arr[i]; i++)
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
 
  int mas[5], e = 3;
   for (int i = 0; i < 4; i++) {
        cin >> mas[i];
    }
    sort(mas, mas + 4);
    for (int i = 0; i < 3; i++) {
        if (mas[i] != mas[i + 1]) {
            e--;
        }
    }
    cout << e;
 
}