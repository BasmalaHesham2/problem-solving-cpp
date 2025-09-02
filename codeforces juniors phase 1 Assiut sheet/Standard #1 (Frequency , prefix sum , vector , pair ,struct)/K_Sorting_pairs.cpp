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

bool cmp(pair<string,int> x,pair<string,int> y){
    if(x.second>y.second) return true;
    if(x.second<y.second) return false;
    else return x.first<y.first;
}
int32_t main(){
    int n; cin>>n;
    vector<pair<string,int>> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first;
        cin>>v[i].second;
    }
    
    sort(v.begin(),v.end(),cmp);
    
    for(int i=0;i<n;i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
   
    return 0;
}