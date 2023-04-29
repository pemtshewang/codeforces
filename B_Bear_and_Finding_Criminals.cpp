#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,a;
    int catched = 0;
    cin >> n >> a;
    int t[n];
    for(int i=0; i<n; i++){
        cin >> t[i];
    }
    if(t[--a]){
        catched++;
    }
    int fp=a+1;
    int bp=a-1;
    while(fp<n && bp >-1){
        if(t[fp] && t[bp]){
            catched+=2;
        }
        ++fp;
        --bp;
    }
    if(bp>0){
        while(bp>-1){
            if(t[bp--]){
                catched++;
            }
        }
    }
    if(fp<n){
        while(fp<n){
            if(t[fp++]){
                catched++;
            }
        }
    }
    cout << catched << endl;
    return 0;
}
