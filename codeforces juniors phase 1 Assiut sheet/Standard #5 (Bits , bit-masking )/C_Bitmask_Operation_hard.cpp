#include <bits/stdc++.h>
using namespace std;
//#define int long long 
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
   int n,q;cin>>n>>q;
   while(q--){
    int op;cin>>op;
    if(op==1){
        n=n|n+1;
        cout<<n<<endl;
    }
    else if(op==2){
        n=n&n-1;
        cout<<n<<endl;
    }
    else if(op==3){
        n=n|n-1;
        cout<<n<<endl;

    }
    else if(op==4){
        n=n&n+1;
        cout<<n<<endl;
    }
    else if(op==5){
         if (__builtin_popcountll(n)== 1){
            cout<<"is power of two\n";
         }
         else{
            cout<<"not power of two\n";
         }
    }



   }
    return 0;
}