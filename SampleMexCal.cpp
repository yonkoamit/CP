	#include <bits/stdc++.h>
	#define ll long long
	#define pb push_back
	#define f first
	#define s second
	using namespace std;

	void solve(){
		ll a,b,c,k,m,x,n;
		cin>>n;
		vector<int> v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}
		set<int> s;
		vector<int> suf(n,-1);
		int mex=0;
		for(int i=n-1;i>=0;i--)
		{
			s.insert(v[i]);
			//calculate mex
			while(s.count(mex)) mex++;
			suf[i]=mex;
		}
		vector<int> ans;
		s.clear();
		mex=0;
		ll st=0;
		for(int i=0;i<n;i++)
		{
			s.insert(v[i]);
			while(s.count(mex)) mex++;
			if(mex==suf[st])
			{
				ans.pb(mex);
				mex=0;s.clear();
				st=i+1;
			}
		}
		cout<<ans.size()<<"\n";
		for(auto y:ans)
			cout<<y<<" ";
		cout<<"\n";
		

		
	}

	int main()
	{
		int t=1;
		cin>>t;
		while(t--)
		{
			solve();
		}
	}
