/*
 * Problem Link   : https://codeforces.com/problemset/problem/492/B
 * Problem Name   : Vanya and Lanterns
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */

#include <bits/stdc++.h>
using namespace std;
const int MAX=1e3+56;
int a[MAX];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,l;
    cin >> n >> l;
    for (int i= 0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int r = max(a[0],l-a[n-1]) * 2;
    for (int i=0;i< n - 1; i++)
        r = max(r,a[i+1]-a[i]);
    cout.precision(10);
    cout << fixed << r / 2.0 << endl;
    return 0;
}