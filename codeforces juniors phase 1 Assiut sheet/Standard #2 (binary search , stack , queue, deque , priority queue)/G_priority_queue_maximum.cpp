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
    priority_queue<int> pq;
    while(n--){
        string s;cin>>s;
        if(s=="push"){
            int k;cin>>k;
            pq.push(k);
        }
        else if(s=="top"){
            cout<<pq.top()<<endl;
        }
        else if(s=="pop"){
            pq.pop();
        }
    }
    return 0;
}