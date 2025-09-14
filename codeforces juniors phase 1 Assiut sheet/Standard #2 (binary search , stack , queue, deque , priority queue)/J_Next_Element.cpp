#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define vi     vector<int>
#define pii    pair<int, int>
template<typename T> ostream& operator<<(ostream& os, vector<T>& v){for (auto& i : v) os << i << ' ';return os;}
template<typename T> istream& operator>>(istream& is, vector<T>& v){for (auto& i : v) is >> i;return is;}
void FastIO(){
    ios_base::sync_with_stdio(false);

    cin.tie(0);
}
int32_t main(){
    FastIO();
    int n;
    cin >> n;
    vi v(n);
    cin>>v;
    vi ans(n,-1);

    stack<int> s;
    s.push(n-1);
    for (int i=n-1;i>=0;i--){
        while(!s.empty()&&v[i]>=v[s.top()]){
            s.pop();
        }
        if(!s.empty()){
            ans[i]=s.top()+1;
        }
        s.push(i);
    }

    int q;
    cin>>q;
    while(q--){
        int nu;cin>>nu;
        nu--;
        cout<<ans[nu]<<endl;

    }


    
    return 0;
}