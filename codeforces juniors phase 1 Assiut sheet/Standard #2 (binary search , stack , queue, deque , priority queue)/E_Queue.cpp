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
    int k;cin>>k;
    queue<int> q;
    while(k--){
        string s;cin>>s;
        if(s=="push"){
            int n;cin>>n;
            q.push(n);
        }
        else if(s=="front"){
            cout<<q.front()<<endl;
        }
        else if(s=="back"){
            cout<<q.back()<<endl;
        }
        else if(s=="pop"){
            q.pop();
        }
    }
   
    return 0;
}