#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define vi     vector<int>
#define pii    pair<int, int>
#define all(v)    v.begin(),v.end()
template<typename T> ostream& operator<<(ostream& os, vector<T>& v){for (auto& i : v) os << i << ' ';return os;}
template<typename T> istream& operator>>(istream& is, vector<T>& v){for (auto& i : v) is >> i;return is;}
void fastIO(){
    ios_base::sync_with_stdio(false);

    cin.tie(0);
}
int32_t main(){
    fastIO();
    double c,time;
    cin>>c>>time;
    double l=0;
    double r=2e9+10;

    while(l+1e-6<r){
        double  mid=(l+r)/2;
        if(c*mid*log2(mid)<=time) l=mid;
        else r=mid;

    }

    cout<<fixed<<setprecision(6)<<l<<endl;
   
    return 0;
}