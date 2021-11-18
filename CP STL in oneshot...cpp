/*
------------------push_back/pop_back/clear-----------
#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	
vector<int> v;
v.push_back(5);
v.push_back(6);
v.push_back(3);

//cout<<v[0]<<" "<<v[1]<<" "<<v[2];
cout<< v.size()<<endl;
v.pop_back();
cout<< v.size()<<endl;
v.push_back(0);
v.clear();
cout<< v.size()<<endl;
cout<<endl;

//cout<<v[0]<<" "<<v[1]<<" "<<v[2];

}
*/
/*
-----------------vector<int> v(50, 7);-- what does it means---------
#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v(50, 7);  ///{7,7,7,7,7.........upto 50 times}
	cout<<v[23]; //v[23]==7........
}
*/


/*------------Sort Function---------------
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v;
	vector<int> p;
	int arr[n];
	for(int i=1;i<=n;i++)
	{
	cin>>arr[i];
	if(arr[i]%2==0)
	{
			v.push_back(i);
	}
	else
	{
		p.push_back(i);
	}
	}
	
	sort(v.begin(),v.end());
	  for (int i=0;i<v.size();i++)
	  {
	  	cout<<v[i];
	  }
// cout<<x<<" ";
cout<<endl;
 //for (auto u : p)
// cout<<u<<" ";
sort(p.begin(),p.end());
	  for (int i=0;i<p.size();i++)
	  {
	  	cout<<p[i];
	  }
}
*/ 
/*-----------------PAIR in STL-----------------
#include <bits/stdc++.h>
using namespace std;

int main()
{
	//#ifndef ONLINE_JUDGE
	//freopen("input.txt","r", stdin);
	//freopen("output.txt","w", stdout);
	//#endif
	pair<int, char> PAIR1;

	PAIR1.first = 100;
	PAIR1.second = 'G';

	cout << PAIR1.first << " ";
	cout << PAIR1.second << endl;

	return 0;
}
///////////////////////////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<pair<int, string>> v;//{score, names}
	//
	///
	//
	//
sort(v.begin(), v.end());
	return 0;
}
*/
/*-------------------------set operator-----------------
#include <bits/stdc++.h>
using namespace std;

int main()
{
	set<int> s;
	
	s.insert(10);
	s.insert(15);
	
	cout<<s.count(10)<<endl;
	cout<<s.count(9)<<endl;
	cout<<s.count(12)<<endl;
	cout<<s.count(3)<<endl;
	cout<<s.count(15)<<endl;
	
	
	s.erase(10);
		cout<<s.count(10)<<endl;
		
		
}
*/
/*-------------Map in STL--------------
#include <bits/stdc++.h>
using namespace std;

int main()
{
	map<int,int> m;
	
	cout<<m.size()<<endl;
	
     cout<<m[15]<<endl;//instantly create the element and the value will bw 0....
	cout<<m.size()<<endl;
	
}
-------------------frequency counter is the best thing of Map----------
#include <bits/stdc++.h>
using namespace std;

int main()
{
	map<int,int> freq;
	
	freq[10]++;
	freq[10]++;
	freq[10]++;
	freq[10]++;
	cout<<freq[10]<<" "<<freq[4]<<endl;
}

---------------no.1 problem in map----------
#include <bits/stdc++.h>
using namespace std;

int main()
{
	map<string, int> freq;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		if(freq[s] == 0)
		{
			cout<<"OK"<<endl;
		}
		else
		{
			cout<< s <<freq[s]<<endl;
		}
		freq[s]++;
	}
}
*/
//------------------using of SET--------------------
#include <bits/stdc++.h>
using namespace std;

int main()
{
	set<int>s;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		s.insert(x);
	}
	for(int x:s)
	{
		cout<<x<<" ";
	}
}
