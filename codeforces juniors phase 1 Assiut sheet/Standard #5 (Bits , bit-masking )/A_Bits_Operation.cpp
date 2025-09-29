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
    int n,q;cin>>q>>n;
    while(q--){
        int op;cin>>op;
        int k;
        if(op==1){
            cin>>k;
            n|=k;
            cout<<n<<endl;
        }
        else if(op==2){
            cin>>k;
            n&=k;
            cout<<n<<endl;
        }
        else if(op==3){
            cin>>k;
            n^=k;
            cout<<n<<endl;
        }
        else if(op==4){
            n=~n;
            cout<<n<<endl;
        }
    }
   
    return 0;
}