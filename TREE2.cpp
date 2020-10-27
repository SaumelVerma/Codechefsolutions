#include <bits/stdc++.h> 
typedef long long ll;
using namespace std;

int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    ll arr[n],m=0;
	    for(int i=0;i<n;i++)
	    {
        cin>>arr[i];
        m=max(m,arr[i]);
      }
	    if(m==0)
	    {
        cout<<0<<"\n";
      }
	    else
	    {
        sort(arr,arr+n);
        int ct=0;
        for(int i=n-1;i>=0;i--)
        {
          if(arr[i]<m && arr[i]>0)
          {
            m=arr[i];
            ct++;
          }
        }
        cout<<ct+1<<"\n";
      }
	}
	return 0;
}
