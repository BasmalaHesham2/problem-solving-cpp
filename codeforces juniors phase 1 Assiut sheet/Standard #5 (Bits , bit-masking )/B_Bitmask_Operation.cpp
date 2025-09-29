#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define vi     vector<int>
#define pii    pair<int, int>
#define all(v)    v.begin(),v.end()
template<typename T> ostream& operator<<(ostream& os, vector<T>& v){for (auto& i : v) os << i << ' ';return os;}
template<typename T> istream& operator>>(istream& is, vector<T>& v){for (auto& i : v) is >> i;return is;}
void fastIO(){
    ios_base::sync_with_stdio(false);

    cin.tie(0);
}
bool getbit(int n,int x){
    return (n>>x&1==1);
}

void setbit(int &n,int x){
    n=n|1<<x;
}
void reset(int &n,int x){
    n=n&~(1<<x);
}
int32_t main(){
    fastIO();
    int q,n;cin>>q>>n;
    while(q--){
        int op;cin>>op;
        int x;
        if(op==1){
            cin>>x;
            cout<<getbit(n,x)<<endl;
        }

        else if(op==2){
            cin>>x;
            setbit(n,x);
            cout<<n<<endl;

        }

        else if(op==3){
            cin>>x;
            reset(n,x);
            cout<<n<<endl;
        }

        else if(op==4){
            cin>>x;
            if(getbit(n,x)){
                reset(n,x);
            }
            else{
                setbit(n,x);
            }
            cout<<n<<endl;

        }
    }
    return 0;
}