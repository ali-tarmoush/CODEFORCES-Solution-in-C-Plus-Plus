/*
 * Problem Link   : https://codeforces.com/problemset/problem/189/A
 * Problem Name   : Cut Ribbon
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */

#include<bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,a,b,c;
    cin >> n>>a>>b>>c;
    int ans=0;
    for(int i=0;i*a<=n;++i){
        for(int j=0;i*a+j*b<=n;++j){
            int rem=n-i*a-j*b;
            if(rem%c==0){
                int k=rem/c;
                ans=max(ans,i+j+k);
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}

