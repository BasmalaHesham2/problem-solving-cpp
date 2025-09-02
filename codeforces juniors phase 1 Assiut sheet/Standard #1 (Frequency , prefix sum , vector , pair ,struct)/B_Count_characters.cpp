#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define vi     vector<int>
#define pii    pair<int, int>
template<typename T> ostream& operator<<(ostream& os, vector<T>& v){for (auto& i : v) os << i << ' ';return os;}
template<typename T> istream& operator>>(istream& is, vector<T>& v){for (auto& i : v) is >> i;return is;}
int32_t main(){
    string s;cin>>s;
    vi v(200);
    for(int i=0;i<size(s);i++){
        v[s[i]]++;
    }
    for(int i=0;i<200;i++){
        if(v[i]>0){
            cout<<char(i)<<" "<<v[i]<<endl;
        }
    }
   
    return 0;
}