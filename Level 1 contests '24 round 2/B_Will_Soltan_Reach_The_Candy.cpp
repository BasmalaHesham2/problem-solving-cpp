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
    int t; cin>>t;
    while(t--){
        int n;cin>>n;
        string s; cin>>s;
        int a=0,b=0;
        bool found=false;
        for(int i=0;i<n;i++){
            if(s[i]=='U') b++;
            if(s[i]=='R') a++;
            if(s[i]=='D') b--;
            if(s[i]=='L') a--;
            if(a==1&&b==1){
                cout<<"YES\n";
                found=true;
                break;
            }
        }
        if (found==false){
            cout<<"NO\n";
        }
    }
   
    return 0;
}