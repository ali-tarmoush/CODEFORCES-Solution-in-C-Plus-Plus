/*
 * Problem Link   : https://codeforces.com/problemset/problem/337/A
 * Problem Name   :  Puzzles
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */

#include <bits/stdc++.h>
using namespace std;
const int MAX=55;
int f[MAX];
int main(){
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
        cin >> f[i];
    sort(f, f + m);
    int t = f[n-1] - f[0];
    for (int i = 1; i <= m - n; ++i)
        if (f[i+n-1] - f[i] < t)
            t = f[i+n-1] - f[i];
    cout << t ;
return 0;
}