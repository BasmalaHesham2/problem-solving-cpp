#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define vi vector<int>
#define pii pair<int, int>
#define all(v) v.begin(), v.end()
template<typename T>
ostream& operator<<(ostream& os, vector<T>& v) { for (auto& i : v) os << i << ' '; return os; }
template<typename T>
istream& operator>>(istream& is, vector<T>& v) { for (auto& i : v) is >> i; return is; }

void fastIO(){
    ios_base::sync_with_stdio(false);

    cin.tie(0);
}

int32_t main() {
    fastIO();
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vi v(n);
        cin>>v;
        int count0=0;
        int count1=0; 
        int count2=0;
        int count3=0; 
        int count5=0;

        bool date=false;
        int index=0;

        for (int i=0;i<n;i++){
            if (v[i]==0) count0++;
            else if (v[i]==1) count1++;
            else if (v[i]==2) count2++;
            else if (v[i]==3) count3++;
            else if (v[i]==5) count5++;
        if (count0>=3&&count1>=1 &&count2>=2&& count3>=1&&count5>=1){
                date=true;
                index=i+1;
                break;
            }
        }
        if(date){
            cout<<index<<endl;
        }
        else cout<<"0\n";
    }

    return 0;
}
