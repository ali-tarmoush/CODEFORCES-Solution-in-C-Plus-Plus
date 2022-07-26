/*
 * Problem Link   : https://codeforces.com/problemset/problem/1409/A
 * Problem Name   : Yet Another Two Integers Problem
 * Language:      : C++
 * Programmer     : Ali Tarmoush 
 * Status         : Accepted
 */

#include<bits/stdc++.h>
using namespace std;
void swap(long long &x,long long &y){
    long long t=x;
    x=y;
    y=t;
}
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long a,b;
        cin>>a>>b;
        if(b < a){
            swap(a,b);
        }
        long long sub = 0,sum = 0,div = 0,mod = 0;
        sub = b - a;
        div = sub / 10;
        mod = sub % 10;
        sum = div;
        if(mod > 0){
            sum++;
        }
        cout<<sum<<endl;
    }
    return 0;
}

