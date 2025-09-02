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
    int n,q;cin>>n>>q;
    vi v(n);
    cin>>v;
    while(q--){
        string s;
        cin>>s;

        if(s=="pop_back"){
            v.pop_back();
        }
        else if(s=="front"){
            cout<<v[0]<<endl;
        }
        else if (s=="back"){
            cout<<v[size(v)-1]<<endl;
        }
        else if(s=="sort"){
            int l1,r1;cin>>l1>>r1;
            l1--;
            r1--;
            r1=size(v)-r1-1;
            sort(v.begin()+l1,v.end()-r1);
        }
        else if(s=="reverse"){
            int l2,r2;cin>>l2>>r2;
            l2--;
            r2--;
            r2=size(v)-r2-1;
            reverse(v.begin()+l2,v.end()-r2);
        }
        else if(s=="print"){
            int pos;cin>>pos;
            pos--;
            cout<<v[pos]<<endl;
        }
        else if(s=="push_back"){
            int push;cin>>push;
            v.push_back(push);
        }
       

    }
   
    return 0;
}