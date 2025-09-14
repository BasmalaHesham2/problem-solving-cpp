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
    int n,t;cin>>n>>t;
    string s;cin>>s;
    while(t--){
        string q;cin>>q;
        int k;cin>>k;
        if(q=="prev_permutation"){
            while(k--){
                prev_permutation(s.begin(),s.end());
            }
            cout<<s<<endl;
        }
        if(q=="next_permutation"){
            while(k--){
                next_permutation(s.begin(),s.end());
            }
            cout<<s<<endl;

        }
    }
   
    return 0;
}