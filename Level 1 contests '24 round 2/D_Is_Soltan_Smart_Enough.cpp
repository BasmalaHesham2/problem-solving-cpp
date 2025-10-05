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
    int n;cin>>n;
    vi v(n);
    int odd=0,even=0;
    int even_index=0,odd_index=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]%2==0){
            even++;
            even_index=i+1;
        }
        else {
            odd++;
            odd_index=i+1;
        }
    }
    if(even>odd){
        cout<<odd_index;
    }
    else{
        cout<<even_index;
    }

    return 0;
}