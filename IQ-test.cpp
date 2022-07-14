/*
 * Problem Link   : https://codeforces.com/problemset/problem/25/A
 * Problem Name   :  IQ test
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x,a=0,b=0,c=0;
    cin >> n;
    for (int i=0;i<n;++i){
        cin >> x;
        if (x % 2 == 0){
            a++;
            b=i+1;
        }
        else{
            a--;
            c=i+1;
        }
    }
    if(a>0)
        cout<<c;
    else
        cout<<b;
    return 0;
}