/*
 * Problem Link   : https://codeforces.com/problemset/problem/432/A
 * Problem Name   : Choosing Teams
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */

#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,k,y;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>y;
        if(y+k<=5)
            v.push_back(y+k);
    }
    cout<<v.size()/3<<endl;
    return 0;
}