#include<bits/stdc++.h>
using namespace std;
#define int long long

int check(vector<int> & arr,int N,int x)
{
	int sum = accumulate(arr.begin(),arr.end(),0LL);
	int meanoperation = N * x-sum;
	if(meanoperation < 0) return -1;
	
	int medianoperation =0;
	for(int i=(N-1)/2; i< N;i++){
		medianoperation +=max(0LL,x-arr[i]);
	}
	if(medianoperation > meanoperation){
		return -1;
	}
	return meanoperation;
}

void solve(){
	int N;cin>>N;
	vector<int> arr(N);
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}
	
	sort(arr.begin(), arr.end());
	
	int low = arr[(N-1)/2],high = 1e9 + 10,ans = -1;
	while(low <= high){
		int mid = low + (high-low)/2;
		int minoperations = check(arr,N,mid);
		if(minoperations != -1){
			ans = minoperations;
			high = mid-1;
		}
		else
		{
			low = mid+1;
		}
	}
	cout<< ans <<endl;
}

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int t;cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}
