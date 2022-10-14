#include<iostream>
#include<memory.h>
#include<string.h>
using namespace std;
int main()
{
	int k;
	char str[1001];
	int count[26];
	while(cin>>k>>str)
	{
		int g=0;
		memset(count,0,sizeof(count));
		//Use the count array to store the number of occurrences of each letter
		for(int i=0; i<strlen(str); i++)
			count[str[i]-'a']++;
		//If there is a letter in which the number is not an integral multiple of k, then it must not meet the meaning of the question, that is, g=1
		for(int j=0; j<26; j++)
		{
			if(count[j]!=0 && count[j]%k!=0)
				g=1;
		}
		//g!=1 indicates that the string given in the test case is in compliance with the rules, otherwise it does not comply with the output -1
		if(g!=1)
		{
			for(int i=0; i<k; i++)
			{
				for(int j=0; j<26; j++)
				{
					int len ​​= count[j]/k;
					if(count[j]!=0)
					{
						while(len--)
							cout<<(char)(j+'a');
					}
				}
			}
			cout<<endl;
		}
		else
			cout<<"-1"<<endl;
	}
	return 0;
}
