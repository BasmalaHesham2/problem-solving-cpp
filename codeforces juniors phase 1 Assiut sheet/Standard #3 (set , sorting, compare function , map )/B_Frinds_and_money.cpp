#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define vi     vector<int>
#define pii    pair<int, int>
template<typename T> ostream& operator<<(ostream& os, vector<T>& v){for (auto& i : v) os << i << ' ';return os;}
template<typename T> istream& operator>>(istream& is, vector<T>& v){for (auto& i : v) is >> i;return is;}
void myfun(){
    ios_base::sync_with_stdio(false);

    cin.tie(0);
}
int32_t main(){
    myfun();
    int n,q;cin>>n>>q;
    map<string,int>mp;
    while(n--){
        string s;
        int k;
        cin>>s>>k;
        mp[s]=k;
    }
    while(q--){
        int c;cin>>c;
        if(c==1){
            string p;cin>>p;
            int i;
            cin>>i;
            mp[p]+=i;
        }
        if(c==2){
            string pp;cin>>pp;
            cout<<mp[pp]<<endl;
        }
    }
   
    return 0;
}