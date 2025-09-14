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
    int n,m;cin>>n>>m;
    vi nn(n);
    vi mm(m);
    cin>>nn;cin>>mm;
    int sum1=0,sum2=0;
    for(int i=0;i<n;i++){
        sum1+=nn[i];
    }
    for(int i=0;i<m;i++){
        sum2+=mm[i];
    }
   if(sum1==sum2){
    cout<<"Yes";
   }
   else cout<<"No";
    return 0;
}