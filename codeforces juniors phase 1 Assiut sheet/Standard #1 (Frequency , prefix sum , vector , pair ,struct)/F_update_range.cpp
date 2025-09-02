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
    while(t--){
        int l,r,k;cin>>l>>r>>k;
        l--;
        r--;
        pre[l]+=k;
        if(r<n-1){
            pre[r+1]+=-k;
        }

    }

    partial_sum(pre.begin(),pre.end(),pre.begin());
    

    for(int i=0;i<n;i++){
        cout<<v[i]+pre[i]<<" ";
    }
    return 0;
}