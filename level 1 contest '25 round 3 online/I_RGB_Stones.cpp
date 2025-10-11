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
    string stones;
    string baskota;
    cin>>stones;
    cin>>baskota;
    int index=0;
    for(int i=0;i<baskota.size();i++){
        if(baskota[i]==stones[index]){
            if(index>=stones.size()-1){
                index=0;
            }
            else index++;
        }
    }
    cout<<index+1;
    return 0;
}