/*
 * Problem Link   : https://codeforces.com/problemset/problem/148/A
 * Problem Name   : Insomnia cure
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int k, l, m, n, d,t=0;
    cin >> k >> l >> m >> n >> d;
    t= d;
    if(k == 1 || l == 1 || m == 1 || n == 1)
        cout << d ;
    else{
        for(int i = 1; i <= d; i++)
            if((i%k != 0) && (i%l != 0) && (i%m != 0) && (i%n != 0))
                t--;
        cout << t ;
    }
    return 0;
}