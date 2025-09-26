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
    vector<pii> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }

    while(q--){
        string s;cin>>s;
        pii x;
        cin>>x.first>>x.second;


        if(s=="upper"){
            int l,r;
            l=-1;
            r=n;
            while(l+1<r){
                int mid=(l+r)/2;
                if(v[mid]>x){
                     r=mid;
                    }
                else{  
                l=mid; 
            }
            }
            if(r>=n) cout<<"-1\n";
            else cout<<r<<endl;
        }


        if(s=="lower"){
            int l,r;
            l=-1;
            r=n;
            while(l+1<r){
                int mid=(l+r)/2;
                if(v[mid]<x){
                     l=mid;
                    }
                else{  
                r=mid; 
            }
            }
            if(l<0) cout<<"-1\n";
            else cout<<l<<endl;
        }

        if(s=="find"){
            int l,r;
            l=-1;
            r=n;
            bool found = false;
            while(l+1<r){
                int mid=(l+r)/2;
                if(v[mid]==x){
                     cout<<mid+1<<endl;
                     found=true;
                     break;
                    }
                if(v[mid]>x){
                    r=mid;
                }
                if(v[mid]<x){
                    l=mid;
                }
            }
            if(!found){
            cout<<"not found\n";
            }
        
        }
        
    }
   
    return 0;
}