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
int32_t main() {
    fastIO();
    string s="codeforces";
    int t;cin>>t;
    while(t--){
        string s2;cin>>s2;
        int count=0;
        for(int i=0;i<10 ;i++){
            if(s[i]!=s2[i]){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}