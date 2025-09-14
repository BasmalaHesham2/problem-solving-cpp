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
    
    int n;cin>>n;
    vi v(n);
    cin>>v;
    sort(v.begin(),v.end());
    int t;cin>>t;
    while(t--){
        int k;cin>>k;
        auto it=lower_bound(v.begin(),v.end(),k+1);
        
        cout<<distance(v.begin(),it)<<endl;

    }

   
    return 0;
}