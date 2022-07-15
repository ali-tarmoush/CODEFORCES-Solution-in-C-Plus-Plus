/*
 * Problem Link   : https://codeforces.com/problemset/problem/732/A
 * Problem Name   : Buy a Shovel
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int k,r;
    cin >> k >> r;
    bool p=true;
    int i=0;
    while (p) {
        i++;
        int h = k * i;
        if (h % 10 == 0 || h % 10 == r) {
            p = false;
        }
    }
    cout << i;
    return 0;
}