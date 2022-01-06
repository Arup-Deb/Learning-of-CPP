#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,m;cin>>n>>m;
		if(n%2==0)
		{
			n=n/2;
		}
		else
		{
			n=(n/2)+1;
		}
		if(m%2==0)
		{
			m=m/2;
		}
		else
		{
			m=(m/2)+1;
		}
		
		cout<<m*n<<endl;
	}
}
