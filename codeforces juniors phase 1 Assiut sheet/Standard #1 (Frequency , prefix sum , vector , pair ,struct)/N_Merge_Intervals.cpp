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
    vector<pii> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }

    sort(v.begin(),v.end());
    vi range(0);
    for(int i=0;i<n-1;i++){
        if(v[i+1].first<=v[i].second){
            v[i+1].first=v[i].first;
            if(v[i].second>v[i+1].second){
                v[i+1].second=v[i].second;
            }
        }
        else{
            range.push_back(i);
        }
    }


    for(int x : range){
        cout<<v[x].first<<" "<<v[x].second<<endl;
    }
    cout<<v[n-1].first<<" "<<v[n-1].second<<endl;
    return 0;
}