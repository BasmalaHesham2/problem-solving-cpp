#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define vi     vector<int>
#define pii    pair<int, int>
template<typename T> ostream& operator<<(ostream& os, vector<T>& v){for (auto& i : v) os << i << ' ';return os;}
template<typename T> istream& operator>>(istream& is, vector<T>& v){for (auto& i : v) is >> i;return is;}

int32_t main(){
    int n,t;cin>>n>>t;
    vi v(n+1);
    while(t--){
        int z,x;cin>>z>>x;
        if(z==1){
            v[x]++;
        }
        if(z==2){
            cout<<v[x]<<endl;
        }
    }
    return 0;
}