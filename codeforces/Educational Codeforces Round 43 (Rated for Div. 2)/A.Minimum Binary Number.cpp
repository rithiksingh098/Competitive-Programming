//Minimum Binary Number
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

typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int,int> pii;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,zer=0,ones=0;cin>>n;//int arr[n];
    string s; cin>>s;
    loop(i,0,n)
    {
    	if(s[i]=='0')
    	{
    		zer++;
		}
		else{
			ones++;
		}
//    	arr[i]=s[i];
	}
	//cout<<endl<<zer<<ones<<endl;
	if(ones==0)
	{
		cout<<0;
	}
	else{
		//if(ones>0&&ones<4)
		//{
			cout<<1;
			loop(i,0,zer)
			{
				cout<<0;
			}
//		}
//		else{
//				cout<<1;
//			loop(i,0,zer)
//			{
//				cout<<0;
//			}
//			cout<<1;
//		}
	}
    return 0;
}
