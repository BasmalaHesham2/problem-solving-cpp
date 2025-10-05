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
    int p=0;
    while(t--){
        string s;cin>>s;
        if(s=="P"){
            int k;
            cin>>k;
            p+=k;
        }
        if(s=="B"){
            int b;
            cin>>b;
            if(b>p){
                cout<<"YES\n";
                p=0;
            }
            else{
                cout<<"NO\n";
                p=p-b;
            }
        }
    }
    return 0;
}