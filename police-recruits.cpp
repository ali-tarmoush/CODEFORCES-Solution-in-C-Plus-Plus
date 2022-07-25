/*
 * Problem Link   : https://codeforces.com/problemset/problem/427/A
 * Problem Name   : Police Recruits
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
    int n;
    cin >> n;
    int p = 0, c = 0;
    for(int i = 0; i < n; i++){
        int e;
        cin >> e;
        if(e == -1){
            if(p > 0)
                p--;
            else
                c++;
        }
        else
            p += e;
    }
    cout << c << endl;
    return 0;
}

