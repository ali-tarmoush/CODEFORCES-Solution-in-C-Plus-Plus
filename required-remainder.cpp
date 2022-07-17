/*
 * Problem Link   : https://codeforces.com/problemset/problem/1374/A
 * Problem Name   : Required Remainder
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */
 
#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    for(int ind=0;ind<t;ind++){
        long long x,y,n;
        cin>>x>>y>>n;
        long long k=0;
        k = n - n % x + y;
        (k <= n)?cout<<k<<endl:cout<<(n - n % x - (x - y))<<endl;
    }
	return 0;
}