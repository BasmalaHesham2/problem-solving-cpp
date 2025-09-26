#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi     vector<int>
#define pii    pair<int, int>
#define all(v)    v.begin(),v.end()
template<typename T> ostream& operator<<(ostream& os, vector<T>& v)
{
    for (auto& i : v) os << i << ' ';
    return os;
}
template<typename T> istream& operator>>(istream& is, vector<T>& v)
{
    for (auto& i : v) is >> i;
    return is;
}
void fastIO()
{
    ios_base::sync_with_stdio(false);

    cin.tie(0);
}

void num(vi &v,int x)
{
    int l=0,r=0,sum=v[0],size=INT_MAX,curr=0;
    while(l<v.size() && r<v.size())
    {

        while(sum<x && r+1<v.size())
        {
            r++;
            sum+=v[r];
        }

        if(sum>=x)
        {
            curr=r-l+1;
            size = min(curr,size);
        }

        sum-=v[l];
        l++;
    }
    if(size==INT_MAX)
    {
        cout<<"-1";
    }
    else
    {
        cout<<size;
    }


}


int32_t main()
{
    fastIO();
    int n,x;
    cin>>n>>x;
    vi v(n);
    cin>>v;
    num(v,x);


    return 0;
}