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
        int n;
        cin>>n;
        if(n<=100){
            cout<<"NO\n";
        }
        else if(n>100 && n<200){
            if(n%10>=2 && n/10==10){
                cout<<"YES\n";
            }
            else cout<<"NO\n";
        }
        else if(n>=1000 && n<2000){
            n=n/10;
            if(n%10>=1 && n/10==10){
                cout<<"YES\n";
            }
            else cout<<"NO\n";
        }
        else cout<<"NO\n";
    }
    return 0;
}