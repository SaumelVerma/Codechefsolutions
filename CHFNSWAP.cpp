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
	    ll n;
	    cin>>n;
	    ll tot=(n*(n+1))/2;
	    if(tot%2!=0)
	    cout<<0<<"\n";
	    else
	    {
	        ll b=((2*n)+1),c=tot-2;
	        ll root = (b-sqrt((b*b)-4*c))/2;
	        root++;
	        ll hfs = (root*(2*n-root+1))/2;
	        ll op=root;
	        if(hfs==(tot/2))
	        {
	            root+=((op*(op-1))/2);
	            root+=(((n-op)*(n-op-1))/2);
	        }
	        cout<<root<<"\n";
	    }
	}
	return 0;
}
