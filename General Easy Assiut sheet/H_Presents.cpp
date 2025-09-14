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
    int n;cin>>n;
    vi v(n);
    vi v2(n);
    cin>>v;

    for(int i=0;i<n;i++){
        v2[v[i]-1]=i+1;
    }

    cout<<v2;

   
    return 0;
}