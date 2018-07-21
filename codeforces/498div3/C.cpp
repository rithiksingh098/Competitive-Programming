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

//required in the sorting thing
//bool compbysec(const pii &a,const pii &b)
//{
//	return a.S<b.S;
//}

ll power2(ll a, ll b) { if(b == 0) return 1; if(b == 1) return a; ll x = power2(a, b / 2); x = x * x; if(b % 2) x = x * a; return x;}
ll gcd(ll a, ll b) {if(a < b) swap(a, b); while(b) {ll t = b; b = a % b; a = t;} return a;}
ll mul(ll a, ll b, ll m = mod) { return (ll)(a * b) % m;}
ll add(ll a, ll b, ll m = mod) { a += b; if(a >= m) a -= m; if(a < 0) a += m; return a;}
int modularExponentiation(int x,int n,int M)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)        //n is even
        return modularExponentiation((x*x)%M,n/2,M);
    else                             //n is odd
        return (x*modularExponentiation((x*x)%M,(n-1)/2,M))%M;

}
//modular exponentiation for longlong
ll power(ll a, ll b, ll m = mod) { if(b == 0) return 1; if(b == 1) return (a % m); ll x = power(a, b / 2, m); x = mul(x, x, m); if(b % 2) x = mul(x, a, m); return x;}

//fermat mod inverse
int modInverseFerm(int A,int M)
{
    return modularExponentiation(A,M-2,M);
}

//code for finding gcd by extended euclidean algos
ll eegcdd, eegcdx, eegcdy;//declared already
void extendedEuclid(ll A, ll B) {
    if(B == 0) {
        eegcdd = A;
        eegcdx = 1;
        eegcdy = 0;
    }
    else {
        extendedEuclid(B, A%B);
        ll temp = eegcdx;
        eegcdx = eegcdy;
        eegcdy = temp - (A/B)*eegcdy;
    }
}
//for reference eegcdd
//int main( ) {
//extendedEuclid(16, 10);
//cout << ”The GCD of 16 and 10 is ” << eegcdd << endl;
//cout << ”Coefficients x and y are ”<< eegcdx <<  “and  “ << eegcdy << endl;
//return 0;
//}
//The GCD of 16 and 10 is 2.
//Coefficients of 16 and 10 are 2 and -3.

//this is mod inverse by not using fermat that means m need not be prime
ll modInverse(ll A, ll M)
{
    extendedEuclid(A,M);
    return (eegcdx%M+M)%M;    //eegcdx may be negative
}

int readline( char * str ) {int i = 0;char ch;while ( (ch = getchar() ) != '\n' ) {str[i++] = ch;}str[i] = '\0';return i;}

//struct HASH{
//  size_t operator()(const pair<ll,ll>&x)const{
//    return hash<ll>()(((ll)x.first)^(((ll)x.second)<<64));
//  }
//};

// ll bin_ser(ll low,ll high,ll key){

//    while(low<=high){
//        ll mid = (low+high)/2;
//        if(v1[mid]<key){
//            low = mid+1;
//        }
//        else if(v1[mid]>key){
//            high = mid-1;
//        }
//        else{
//            return (mid+1);
//        }
//    }
//    return -1;
// }


//bool dfs(const vector<vector<int>>& a, vector<char>& used, int v) {
//    used[v] = 1;
//    for (int x : a[v]) {
//        if (used[x] == 1) {
//            return false;
//        } else if (used[x] == 0) {
//            if (!dfs(a, used, x)) {
//                return false;
//            }
//        }
//    }
//    used[v] = 2;
//    return true;
//}
//
//bool ensure_absence_of_cycles(const vector<vector<int>>& a) {
//    int n = a.size();
//    vector<char> used(n);
//    for (int i = 0; i < n; ++i) {
//        if (!used[i]) {
//            if (!dfs(a, used, i)) {
//                return false;
//            }
//        }
//    }
//    return true;
//}
//
//

bool isprime(ll a){
    ll i;
    for(i=2;i*i<=a;i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
}
ll fnct(ll arr[n],ll a,ll b,ll sum1=0,sum2=0,ll cntr=0)
{
    lp(k,a,b)
    {
        if(sum1==sum2)
        {
            cntr=sum1;
        }
        else
        {
            if(sum1>sum2)
            {

            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    llc(n);
    ll arr[n];
    lp(i,0,n)
    {
        cin>>n;
    }
    ll i=0,j=n-1;//for pointers in front and back
    ll sum1=0,sum2=0;
    ll cntr=0;
    lp(k,0,n)
    {
        if(sum1==sum2)
        {
            cntr=sum1;
        }
        else
        {
            if()
        }
    }
    return 0;
}

