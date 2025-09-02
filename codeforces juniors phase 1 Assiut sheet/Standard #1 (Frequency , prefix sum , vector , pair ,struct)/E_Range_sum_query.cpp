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

    int n,t;cin>>n>>t;
    vi v(n);
    cin>>v;

    vi pre(n);
    partial_sum(v.begin(),v.end(),pre.begin());
    
    while(t--){
        int l,r;cin>>l>>r;
        l--;
        r--;
        if(l==0){
            cout<<pre[r]<<endl;
        }
        else{
            cout<<pre[r]-pre[l-1]<<endl;
        }
    }
   
    return 0;
}