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
    cin>>v;

    vi freq(1e5 +3);
    for(int x: v){
        freq[x]++;
    }
 
    for(int i=0;i<size(freq);i++){
        if(freq[i]>0){
            for(int j=0;j<freq[i];j++){
                cout<<i<<" ";
            }
        }
    }
   
    return 0;
}