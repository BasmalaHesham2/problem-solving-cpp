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
    deque<int> dq;

    while(n--){
        string s;cin>>s;
        if(s=="push_back"){
            int k1;cin>>k1;
            dq.push_back(k1);
        }
        else if(s=="front"){
            cout<<dq.front()<<endl;
        }
        else if(s=="back"){
            cout<<dq.back()<<endl;
        }
        else if(s=="push_front"){
            int k2;cin>>k2;
            dq.push_front(k2);
        }
        else if(s=="print"){
            int k;cin>>k;
            k--;
            cout<<dq[k]<<endl;
        }
        else if(s=="pop_front"){
            dq.pop_front();
        }
        else if(s=="pop_back"){
            dq.pop_back();
        }
    }
   
    return 0;
}