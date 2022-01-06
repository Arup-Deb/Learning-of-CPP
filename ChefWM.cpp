#include<bits/stdc++.h>
using namespace std;

int getuniqueprime(int n)
{
	int cnt=0;
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0){
			cnt++;
			while(n%i==0)
			n /= i;
		}
	}
	if(n != 1)
		cnt++;
		return cnt;
	
}
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n,m; cin>>n>>m;
		int prime = getuniqueprime(m);
		int ans =0;
		for(int i = prime;i > 0;i--)
		{
			if(n%i == 0)
			{
				ans = i;
				break;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
