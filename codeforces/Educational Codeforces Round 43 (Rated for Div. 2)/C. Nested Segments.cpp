//C. Nested Segments Educational Codeforces Round 43 (Rated for Div. 2)
#include <bits/stdc++.h>
using namespace std;

// Numeric Constants
#define P 1000000007
#define maxs 250005
#define mins 1005
#define eps 0.000000000001
#define imax 2000000200
#define llmax 1000000002000000000ll
#define pi 3.141592653589793
#define max (int) 1e5
const int MAXN = 1e5+5;

//others
#define pb push_back
#define loop(i,a,b) for(int i=a;i<b;i++)
#define loopr(j,a,b) for(int j=a;j>=b;j--)//confused j-- and --j
#define ll long long int
#define p_pq priority_queue
#define ub upper_bound
#define lb lower_bound
#define F first
#define S second
#define siter set<int>::iterator

//#define pii pair<int,int>
//#define pll pair<ll,ll>
//#define ppi pair<pair<int,int>,int>
//#define ppl pair<pll,ll>
//#define vi vector<int>
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int,int> pii;
typedef vector<pii> vpii;

bool compbysec(const pii &a,const pii &b)
{
	return a.S>b.S;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    vpii seg;
    int a,b;
    map <pii,int> ind;
    map <pii,int>::iterator it;
    loop(i,0,n)
    {
    	cin>>a>>b;
    	seg.pb(make_pair(a,b));
    	//ind.insert(pii(a,b),(i+1));//or 
		ind[seg[i]]=i+1;//this is giving error ind.insert(seg[i],i+1);
	}
	//create a map to find the original value of indices of the segments cuz you gonna sort it
	
	
	sort(seg.begin(),seg.end());
	vpii sec;
	loop(i,0,n)
	{
		sec.pb(make_pair(seg[i].S,i+1));
	}
	sort(sec.begin(),sec.end());//the first element of sec is second of seg
	int flag=0;
	loop(i,0,n-1)
	//first check if second ones are same 
	{
		
		if(sec[i].S==sec[i+1].S)
		{
			cout<<ind.find(sec[i])->S<<" "<<ind.find(sec[i+1])->S;
			//printing the index of both of them
			flag=1;
			break;
		}
		//now if no second value were same
		else{
			if(sec[i].S>=sec[i+1].S)
			{
				cout<<ind.find(sec[i])->S<<" "<<ind.find(sec[i+1])->S;
				flag=1;
				break;
			}
//			else{
//				cout<<-1<<" "<<-1;
//			}
		}
		
	}
	if(flag==0)
		{
			cout<<-1<<" "<<-1;
		}
    return 0;
}
