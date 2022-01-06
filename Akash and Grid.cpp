#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,x,y; cin>>n>>x>>y;
		int p = (abs((n+1)/2) - x) + (abs((n+1)/2) - y);
		if(p%2==0)
		{
			cout<<"0"<<endl;
		}
		else
		{
			cout<<"1"<<endl;
		}
	}
	
}
