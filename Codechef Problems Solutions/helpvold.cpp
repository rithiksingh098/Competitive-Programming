//helpvold
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 	ll n;cin>>n;ll energy=0;
 	ll arr[n];
 	for(ll i=0;i<n;i++)
 	{
 		cin>>arr[i];
	 }
	sort(arr,arr+n);
	for(ll i=1;i<n;i++)
	{
		energy+=arr[i]*arr[i-1];
	}
	cout<<energy;
    return 0;
}

