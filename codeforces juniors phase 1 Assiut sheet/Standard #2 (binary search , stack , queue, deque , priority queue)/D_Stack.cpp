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
    int q;
    cin>>q;
    stack<int> st;
    while(q--){
        string s;
        cin>>s;
        if(s=="push"){
            int n;cin>>n;
            st.push(n);
        }
        else if(s=="top"){
            cout<<st.top()<<endl;
        }
        else if(s=="pop"){
            st.pop();
        }
    }
   
    return 0;
}