    #include<bits/stdc++.h>
    using namespace std;
    template <typename T> void print(T t) { cout<<t<<endl; }    
    #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);cout<<fixed; cout<<setprecision(10);
    #define loop0(i,n) for(int i=0; i<n; i++)
    #define loop1(i,n) for(int i=1; i<=n; i++)
    #define printVec(vec) for(int i = 0; i < vec.size(); ++i)cout<<vec[i]<<" "; cout<<endl
    #define ll long long
    #define vi vector<int>
    #define vll vector<ll>
    #define vii vector<pair<int,int>>
    #define vlll vector<pair<ll,lla>>
    #define get(a, n)    for(ll it = 0; it < n; it++)    cin>>a[it];
    //creating a 2d vector containing n vectors of size m each : vector<vll> vec(n, vll(m,0));
    //ascii of a is 97
    //creating a vector with elements : vector<long long> arr{1,2,3,4};
    //converting string to num : stringstream geek(s); int x = 0; geek >> x; 
        

    ll n = 0, t = 0;
    ll small = -1e18, big = 1e18;
    const ll mod=1e9+7;
    map<ll,ll> occ;
    map<pair<ll,ll>,ll> occP;
    // vector<vector<ll>> path(N);
    //global variables end  

    void print2dVec(vector<vector<ll>> v){for(int i = 0; i < v.size(); ++i){cout<<i<<" : ";for(int j = 0; j < v[i].size(); ++j){cout<<v[i][j]<<" ";}print("");}}

    ll factorial(int n){long long ans = 1; for(int i = 1; i <= n; ++i){ ans*=i; }
        return ans;
    }

    ll findGCD(ll a, ll b){ll ans = 1; for(int i = 1; i <= min(a,b); ++i){ if(a%i == 0 && b%i == 0){ans = i;}}
        return ans;
    }

    ll findLCM(ll a, ll b){for(ll i = min(a,b); i <= a*b; ++i){if(i%a == 0 && i%b == 0){return i;}}
        return -1;
    }

    bool isprime(ll p){for(int i = 2; i*i <= p; ++i){if(p%i==0 && p != i){return false;}}
        return true;
    }

    vll primeFactors(ll x){vll fac;for(ll i=2;i*i<=x;i++){if(x%i==0){while(x%i==0){fac.push_back(i);x/=i;}}}
        return fac;
    }

    bool sortVec( const vector<ll>& v1, const vector<ll>& v2 ) { 
    //change 0 to 1 to sort as per second column
    //change < sign to > sign to sort in descending 
    return v1[0] < v2[0]; 
    } 

    bool check(ll val){
        return false;
    }
    ll binsearch(ll low, ll high){
        while(low < high){
            ll mid = (low+high)/2;
            if(check(mid)){high = mid;
            }else{
                low = mid+1;
                }
        }
        return low; //change this to high for upper bound (if element found then low and high both are correct)
    }
    void printSet(multiset<int, greater<int>> s){for(auto itr = s.begin(); itr != s.end(); ++itr){cout<<*itr<<" ";}cout<<endl;}


    //useful functions end

    int main(){
        IOS;   
        cin>>t;
        while(t--){
            cin>>n;
            vll a(2*n); get(a,2*n);
            multiset<int, greater<int>> s(a.begin(), a.end());
            int mx = *s.begin();
            s.erase(s.find(mx));
            bool ansF = false;
            for(int i : a){
                if(i == mx) continue;
                bool poss = true;
                multiset<int, greater<int>> tmpS = s;
                tmpS.erase(i);
                vector<pair<int,int>> ans;
                ans.push_back({mx, i});
                int x = mx;
                while(tmpS.size()){
                    int mx2 = *tmpS.begin();
                    tmpS.erase(tmpS.find(mx2));
                    if(tmpS.find(x-mx2) == tmpS.end()){
                        poss = false;
                        break;
                    }
                    tmpS.erase(tmpS.find(x-mx2));
                    ans.push_back({mx2,x-mx2});
                    x = mx2;
                }
                if(poss){
                    cout<<"YES\n"<<mx+i<<endl;
                    for(pair<int,int> p : ans){
                        cout<<p.first<<" "<<p.second<<endl;
                    }
                    ansF = true;
                    break;
                }
            }
            if(!ansF)cout<<"NO\n";
        }
        return 0;
    }