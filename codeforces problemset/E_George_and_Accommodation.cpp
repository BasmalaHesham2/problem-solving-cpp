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
    int q;cin>>q;
    vector<pii> v(q);

    for (int i=0;i<q;i++){
        cin>>v[i].first>>v[i].second;
    }
    int count=0;
    for (int i=0;i<q;i++){
        if((v[i].first+2)<=v[i].second){
            count++;
        }
    }

    cout<<count;

   
    return 0;
}