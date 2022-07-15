/*
 * Problem Link   : https://codeforces.com/problemset/problem/466/A
 * Problem Name   : Cheap Travel
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    if( (m * a) > b){
        int t = (n % m) * a;
        if(t> b)
            cout<<(n / m * b + b);
        else
            cout<<n / m * b +t;
    }
    else
        cout<<n * a;
    return 0;
}