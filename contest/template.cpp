#include<bits/stdc++.h>
using namespace std;
template <typename T> void print(T t) { cout<<t<<endl; }    
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);cout<<fixed; cout<<setprecision(10);
#define loop0(i,n) for(int i=0; i<n; i++)
#define loop1(i,n) for(int i=1; i<=n; i++)
#define printVec(vec) for(int i = 0; i < vec.size(); ++i)cout<<vec[i]<<" "; cout<<endl
#define ll long long
#define vll vector<ll>
#define get(a, n)    for(ll it = 0; it < n; it++)    cin>>a[it];
//creating a 2d vector containing n vectors of size m each : vector<vll> vec(n, vll(m,0));
//ascii of a is 97
//creating a vector with elements : vector<long long> arr{1,2,3,4};
//converting string to num : stringstream geek(s); int x = 0; geek >> x; 

ll n = 0, t = 0; ll small = -1e18, big = 1e18; const ll mod=1e9+7; map<ll,ll> occ; map<pair<ll,ll>,ll> occP;
//global variables end  

void print2dVec(vector<vector<ll>> v){for(int i = 0; i < v.size(); ++i){cout<<i<<" : ";for(int j = 0; j < v[i].size(); ++j){cout<<v[i][j]<<" ";}print("");}}

void printSet(set<ll> s){for(auto itr = s.begin(); itr != s.end(); ++itr){cout<<*itr<<" ";}}

ll factorial(int n){long long ans = 1; for(int i = 1; i <= n; ++i){ ans*=i; }
    return ans;
}

ll findGCD(ll a,ll b){if(b==0)return a;return findGCD(b, a%b);}

// lcm(a,b) = (a*b)/gcd(a,b)

bool isprime(ll p){for(int i = 2; i*i <= p; ++i){if(p%i==0 && p != i){return false;}}
    return true;
}

bool sortVec( const vector<ll>& v1, const vector<ll>& v2 ) { 
//change 0 to 1 to sort as per second column
//change < sign to > sign to sort in descending 
return v1[0] < v2[0]; 
} 
//useful functions end

int main(){
    IOS;   
    cin>>n;
    return 0;
}