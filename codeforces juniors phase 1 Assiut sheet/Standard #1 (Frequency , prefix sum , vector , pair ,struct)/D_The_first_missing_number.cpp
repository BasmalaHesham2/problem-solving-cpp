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
//    int n,m;cin>>n>>m;
//    vi num(n);
//    cin>>num;
//    vi neg(m+1);
//     vi pos(m);
//     for(int k : num){
//         if(k<=0){
//             neg[-k]+=1;
//         }
//         else{
//             pos[k-1]+=1;
//         }
//     }
//     bool found=false;
//     for(int i=m;i>=0;i--){
//         if(neg[i]==0){
//             cout<<-i;
//             found=true;
//             break;
//         }
//     }
//     if(found==false){
//         for(int i=0;i<m;i++){
//             if(pos[i]==0){
//                 cout<<i+1;
//                 break;

//             }
//         }
//     }


    int n,m;cin>>n>>m;
    vi num(n);
    cin>>num;
    vector <pair<int,int>> pn(m+1);
    for(int i=0;i<n;i++){
        if(num[i]<0){
            pn[-num[i]].first+=1;
        }
        else if(num[i]>0){
            pn[num[i]].second+=1;
        }
        else{
            pn[num[i]].first+=1;
            pn[num[i]].second+=1;
        }
    }
    bool found=false;
    for(int i=m;i>=0;i--){
        if(pn[i].first==0){
            cout<<-i;
            found=true;
            break;
            
        }
    }
        if(found==false){
        for(int i=0;i<m+1;i++){
            if(pn[i].second==0){
                cout<<i;
                break;

            }
        }
    }



    return 0;
}