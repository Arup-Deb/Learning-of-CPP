/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;int p,q;
		vector<int> v; vector<int> b;
		for(int i=0;i<n;i++)
		{
			cin>>p;
			v.push_back(p);
		}
		for(int i=0;i<n;i++)
		{
			for(int j = i+1;j<n;j++)
			{
				int q = v[i] & v[j];
				b.push_back(q);
			}
		}
			
		
	while(b.size() != 1)
		{
			int max = -1;
		int min = 10e6;
		int maax=0,miin=0;
			for(int i=0;i<b.size();i++)
			{
				if(b[i]>max)
				{
					maax = i;
					max = b[i];
				}
					if(b[i]<min)
				{
					miin = i;
						min = b[i];
				}
			}
		//	cout<<max<<endl;
			//cout<<min<<endl;
			//cout<<maax<<endl;
	//	cout<<miin<<endl;
			if(maax<miin)
			{
			
			b.erase(b.begin()+maax);
			b.erase(b.begin()+miin-1);
		}
		else
		{
				b.erase(b.begin()+maax);
			b.erase(b.begin()+miin);
		}
			b.push_back(max | min);
			
	}
		
		for(int i=0;i<b.size();i++)
		{
		cout<<b[i]<<endl;
		}
		
	}
	return 0;
	
}
*/
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
	{
int n,k; cin>>n;

int a[n], s[32]={0};

for(int i=0;i<n;i++)
{
    cin>>a[i];
    for(int j=0;j<32;j++)
	{
        k=a[i]>>j;
        if(k&1) s[j]++;
    }
}

long long int o = 0;

for(int i=0;i<32;i++)
{
 if(s[i]>1) 
 o+=pow(2,i);
}
cout<<o<<endl;}
  return 0;
}
