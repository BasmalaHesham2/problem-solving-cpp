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
    int t;cin>>t;
    while(t--){
        vi v(3);
        cin>>v;
        int sum=v[0]+v[1]+v[2];
        bool found=true;
        for(int i=0;i<3;i++){
            if(v[i]*2==sum){
                cout<<"YES\n";
                found=false;
                break;
            }
        }
        if(found) cout<<"NO\n";
    }
    return 0;
}