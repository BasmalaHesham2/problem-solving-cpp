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
    int n,q;
    cin>>n>>q;
    vi v(n);
    cin>>v;
    sort(v.begin(),v.end());
    string s;
    while(q--){
        cin>>s;
        if(s=="binary_search"){
            
            int f;cin>>f;
            if(binary_search(v.begin(),v.end(),f)){
                cout<<"found\n";
            }
            else{
                cout<<"not found\n";
            }

        }
        else if(s=="lower_bound"){
            int f1;cin>>f1;
            auto ti= lower_bound(v.begin(),v.end(),f1);
            if(ti==v.end()){
                
                cout<<-1<<endl;
            }
            else{
                
                cout<<*ti<<endl;
            }

        }
        else if(s=="upper_bound"){
            int f2;cin>>f2;
            auto it= upper_bound(v.begin(),v.end(),f2);
            
            if(it==v.end()){
                
                cout<<-1<<endl;
            }
            else{
                
                cout<<*it<<endl;
            }

        }
    }
   
    return 0;
}