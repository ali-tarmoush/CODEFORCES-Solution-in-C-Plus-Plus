/*
 * Problem Link   : https://codeforces.com/problemset/problem/144/A
 * Problem Name   :  Arrival of the General
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a,max=103,min=0,x=0,y=0;
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> a;
        if (min < a) {
            min = a;
            x = i;
        }
        if (max >= a) {
            max = a;
            y = i;
        }
    }
    int s=x+(n-y-1);
    if (x>y) {
        s--;
    }
    cout << s<<endl;
    return 0;
}