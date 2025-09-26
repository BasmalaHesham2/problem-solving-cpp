#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define vi     vector<int>
#define pii    pair<int, int>
#define all(v)    v.begin(),v.end()
template<typename T> ostream& operator<<(ostream& os, vector<T>& v){for (auto& i : v) os << i << ' ';return os;}
template<typename T> istream& operator>>(istream& is, vector<T>& v){for (auto& i : v) is >> i;return is;}
void myfun(){
    ios_base::sync_with_stdio(false);

    cin.tie(0);
}

bool can(int d,int c,int n,vi &a){
    int prevcow=a[0];
    int cowcount=1;
    for(int i=1;i<n;i++){
        if(a[i]-prevcow>=d){
            prevcow=a[i];
            cowcount++;
        }
        if(cowcount==c) break;
    }
    return cowcount>=c;
}


int32_t main(){
    myfun();
    int n,c;
    cin>>n>>c;
    vi a(n); cin>>a;

    sort(all(a));
    int l=0;
    int r=1e9+10;
    

    while(l+1<r){
        int mid=(l+r)/2;
        if(can(mid,c,n,a)) l=mid;
        else r=mid;
    }
    cout<<l<<endl;
   
    return 0;
}