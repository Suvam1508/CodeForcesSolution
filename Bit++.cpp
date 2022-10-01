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
	int arr[6][6];int m,n;
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
		{
			cin>>arr[i][j];
		}
	}
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
		{
			if(arr[i][j]==1){
				m=i;n=j;break;
			}
		}
	}

	cout<<(abs(3-m)+abs(3-n))<<"\n";
	
}