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
    int n,t;cin>>n>>t;
    vi v(n);
    cin>>v;
    vi freq(1e5+3);
    for(int i=0;i<n;i++){
        if(freq[v[i]]==0){
            freq[v[i]]++;
        }
    }
    partial_sum(freq.begin(),freq.end(),freq.begin());

    while(t--){
        int x;
        cin>>x;
        cout<<freq[x-1]<<" "<<(freq[size(freq)-1]-freq[x])<<endl;

    }

   
    return 0;
}