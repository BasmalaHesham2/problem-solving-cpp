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
    int t;cin>>t;
    set<int> se;

    while (t--){
        string s;cin>>s;
        if(s=="insert"){
            int n;cin>>n;
            se.insert(n);
        }
        else if(s=="find"){
            int nn;cin>>nn;
            auto f = se.find(nn);
            if(f!=se.end()){
                cout<<"found\n";
            }
            else{
                cout<<"not found\n";
            }
        }
        else if(s=="lower_bound"){
            int nnn;cin>>nnn;
            auto it = se.lower_bound(nnn);
            if(it==se.end()){
                cout<<"-1"<<endl;
            }
            else{
                cout<<*it<<endl;
            }
        }
        else if(s=="upper_bound"){
            int nnnn;cin>>nnnn;
            auto ti=se.upper_bound(nnnn);
            if(ti==se.end()){
                cout<<"-1"<<endl;
            }
            else{
                cout<<*ti<<endl;
            }
        }
    }
   
    return 0;
}