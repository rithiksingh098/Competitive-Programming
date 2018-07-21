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

typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int,int> pii;
typedef vector<pii> vpii;

//bool compbysec(const pii &a,const pii &b)
//{
//	return a.S<b.S;
//}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    string s;
    vs vec;
    map<string,int> m1;//map to store the count of objects
    loop(i,0,n)
    {
    	map<char,int> pre;//each character of string to its frequency
    	map<char,int>::iterator it1;
    	cin>>s;
    	vec.pb(s);
		//we made a vector of strings to insert all the input strings
		string te="";//this string will contain only one count of the 
		loop(j,0,s.size())
		{
			pre[s[j]]++;//in the map pre the s[j]will
			// be a and if another a encounters it increases its freq
			//catch the map stores in ascending order so 
			//this ensures ab is same as ba
		}
		it1=pre.begin();//iterator 
		while(it1!=pre.end())
		{
			te+=it1->F;
			it1++;
		}
		m1[te]++;
	}
	cout<<m1.size()<<endl;
	//you can go n^2 in this as n<1000 and length of string too
	
    return 0;
}

