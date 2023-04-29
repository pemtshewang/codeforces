#include <bits/stdc++.h>
using namespace std;
#define MP(x,y) make_pair(x,y)
#define EB emplace_back
int main(int argc, char const *argv[])
{
    int n,m;
    cin >> n >> m;
    vector<pair<int,int>>arr;
    while(m--){
        int x,y;
        cin >> x >> y;
        arr.EB(MP(x,y));
    }
    sort(arr.begin(),arr.end(),[](auto const &lhs, auto const &rhs){
        return lhs.second > rhs.second;
    });
    return 0;
}
