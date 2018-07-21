//template simple
#include <bits/stdc++.h>
using namespace std;

#define etm cerr << "Time elapsed :" << clock() * 1000.0 / CLOCKS_PER_SEC << " ms" << '\n'
// Numeric Constants
#define mod 1000000007
#define maxs 250005
#define mins 1005
#define eps 0.000000000001
#define imax 2000000200
#define llmax 1000000002000000000ll
#define pi 3.141592653589793
#define MAXO (int) 1e5
const int MAXN = 1e5+5;
#define llc(n) ll n;cin>>n
//write llc(n); with ; in the code
//and n ccan be any varialble m,x,a,b
#define llt ll t;cin>>t;while(t--)

//for bitmasking pos start form 0
#define CHECK_BIT(var,pos) ((var) & (1<<(pos)))

//others
#define pb push_back
#define lp(i,a,b) for(int i=a;i<b;i++)
#define lpr(j,a,b) for(int j=a;j>=b;j--)//confused j-- and --j
#define ll long long int
#define p_pq priority_queue
#define ub upper_bound
#define lb lower_bound
#define F first
#define S second
#define siter set<int>::iterator
#define mp make_pair
#define riterate(container, it) for(typeof(container.begin()) it = container.end()-1; it >= container.begin(); --it)
#define iterate(container, it) for(typeof(container.begin()) it = container.begin(); it != container.end(); ++it)
#define minof(x,y,z) (x < y ? (x < z ? x : z) : (y < z ? y : z))
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int,int> pii;
typedef vector<pii> vpii;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    llc(n);
    if(n%2)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }
    return 0;
}

