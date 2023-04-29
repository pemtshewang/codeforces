#include<bits/stdc++.h>
#define EB emplace_back
#define all(x) (x).begin(),(x).end()
using namespace std;
int main(int argc, char const *argv[])
{
    int max=0;
    int filled=1;
    int n;
    cin >> n;
    vector<int> height(n);
    for(int i=0; i<n; i++){
        cin >> height[i];
    }
    for(int i=0; i<height.size(); i++){
        int fpos = i+1;
        int bpos = i-1;
        while(height[fpos] <= height[fpos-1] && fpos<height.size()){
            filled++;
            fpos++;
        }
        while(height[bpos] <= height[bpos+1] && bpos>-1){
            filled++;
            bpos--;
        }
        if(filled>max){
            max=filled;
        }
        filled=1;
    }
    cout << max << endl;
    return 0;
}
