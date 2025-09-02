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
    // myfun()
    string s;cin>>s;
    int t,l,r;
    cin>>t;
    vi n(size(s));
    for(int i=0;i<size(s);i++){
        if(s[i]=='a'){
            n[i]=1;
        }
    }
    partial_sum(n.begin(),n.end(),n.begin());
    while(t--){
        cin>>l>>r;
        l--;
        r--;
        if(l==0){
            cout<<n[r]<<endl;
        }
        else{
            cout<<n[r]-n[l-1]<<endl;
        }
    }
    return 0;
}