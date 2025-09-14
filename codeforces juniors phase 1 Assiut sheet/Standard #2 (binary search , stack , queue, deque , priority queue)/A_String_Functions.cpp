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
    string s;cin>>s;
    string c;
    while(q--){
        cin>>c;
            if( c=="substr"){
                int l,r;cin>>l>>r;
                l--;
                r--;
                int maxx,minn;
                if(l>=r){
                    maxx=l;
                    minn=r;
                }
                else{
                    maxx=r;
                    minn=l;
                }
                cout<<s.substr(minn,maxx - minn + 1)<<endl;
            }
            else if(c=="sort"){
                
                int l1,r1;cin>>l1>>r1;
                l1--;
                r1--;
                int max1,min1;
                if(l1>=r1){
                    max1=l1;
                    min1=r1;
                }
                else{
                    max1=r1;
                    min1=l1;
                }
                sort(s.begin()+min1,s.begin()+max1+1);
            }

            else if(c== "pop_back"){
                s.pop_back();
                
            }
            else if(c=="back"){
                cout<<s.back()<<endl;
            }
            else if(c=="reverse"){
                int l2,r2;cin>>l2>>r2;
                l2--;
                r2--;
                int max2,min2;
                if(l2>=r2){
                    max2=l2;
                    min2=r2;
                }
                else{
                    max2=r2;
                    min2=l2;
                }
                reverse(s.begin()+min2,s.begin()+max2+1);

            }


            else if(c=="front"){
                cout<<s.front()<<endl;
            }
            else if(c=="push_back"){

                char k;cin>>k;
                s.push_back(k);
            }
            else if(c=="print"){
                int p;cin>>p;
                p--;
                cout<<s[p]<<endl;
            }

        }
    
   
    return 0;
}